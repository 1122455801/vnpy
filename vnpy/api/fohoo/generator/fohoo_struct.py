CThostFtdcDisseminationField = {
    "SequenceSeries": "int",
    "SequenceNo": "int",
}

CThostFtdcReqUserLoginField = {
    "TradingDay": "string",
    "BrokerID": "string",
    "UserID": "string",
    "Password": "string",
    "UserProductInfo": "string",
    "InterfaceProductInfo": "string",
    "ProtocolInfo": "string",
    "MacAddress": "string",
    "OneTimePassword": "string",
    "ClientIPAddress": "string",
}

CThostFtdcRspUserLoginField = {
}

CThostFtdcUserLogoutField = {
}

CThostFtdcForceUserLogoutField = {
}

CThostFtdcReqAuthenticateField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserProductInfo": "string",
    "AuthCode": "string",
}

CThostFtdcRspAuthenticateField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserProductInfo": "string",
}

CThostFtdcAuthenticationInfoField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserProductInfo": "string",
    "AuthInfo": "string",
    "IsResult": "int",
}

CThostFtdcTransferHeaderField = {
    "Version": "string",
    "TradeCode": "string",
    "TradeDate": "string",
    "TradeTime": "string",
    "TradeSerial": "string",
    "FutureID": "string",
    "BankID": "string",
    "BankBrchID": "string",
    "OperNo": "string",
    "DeviceID": "string",
    "RecordNum": "string",
    "SessionID": "int",
    "RequestID": "int",
}

CThostFtdcTransferBankToFutureReqField = {
}

CThostFtdcTransferBankToFutureRspField = {
}

CThostFtdcTransferFutureToBankReqField = {
}

CThostFtdcTransferFutureToBankRspField = {
}

CThostFtdcTransferQryBankReqField = {
}

CThostFtdcTransferQryBankRspField = {
    "RetCode": "string",
    "RetInfo": "string",
    "FutureAccount": "string",
    "TradeAmt": "double",
    "UseAmt": "double",
    "FetchAmt": "double",
    "CurrencyCode": "string",
}

CThostFtdcTransferQryDetailReqField = {
}

CThostFtdcTransferQryDetailRspField = {
}

CThostFtdcRspInfoField = {
}

CThostFtdcExchangeField = {
}

CThostFtdcProductField = {
}

CThostFtdcInstrumentField = {
    "MinBuyVolume": "int",
    "MinSellVolume": "int",
    "InstrumentCode": "string",
}

CThostFtdcBrokerField = {
}

CThostFtdcTraderField = {
}

CThostFtdcInvestorField = {
}

CThostFtdcTradingCodeField = {
    "InvestorID": "string",
    "BrokerID": "string",
    "ExchangeID": "string",
    "ClientID": "string",
    "IsActive": "int",
    "ClientIDType": "char",
    "BranchID": "string",
    "BizType": "char",
}

CThostFtdcPartBrokerField = {
}

CThostFtdcSuperUserField = {
}

CThostFtdcSuperUserFunctionField = {
}

CThostFtdcInvestorGroupField = {
    "BrokerID": "string",
    "InvestorGroupID": "string",
    "InvestorGroupName": "string",
}

CThostFtdcTradingAccountField = {
    "BrokerID": "string",
    "AccountID": "string",
    "PreMortgage": "double",
    "PreCredit": "double",
    "PreDeposit": "double",
    "PreBalance": "double",
    "PreMargin": "double",
    "InterestBase": "double",
    "Interest": "double",
    "Deposit": "double",
    "Withdraw": "double",
    "FrozenMargin": "double",
    "FrozenCash": "double",
    "FrozenCommission": "double",
    "CurrMargin": "double",
    "CashIn": "double",
    "Commission": "double",
    "CloseProfit": "double",
    "PositionProfit": "double",
    "Balance": "double",
    "Available": "double",
    "WithdrawQuota": "double",
    "Reserve": "double",
    "TradingDay": "string",
    "SettlementID": "int",
    "Credit": "double",
    "Mortgage": "double",
    "ExchangeMargin": "double",
    "DeliveryMargin": "double",
    "ExchangeDeliveryMargin": "double",
    "ReserveBalance": "double",
    "CurrencyID": "string",
    "PreFundMortgageIn": "double",
    "PreFundMortgageOut": "double",
    "FundMortgageIn": "double",
    "FundMortgageOut": "double",
    "FundMortgageAvailable": "double",
    "MortgageableFund": "double",
    "SpecProductMargin": "double",
    "SpecProductFrozenMargin": "double",
    "SpecProductCommission": "double",
    "SpecProductFrozenCommission": "double",
    "SpecProductPositionProfit": "double",
    "SpecProductCloseProfit": "double",
    "SpecProductPositionProfitByAlg": "double",
    "SpecProductExchangeMargin": "double",
    "BizType": "char",
}

CThostFtdcInvestorPositionField = {
    "InstrumentID": "string",
    "BrokerID": "string",
    "InvestorID": "string",
    "PosiDirection": "char",
    "HedgeFlag": "char",
    "PositionDate": "char",
    "YdPosition": "int",
    "Position": "int",
    "LongFrozen": "int",
    "ShortFrozen": "int",
    "LongFrozenAmount": "double",
    "ShortFrozenAmount": "double",
    "OpenVolume": "int",
    "CloseVolume": "int",
    "OpenAmount": "double",
    "CloseAmount": "double",
    "PositionCost": "double",
    "PreMargin": "double",
    "UseMargin": "double",
    "FrozenMargin": "double",
    "FrozenCash": "double",
    "FrozenCommission": "double",
    "CashIn": "double",
    "Commission": "double",
    "CloseProfit": "double",
    "PositionProfit": "double",
    "PreSettlementPrice": "double",
    "SettlementPrice": "double",
    "TradingDay": "string",
    "SettlementID": "int",
    "OpenCost": "double",
    "ExchangeMargin": "double",
    "CombPosition": "int",
    "CombLongFrozen": "int",
    "CombShortFrozen": "int",
    "CloseProfitByDate": "double",
    "CloseProfitByTrade": "double",
    "TodayPosition": "int",
    "MarginRateByMoney": "double",
    "MarginRateByVolume": "double",
    "StrikeFrozen": "int",
    "StrikeFrozenAmount": "double",
    "AbandonFrozen": "int",
    "ExchangeID": "string",
    "YdStrikeFrozen": "int",
}

CThostFtdcInstrumentMarginRateField = {
}

CThostFtdcInstrumentCommissionRateField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "OpenRatioByMoney": "double",
    "OpenRatioByVolume": "double",
    "CloseRatioByMoney": "double",
    "CloseRatioByVolume": "double",
    "CloseTodayRatioByMoney": "double",
    "CloseTodayRatioByVolume": "double",
    "ExchangeID": "string",
    "BizType": "char",
}

CThostFtdcDepthMarketDataField = {
}

CThostFtdcInstrumentTradingRightField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "TradingRight": "char",
    "ExchangeID": "string",
    "BizType": "char",
}

CThostFtdcBrokerUserField = {
}

CThostFtdcBrokerUserPasswordField = {
}

CThostFtdcBrokerUserFunctionField = {
}

CThostFtdcTraderOfferField = {
    "ExchangeID": "string",
    "TraderID": "string",
    "ParticipantID": "string",
    "Password": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "TraderConnectStatus": "char",
    "ConnectRequestDate": "string",
    "ConnectRequestTime": "string",
    "LastReportDate": "string",
    "LastReportTime": "string",
    "ConnectDate": "string",
    "ConnectTime": "string",
    "StartDate": "string",
    "StartTime": "string",
    "TradingDay": "string",
    "BrokerID": "string",
    "MaxTradeID": "string",
    "MaxOrderMessageReference": "string",
    "BizType": "char",
}

CThostFtdcSettlementInfoField = {
}

CThostFtdcInstrumentMarginRateAdjustField = {
}

CThostFtdcExchangeMarginRateField = {
}

CThostFtdcExchangeMarginRateAdjustField = {
}

CThostFtdcExchangeRateField = {
}

CThostFtdcSettlementRefField = {
}

CThostFtdcCurrentTimeField = {
}

CThostFtdcCommPhaseField = {
}

CThostFtdcLoginInfoField = {
}

CThostFtdcLogoutAllField = {
}

CThostFtdcFrontStatusField = {
}

CThostFtdcUserPasswordUpdateField = {
}

CThostFtdcInputOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "OrderRef": "string",
    "UserID": "string",
    "OrderPriceType": "char",
    "Direction": "char",
    "CombOffsetFlag": "string",
    "CombHedgeFlag": "string",
    "LimitPrice": "double",
    "VolumeTotalOriginal": "int",
    "TimeCondition": "char",
    "GTDDate": "string",
    "VolumeCondition": "char",
    "MinVolume": "int",
    "ContingentCondition": "char",
    "StopPrice": "double",
    "ForceCloseReason": "char",
    "IsAutoSuspend": "int",
    "BusinessUnit": "string",
    "RequestID": "int",
    "UserForceClose": "int",
    "IsSwapOrder": "int",
    "ExchangeID": "string",
}

CThostFtdcOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "OrderRef": "string",
    "UserID": "string",
    "OrderPriceType": "char",
    "Direction": "char",
    "CombOffsetFlag": "string",
    "CombHedgeFlag": "string",
    "LimitPrice": "double",
    "VolumeTotalOriginal": "int",
    "TimeCondition": "char",
    "GTDDate": "string",
    "VolumeCondition": "char",
    "MinVolume": "int",
    "ContingentCondition": "char",
    "StopPrice": "double",
    "ForceCloseReason": "char",
    "IsAutoSuspend": "int",
    "BusinessUnit": "string",
    "RequestID": "int",
    "OrderLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "OrderSysID": "string",
    "OrderSource": "char",
    "OrderStatus": "char",
    "OrderType": "char",
    "VolumeTraded": "int",
    "VolumeTotal": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "ActiveTime": "string",
    "SuspendTime": "string",
    "UpdateTime": "string",
    "CancelTime": "string",
    "ActiveTraderID": "string",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "UserForceClose": "int",
    "ActiveUserID": "string",
    "BrokerOrderSeq": "int",
    "RelativeOrderSysID": "string",
    "ZCETotalTradedVolume": "int",
    "IsSwapOrder": "int",
    "BranchID": "string",
}

CThostFtdcExchangeOrderField = {
    "OrderPriceType": "char",
    "Direction": "char",
    "CombOffsetFlag": "string",
    "CombHedgeFlag": "string",
    "LimitPrice": "double",
    "VolumeTotalOriginal": "int",
    "TimeCondition": "char",
    "GTDDate": "string",
    "VolumeCondition": "char",
    "MinVolume": "int",
    "ContingentCondition": "char",
    "StopPrice": "double",
    "ForceCloseReason": "char",
    "IsAutoSuspend": "int",
    "BusinessUnit": "string",
    "RequestID": "int",
    "OrderLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "OrderSysID": "string",
    "OrderSource": "char",
    "OrderStatus": "char",
    "OrderType": "char",
    "VolumeTraded": "int",
    "VolumeTotal": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "ActiveTime": "string",
    "SuspendTime": "string",
    "UpdateTime": "string",
    "CancelTime": "string",
    "ActiveTraderID": "string",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "BranchID": "string",
}

CThostFtdcExchangeOrderInsertErrorField = {
}

CThostFtdcInputOrderActionField = {
}

CThostFtdcOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "OrderActionRef": "int",
    "OrderRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "OrderSysID": "string",
    "ActionFlag": "char",
    "LimitPrice": "double",
    "VolumeChange": "int",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "StatusMsg": "string",
    "InstrumentID": "string",
    "BranchID": "string",
}

CThostFtdcExchangeOrderActionField = {
    "ExchangeID": "string",
    "OrderSysID": "string",
    "ActionFlag": "char",
    "LimitPrice": "double",
    "VolumeChange": "int",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "BranchID": "string",
}

CThostFtdcExchangeOrderActionErrorField = {
    "ExchangeID": "string",
    "OrderSysID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "ActionLocalID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
    "BrokerID": "string",
}

CThostFtdcExchangeTradeField = {
}

CThostFtdcTradeField = {
}

CThostFtdcUserSessionField = {
}

CThostFtdcQueryMaxOrderVolumeField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "Direction": "char",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "MaxVolume": "int",
    "ExchangeID": "string",
}

CThostFtdcSettlementInfoConfirmField = {
}

CThostFtdcSyncDepositField = {
}

CThostFtdcSyncFundMortgageField = {
}

CThostFtdcBrokerSyncField = {
}

CThostFtdcSyncingInvestorField = {
}

CThostFtdcSyncingTradingCodeField = {
    "InvestorID": "string",
    "BrokerID": "string",
    "ExchangeID": "string",
    "ClientID": "string",
    "IsActive": "int",
    "ClientIDType": "char",
    "BranchID": "string",
}

CThostFtdcSyncingInvestorGroupField = {
}

CThostFtdcSyncingTradingAccountField = {
}

CThostFtdcSyncingInvestorPositionField = {
    "InstrumentID": "string",
    "BrokerID": "string",
    "InvestorID": "string",
    "PosiDirection": "char",
    "HedgeFlag": "char",
    "PositionDate": "char",
    "YdPosition": "int",
    "Position": "int",
    "LongFrozen": "int",
    "ShortFrozen": "int",
    "LongFrozenAmount": "double",
    "ShortFrozenAmount": "double",
    "OpenVolume": "int",
    "CloseVolume": "int",
    "OpenAmount": "double",
    "CloseAmount": "double",
    "PositionCost": "double",
    "PreMargin": "double",
    "UseMargin": "double",
    "FrozenMargin": "double",
    "FrozenCash": "double",
    "FrozenCommission": "double",
    "CashIn": "double",
    "Commission": "double",
    "CloseProfit": "double",
    "PositionProfit": "double",
    "PreSettlementPrice": "double",
    "SettlementPrice": "double",
    "TradingDay": "string",
    "SettlementID": "int",
    "OpenCost": "double",
    "ExchangeMargin": "double",
    "CombPosition": "int",
    "CombLongFrozen": "int",
    "CombShortFrozen": "int",
    "CloseProfitByDate": "double",
    "CloseProfitByTrade": "double",
    "TodayPosition": "int",
    "MarginRateByMoney": "double",
    "MarginRateByVolume": "double",
    "StrikeFrozen": "int",
    "StrikeFrozenAmount": "double",
    "AbandonFrozen": "int",
    "ExchangeID": "string",
    "YdStrikeFrozen": "int",
}

CThostFtdcSyncingInstrumentMarginRateField = {
}

CThostFtdcSyncingInstrumentCommissionRateField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "OpenRatioByMoney": "double",
    "OpenRatioByVolume": "double",
    "CloseRatioByMoney": "double",
    "CloseRatioByVolume": "double",
    "CloseTodayRatioByMoney": "double",
    "CloseTodayRatioByVolume": "double",
    "ExchangeID": "string",
}

CThostFtdcSyncingInstrumentTradingRightField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "TradingRight": "char",
    "ExchangeID": "string",
}

CThostFtdcQryOrderField = {
}

CThostFtdcQryTradeField = {
}

CThostFtdcQryInvestorPositionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryTradingAccountField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "CurrencyID": "string",
    "BizType": "char",
}

CThostFtdcQryInvestorField = {
}

CThostFtdcQryTradingCodeField = {
}

CThostFtdcQryInvestorGroupField = {
}

CThostFtdcQryInstrumentMarginRateField = {
}

CThostFtdcQryInstrumentCommissionRateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryInstrumentTradingRightField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryBrokerField = {
}

CThostFtdcQryTraderField = {
}

CThostFtdcQrySuperUserFunctionField = {
}

CThostFtdcQryUserSessionField = {
}

CThostFtdcQryPartBrokerField = {
}

CThostFtdcQryFrontStatusField = {
}

CThostFtdcQryExchangeOrderField = {
}

CThostFtdcQryOrderActionField = {
}

CThostFtdcQryExchangeOrderActionField = {
}

CThostFtdcQrySuperUserField = {
}

CThostFtdcQryExchangeField = {
}

CThostFtdcQryProductField = {
    "ProductID": "string",
    "ProductClass": "char",
    "ExchangeID": "string",
}

CThostFtdcQryInstrumentField = {
}

CThostFtdcQryDepthMarketDataField = {
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryBrokerUserField = {
}

CThostFtdcQryBrokerUserFunctionField = {
}

CThostFtdcQryTraderOfferField = {
}

CThostFtdcQrySyncDepositField = {
}

CThostFtdcQrySettlementInfoField = {
}

CThostFtdcQryExchangeMarginRateField = {
}

CThostFtdcQryExchangeMarginRateAdjustField = {
}

CThostFtdcQryExchangeRateField = {
}

CThostFtdcQrySyncFundMortgageField = {
}

CThostFtdcQryHisOrderField = {
}

CThostFtdcOptionInstrMiniMarginField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "MinMargin": "double",
    "ValueMethod": "char",
    "IsRelative": "int",
    "ExchangeID": "string",
}

CThostFtdcOptionInstrMarginAdjustField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "SShortMarginRatioByMoney": "double",
    "SShortMarginRatioByVolume": "double",
    "HShortMarginRatioByMoney": "double",
    "HShortMarginRatioByVolume": "double",
    "AShortMarginRatioByMoney": "double",
    "AShortMarginRatioByVolume": "double",
    "IsRelative": "int",
    "ExchangeID": "string",
}

CThostFtdcOptionInstrCommRateField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "OpenRatioByMoney": "double",
    "OpenRatioByVolume": "double",
    "CloseRatioByMoney": "double",
    "CloseRatioByVolume": "double",
    "CloseTodayRatioByMoney": "double",
    "CloseTodayRatioByVolume": "double",
    "StrikeRatioByMoney": "double",
    "StrikeRatioByVolume": "double",
    "ExchangeID": "string",
}

CThostFtdcOptionInstrTradeCostField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "HedgeFlag": "char",
    "FixedMargin": "double",
    "MiniMargin": "double",
    "Royalty": "double",
    "ExchFixedMargin": "double",
    "ExchMiniMargin": "double",
    "ExchangeID": "string",
}

CThostFtdcQryOptionInstrTradeCostField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "HedgeFlag": "char",
    "InputPrice": "double",
    "UnderlyingPrice": "double",
    "ExchangeID": "string",
}

CThostFtdcQryOptionInstrCommRateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcIndexPriceField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ClosePrice": "double",
    "ExchangeID": "string",
}

CThostFtdcInputExecOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExecOrderRef": "string",
    "UserID": "string",
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "ActionType": "char",
    "PosiDirection": "char",
    "ReservePositionFlag": "char",
    "CloseFlag": "char",
    "ExchangeID": "string",
}

CThostFtdcInputExecOrderActionField = {
}

CThostFtdcExecOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExecOrderRef": "string",
    "UserID": "string",
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "ActionType": "char",
    "PosiDirection": "char",
    "ReservePositionFlag": "char",
    "CloseFlag": "char",
    "ExecOrderLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "ExecOrderSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "ExecResult": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "ActiveUserID": "string",
    "BrokerExecOrderSeq": "int",
    "BranchID": "string",
}

CThostFtdcExecOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExecOrderActionRef": "int",
    "ExecOrderRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "ExecOrderSysID": "string",
    "ActionFlag": "char",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ExecOrderLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "ActionType": "char",
    "StatusMsg": "string",
    "InstrumentID": "string",
    "BranchID": "string",
}

CThostFtdcQryExecOrderField = {
}

CThostFtdcExchangeExecOrderField = {
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "ActionType": "char",
    "PosiDirection": "char",
    "ReservePositionFlag": "char",
    "CloseFlag": "char",
    "ExecOrderLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "ExecOrderSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "ExecResult": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "BranchID": "string",
}

CThostFtdcQryExchangeExecOrderField = {
}

CThostFtdcQryExecOrderActionField = {
}

CThostFtdcExchangeExecOrderActionField = {
    "ExchangeID": "string",
    "ExecOrderSysID": "string",
    "ActionFlag": "char",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ExecOrderLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "ActionType": "char",
    "BranchID": "string",
}

CThostFtdcQryExchangeExecOrderActionField = {
}

CThostFtdcErrExecOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExecOrderRef": "string",
    "UserID": "string",
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "ActionType": "char",
    "PosiDirection": "char",
    "ReservePositionFlag": "char",
    "CloseFlag": "char",
    "ExchangeID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
}

CThostFtdcQryErrExecOrderField = {
}

CThostFtdcErrExecOrderActionField = {
}

CThostFtdcQryErrExecOrderActionField = {
}

CThostFtdcOptionInstrTradingRightField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "Direction": "char",
    "TradingRight": "char",
    "ExchangeID": "string",
    "HedgeFlag": "char",
}

CThostFtdcQryOptionInstrTradingRightField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "Direction": "char",
    "ExchangeID": "string",
}

CThostFtdcInputForQuoteField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ForQuoteRef": "string",
    "UserID": "string",
    "ExchangeID": "string",
}

CThostFtdcForQuoteField = {
}

CThostFtdcQryForQuoteField = {
}

CThostFtdcExchangeForQuoteField = {
}

CThostFtdcQryExchangeForQuoteField = {
}

CThostFtdcInputQuoteField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "QuoteRef": "string",
    "UserID": "string",
    "AskPrice": "double",
    "BidPrice": "double",
    "AskVolume": "int",
    "BidVolume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "AskOffsetFlag": "char",
    "BidOffsetFlag": "char",
    "AskHedgeFlag": "char",
    "BidHedgeFlag": "char",
    "AskOrderRef": "string",
    "BidOrderRef": "string",
    "ForQuoteSysID": "string",
    "ExchangeID": "string",
}

CThostFtdcInputQuoteActionField = {
}

CThostFtdcQuoteField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "QuoteRef": "string",
    "UserID": "string",
    "AskPrice": "double",
    "BidPrice": "double",
    "AskVolume": "int",
    "BidVolume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "AskOffsetFlag": "char",
    "BidOffsetFlag": "char",
    "AskHedgeFlag": "char",
    "BidHedgeFlag": "char",
    "QuoteLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "NotifySequence": "int",
    "OrderSubmitStatus": "char",
    "TradingDay": "string",
    "SettlementID": "int",
    "QuoteSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "QuoteStatus": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "AskOrderSysID": "string",
    "BidOrderSysID": "string",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "ActiveUserID": "string",
    "BrokerQuoteSeq": "int",
    "AskOrderRef": "string",
    "BidOrderRef": "string",
    "ForQuoteSysID": "string",
    "BranchID": "string",
}

CThostFtdcQuoteActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "QuoteActionRef": "int",
    "QuoteRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "QuoteSysID": "string",
    "ActionFlag": "char",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "QuoteLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "StatusMsg": "string",
    "InstrumentID": "string",
    "BranchID": "string",
}

CThostFtdcQryQuoteField = {
}

CThostFtdcExchangeQuoteField = {
    "AskPrice": "double",
    "BidPrice": "double",
    "AskVolume": "int",
    "BidVolume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "AskOffsetFlag": "char",
    "BidOffsetFlag": "char",
    "AskHedgeFlag": "char",
    "BidHedgeFlag": "char",
    "QuoteLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "NotifySequence": "int",
    "OrderSubmitStatus": "char",
    "TradingDay": "string",
    "SettlementID": "int",
    "QuoteSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "QuoteStatus": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "AskOrderSysID": "string",
    "BidOrderSysID": "string",
    "ForQuoteSysID": "string",
    "BranchID": "string",
}

CThostFtdcQryExchangeQuoteField = {
}

CThostFtdcQryQuoteActionField = {
}

CThostFtdcExchangeQuoteActionField = {
}

CThostFtdcQryExchangeQuoteActionField = {
}

CThostFtdcOptionInstrDeltaField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "Delta": "double",
    "ExchangeID": "string",
}

CThostFtdcForQuoteRspField = {
}

CThostFtdcStrikeOffsetField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "Offset": "double",
    "ExchangeID": "string",
}

CThostFtdcQryStrikeOffsetField = {
}

CThostFtdcInputLockField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "LockRef": "string",
    "UserID": "string",
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "LockType": "char",
    "ExchangeID": "string",
}

CThostFtdcLockField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "LockRef": "string",
    "UserID": "string",
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "LockType": "char",
    "LockLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "LockSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "LockStatus": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "ActiveUserID": "string",
    "BrokerLockSeq": "int",
    "BranchID": "string",
}

CThostFtdcQryLockField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "LockSysID": "string",
    "InsertTimeStart": "string",
    "InsertTimeEnd": "string",
}

CThostFtdcLockPositionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "Volume": "int",
    "FrozenVolume": "int",
}

CThostFtdcQryLockPositionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcETFOptionInstrCommRateField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "OpenRatioByMoney": "double",
    "OpenRatioByVolume": "double",
    "CloseRatioByMoney": "double",
    "CloseRatioByVolume": "double",
    "CloseTodayRatioByMoney": "double",
    "CloseTodayRatioByVolume": "double",
    "StrikeRatioByMoney": "double",
    "StrikeRatioByVolume": "double",
    "ExchangeID": "string",
    "HedgeFlag": "char",
    "PosiDirection": "char",
}

CThostFtdcQryETFOptionInstrCommRateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcPosiFreezeField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "OrderLocalID": "string",
    "TraderID": "string",
    "ParticipantID": "string",
    "InstallID": "int",
    "Volume": "int",
    "FreezeReasonType": "char",
    "FreezeType": "char",
}

CThostFtdcQryExchangeLockField = {
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "ExchangeID": "string",
    "TraderID": "string",
}

CThostFtdcExchangeLockField = {
    "Volume": "int",
    "RequestID": "int",
    "BusinessUnit": "string",
    "LockType": "char",
    "LockLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "LockSysID": "string",
    "InsertDate": "string",
    "InsertTime": "string",
    "CancelTime": "string",
    "LockStatus": "char",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "BranchID": "string",
}

CThostFtdcExchangeExecOrderActionErrorField = {
    "ExchangeID": "string",
    "ExecOrderSysID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ExecOrderLocalID": "string",
    "ActionLocalID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
    "BrokerID": "string",
}

CThostFtdcInputBatchOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "OrderActionRef": "int",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "UserID": "string",
}

CThostFtdcBatchOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "OrderActionRef": "int",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "StatusMsg": "string",
}

CThostFtdcExchangeBatchOrderActionField = {
    "ExchangeID": "string",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
}

CThostFtdcQryBatchOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
}

CThostFtdcLimitPosiField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "TotalVolume": "int",
    "LongVolume": "int",
    "OpenVolume": "int",
    "LongAmount": "double",
    "TotalVolumeFrozen": "int",
    "LongVolumeFrozen": "int",
    "OpenVolumeFrozen": "int",
    "LongAmountFrozen": "double",
}

CThostFtdcQryLimitPosiField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcBrokerLimitPosiField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "TotalVolume": "double",
    "LongVolume": "double",
    "TotalVolumeFrozen": "double",
    "LongVolumeFrozen": "double",
}

CThostFtdcQryBrokerLimitPosiField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcLimitPosiSField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "TotalVolume": "int",
    "OpenVolume": "int",
    "TotalVolumeFrozen": "int",
    "OpenVolumeFrozen": "int",
}

CThostFtdcQryLimitPosiSField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcLimitPosiParamField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
    "TotalVolume": "int",
    "LongVolume": "int",
    "OpenVolume": "int",
    "LongAmount": "double",
}

CThostFtdcBrokerLimitPosiParamField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "TotalVolume": "double",
    "LongVolume": "double",
}

CThostFtdcLimitPosiParamSField = {
    "InstrumentID": "string",
    "InvestorRange": "char",
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
    "TotalVolume": "int",
    "OpenVolume": "int",
}

CThostFtdcInputStockDisposalActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "StockDisposalActionRef": "int",
    "StockDisposalRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "StockDisposalSysID": "string",
    "ActionFlag": "char",
    "UserID": "string",
    "InstrumentID": "string",
}

CThostFtdcStockDisposalActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "StockDisposalActionRef": "int",
    "StockDisposalRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "StockDisposalSysID": "string",
    "ActionFlag": "char",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "StockDisposalLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "ActionType": "char",
    "StatusMsg": "string",
    "InstrumentID": "string",
    "BranchID": "string",
}

CThostFtdcQryStockDisposalActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
}

CThostFtdcExchangeStockDisposalActionField = {
    "ExchangeID": "string",
    "StockDisposalSysID": "string",
    "ActionFlag": "char",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "StockDisposalLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "ActionType": "char",
    "BranchID": "string",
}

CThostFtdcQryExchangeStockDisposalActionField = {
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeID": "string",
    "TraderID": "string",
}

CThostFtdcQryErrStockDisposalActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
}

CThostFtdcExchangeStockDisposalActionErrorField = {
    "ExchangeID": "string",
    "StockDisposalSysID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "StockDisposalLocalID": "string",
    "ActionLocalID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
    "BrokerID": "string",
}

CThostFtdcErrStockDisposalActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "StockDisposalActionRef": "int",
    "StockDisposalRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "StockDisposalSysID": "string",
    "ActionFlag": "char",
    "UserID": "string",
    "InstrumentID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
}

CThostFtdcInvestorLevelField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
    "LevelType": "char",
}

CThostFtdcCombInstrumentGuardField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "GuarantRatio": "double",
}

CThostFtdcQryCombInstrumentGuardField = {
    "BrokerID": "string",
    "InstrumentID": "string",
}

CThostFtdcInputCombActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "CombActionRef": "string",
    "UserID": "string",
    "Direction": "char",
    "Volume": "int",
    "CombDirection": "char",
    "HedgeFlag": "char",
    "ExchangeID": "string",
}

CThostFtdcCombActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "CombActionRef": "string",
    "UserID": "string",
    "Direction": "char",
    "Volume": "int",
    "CombDirection": "char",
    "HedgeFlag": "char",
    "ActionLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ActionStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "SequenceNo": "int",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
}

CThostFtdcQryCombActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcExchangeCombActionField = {
    "Direction": "char",
    "Volume": "int",
    "CombDirection": "char",
    "HedgeFlag": "char",
    "ActionLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "ActionStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "SequenceNo": "int",
}

CThostFtdcQryExchangeCombActionField = {
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "ExchangeID": "string",
    "TraderID": "string",
}

CThostFtdcProductExchRateField = {
    "ProductID": "string",
    "QuoteCurrencyID": "string",
    "ExchangeRate": "double",
}

CThostFtdcQryProductExchRateField = {
    "ProductID": "string",
}

CThostFtdcInputDesignateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "DesignateRef": "string",
    "UserID": "string",
    "DesignateType": "char",
    "ExchangeID": "string",
}

CThostFtdcDesignateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "DesignateRef": "string",
    "UserID": "string",
    "DesignateType": "char",
    "DesignateLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "DesignateStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "BranchID": "string",
}

CThostFtdcQryDesignateField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
}

CThostFtdcExchangeDesignateField = {
    "DesignateType": "char",
    "DesignateLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "DesignateStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "BranchID": "string",
}

CThostFtdcInputStockDisposalField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "StockDisposalRef": "string",
    "UserID": "string",
    "InstrumentID": "string",
    "Volume": "int",
    "StockDisposalType": "char",
    "ExchangeID": "string",
}

CThostFtdcStockDisposalField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "StockDisposalRef": "string",
    "UserID": "string",
    "InstrumentID": "string",
    "Volume": "int",
    "StockDisposalType": "char",
    "StockDisposalLocalID": "string",
    "ExchangeID": "string",
    "ExchangeInstID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "StockDisposalStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "BranchID": "string",
    "StockDisposalSysID": "string",
    "BusinessUnit": "string",
}

CThostFtdcQryStockDisposalField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
}

CThostFtdcExchangeStockDisposalField = {
    "Volume": "int",
    "StockDisposalType": "char",
    "StockDisposalLocalID": "string",
    "ExchangeID": "string",
    "ExchangeInstID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "StockDisposalStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "BranchID": "string",
    "StockDisposalSysID": "string",
    "BusinessUnit": "string",
}

CThostFtdcQryInvestorLevelField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryForQuoteParamField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcForQuoteParamField = {
    "BrokerID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "LastPrice": "double",
    "PriceInterval": "double",
}

CThostFtdcQryExecFreezeField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcExecFreezeField = {
    "InstrumentID": "string",
    "ExchangeID": "string",
    "BrokerID": "string",
    "InvestorID": "string",
    "PosiDirection": "char",
    "OptionsType": "char",
    "Volume": "int",
    "FrozenAmount": "double",
}

CThostFtdcMarketDataField = {
    "TradingDay": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
    "ExchangeInstID": "string",
    "LastPrice": "double",
    "PreSettlementPrice": "double",
    "PreClosePrice": "double",
    "PreOpenInterest": "double",
    "OpenPrice": "double",
    "HighestPrice": "double",
    "LowestPrice": "double",
    "Volume": "int",
    "Turnover": "double",
    "OpenInterest": "double",
    "ClosePrice": "double",
    "SettlementPrice": "double",
    "UpperLimitPrice": "double",
    "LowerLimitPrice": "double",
    "PreDelta": "double",
    "CurrDelta": "double",
    "UpdateTime": "string",
    "UpdateMillisec": "int",
    "ActionDay": "string",
}

CThostFtdcMarketDataBaseField = {
    "TradingDay": "string",
    "PreSettlementPrice": "double",
    "PreClosePrice": "double",
    "PreOpenInterest": "double",
    "PreDelta": "double",
}

CThostFtdcMarketDataStaticField = {
    "OpenPrice": "double",
    "HighestPrice": "double",
    "LowestPrice": "double",
    "ClosePrice": "double",
    "UpperLimitPrice": "double",
    "LowerLimitPrice": "double",
    "SettlementPrice": "double",
    "CurrDelta": "double",
}

CThostFtdcMarketDataLastMatchField = {
    "LastPrice": "double",
    "Volume": "int",
    "Turnover": "double",
    "OpenInterest": "double",
}

CThostFtdcMarketDataBestPriceField = {
    "BidPrice1": "double",
    "BidVolume1": "int",
    "AskPrice1": "double",
    "AskVolume1": "int",
}

CThostFtdcMarketDataBid23Field = {
    "BidPrice2": "double",
    "BidVolume2": "int",
    "BidPrice3": "double",
    "BidVolume3": "int",
}

CThostFtdcMarketDataAsk23Field = {
    "AskPrice2": "double",
    "AskVolume2": "int",
    "AskPrice3": "double",
    "AskVolume3": "int",
}

CThostFtdcMarketDataBid45Field = {
    "BidPrice4": "double",
    "BidVolume4": "int",
    "BidPrice5": "double",
    "BidVolume5": "int",
}

CThostFtdcMarketDataAsk45Field = {
    "AskPrice4": "double",
    "AskVolume4": "int",
    "AskPrice5": "double",
    "AskVolume5": "int",
}

CThostFtdcMarketDataUpdateTimeField = {
    "InstrumentID": "string",
    "UpdateTime": "string",
    "UpdateMillisec": "int",
    "ActionDay": "string",
    "ExchangeID": "string",
}

CThostFtdcMarketDataExchangeField = {
    "ExchangeID": "string",
}

CThostFtdcSpecificInstrumentField = {
    "InstrumentID": "string",
}

CThostFtdcInstrumentStatusField = {
    "ExchangeID": "string",
    "ExchangeInstID": "string",
    "SettlementGroupID": "string",
    "InstrumentID": "string",
    "InstrumentStatus": "char",
    "TradingSegmentSN": "int",
    "EnterTime": "string",
    "EnterReason": "char",
}

CThostFtdcQryInstrumentStatusField = {
    "ExchangeID": "string",
    "ExchangeInstID": "string",
}

CThostFtdcInvestorAccountField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "AccountID": "string",
    "CurrencyID": "string",
}

CThostFtdcPositionProfitAlgorithmField = {
    "BrokerID": "string",
    "AccountID": "string",
    "Algorithm": "char",
    "Memo": "string",
    "CurrencyID": "string",
}

CThostFtdcDiscountField = {
    "BrokerID": "string",
    "InvestorRange": "char",
    "InvestorID": "string",
    "Discount": "double",
}

CThostFtdcQryTransferBankField = {
    "BankID": "string",
    "BankBrchID": "string",
}

CThostFtdcTransferBankField = {
    "BankID": "string",
    "BankBrchID": "string",
    "BankName": "string",
    "IsActive": "int",
}

CThostFtdcQryInvestorPositionDetailField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcInvestorPositionDetailField = {
    "InstrumentID": "string",
    "BrokerID": "string",
    "InvestorID": "string",
    "HedgeFlag": "char",
    "Direction": "char",
    "OpenDate": "string",
    "TradeID": "string",
    "Volume": "int",
    "OpenPrice": "double",
    "TradingDay": "string",
    "SettlementID": "int",
    "TradeType": "char",
    "CombInstrumentID": "string",
    "ExchangeID": "string",
    "CloseProfitByDate": "double",
    "CloseProfitByTrade": "double",
    "PositionProfitByDate": "double",
    "PositionProfitByTrade": "double",
    "Margin": "double",
    "ExchMargin": "double",
    "MarginRateByMoney": "double",
    "MarginRateByVolume": "double",
    "LastSettlementPrice": "double",
    "SettlementPrice": "double",
    "CloseVolume": "int",
    "CloseAmount": "double",
}

CThostFtdcTradingAccountPasswordField = {
    "BrokerID": "string",
    "AccountID": "string",
    "Password": "string",
    "CurrencyID": "string",
}

CThostFtdcMDTraderOfferField = {
    "ExchangeID": "string",
    "TraderID": "string",
    "ParticipantID": "string",
    "Password": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "TraderConnectStatus": "char",
    "ConnectRequestDate": "string",
    "ConnectRequestTime": "string",
    "LastReportDate": "string",
    "LastReportTime": "string",
    "ConnectDate": "string",
    "ConnectTime": "string",
    "StartDate": "string",
    "StartTime": "string",
    "TradingDay": "string",
    "BrokerID": "string",
    "MaxTradeID": "string",
    "MaxOrderMessageReference": "string",
    "BizType": "char",
}

CThostFtdcQryMDTraderOfferField = {
    "ExchangeID": "string",
    "ParticipantID": "string",
    "TraderID": "string",
}

CThostFtdcQryNoticeField = {
    "BrokerID": "string",
}

CThostFtdcNoticeField = {
    "BrokerID": "string",
    "Content": "string",
    "SequenceLabel": "string",
}

CThostFtdcUserRightField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserRightType": "char",
    "IsForbidden": "int",
}

CThostFtdcQrySettlementInfoConfirmField = {
    "BrokerID": "string",
    "InvestorID": "string",
}

CThostFtdcLoadSettlementInfoField = {
    "BrokerID": "string",
}

CThostFtdcBrokerWithdrawAlgorithmField = {
    "BrokerID": "string",
    "WithdrawAlgorithm": "char",
    "UsingRatio": "double",
    "IncludeCloseProfit": "char",
    "AllWithoutTrade": "char",
    "AvailIncludeCloseProfit": "char",
    "IsBrokerUserEvent": "int",
    "CurrencyID": "string",
    "FundMortgageRatio": "double",
    "BalanceAlgorithm": "char",
}

CThostFtdcTradingAccountPasswordUpdateV1Field = {
    "BrokerID": "string",
    "InvestorID": "string",
    "OldPassword": "string",
    "NewPassword": "string",
}

CThostFtdcTradingAccountPasswordUpdateField = {
    "BrokerID": "string",
    "AccountID": "string",
    "OldPassword": "string",
    "NewPassword": "string",
    "CurrencyID": "string",
}

CThostFtdcQryCombinationLegField = {
    "CombInstrumentID": "string",
    "LegID": "int",
    "LegInstrumentID": "string",
}

CThostFtdcQrySyncStatusField = {
    "TradingDay": "string",
}

CThostFtdcCombinationLegField = {
    "CombInstrumentID": "string",
    "LegID": "int",
    "LegInstrumentID": "string",
    "Direction": "char",
    "LegMultiple": "int",
    "ImplyLevel": "int",
}

CThostFtdcSyncStatusField = {
    "TradingDay": "string",
    "DataSyncStatus": "char",
}

CThostFtdcQryLinkManField = {
    "BrokerID": "string",
    "InvestorID": "string",
}

CThostFtdcLinkManField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "PersonType": "char",
    "IdentifiedCardType": "char",
    "IdentifiedCardNo": "string",
    "PersonName": "string",
    "Telephone": "string",
    "Address": "string",
    "ZipCode": "string",
    "Priority": "int",
    "UOAZipCode": "string",
    "PersonFullName": "string",
}

CThostFtdcQryBrokerUserEventField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserEventType": "char",
}

CThostFtdcBrokerUserEventField = {
    "BrokerID": "string",
    "UserID": "string",
    "UserEventType": "char",
    "EventSequenceNo": "int",
    "EventDate": "string",
    "EventTime": "string",
    "UserEventInfo": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "ExchangeID": "string",
}

CThostFtdcQryContractBankField = {
    "BrokerID": "string",
    "BankID": "string",
    "BankBrchID": "string",
}

CThostFtdcContractBankField = {
    "BrokerID": "string",
    "BankID": "string",
    "BankBrchID": "string",
    "BankName": "string",
}

CThostFtdcInvestorPositionCombineDetailField = {
    "TradingDay": "string",
    "OpenDate": "string",
    "ExchangeID": "string",
    "SettlementID": "int",
    "BrokerID": "string",
    "InvestorID": "string",
    "ComTradeID": "string",
    "TradeID": "string",
    "InstrumentID": "string",
    "HedgeFlag": "char",
    "Direction": "char",
    "TotalAmt": "int",
    "Margin": "double",
    "ExchMargin": "double",
    "MarginRateByMoney": "double",
    "MarginRateByVolume": "double",
    "LegID": "int",
    "LegMultiple": "int",
    "CombInstrumentID": "string",
    "TradeGroupID": "int",
}

CThostFtdcParkedOrderField = {
}

CThostFtdcParkedOrderActionField = {
}

CThostFtdcQryParkedOrderField = {
}

CThostFtdcQryParkedOrderActionField = {
}

CThostFtdcRemoveParkedOrderField = {
}

CThostFtdcRemoveParkedOrderActionField = {
}

CThostFtdcInvestorWithdrawAlgorithmField = {
}

CThostFtdcQryInvestorPositionCombineDetailField = {
}

CThostFtdcMarketDataAveragePriceField = {
}

CThostFtdcVerifyInvestorPasswordField = {
}

CThostFtdcUserIPField = {
}

CThostFtdcTradingNoticeInfoField = {
}

CThostFtdcTradingNoticeField = {
}

CThostFtdcQryTradingNoticeField = {
}

CThostFtdcQryErrOrderField = {
}

CThostFtdcErrOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "OrderRef": "string",
    "UserID": "string",
    "OrderPriceType": "char",
    "Direction": "char",
    "CombOffsetFlag": "string",
    "CombHedgeFlag": "string",
    "LimitPrice": "double",
    "VolumeTotalOriginal": "int",
    "TimeCondition": "char",
    "GTDDate": "string",
    "VolumeCondition": "char",
    "MinVolume": "int",
    "ContingentCondition": "char",
    "StopPrice": "double",
    "ForceCloseReason": "char",
    "IsAutoSuspend": "int",
    "BusinessUnit": "string",
    "RequestID": "int",
    "UserForceClose": "int",
    "ErrorID": "int",
    "ErrorMsg": "string",
    "IsSwapOrder": "int",
    "ExchangeID": "string",
}

CThostFtdcErrorConditionalOrderField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "OrderRef": "string",
    "UserID": "string",
    "OrderPriceType": "char",
    "Direction": "char",
    "CombOffsetFlag": "string",
    "CombHedgeFlag": "string",
    "LimitPrice": "double",
    "VolumeTotalOriginal": "int",
    "TimeCondition": "char",
    "GTDDate": "string",
    "VolumeCondition": "char",
    "MinVolume": "int",
    "ContingentCondition": "char",
    "StopPrice": "double",
    "ForceCloseReason": "char",
    "IsAutoSuspend": "int",
    "BusinessUnit": "string",
    "RequestID": "int",
    "OrderLocalID": "string",
    "ExchangeID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "ExchangeInstID": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderSubmitStatus": "char",
    "NotifySequence": "int",
    "TradingDay": "string",
    "SettlementID": "int",
    "OrderSysID": "string",
    "OrderSource": "char",
    "OrderStatus": "char",
    "OrderType": "char",
    "VolumeTraded": "int",
    "VolumeTotal": "int",
    "InsertDate": "string",
    "InsertTime": "string",
    "ActiveTime": "string",
    "SuspendTime": "string",
    "UpdateTime": "string",
    "CancelTime": "string",
    "ActiveTraderID": "string",
    "ClearingPartID": "string",
    "SequenceNo": "int",
    "FrontID": "int",
    "SessionID": "int",
    "UserProductInfo": "string",
    "StatusMsg": "string",
    "UserForceClose": "int",
    "ActiveUserID": "string",
    "BrokerOrderSeq": "int",
    "RelativeOrderSysID": "string",
    "ZCETotalTradedVolume": "int",
    "ErrorID": "int",
    "ErrorMsg": "string",
    "IsSwapOrder": "int",
    "BranchID": "string",
}

CThostFtdcQryErrOrderActionField = {
}

CThostFtdcErrOrderActionField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "OrderActionRef": "int",
    "OrderRef": "string",
    "RequestID": "int",
    "FrontID": "int",
    "SessionID": "int",
    "ExchangeID": "string",
    "OrderSysID": "string",
    "ActionFlag": "char",
    "LimitPrice": "double",
    "VolumeChange": "int",
    "ActionDate": "string",
    "ActionTime": "string",
    "TraderID": "string",
    "InstallID": "int",
    "OrderLocalID": "string",
    "ActionLocalID": "string",
    "ParticipantID": "string",
    "ClientID": "string",
    "BusinessUnit": "string",
    "OrderActionStatus": "char",
    "UserID": "string",
    "StatusMsg": "string",
    "InstrumentID": "string",
    "BranchID": "string",
    "ErrorID": "int",
    "ErrorMsg": "string",
}

CThostFtdcQryExchangeSequenceField = {
}

CThostFtdcExchangeSequenceField = {
}

CThostFtdcQueryMaxOrderVolumeWithPriceField = {
    "BrokerID": "string",
    "InvestorID": "string",
    "InstrumentID": "string",
    "Direction": "char",
    "OffsetFlag": "char",
    "HedgeFlag": "char",
    "MaxVolume": "int",
    "Price": "double",
    "ExchangeID": "string",
}

CThostFtdcQryBrokerTradingParamsField = {
}

CThostFtdcBrokerTradingParamsField = {
}

CThostFtdcQryBrokerTradingAlgosField = {
}

CThostFtdcBrokerTradingAlgosField = {
}

CThostFtdcQueryBrokerDepositField = {
}

CThostFtdcBrokerDepositField = {
}

CThostFtdcQryCFMMCBrokerKeyField = {
}

CThostFtdcCFMMCBrokerKeyField = {
}

CThostFtdcCFMMCTradingAccountKeyField = {
}

CThostFtdcQryCFMMCTradingAccountKeyField = {
}

CThostFtdcBrokerUserOTPParamField = {
}

CThostFtdcManualSyncBrokerUserOTPField = {
}

CThostFtdcCommRateModelField = {
}

CThostFtdcQryCommRateModelField = {
}

CThostFtdcMarginModelField = {
}

CThostFtdcQryMarginModelField = {
}

CThostFtdcEWarrantOffsetField = {
}

CThostFtdcQryEWarrantOffsetField = {
}

CThostFtdcQryInvestorProductGroupMarginField = {
}

CThostFtdcInvestorProductGroupMarginField = {
}

CThostFtdcQueryCFMMCTradingAccountTokenField = {
}

CThostFtdcCFMMCTradingAccountTokenField = {
    "BrokerID": "string",
    "ParticipantID": "string",
    "AccountID": "string",
    "KeyID": "int",
    "Token": "string",
}

CThostFtdcInstructionRightField = {
    "BrokerID": "string",
    "ExchangeID": "string",
    "InvestorID": "string",
    "InstructionRight": "char",
    "IsForbidden": "int",
}

CThostFtdcQryProductGroupField = {
    "ProductID": "string",
    "ExchangeID": "string",
}

CThostFtdcProductGroupField = {
    "ProductID": "string",
    "ExchangeID": "string",
    "ProductGroupID": "string",
}

CThostFtdcReqOpenAccountField = {
}

CThostFtdcReqCancelAccountField = {
}

CThostFtdcReqChangeAccountField = {
}

CThostFtdcReqTransferField = {
}

CThostFtdcRspTransferField = {
}

CThostFtdcReqRepealField = {
}

CThostFtdcRspRepealField = {
}

CThostFtdcReqQueryAccountField = {
}

CThostFtdcRspQueryAccountField = {
}

CThostFtdcFutureSignIOField = {
}

CThostFtdcRspFutureSignInField = {
}

CThostFtdcReqFutureSignOutField = {
}

CThostFtdcRspFutureSignOutField = {
}

CThostFtdcReqQueryTradeResultBySerialField = {
}

CThostFtdcRspQueryTradeResultBySerialField = {
}

CThostFtdcReqDayEndFileReadyField = {
}

CThostFtdcReturnResultField = {
}

CThostFtdcVerifyFuturePasswordField = {
}

CThostFtdcVerifyCustInfoField = {
}

CThostFtdcVerifyFuturePasswordAndCustInfoField = {
}

CThostFtdcDepositResultInformField = {
}

CThostFtdcReqSyncKeyField = {
}

CThostFtdcRspSyncKeyField = {
}

CThostFtdcNotifyQueryAccountField = {
}

CThostFtdcTransferSerialField = {
}

CThostFtdcQryTransferSerialField = {
}

CThostFtdcNotifyFutureSignInField = {
}

CThostFtdcNotifyFutureSignOutField = {
}

CThostFtdcNotifySyncKeyField = {
}

CThostFtdcQryAccountregisterField = {
}

CThostFtdcAccountregisterField = {
}

CThostFtdcOpenAccountField = {
}

CThostFtdcCancelAccountField = {
}

CThostFtdcChangeAccountField = {
}

CThostFtdcSecAgentACIDMapField = {
}

CThostFtdcQrySecAgentACIDMapField = {
}

CThostFtdcUserRightsAssignField = {
}

CThostFtdcBrokerUserRightAssignField = {
}

CThostFtdcDRTransferField = {
}

CThostFtdcFensUserInfoField = {
}

CThostFtdcCurrTransferIdentityField = {
}

CThostFtdcLoginForbiddenUserField = {
    "BrokerID": "string",
    "UserID": "string",
    "IPAddress": "string",
}

CThostFtdcQryLoginForbiddenUserField = {
}

CThostFtdcMulticastGroupInfoField = {
}

CThostFtdcTradingAccountReserveField = {
}

CThostFtdcDBFRecordField = {
    "DBFComdType": "string",
    "DBFComTime": "string",
    "DBFOComNo": "string",
    "DBFComNo": "string",
    "DBFFdName1": "string",
    "DBFFdContent1": "string",
    "DBFFdName2": "string",
    "DBFFdContent2": "string",
    "DBFFdName3": "string",
    "DBFFdContent3": "string",
    "DBFFdName4": "string",
    "DBFFdContent4": "string",
}

