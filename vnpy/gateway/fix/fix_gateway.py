"""
"""
from datetime import datetime, timedelta
from typing import Any, Dict
import sys
import pytz
from time import sleep
import quickfix as fix

from vnpy.trader.constant import (
    Direction,
    Offset,
    Exchange,
    OrderType,
    Product,
    Status,
    OptionType
)
from vnpy.trader.gateway import BaseGateway
from vnpy.trader.object import (
    TickData,
    OrderData,
    TradeData,
    PositionData,
    AccountData,
    ContractData,
    OrderRequest,
    CancelRequest,
    SubscribeRequest,
)
from vnpy.trader.utility import get_folder_path
from vnpy.trader.event import EVENT_TIMER


STATUS_CTP2VT = {
    "0": Status.NOTTRADED,
    "1": Status.PARTTRADED,
    "2": Status.ALLTRADED,
    "4": Status.CANCELLED,
    "5": Status.CANCELLED,
    "6": Status.SUBMITTING,
    "8": Status.REJECTED,
    "A": Status.SUBMITTING,
    "C": Status.CANCELLED,
    "D": Status.NOTTRADED,
    "E": Status.SUBMITTING,
}

DIRECTION_VT2CTP = {
    Direction.LONG: "1",
    Direction.SHORT: "2"
}
DIRECTION_CTP2VT = {v: k for k, v in DIRECTION_VT2CTP.items()}
# DIRECTION_CTP2VT[THOST_FTDC_PD_Long] = Direction.LONG
# DIRECTION_CTP2VT[THOST_FTDC_PD_Short] = Direction.SHORT

ORDERTYPE_VT2CTP = {
    OrderType.MARKET: "1",
    OrderType.LIMIT: "2"
}
ORDERTYPE_CTP2VT = {v: k for k, v in ORDERTYPE_VT2CTP.items()}

OFFSET_VT2CTP = {
    Offset.OPEN: "1",
    Offset.CLOSE: "2",
    Offset.CLOSETODAY: "3",
    Offset.CLOSEYESTERDAY: "4",
}
OFFSET_CTP2VT = {v: k for k, v in OFFSET_VT2CTP.items()}

EXCHANGE_CTP2VT = {
    "CFFEX": Exchange.CFFEX,
    "SHFE": Exchange.SHFE,
    "CZCE": Exchange.CZCE,
    "DCE": Exchange.DCE,
    "INE": Exchange.INE
}

PRODUCT_CTP2VT = {
    "1": Product.FUTURES,
    "2": Product.OPTION,
    "3": Product.OPTION,
    "4": Product.SPREAD
}

OPTIONTYPE_CTP2VT = {
    "1": OptionType.CALL,
    "2": OptionType.PUT
}

MAX_FLOAT = sys.float_info.max
CHINA_TZ = pytz.timezone("Asia/Shanghai")


symbol_exchange_map = {}
symbol_name_map = {}
symbol_size_map = {}


class FixGateway(BaseGateway):
    """
    VN Trader Gateway for CTP .
    """

    default_setting = {
        "用户名": "",
        "密码": "",
        "经纪商代码": "",
        "交易服务器": "",
        "行情服务器": "",
        "产品名称": "",
        "授权编码": "",
        "产品信息": ""
    }

    exchanges = list(EXCHANGE_CTP2VT.values())

    def __init__(self, event_engine):
        """Constructor"""
        super().__init__(event_engine, "CTP")

        self.td_api = FixTdApi(self)
        # self.acceptor_socket: client_socket(self)

    def connect(self, setting: dict):
        """"""
        userid = setting["用户名"]
        password = setting["密码"]
        brokerid = setting["经纪商代码"]
        td_address = setting["交易服务器"]
        md_address = setting["行情服务器"]
        appid = setting["产品名称"]
        auth_code = setting["授权编码"]
        product_info = setting["产品信息"]

        # if (
        #     (not td_address.startswith("tcp://"))
        #     and (not td_address.startswith("ssl://"))
        # ):
        #     td_address = "tcp://" + td_address

        # if (
        #     (not md_address.startswith("tcp://"))
        #     and (not md_address.startswith("ssl://"))
        # ):
        #     md_address = "tcp://" + md_address

        td_host, td_port = tuple(td_address.split(":"))

        # self.start()

        # self.td_api.connect(td_address, userid, password, brokerid, auth_code, appid, product_info)
        self.td_api.connect(td_address, userid, password, brokerid, auth_code, appid, product_info)

        # self.init_query()

    # def start(self):
    #     # For acceptor app

    def subscribe(self, req: SubscribeRequest):
        """"""
        self.md_api.subscribe(req)

    def send_order(self, req: OrderRequest):
        """"""
        if req.type == OrderType.RFQ:
            vt_orderid = self.td_api.send_rfq(req)
        else:
            vt_orderid = self.td_api.send_order(req)
        return vt_orderid

    def cancel_order(self, req: CancelRequest):
        """"""
        self.td_api.cancel_order(req)

    def query_account(self):
        """"""
        self.td_api.query_account()

    def query_position(self):
        """"""
        self.td_api.query_position()

    def close(self):
        """"""
        #self.td_api.close()
        self.td_api.close()

    def write_error(self, msg: str, error: dict):
        """"""
        error_id = error["ErrorID"]
        error_msg = error["ErrorMsg"]
        msg = f"{msg}，代码：{error_id}，信息：{error_msg}"
        self.write_log(msg)

    def process_timer_event(self, event):
        """"""
        self.count += 1
        if self.count < 2:
            return
        self.count = 0

        func = self.query_functions.pop(0)
        func()
        self.query_functions.append(func)

        self.md_api.update_date()

    def init_query(self):
        """"""
        self.count = 0
        self.query_functions = [self.query_account, self.query_position]
        self.event_engine.register(EVENT_TIMER, self.process_timer_event)


class FixTdApi:

    def __init__(self, gateway):
        self.gateway = gateway
        self.gateway_name = gateway.gateway_name

    def connect(
        self,
        td_address,
        userid,
        password,
        brokerid,
        auth_code,
        appid,
        product_info
    ):

        td_host, td_port = tuple(td_address.split(":"))
        self.auth_code = auth_code
        self.appid = appid
        self.product_info = product_info

        acceptor_settings = fix.SessionSettings()
        acceptor_dict = fix.Dictionary()

        acceptor_dict.setString("ConnectionType", "acceptor")
        acceptor_dict.setString("ResetOnLogon", "Y")
        acceptor_dict.setString("FileLogPath", "./ctp_log/acceptor")
        acceptor_dict.setString("LogonTimeout", "30")
        acceptor_dict.setString("StartTime", "00:00:00")
        acceptor_dict.setString("EndTime", "00:00:00")
        acceptor_dict.setString("HeartBtInt", "30")
        acceptor_dict.setString("CheckLatency", "N")
        acceptor_dict.setString("UseDataDictionary", "N")
        acceptor_dict.setString("FileStorePath", "./ctp_store/acceptor")
        acceptor_dict.setString("ScreenLogShowIncoming", "N")
        acceptor_dict.setString("ScreenLogShowOutgoing", "N")
        acceptor_dict.setString("ScreenLogShowEvents", "N")

        acceptor_dict.setString("SocketAcceptHost", td_host)
        acceptor_dict.setString("SocketAcceptPort", td_port)

        acceptor_session = fix.SessionID(
            "FIX.4.2",
            
            brokerid,
            userid,
        )
        acceptor_settings.set(acceptor_session, acceptor_dict)

        acceptor_store_factory = fix.FileStoreFactory(acceptor_settings)
        acceptor_log_factory = fix.ScreenLogFactory(acceptor_settings)

        self.acceptor_app: AcceptorApp = AcceptorApp(self)
        self.acceptor_socket = fix.SocketAcceptor(
            self.acceptor_app,
            acceptor_store_factory,
            acceptor_settings,
            acceptor_log_factory
        )
        self.acceptor_socket.start()

        # For initiator app
        initiator_settings = fix.SessionSettings()
        initiator_dict = fix.Dictionary()

        initiator_dict.setString("ConnectionType", "initiator")
        initiator_dict.setString("ResetOnLogon", "Y")
        initiator_dict.setString("FileLogPath", "./ctp_log/initiator")
        initiator_dict.setString("LogonTimeout", "30")
        initiator_dict.setString("StartTime", "00:00:00")
        initiator_dict.setString("EndTime", "00:00:00")
        initiator_dict.setString("HeartBtInt", "30")
        initiator_dict.setString("CheckLatency", "N")
        initiator_dict.setString("UseDataDictionary", "N")
        initiator_dict.setString("FileStorePath", "./ctp_store/initiator")
        initiator_dict.setString("ScreenLogShowIncoming", "N")
        initiator_dict.setString("ScreenLogShowOutgoing", "N")
        initiator_dict.setString("ScreenLogShowEvents", "N")

        # initiator_dict.setString("SocketConnectHost", SETTINGS["genus.initiator_host"])
        # initiator_dict.setString("SocketConnectPort", SETTINGS["genus.initiator_port"])

        initiator_session = fix.SessionID(
            "FIX.4.2",
            userid,
            brokerid
        )
        initiator_settings.set(initiator_session, initiator_dict)

        initiator_store_factory = fix.FileStoreFactory(initiator_settings)
        initiator_log_factory = fix.ScreenLogFactory(initiator_settings)

        self.initiator_app: InitiatorApp = InitiatorApp(self)
        self.initiator_socket = fix.SocketInitiator(
            self.initiator_app,
            initiator_store_factory,
            initiator_settings,
            initiator_log_factory
        )
        self.initiator_socket.start()


class InitiatorApp(fix.Application):

    def __init__(self, td_api: "FixTdApi"):
        """"""
        super().__init__()

        self.td_api: "FixTdApi" = td_api
        self.auth_code = self.td_api.auth_code
        self.appid = self.td_api.appid

        self.callbacks: Dict[int, callable] = {
            fix.MsgType_ExecutionReport: self.on_initiator_order
        }

        self.session_id: int = 0
        self.initiator_orderid: int = int(datetime.now().strftime("%H%M%S0000"))

        self.algo_settings = {}

    def onCreate(self, session_id: int):
        """"""
        self.session_id = session_id
        print("on Create",session_id)
        self.authenicate()
    #     self.logon()

    # def logon()
        # self.client.write_log("金纳算法交易服务：母单FIX APP创建成功")

    def authenicate(self):
        message = new_message(fix.MsgType_Logon)
        print("@", self.appid, self.auth_code)
        message.setField(1408, self.appid)
        message.setField(96, self.auth_code)
        message.setField(98, "0")
        message.setField(116, "12304")
        message.setField(141, "Y")
        fix.Session.sendToTarget(message, self.session_id)

    def onLogon(self, session_id: int):
        """"""
        print("on Logon",session_id)
        # self.client.write_log("金纳算法交易服务：母单FIX APP连接成功")

    def onLogout(self, session_id: int):
        """"""
        print("on Logout",session_id)
        # self.client.write_log("金纳算法交易服务：母单FIX APP连接断开")

    def toAdmin(self, message: fix.Message, session_id: int):
        """"""
        print("toAdmin", message)

    def toApp(self, message: fix.Message, session_id: int):
        """"""
        print("toApp", message)

    def fromAdmin(self, message: fix.Message, session_id: int):
        """"""
        print("fromAdmin", message)

    def fromApp(self, message: fix.Message, session_id: int):
        """"""
        print("fromApp", message)
        header = message.getHeader()

        msg_type = get_field_value(header, fix.MsgType())
        callback = self.callbacks.get(msg_type, None)
        if callback:
            callback(message)

    def on_initiator_order(self, message: fix.Message):
        """"""
        pass

    def send_initiator_order(self, setting: dict):
        """"""
        pass

    def cancel_initiator_order(self, initiator_orderid: str):
        """"""
        pass


class AcceptorApp(fix.Application):

    def __init__(self, client: "GenusClient"):
        """"""
        super().__init__()

        self.client: "GenusClient" = client

        self.callbacks: Dict[int, callable] = {}

        self.session_id: int = 0
        self.exec_id: int = int(datetime.now().strftime("%H%M%S0000"))

        self.acceptor_orders: Dict[str, str] = {}
        self.ctp_vt_map: Dict[str, str] = {}

    def onCreate(self, session_id: int):
        """"""
        print("onCreate,",session_id)
        self.session_id = session_id

        # self.client.write_log("金纳算法交易服务：子单FIX APP创建成功")

    def onLogon(self, session_id: int):
        """"""
        print("onLogon", session_id)
        #self.client.write_log("金纳算法交易服务：子单FIX APP连接成功")

    def onLogout(self, session_id: int):
        """"""
        print("onLogout", session_id)
        #self.client.write_log("金纳算法交易服务：子单FIX APP连接断开")

    def toAdmin(self, message: fix.Message, session_id: int):
        """"""
        print("toAdmin", message)

    def toApp(self, message: fix.Message, session_id: int):
        """"""
        print("toApp", message)

    def fromAdmin(self, message: fix.Message, session_id: int):
        """"""
        print("fromAdmin", message)
        header = message.getHeader()
        msg_type = get_field_value(header, fix.MsgType())

        if msg_type == fix.MsgType_Logon:
            self.update_seq_num(message)

    def fromApp(self, message: fix.Message, session_id: int):
        """"""
        print("fromApp", message)
        header = message.getHeader()
        msg_type = get_field_value(header, fix.MsgType())

        callback = self.callbacks.get(msg_type, None)
        if callback:
            callback(message)

    def update_seq_num(self, message: fix.Message):
        """"""
        seq_num: int = get_field_value(message.getHeader(), fix.MsgSeqNum())
        session: fix.Session = fix.Session.lookupSession(self.session_id)
        session.setNextSenderMsgSeqNum(seq_num + 1)

    def new_acceptor_order(self, message: fix.Message):
        """"""
        pass


def get_field_value(field_map: fix.FieldMap, field: Any) -> Any:
    """"""
    field_map.getField(field)
    return field.getValue()


def new_message(msg_type: int) -> fix.Message:
    """"""
    message = fix.Message()

    header = message.getHeader()
    header.setField(fix.BeginString("FIX.4.2"))
    header.setField(fix.MsgType(msg_type))

    utc_now = datetime.utcnow()
    utc_timestamp = utc_now.strftime("%Y%m%d-%H:%M:%S")
    message.setField(60, utc_timestamp)

    return message

def adjust_price(price: float) -> float:
    """"""
    if price == MAX_FLOAT:
        price = 0
    return price
