// vnctpmd.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "vnfohootd.h"


///-------------------------------------------------------------------------------------
///C++�Ļص����������ݱ��浽������
///-------------------------------------------------------------------------------------

void TdApi::OnFrontConnected()
{
	Task task = Task();
	task.task_name = ONFRONTCONNECTED;
	this->task_queue.push(task);
};

void TdApi::OnFrontDisconnected(int nReason)
{
	Task task = Task();
	task.task_name = ONFRONTDISCONNECTED;
	task.task_id = nReason;
	this->task_queue.push(task);
};

void TdApi::OnHeartBeatWarning(int nTimeLapse)
{
	Task task = Task();
	task.task_name = ONHEARTBEATWARNING;
	task.task_id = nTimeLapse;
	this->task_queue.push(task);
};

void TdApi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPAUTHENTICATE;
	if (pRspAuthenticateField)
	{
		CThostFtdcRspAuthenticateField *task_data = new CThostFtdcRspAuthenticateField();
		*task_data = *pRspAuthenticateField;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPUSERLOGIN;
	if (pRspUserLogin)
	{
		CThostFtdcRspUserLoginField *task_data = new CThostFtdcRspUserLoginField();
		*task_data = *pRspUserLogin;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPUSERLOGOUT;
	if (pUserLogout)
	{
		CThostFtdcUserLogoutField *task_data = new CThostFtdcUserLogoutField();
		*task_data = *pUserLogout;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPUSERPASSWORDUPDATE;
	if (pUserPasswordUpdate)
	{
		CThostFtdcUserPasswordUpdateField *task_data = new CThostFtdcUserPasswordUpdateField();
		*task_data = *pUserPasswordUpdate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPTRADINGACCOUNTPASSWORDUPDATE;
	if (pTradingAccountPasswordUpdate)
	{
		CThostFtdcTradingAccountPasswordUpdateField *task_data = new CThostFtdcTradingAccountPasswordUpdateField();
		*task_data = *pTradingAccountPasswordUpdate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPORDERINSERT;
	if (pInputOrder)
	{
		CThostFtdcInputOrderField *task_data = new CThostFtdcInputOrderField();
		*task_data = *pInputOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPPARKEDORDERINSERT;
	if (pParkedOrder)
	{
		CThostFtdcParkedOrderField *task_data = new CThostFtdcParkedOrderField();
		*task_data = *pParkedOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPPARKEDORDERACTION;
	if (pParkedOrderAction)
	{
		CThostFtdcParkedOrderActionField *task_data = new CThostFtdcParkedOrderActionField();
		*task_data = *pParkedOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPORDERACTION;
	if (pInputOrderAction)
	{
		CThostFtdcInputOrderActionField *task_data = new CThostFtdcInputOrderActionField();
		*task_data = *pInputOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQUERYMAXORDERVOLUME;
	if (pQueryMaxOrderVolume)
	{
		CThostFtdcQueryMaxOrderVolumeField *task_data = new CThostFtdcQueryMaxOrderVolumeField();
		*task_data = *pQueryMaxOrderVolume;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPSETTLEMENTINFOCONFIRM;
	if (pSettlementInfoConfirm)
	{
		CThostFtdcSettlementInfoConfirmField *task_data = new CThostFtdcSettlementInfoConfirmField();
		*task_data = *pSettlementInfoConfirm;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPREMOVEPARKEDORDER;
	if (pRemoveParkedOrder)
	{
		CThostFtdcRemoveParkedOrderField *task_data = new CThostFtdcRemoveParkedOrderField();
		*task_data = *pRemoveParkedOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPREMOVEPARKEDORDERACTION;
	if (pRemoveParkedOrderAction)
	{
		CThostFtdcRemoveParkedOrderActionField *task_data = new CThostFtdcRemoveParkedOrderActionField();
		*task_data = *pRemoveParkedOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPEXECORDERINSERT;
	if (pInputExecOrder)
	{
		CThostFtdcInputExecOrderField *task_data = new CThostFtdcInputExecOrderField();
		*task_data = *pInputExecOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPEXECORDERACTION;
	if (pInputExecOrderAction)
	{
		CThostFtdcInputExecOrderActionField *task_data = new CThostFtdcInputExecOrderActionField();
		*task_data = *pInputExecOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPFORQUOTEINSERT;
	if (pInputForQuote)
	{
		CThostFtdcInputForQuoteField *task_data = new CThostFtdcInputForQuoteField();
		*task_data = *pInputForQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQUOTEINSERT;
	if (pInputQuote)
	{
		CThostFtdcInputQuoteField *task_data = new CThostFtdcInputQuoteField();
		*task_data = *pInputQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQUOTEACTION;
	if (pInputQuoteAction)
	{
		CThostFtdcInputQuoteActionField *task_data = new CThostFtdcInputQuoteActionField();
		*task_data = *pInputQuoteAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspLockInsert(CThostFtdcInputLockField *pInputLock, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPLOCKINSERT;
	if (pInputLock)
	{
		CThostFtdcInputLockField *task_data = new CThostFtdcInputLockField();
		*task_data = *pInputLock;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPCOMBACTIONINSERT;
	if (pInputCombAction)
	{
		CThostFtdcInputCombActionField *task_data = new CThostFtdcInputCombActionField();
		*task_data = *pInputCombAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYORDER;
	if (pOrder)
	{
		CThostFtdcOrderField *task_data = new CThostFtdcOrderField();
		*task_data = *pOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADE;
	if (pTrade)
	{
		CThostFtdcTradeField *task_data = new CThostFtdcTradeField();
		*task_data = *pTrade;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORPOSITION;
	if (pInvestorPosition)
	{
		CThostFtdcInvestorPositionField *task_data = new CThostFtdcInvestorPositionField();
		*task_data = *pInvestorPosition;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGACCOUNT;
	if (pTradingAccount)
	{
		CThostFtdcTradingAccountField *task_data = new CThostFtdcTradingAccountField();
		*task_data = *pTradingAccount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTOR;
	if (pInvestor)
	{
		CThostFtdcInvestorField *task_data = new CThostFtdcInvestorField();
		*task_data = *pInvestor;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGCODE;
	if (pTradingCode)
	{
		CThostFtdcTradingCodeField *task_data = new CThostFtdcTradingCodeField();
		*task_data = *pTradingCode;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINSTRUMENTMARGINRATE;
	if (pInstrumentMarginRate)
	{
		CThostFtdcInstrumentMarginRateField *task_data = new CThostFtdcInstrumentMarginRateField();
		*task_data = *pInstrumentMarginRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINSTRUMENTCOMMISSIONRATE;
	if (pInstrumentCommissionRate)
	{
		CThostFtdcInstrumentCommissionRateField *task_data = new CThostFtdcInstrumentCommissionRateField();
		*task_data = *pInstrumentCommissionRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXCHANGE;
	if (pExchange)
	{
		CThostFtdcExchangeField *task_data = new CThostFtdcExchangeField();
		*task_data = *pExchange;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYPRODUCT;
	if (pProduct)
	{
		CThostFtdcProductField *task_data = new CThostFtdcProductField();
		*task_data = *pProduct;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINSTRUMENT;
	if (pInstrument)
	{
		CThostFtdcInstrumentField *task_data = new CThostFtdcInstrumentField();
		*task_data = *pInstrument;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYDEPTHMARKETDATA;
	if (pDepthMarketData)
	{
		CThostFtdcDepthMarketDataField *task_data = new CThostFtdcDepthMarketDataField();
		*task_data = *pDepthMarketData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSETTLEMENTINFO;
	if (pSettlementInfo)
	{
		CThostFtdcSettlementInfoField *task_data = new CThostFtdcSettlementInfoField();
		*task_data = *pSettlementInfo;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRANSFERBANK;
	if (pTransferBank)
	{
		CThostFtdcTransferBankField *task_data = new CThostFtdcTransferBankField();
		*task_data = *pTransferBank;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORPOSITIONDETAIL;
	if (pInvestorPositionDetail)
	{
		CThostFtdcInvestorPositionDetailField *task_data = new CThostFtdcInvestorPositionDetailField();
		*task_data = *pInvestorPositionDetail;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYNOTICE;
	if (pNotice)
	{
		CThostFtdcNoticeField *task_data = new CThostFtdcNoticeField();
		*task_data = *pNotice;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSETTLEMENTINFOCONFIRM;
	if (pSettlementInfoConfirm)
	{
		CThostFtdcSettlementInfoConfirmField *task_data = new CThostFtdcSettlementInfoConfirmField();
		*task_data = *pSettlementInfoConfirm;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORPOSITIONCOMBINEDETAIL;
	if (pInvestorPositionCombineDetail)
	{
		CThostFtdcInvestorPositionCombineDetailField *task_data = new CThostFtdcInvestorPositionCombineDetailField();
		*task_data = *pInvestorPositionCombineDetail;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCFMMCTRADINGACCOUNTKEY;
	if (pCFMMCTradingAccountKey)
	{
		CThostFtdcCFMMCTradingAccountKeyField *task_data = new CThostFtdcCFMMCTradingAccountKeyField();
		*task_data = *pCFMMCTradingAccountKey;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEWARRANTOFFSET;
	if (pEWarrantOffset)
	{
		CThostFtdcEWarrantOffsetField *task_data = new CThostFtdcEWarrantOffsetField();
		*task_data = *pEWarrantOffset;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORPRODUCTGROUPMARGIN;
	if (pInvestorProductGroupMargin)
	{
		CThostFtdcInvestorProductGroupMarginField *task_data = new CThostFtdcInvestorProductGroupMarginField();
		*task_data = *pInvestorProductGroupMargin;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXCHANGEMARGINRATE;
	if (pExchangeMarginRate)
	{
		CThostFtdcExchangeMarginRateField *task_data = new CThostFtdcExchangeMarginRateField();
		*task_data = *pExchangeMarginRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXCHANGEMARGINRATEADJUST;
	if (pExchangeMarginRateAdjust)
	{
		CThostFtdcExchangeMarginRateAdjustField *task_data = new CThostFtdcExchangeMarginRateAdjustField();
		*task_data = *pExchangeMarginRateAdjust;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXCHANGERATE;
	if (pExchangeRate)
	{
		CThostFtdcExchangeRateField *task_data = new CThostFtdcExchangeRateField();
		*task_data = *pExchangeRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSECAGENTACIDMAP;
	if (pSecAgentACIDMap)
	{
		CThostFtdcSecAgentACIDMapField *task_data = new CThostFtdcSecAgentACIDMapField();
		*task_data = *pSecAgentACIDMap;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYPRODUCTEXCHRATE;
	if (pProductExchRate)
	{
		CThostFtdcProductExchRateField *task_data = new CThostFtdcProductExchRateField();
		*task_data = *pProductExchRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYPRODUCTGROUP;
	if (pProductGroup)
	{
		CThostFtdcProductGroupField *task_data = new CThostFtdcProductGroupField();
		*task_data = *pProductGroup;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYOPTIONINSTRTRADECOST;
	if (pOptionInstrTradeCost)
	{
		CThostFtdcOptionInstrTradeCostField *task_data = new CThostFtdcOptionInstrTradeCostField();
		*task_data = *pOptionInstrTradeCost;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYOPTIONINSTRCOMMRATE;
	if (pOptionInstrCommRate)
	{
		CThostFtdcOptionInstrCommRateField *task_data = new CThostFtdcOptionInstrCommRateField();
		*task_data = *pOptionInstrCommRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXECORDER;
	if (pExecOrder)
	{
		CThostFtdcExecOrderField *task_data = new CThostFtdcExecOrderField();
		*task_data = *pExecOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYFORQUOTE;
	if (pForQuote)
	{
		CThostFtdcForQuoteField *task_data = new CThostFtdcForQuoteField();
		*task_data = *pForQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYQUOTE;
	if (pQuote)
	{
		CThostFtdcQuoteField *task_data = new CThostFtdcQuoteField();
		*task_data = *pQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryLock(CThostFtdcLockField *pLock, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYLOCK;
	if (pLock)
	{
		CThostFtdcLockField *task_data = new CThostFtdcLockField();
		*task_data = *pLock;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryLockPosition(CThostFtdcLockPositionField *pLockPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYLOCKPOSITION;
	if (pLockPosition)
	{
		CThostFtdcLockPositionField *task_data = new CThostFtdcLockPositionField();
		*task_data = *pLockPosition;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorLevel(CThostFtdcInvestorLevelField *pInvestorLevel, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORLEVEL;
	if (pInvestorLevel)
	{
		CThostFtdcInvestorLevelField *task_data = new CThostFtdcInvestorLevelField();
		*task_data = *pInvestorLevel;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryExecFreeze(CThostFtdcExecFreezeField *pExecFreeze, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEXECFREEZE;
	if (pExecFreeze)
	{
		CThostFtdcExecFreezeField *task_data = new CThostFtdcExecFreezeField();
		*task_data = *pExecFreeze;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCOMBINSTRUMENTGUARD;
	if (pCombInstrumentGuard)
	{
		CThostFtdcCombInstrumentGuardField *task_data = new CThostFtdcCombInstrumentGuardField();
		*task_data = *pCombInstrumentGuard;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCOMBACTION;
	if (pCombAction)
	{
		CThostFtdcCombActionField *task_data = new CThostFtdcCombActionField();
		*task_data = *pCombAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRANSFERSERIAL;
	if (pTransferSerial)
	{
		CThostFtdcTransferSerialField *task_data = new CThostFtdcTransferSerialField();
		*task_data = *pTransferSerial;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYACCOUNTREGISTER;
	if (pAccountregister)
	{
		CThostFtdcAccountregisterField *task_data = new CThostFtdcAccountregisterField();
		*task_data = *pAccountregister;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPERROR;
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
	Task task = Task();
	task.task_name = ONRTNORDER;
	if (pOrder)
	{
		CThostFtdcOrderField *task_data = new CThostFtdcOrderField();
		*task_data = *pOrder;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	Task task = Task();
	task.task_name = ONRTNTRADE;
	if (pTrade)
	{
		CThostFtdcTradeField *task_data = new CThostFtdcTradeField();
		*task_data = *pTrade;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNORDERINSERT;
	if (pInputOrder)
	{
		CThostFtdcInputOrderField *task_data = new CThostFtdcInputOrderField();
		*task_data = *pInputOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNORDERACTION;
	if (pOrderAction)
	{
		CThostFtdcOrderActionField *task_data = new CThostFtdcOrderActionField();
		*task_data = *pOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	Task task = Task();
	task.task_name = ONRTNINSTRUMENTSTATUS;
	if (pInstrumentStatus)
	{
		CThostFtdcInstrumentStatusField *task_data = new CThostFtdcInstrumentStatusField();
		*task_data = *pInstrumentStatus;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	Task task = Task();
	task.task_name = ONRTNTRADINGNOTICE;
	if (pTradingNoticeInfo)
	{
		CThostFtdcTradingNoticeInfoField *task_data = new CThostFtdcTradingNoticeInfoField();
		*task_data = *pTradingNoticeInfo;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	Task task = Task();
	task.task_name = ONRTNERRORCONDITIONALORDER;
	if (pErrorConditionalOrder)
	{
		CThostFtdcErrorConditionalOrderField *task_data = new CThostFtdcErrorConditionalOrderField();
		*task_data = *pErrorConditionalOrder;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
{
	Task task = Task();
	task.task_name = ONRTNEXECORDER;
	if (pExecOrder)
	{
		CThostFtdcExecOrderField *task_data = new CThostFtdcExecOrderField();
		*task_data = *pExecOrder;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNEXECORDERINSERT;
	if (pInputExecOrder)
	{
		CThostFtdcInputExecOrderField *task_data = new CThostFtdcInputExecOrderField();
		*task_data = *pInputExecOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNEXECORDERACTION;
	if (pExecOrderAction)
	{
		CThostFtdcExecOrderActionField *task_data = new CThostFtdcExecOrderActionField();
		*task_data = *pExecOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNFORQUOTEINSERT;
	if (pInputForQuote)
	{
		CThostFtdcInputForQuoteField *task_data = new CThostFtdcInputForQuoteField();
		*task_data = *pInputForQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnQuote(CThostFtdcQuoteField *pQuote)
{
	Task task = Task();
	task.task_name = ONRTNQUOTE;
	if (pQuote)
	{
		CThostFtdcQuoteField *task_data = new CThostFtdcQuoteField();
		*task_data = *pQuote;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNQUOTEINSERT;
	if (pInputQuote)
	{
		CThostFtdcInputQuoteField *task_data = new CThostFtdcInputQuoteField();
		*task_data = *pInputQuote;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNQUOTEACTION;
	if (pQuoteAction)
	{
		CThostFtdcQuoteActionField *task_data = new CThostFtdcQuoteActionField();
		*task_data = *pQuoteAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	Task task = Task();
	task.task_name = ONRTNFORQUOTERSP;
	if (pForQuoteRsp)
	{
		CThostFtdcForQuoteRspField *task_data = new CThostFtdcForQuoteRspField();
		*task_data = *pForQuoteRsp;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
{
	Task task = Task();
	task.task_name = ONRTNCFMMCTRADINGACCOUNTTOKEN;
	if (pCFMMCTradingAccountToken)
	{
		CThostFtdcCFMMCTradingAccountTokenField *task_data = new CThostFtdcCFMMCTradingAccountTokenField();
		*task_data = *pCFMMCTradingAccountToken;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnLock(CThostFtdcLockField *pLock)
{
	Task task = Task();
	task.task_name = ONRTNLOCK;
	if (pLock)
	{
		CThostFtdcLockField *task_data = new CThostFtdcLockField();
		*task_data = *pLock;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnLockInsert(CThostFtdcInputLockField *pInputLock, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNLOCKINSERT;
	if (pInputLock)
	{
		CThostFtdcInputLockField *task_data = new CThostFtdcInputLockField();
		*task_data = *pInputLock;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
{
	Task task = Task();
	task.task_name = ONRTNCOMBACTION;
	if (pCombAction)
	{
		CThostFtdcCombActionField *task_data = new CThostFtdcCombActionField();
		*task_data = *pCombAction;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNCOMBACTIONINSERT;
	if (pInputCombAction)
	{
		CThostFtdcInputCombActionField *task_data = new CThostFtdcInputCombActionField();
		*task_data = *pInputCombAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCONTRACTBANK;
	if (pContractBank)
	{
		CThostFtdcContractBankField *task_data = new CThostFtdcContractBankField();
		*task_data = *pContractBank;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYPARKEDORDER;
	if (pParkedOrder)
	{
		CThostFtdcParkedOrderField *task_data = new CThostFtdcParkedOrderField();
		*task_data = *pParkedOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYPARKEDORDERACTION;
	if (pParkedOrderAction)
	{
		CThostFtdcParkedOrderActionField *task_data = new CThostFtdcParkedOrderActionField();
		*task_data = *pParkedOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGNOTICE;
	if (pTradingNotice)
	{
		CThostFtdcTradingNoticeField *task_data = new CThostFtdcTradingNoticeField();
		*task_data = *pTradingNotice;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYBROKERTRADINGPARAMS;
	if (pBrokerTradingParams)
	{
		CThostFtdcBrokerTradingParamsField *task_data = new CThostFtdcBrokerTradingParamsField();
		*task_data = *pBrokerTradingParams;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYBROKERTRADINGALGOS;
	if (pBrokerTradingAlgos)
	{
		CThostFtdcBrokerTradingAlgosField *task_data = new CThostFtdcBrokerTradingAlgosField();
		*task_data = *pBrokerTradingAlgos;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQUERYCFMMCTRADINGACCOUNTTOKEN;
	if (pQueryCFMMCTradingAccountToken)
	{
		CThostFtdcQueryCFMMCTradingAccountTokenField *task_data = new CThostFtdcQueryCFMMCTradingAccountTokenField();
		*task_data = *pQueryCFMMCTradingAccountToken;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	Task task = Task();
	task.task_name = ONRTNFROMBANKTOFUTUREBYBANK;
	if (pRspTransfer)
	{
		CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
		*task_data = *pRspTransfer;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	Task task = Task();
	task.task_name = ONRTNFROMFUTURETOBANKBYBANK;
	if (pRspTransfer)
	{
		CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
		*task_data = *pRspTransfer;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYBANK;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMFUTURETOBANKBYBANK;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	Task task = Task();
	task.task_name = ONRTNFROMBANKTOFUTUREBYFUTURE;
	if (pRspTransfer)
	{
		CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
		*task_data = *pRspTransfer;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	Task task = Task();
	task.task_name = ONRTNFROMFUTURETOBANKBYFUTURE;
	if (pRspTransfer)
	{
		CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
		*task_data = *pRspTransfer;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYFUTUREMANUAL;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMFUTURETOBANKBYFUTUREMANUAL;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	Task task = Task();
	task.task_name = ONRTNQUERYBANKBALANCEBYFUTURE;
	if (pNotifyQueryAccount)
	{
		CThostFtdcNotifyQueryAccountField *task_data = new CThostFtdcNotifyQueryAccountField();
		*task_data = *pNotifyQueryAccount;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNBANKTOFUTUREBYFUTURE;
	if (pReqTransfer)
	{
		CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
		*task_data = *pReqTransfer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNFUTURETOBANKBYFUTURE;
	if (pReqTransfer)
	{
		CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
		*task_data = *pReqTransfer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNREPEALBANKTOFUTUREBYFUTUREMANUAL;
	if (pReqRepeal)
	{
		CThostFtdcReqRepealField *task_data = new CThostFtdcReqRepealField();
		*task_data = *pReqRepeal;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNREPEALFUTURETOBANKBYFUTUREMANUAL;
	if (pReqRepeal)
	{
		CThostFtdcReqRepealField *task_data = new CThostFtdcReqRepealField();
		*task_data = *pReqRepeal;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
{
	Task task = Task();
	task.task_name = ONERRRTNQUERYBANKBALANCEBYFUTURE;
	if (pReqQueryAccount)
	{
		CThostFtdcReqQueryAccountField *task_data = new CThostFtdcReqQueryAccountField();
		*task_data = *pReqQueryAccount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYFUTURE;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	Task task = Task();
	task.task_name = ONRTNREPEALFROMFUTURETOBANKBYFUTURE;
	if (pRspRepeal)
	{
		CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
		*task_data = *pRspRepeal;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPFROMBANKTOFUTUREBYFUTURE;
	if (pReqTransfer)
	{
		CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
		*task_data = *pReqTransfer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPFROMFUTURETOBANKBYFUTURE;
	if (pReqTransfer)
	{
		CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
		*task_data = *pReqTransfer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQUERYBANKACCOUNTMONEYBYFUTURE;
	if (pReqQueryAccount)
	{
		CThostFtdcReqQueryAccountField *task_data = new CThostFtdcReqQueryAccountField();
		*task_data = *pReqQueryAccount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
{
	Task task = Task();
	task.task_name = ONRTNOPENACCOUNTBYBANK;
	if (pOpenAccount)
	{
		CThostFtdcOpenAccountField *task_data = new CThostFtdcOpenAccountField();
		*task_data = *pOpenAccount;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
{
	Task task = Task();
	task.task_name = ONRTNCANCELACCOUNTBYBANK;
	if (pCancelAccount)
	{
		CThostFtdcCancelAccountField *task_data = new CThostFtdcCancelAccountField();
		*task_data = *pCancelAccount;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
{
	Task task = Task();
	task.task_name = ONRTNCHANGEACCOUNTBYBANK;
	if (pChangeAccount)
	{
		CThostFtdcChangeAccountField *task_data = new CThostFtdcChangeAccountField();
		*task_data = *pChangeAccount;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};



///-------------------------------------------------------------------------------------
///�����̴߳Ӷ�����ȡ�����ݣ�ת��Ϊpython����󣬽�������
///-------------------------------------------------------------------------------------

void TdApi::processTask()
{
    try
    {
        while (this->active)
        {
            Task task = this->task_queue.pop();

            switch (task.task_name)
            {
			case ONFRONTCONNECTED:
			{
				this->processFrontConnected(&task);
				break;
			}

			case ONFRONTDISCONNECTED:
			{
				this->processFrontDisconnected(&task);
				break;
			}

			case ONHEARTBEATWARNING:
			{
				this->processHeartBeatWarning(&task);
				break;
			}

			case ONRSPAUTHENTICATE:
			{
				this->processRspAuthenticate(&task);
				break;
			}

			case ONRSPUSERLOGIN:
			{
				this->processRspUserLogin(&task);
				break;
			}

			case ONRSPUSERLOGOUT:
			{
				this->processRspUserLogout(&task);
				break;
			}

			case ONRSPUSERPASSWORDUPDATE:
			{
				this->processRspUserPasswordUpdate(&task);
				break;
			}

			case ONRSPTRADINGACCOUNTPASSWORDUPDATE:
			{
				this->processRspTradingAccountPasswordUpdate(&task);
				break;
			}

			case ONRSPORDERINSERT:
			{
				this->processRspOrderInsert(&task);
				break;
			}

			case ONRSPPARKEDORDERINSERT:
			{
				this->processRspParkedOrderInsert(&task);
				break;
			}

			case ONRSPPARKEDORDERACTION:
			{
				this->processRspParkedOrderAction(&task);
				break;
			}

			case ONRSPORDERACTION:
			{
				this->processRspOrderAction(&task);
				break;
			}

			case ONRSPQUERYMAXORDERVOLUME:
			{
				this->processRspQueryMaxOrderVolume(&task);
				break;
			}

			case ONRSPSETTLEMENTINFOCONFIRM:
			{
				this->processRspSettlementInfoConfirm(&task);
				break;
			}

			case ONRSPREMOVEPARKEDORDER:
			{
				this->processRspRemoveParkedOrder(&task);
				break;
			}

			case ONRSPREMOVEPARKEDORDERACTION:
			{
				this->processRspRemoveParkedOrderAction(&task);
				break;
			}

			case ONRSPEXECORDERINSERT:
			{
				this->processRspExecOrderInsert(&task);
				break;
			}

			case ONRSPEXECORDERACTION:
			{
				this->processRspExecOrderAction(&task);
				break;
			}

			case ONRSPFORQUOTEINSERT:
			{
				this->processRspForQuoteInsert(&task);
				break;
			}

			case ONRSPQUOTEINSERT:
			{
				this->processRspQuoteInsert(&task);
				break;
			}

			case ONRSPQUOTEACTION:
			{
				this->processRspQuoteAction(&task);
				break;
			}

			case ONRSPLOCKINSERT:
			{
				this->processRspLockInsert(&task);
				break;
			}

			case ONRSPCOMBACTIONINSERT:
			{
				this->processRspCombActionInsert(&task);
				break;
			}

			case ONRSPQRYORDER:
			{
				this->processRspQryOrder(&task);
				break;
			}

			case ONRSPQRYTRADE:
			{
				this->processRspQryTrade(&task);
				break;
			}

			case ONRSPQRYINVESTORPOSITION:
			{
				this->processRspQryInvestorPosition(&task);
				break;
			}

			case ONRSPQRYTRADINGACCOUNT:
			{
				this->processRspQryTradingAccount(&task);
				break;
			}

			case ONRSPQRYINVESTOR:
			{
				this->processRspQryInvestor(&task);
				break;
			}

			case ONRSPQRYTRADINGCODE:
			{
				this->processRspQryTradingCode(&task);
				break;
			}

			case ONRSPQRYINSTRUMENTMARGINRATE:
			{
				this->processRspQryInstrumentMarginRate(&task);
				break;
			}

			case ONRSPQRYINSTRUMENTCOMMISSIONRATE:
			{
				this->processRspQryInstrumentCommissionRate(&task);
				break;
			}

			case ONRSPQRYEXCHANGE:
			{
				this->processRspQryExchange(&task);
				break;
			}

			case ONRSPQRYPRODUCT:
			{
				this->processRspQryProduct(&task);
				break;
			}

			case ONRSPQRYINSTRUMENT:
			{
				this->processRspQryInstrument(&task);
				break;
			}

			case ONRSPQRYDEPTHMARKETDATA:
			{
				this->processRspQryDepthMarketData(&task);
				break;
			}

			case ONRSPQRYSETTLEMENTINFO:
			{
				this->processRspQrySettlementInfo(&task);
				break;
			}

			case ONRSPQRYTRANSFERBANK:
			{
				this->processRspQryTransferBank(&task);
				break;
			}

			case ONRSPQRYINVESTORPOSITIONDETAIL:
			{
				this->processRspQryInvestorPositionDetail(&task);
				break;
			}

			case ONRSPQRYNOTICE:
			{
				this->processRspQryNotice(&task);
				break;
			}

			case ONRSPQRYSETTLEMENTINFOCONFIRM:
			{
				this->processRspQrySettlementInfoConfirm(&task);
				break;
			}

			case ONRSPQRYINVESTORPOSITIONCOMBINEDETAIL:
			{
				this->processRspQryInvestorPositionCombineDetail(&task);
				break;
			}

			case ONRSPQRYCFMMCTRADINGACCOUNTKEY:
			{
				this->processRspQryCFMMCTradingAccountKey(&task);
				break;
			}

			case ONRSPQRYEWARRANTOFFSET:
			{
				this->processRspQryEWarrantOffset(&task);
				break;
			}

			case ONRSPQRYINVESTORPRODUCTGROUPMARGIN:
			{
				this->processRspQryInvestorProductGroupMargin(&task);
				break;
			}

			case ONRSPQRYEXCHANGEMARGINRATE:
			{
				this->processRspQryExchangeMarginRate(&task);
				break;
			}

			case ONRSPQRYEXCHANGEMARGINRATEADJUST:
			{
				this->processRspQryExchangeMarginRateAdjust(&task);
				break;
			}

			case ONRSPQRYEXCHANGERATE:
			{
				this->processRspQryExchangeRate(&task);
				break;
			}

			case ONRSPQRYSECAGENTACIDMAP:
			{
				this->processRspQrySecAgentACIDMap(&task);
				break;
			}

			case ONRSPQRYPRODUCTEXCHRATE:
			{
				this->processRspQryProductExchRate(&task);
				break;
			}

			case ONRSPQRYPRODUCTGROUP:
			{
				this->processRspQryProductGroup(&task);
				break;
			}

			case ONRSPQRYOPTIONINSTRTRADECOST:
			{
				this->processRspQryOptionInstrTradeCost(&task);
				break;
			}

			case ONRSPQRYOPTIONINSTRCOMMRATE:
			{
				this->processRspQryOptionInstrCommRate(&task);
				break;
			}

			case ONRSPQRYEXECORDER:
			{
				this->processRspQryExecOrder(&task);
				break;
			}

			case ONRSPQRYFORQUOTE:
			{
				this->processRspQryForQuote(&task);
				break;
			}

			case ONRSPQRYQUOTE:
			{
				this->processRspQryQuote(&task);
				break;
			}

			case ONRSPQRYLOCK:
			{
				this->processRspQryLock(&task);
				break;
			}

			case ONRSPQRYLOCKPOSITION:
			{
				this->processRspQryLockPosition(&task);
				break;
			}

			case ONRSPQRYINVESTORLEVEL:
			{
				this->processRspQryInvestorLevel(&task);
				break;
			}

			case ONRSPQRYEXECFREEZE:
			{
				this->processRspQryExecFreeze(&task);
				break;
			}

			case ONRSPQRYCOMBINSTRUMENTGUARD:
			{
				this->processRspQryCombInstrumentGuard(&task);
				break;
			}

			case ONRSPQRYCOMBACTION:
			{
				this->processRspQryCombAction(&task);
				break;
			}

			case ONRSPQRYTRANSFERSERIAL:
			{
				this->processRspQryTransferSerial(&task);
				break;
			}

			case ONRSPQRYACCOUNTREGISTER:
			{
				this->processRspQryAccountregister(&task);
				break;
			}

			case ONRSPERROR:
			{
				this->processRspError(&task);
				break;
			}

			case ONRTNORDER:
			{
				this->processRtnOrder(&task);
				break;
			}

			case ONRTNTRADE:
			{
				this->processRtnTrade(&task);
				break;
			}

			case ONERRRTNORDERINSERT:
			{
				this->processErrRtnOrderInsert(&task);
				break;
			}

			case ONERRRTNORDERACTION:
			{
				this->processErrRtnOrderAction(&task);
				break;
			}

			case ONRTNINSTRUMENTSTATUS:
			{
				this->processRtnInstrumentStatus(&task);
				break;
			}

			case ONRTNTRADINGNOTICE:
			{
				this->processRtnTradingNotice(&task);
				break;
			}

			case ONRTNERRORCONDITIONALORDER:
			{
				this->processRtnErrorConditionalOrder(&task);
				break;
			}

			case ONRTNEXECORDER:
			{
				this->processRtnExecOrder(&task);
				break;
			}

			case ONERRRTNEXECORDERINSERT:
			{
				this->processErrRtnExecOrderInsert(&task);
				break;
			}

			case ONERRRTNEXECORDERACTION:
			{
				this->processErrRtnExecOrderAction(&task);
				break;
			}

			case ONERRRTNFORQUOTEINSERT:
			{
				this->processErrRtnForQuoteInsert(&task);
				break;
			}

			case ONRTNQUOTE:
			{
				this->processRtnQuote(&task);
				break;
			}

			case ONERRRTNQUOTEINSERT:
			{
				this->processErrRtnQuoteInsert(&task);
				break;
			}

			case ONERRRTNQUOTEACTION:
			{
				this->processErrRtnQuoteAction(&task);
				break;
			}

			case ONRTNFORQUOTERSP:
			{
				this->processRtnForQuoteRsp(&task);
				break;
			}

			case ONRTNCFMMCTRADINGACCOUNTTOKEN:
			{
				this->processRtnCFMMCTradingAccountToken(&task);
				break;
			}

			case ONRTNLOCK:
			{
				this->processRtnLock(&task);
				break;
			}

			case ONERRRTNLOCKINSERT:
			{
				this->processErrRtnLockInsert(&task);
				break;
			}

			case ONRTNCOMBACTION:
			{
				this->processRtnCombAction(&task);
				break;
			}

			case ONERRRTNCOMBACTIONINSERT:
			{
				this->processErrRtnCombActionInsert(&task);
				break;
			}

			case ONRSPQRYCONTRACTBANK:
			{
				this->processRspQryContractBank(&task);
				break;
			}

			case ONRSPQRYPARKEDORDER:
			{
				this->processRspQryParkedOrder(&task);
				break;
			}

			case ONRSPQRYPARKEDORDERACTION:
			{
				this->processRspQryParkedOrderAction(&task);
				break;
			}

			case ONRSPQRYTRADINGNOTICE:
			{
				this->processRspQryTradingNotice(&task);
				break;
			}

			case ONRSPQRYBROKERTRADINGPARAMS:
			{
				this->processRspQryBrokerTradingParams(&task);
				break;
			}

			case ONRSPQRYBROKERTRADINGALGOS:
			{
				this->processRspQryBrokerTradingAlgos(&task);
				break;
			}

			case ONRSPQUERYCFMMCTRADINGACCOUNTTOKEN:
			{
				this->processRspQueryCFMMCTradingAccountToken(&task);
				break;
			}

			case ONRTNFROMBANKTOFUTUREBYBANK:
			{
				this->processRtnFromBankToFutureByBank(&task);
				break;
			}

			case ONRTNFROMFUTURETOBANKBYBANK:
			{
				this->processRtnFromFutureToBankByBank(&task);
				break;
			}

			case ONRTNREPEALFROMBANKTOFUTUREBYBANK:
			{
				this->processRtnRepealFromBankToFutureByBank(&task);
				break;
			}

			case ONRTNREPEALFROMFUTURETOBANKBYBANK:
			{
				this->processRtnRepealFromFutureToBankByBank(&task);
				break;
			}

			case ONRTNFROMBANKTOFUTUREBYFUTURE:
			{
				this->processRtnFromBankToFutureByFuture(&task);
				break;
			}

			case ONRTNFROMFUTURETOBANKBYFUTURE:
			{
				this->processRtnFromFutureToBankByFuture(&task);
				break;
			}

			case ONRTNREPEALFROMBANKTOFUTUREBYFUTUREMANUAL:
			{
				this->processRtnRepealFromBankToFutureByFutureManual(&task);
				break;
			}

			case ONRTNREPEALFROMFUTURETOBANKBYFUTUREMANUAL:
			{
				this->processRtnRepealFromFutureToBankByFutureManual(&task);
				break;
			}

			case ONRTNQUERYBANKBALANCEBYFUTURE:
			{
				this->processRtnQueryBankBalanceByFuture(&task);
				break;
			}

			case ONERRRTNBANKTOFUTUREBYFUTURE:
			{
				this->processErrRtnBankToFutureByFuture(&task);
				break;
			}

			case ONERRRTNFUTURETOBANKBYFUTURE:
			{
				this->processErrRtnFutureToBankByFuture(&task);
				break;
			}

			case ONERRRTNREPEALBANKTOFUTUREBYFUTUREMANUAL:
			{
				this->processErrRtnRepealBankToFutureByFutureManual(&task);
				break;
			}

			case ONERRRTNREPEALFUTURETOBANKBYFUTUREMANUAL:
			{
				this->processErrRtnRepealFutureToBankByFutureManual(&task);
				break;
			}

			case ONERRRTNQUERYBANKBALANCEBYFUTURE:
			{
				this->processErrRtnQueryBankBalanceByFuture(&task);
				break;
			}

			case ONRTNREPEALFROMBANKTOFUTUREBYFUTURE:
			{
				this->processRtnRepealFromBankToFutureByFuture(&task);
				break;
			}

			case ONRTNREPEALFROMFUTURETOBANKBYFUTURE:
			{
				this->processRtnRepealFromFutureToBankByFuture(&task);
				break;
			}

			case ONRSPFROMBANKTOFUTUREBYFUTURE:
			{
				this->processRspFromBankToFutureByFuture(&task);
				break;
			}

			case ONRSPFROMFUTURETOBANKBYFUTURE:
			{
				this->processRspFromFutureToBankByFuture(&task);
				break;
			}

			case ONRSPQUERYBANKACCOUNTMONEYBYFUTURE:
			{
				this->processRspQueryBankAccountMoneyByFuture(&task);
				break;
			}

			case ONRTNOPENACCOUNTBYBANK:
			{
				this->processRtnOpenAccountByBank(&task);
				break;
			}

			case ONRTNCANCELACCOUNTBYBANK:
			{
				this->processRtnCancelAccountByBank(&task);
				break;
			}

			case ONRTNCHANGEACCOUNTBYBANK:
			{
				this->processRtnChangeAccountByBank(&task);
				break;
			}


            };
        }
    }
    catch (const TerminatedError&)
    {
    }
};

void TdApi::processFrontConnected(Task *task)
{
	gil_scoped_acquire acquire;
	this->onFrontConnected();
};

void TdApi::processFrontDisconnected(Task *task)
{
	gil_scoped_acquire acquire;
	this->onFrontDisconnected(task->task_id);
};

void TdApi::processHeartBeatWarning(Task *task)
{
	gil_scoped_acquire acquire;
	this->onHeartBeatWarning(task->task_id);
};

void TdApi::processRspAuthenticate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspAuthenticateField *task_data = (CThostFtdcRspAuthenticateField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["UserID"] = toUtf(task_data->UserID);
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspAuthenticate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspUserLogin(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspUserLoginField *task_data = (CThostFtdcRspUserLoginField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspUserLogin(data, error, task->task_id, task->task_last);
};

void TdApi::processRspUserLogout(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcUserLogoutField *task_data = (CThostFtdcUserLogoutField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspUserLogout(data, error, task->task_id, task->task_last);
};

void TdApi::processRspUserPasswordUpdate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcUserPasswordUpdateField *task_data = (CThostFtdcUserPasswordUpdateField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspUserPasswordUpdate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspTradingAccountPasswordUpdate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradingAccountPasswordUpdateField *task_data = (CThostFtdcTradingAccountPasswordUpdateField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["AccountID"] = toUtf(task_data->AccountID);
		data["OldPassword"] = toUtf(task_data->OldPassword);
		data["NewPassword"] = toUtf(task_data->NewPassword);
		data["CurrencyID"] = toUtf(task_data->CurrencyID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspTradingAccountPasswordUpdate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputOrderField *task_data = (CThostFtdcInputOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["OrderPriceType"] = task_data->OrderPriceType;
		data["Direction"] = task_data->Direction;
		data["CombOffsetFlag"] = toUtf(task_data->CombOffsetFlag);
		data["CombHedgeFlag"] = toUtf(task_data->CombHedgeFlag);
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeTotalOriginal"] = task_data->VolumeTotalOriginal;
		data["TimeCondition"] = task_data->TimeCondition;
		data["GTDDate"] = toUtf(task_data->GTDDate);
		data["VolumeCondition"] = task_data->VolumeCondition;
		data["MinVolume"] = task_data->MinVolume;
		data["ContingentCondition"] = task_data->ContingentCondition;
		data["StopPrice"] = task_data->StopPrice;
		data["ForceCloseReason"] = task_data->ForceCloseReason;
		data["IsAutoSuspend"] = task_data->IsAutoSuspend;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["RequestID"] = task_data->RequestID;
		data["UserForceClose"] = task_data->UserForceClose;
		data["IsSwapOrder"] = task_data->IsSwapOrder;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspOrderInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspParkedOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcParkedOrderField *task_data = (CThostFtdcParkedOrderField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspParkedOrderInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspParkedOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcParkedOrderActionField *task_data = (CThostFtdcParkedOrderActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspParkedOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputOrderActionField *task_data = (CThostFtdcInputOrderActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQueryMaxOrderVolume(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcQueryMaxOrderVolumeField *task_data = (CThostFtdcQueryMaxOrderVolumeField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["Direction"] = task_data->Direction;
		data["OffsetFlag"] = task_data->OffsetFlag;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["MaxVolume"] = task_data->MaxVolume;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQueryMaxOrderVolume(data, error, task->task_id, task->task_last);
};

void TdApi::processRspSettlementInfoConfirm(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcSettlementInfoConfirmField *task_data = (CThostFtdcSettlementInfoConfirmField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspSettlementInfoConfirm(data, error, task->task_id, task->task_last);
};

void TdApi::processRspRemoveParkedOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRemoveParkedOrderField *task_data = (CThostFtdcRemoveParkedOrderField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspRemoveParkedOrder(data, error, task->task_id, task->task_last);
};

void TdApi::processRspRemoveParkedOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRemoveParkedOrderActionField *task_data = (CThostFtdcRemoveParkedOrderActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspRemoveParkedOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspExecOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputExecOrderField *task_data = (CThostFtdcInputExecOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExecOrderRef"] = toUtf(task_data->ExecOrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OffsetFlag"] = task_data->OffsetFlag;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionType"] = task_data->ActionType;
		data["PosiDirection"] = task_data->PosiDirection;
		data["ReservePositionFlag"] = task_data->ReservePositionFlag;
		data["CloseFlag"] = task_data->CloseFlag;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspExecOrderInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspExecOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputExecOrderActionField *task_data = (CThostFtdcInputExecOrderActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspExecOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspForQuoteInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputForQuoteField *task_data = (CThostFtdcInputForQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ForQuoteRef"] = toUtf(task_data->ForQuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspForQuoteInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQuoteInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputQuoteField *task_data = (CThostFtdcInputQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["QuoteRef"] = toUtf(task_data->QuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["AskPrice"] = task_data->AskPrice;
		data["BidPrice"] = task_data->BidPrice;
		data["AskVolume"] = task_data->AskVolume;
		data["BidVolume"] = task_data->BidVolume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["AskOffsetFlag"] = task_data->AskOffsetFlag;
		data["BidOffsetFlag"] = task_data->BidOffsetFlag;
		data["AskHedgeFlag"] = task_data->AskHedgeFlag;
		data["BidHedgeFlag"] = task_data->BidHedgeFlag;
		data["AskOrderRef"] = toUtf(task_data->AskOrderRef);
		data["BidOrderRef"] = toUtf(task_data->BidOrderRef);
		data["ForQuoteSysID"] = toUtf(task_data->ForQuoteSysID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQuoteInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQuoteAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputQuoteActionField *task_data = (CThostFtdcInputQuoteActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQuoteAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspLockInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputLockField *task_data = (CThostFtdcInputLockField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["LockRef"] = toUtf(task_data->LockRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["LockType"] = task_data->LockType;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspLockInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspCombActionInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputCombActionField *task_data = (CThostFtdcInputCombActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["CombActionRef"] = toUtf(task_data->CombActionRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Direction"] = task_data->Direction;
		data["Volume"] = task_data->Volume;
		data["CombDirection"] = task_data->CombDirection;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspCombActionInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOrderField *task_data = (CThostFtdcOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["OrderPriceType"] = task_data->OrderPriceType;
		data["Direction"] = task_data->Direction;
		data["CombOffsetFlag"] = toUtf(task_data->CombOffsetFlag);
		data["CombHedgeFlag"] = toUtf(task_data->CombHedgeFlag);
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeTotalOriginal"] = task_data->VolumeTotalOriginal;
		data["TimeCondition"] = task_data->TimeCondition;
		data["GTDDate"] = toUtf(task_data->GTDDate);
		data["VolumeCondition"] = task_data->VolumeCondition;
		data["MinVolume"] = task_data->MinVolume;
		data["ContingentCondition"] = task_data->ContingentCondition;
		data["StopPrice"] = task_data->StopPrice;
		data["ForceCloseReason"] = task_data->ForceCloseReason;
		data["IsAutoSuspend"] = task_data->IsAutoSuspend;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["RequestID"] = task_data->RequestID;
		data["OrderLocalID"] = toUtf(task_data->OrderLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["OrderSysID"] = toUtf(task_data->OrderSysID);
		data["OrderSource"] = task_data->OrderSource;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OrderType"] = task_data->OrderType;
		data["VolumeTraded"] = task_data->VolumeTraded;
		data["VolumeTotal"] = task_data->VolumeTotal;
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["ActiveTime"] = toUtf(task_data->ActiveTime);
		data["SuspendTime"] = toUtf(task_data->SuspendTime);
		data["UpdateTime"] = toUtf(task_data->UpdateTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["ActiveTraderID"] = toUtf(task_data->ActiveTraderID);
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["UserForceClose"] = task_data->UserForceClose;
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerOrderSeq"] = task_data->BrokerOrderSeq;
		data["RelativeOrderSysID"] = toUtf(task_data->RelativeOrderSysID);
		data["ZCETotalTradedVolume"] = task_data->ZCETotalTradedVolume;
		data["IsSwapOrder"] = task_data->IsSwapOrder;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryOrder(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTrade(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradeField *task_data = (CThostFtdcTradeField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTrade(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestorPosition(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorPositionField *task_data = (CThostFtdcInvestorPositionField*)task->task_data;
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["PosiDirection"] = task_data->PosiDirection;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["PositionDate"] = task_data->PositionDate;
		data["YdPosition"] = task_data->YdPosition;
		data["Position"] = task_data->Position;
		data["LongFrozen"] = task_data->LongFrozen;
		data["ShortFrozen"] = task_data->ShortFrozen;
		data["LongFrozenAmount"] = task_data->LongFrozenAmount;
		data["ShortFrozenAmount"] = task_data->ShortFrozenAmount;
		data["OpenVolume"] = task_data->OpenVolume;
		data["CloseVolume"] = task_data->CloseVolume;
		data["OpenAmount"] = task_data->OpenAmount;
		data["CloseAmount"] = task_data->CloseAmount;
		data["PositionCost"] = task_data->PositionCost;
		data["PreMargin"] = task_data->PreMargin;
		data["UseMargin"] = task_data->UseMargin;
		data["FrozenMargin"] = task_data->FrozenMargin;
		data["FrozenCash"] = task_data->FrozenCash;
		data["FrozenCommission"] = task_data->FrozenCommission;
		data["CashIn"] = task_data->CashIn;
		data["Commission"] = task_data->Commission;
		data["CloseProfit"] = task_data->CloseProfit;
		data["PositionProfit"] = task_data->PositionProfit;
		data["PreSettlementPrice"] = task_data->PreSettlementPrice;
		data["SettlementPrice"] = task_data->SettlementPrice;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["OpenCost"] = task_data->OpenCost;
		data["ExchangeMargin"] = task_data->ExchangeMargin;
		data["CombPosition"] = task_data->CombPosition;
		data["CombLongFrozen"] = task_data->CombLongFrozen;
		data["CombShortFrozen"] = task_data->CombShortFrozen;
		data["CloseProfitByDate"] = task_data->CloseProfitByDate;
		data["CloseProfitByTrade"] = task_data->CloseProfitByTrade;
		data["TodayPosition"] = task_data->TodayPosition;
		data["MarginRateByMoney"] = task_data->MarginRateByMoney;
		data["MarginRateByVolume"] = task_data->MarginRateByVolume;
		data["StrikeFrozen"] = task_data->StrikeFrozen;
		data["StrikeFrozenAmount"] = task_data->StrikeFrozenAmount;
		data["AbandonFrozen"] = task_data->AbandonFrozen;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["YdStrikeFrozen"] = task_data->YdStrikeFrozen;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestorPosition(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTradingAccount(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradingAccountField *task_data = (CThostFtdcTradingAccountField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["AccountID"] = toUtf(task_data->AccountID);
		data["PreMortgage"] = task_data->PreMortgage;
		data["PreCredit"] = task_data->PreCredit;
		data["PreDeposit"] = task_data->PreDeposit;
		data["PreBalance"] = task_data->PreBalance;
		data["PreMargin"] = task_data->PreMargin;
		data["InterestBase"] = task_data->InterestBase;
		data["Interest"] = task_data->Interest;
		data["Deposit"] = task_data->Deposit;
		data["Withdraw"] = task_data->Withdraw;
		data["FrozenMargin"] = task_data->FrozenMargin;
		data["FrozenCash"] = task_data->FrozenCash;
		data["FrozenCommission"] = task_data->FrozenCommission;
		data["CurrMargin"] = task_data->CurrMargin;
		data["CashIn"] = task_data->CashIn;
		data["Commission"] = task_data->Commission;
		data["CloseProfit"] = task_data->CloseProfit;
		data["PositionProfit"] = task_data->PositionProfit;
		data["Balance"] = task_data->Balance;
		data["Available"] = task_data->Available;
		data["WithdrawQuota"] = task_data->WithdrawQuota;
		data["Reserve"] = task_data->Reserve;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["Credit"] = task_data->Credit;
		data["Mortgage"] = task_data->Mortgage;
		data["ExchangeMargin"] = task_data->ExchangeMargin;
		data["DeliveryMargin"] = task_data->DeliveryMargin;
		data["ExchangeDeliveryMargin"] = task_data->ExchangeDeliveryMargin;
		data["ReserveBalance"] = task_data->ReserveBalance;
		data["CurrencyID"] = toUtf(task_data->CurrencyID);
		data["PreFundMortgageIn"] = task_data->PreFundMortgageIn;
		data["PreFundMortgageOut"] = task_data->PreFundMortgageOut;
		data["FundMortgageIn"] = task_data->FundMortgageIn;
		data["FundMortgageOut"] = task_data->FundMortgageOut;
		data["FundMortgageAvailable"] = task_data->FundMortgageAvailable;
		data["MortgageableFund"] = task_data->MortgageableFund;
		data["SpecProductMargin"] = task_data->SpecProductMargin;
		data["SpecProductFrozenMargin"] = task_data->SpecProductFrozenMargin;
		data["SpecProductCommission"] = task_data->SpecProductCommission;
		data["SpecProductFrozenCommission"] = task_data->SpecProductFrozenCommission;
		data["SpecProductPositionProfit"] = task_data->SpecProductPositionProfit;
		data["SpecProductCloseProfit"] = task_data->SpecProductCloseProfit;
		data["SpecProductPositionProfitByAlg"] = task_data->SpecProductPositionProfitByAlg;
		data["SpecProductExchangeMargin"] = task_data->SpecProductExchangeMargin;
		data["BizType"] = task_data->BizType;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTradingAccount(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestor(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorField *task_data = (CThostFtdcInvestorField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestor(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTradingCode(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradingCodeField *task_data = (CThostFtdcTradingCodeField*)task->task_data;
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["IsActive"] = task_data->IsActive;
		data["ClientIDType"] = task_data->ClientIDType;
		data["BranchID"] = toUtf(task_data->BranchID);
		data["BizType"] = task_data->BizType;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTradingCode(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInstrumentMarginRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInstrumentMarginRateField *task_data = (CThostFtdcInstrumentMarginRateField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInstrumentMarginRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInstrumentCommissionRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInstrumentCommissionRateField *task_data = (CThostFtdcInstrumentCommissionRateField*)task->task_data;
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["InvestorRange"] = task_data->InvestorRange;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["OpenRatioByMoney"] = task_data->OpenRatioByMoney;
		data["OpenRatioByVolume"] = task_data->OpenRatioByVolume;
		data["CloseRatioByMoney"] = task_data->CloseRatioByMoney;
		data["CloseRatioByVolume"] = task_data->CloseRatioByVolume;
		data["CloseTodayRatioByMoney"] = task_data->CloseTodayRatioByMoney;
		data["CloseTodayRatioByVolume"] = task_data->CloseTodayRatioByVolume;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["BizType"] = task_data->BizType;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInstrumentCommissionRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExchange(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExchangeField *task_data = (CThostFtdcExchangeField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExchange(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryProduct(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcProductField *task_data = (CThostFtdcProductField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryProduct(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInstrument(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInstrumentField *task_data = (CThostFtdcInstrumentField*)task->task_data;
		data["MinBuyVolume"] = task_data->MinBuyVolume;
		data["MinSellVolume"] = task_data->MinSellVolume;
		data["InstrumentCode"] = toUtf(task_data->InstrumentCode);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInstrument(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryDepthMarketData(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcDepthMarketDataField *task_data = (CThostFtdcDepthMarketDataField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryDepthMarketData(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQrySettlementInfo(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcSettlementInfoField *task_data = (CThostFtdcSettlementInfoField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQrySettlementInfo(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTransferBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTransferBankField *task_data = (CThostFtdcTransferBankField*)task->task_data;
		data["BankID"] = toUtf(task_data->BankID);
		data["BankBrchID"] = toUtf(task_data->BankBrchID);
		data["BankName"] = toUtf(task_data->BankName);
		data["IsActive"] = task_data->IsActive;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTransferBank(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestorPositionDetail(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorPositionDetailField *task_data = (CThostFtdcInvestorPositionDetailField*)task->task_data;
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["Direction"] = task_data->Direction;
		data["OpenDate"] = toUtf(task_data->OpenDate);
		data["TradeID"] = toUtf(task_data->TradeID);
		data["Volume"] = task_data->Volume;
		data["OpenPrice"] = task_data->OpenPrice;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["TradeType"] = task_data->TradeType;
		data["CombInstrumentID"] = toUtf(task_data->CombInstrumentID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["CloseProfitByDate"] = task_data->CloseProfitByDate;
		data["CloseProfitByTrade"] = task_data->CloseProfitByTrade;
		data["PositionProfitByDate"] = task_data->PositionProfitByDate;
		data["PositionProfitByTrade"] = task_data->PositionProfitByTrade;
		data["Margin"] = task_data->Margin;
		data["ExchMargin"] = task_data->ExchMargin;
		data["MarginRateByMoney"] = task_data->MarginRateByMoney;
		data["MarginRateByVolume"] = task_data->MarginRateByVolume;
		data["LastSettlementPrice"] = task_data->LastSettlementPrice;
		data["SettlementPrice"] = task_data->SettlementPrice;
		data["CloseVolume"] = task_data->CloseVolume;
		data["CloseAmount"] = task_data->CloseAmount;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestorPositionDetail(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryNotice(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcNoticeField *task_data = (CThostFtdcNoticeField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["Content"] = toUtf(task_data->Content);
		data["SequenceLabel"] = toUtf(task_data->SequenceLabel);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryNotice(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQrySettlementInfoConfirm(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcSettlementInfoConfirmField *task_data = (CThostFtdcSettlementInfoConfirmField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQrySettlementInfoConfirm(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestorPositionCombineDetail(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorPositionCombineDetailField *task_data = (CThostFtdcInvestorPositionCombineDetailField*)task->task_data;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["OpenDate"] = toUtf(task_data->OpenDate);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["SettlementID"] = task_data->SettlementID;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["ComTradeID"] = toUtf(task_data->ComTradeID);
		data["TradeID"] = toUtf(task_data->TradeID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["Direction"] = task_data->Direction;
		data["TotalAmt"] = task_data->TotalAmt;
		data["Margin"] = task_data->Margin;
		data["ExchMargin"] = task_data->ExchMargin;
		data["MarginRateByMoney"] = task_data->MarginRateByMoney;
		data["MarginRateByVolume"] = task_data->MarginRateByVolume;
		data["LegID"] = task_data->LegID;
		data["LegMultiple"] = task_data->LegMultiple;
		data["CombInstrumentID"] = toUtf(task_data->CombInstrumentID);
		data["TradeGroupID"] = task_data->TradeGroupID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestorPositionCombineDetail(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCFMMCTradingAccountKey(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCFMMCTradingAccountKeyField *task_data = (CThostFtdcCFMMCTradingAccountKeyField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryCFMMCTradingAccountKey(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryEWarrantOffset(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcEWarrantOffsetField *task_data = (CThostFtdcEWarrantOffsetField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryEWarrantOffset(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestorProductGroupMargin(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorProductGroupMarginField *task_data = (CThostFtdcInvestorProductGroupMarginField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestorProductGroupMargin(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExchangeMarginRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExchangeMarginRateField *task_data = (CThostFtdcExchangeMarginRateField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExchangeMarginRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExchangeMarginRateAdjust(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExchangeMarginRateAdjustField *task_data = (CThostFtdcExchangeMarginRateAdjustField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExchangeMarginRateAdjust(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExchangeRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExchangeRateField *task_data = (CThostFtdcExchangeRateField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExchangeRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQrySecAgentACIDMap(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcSecAgentACIDMapField *task_data = (CThostFtdcSecAgentACIDMapField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQrySecAgentACIDMap(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryProductExchRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcProductExchRateField *task_data = (CThostFtdcProductExchRateField*)task->task_data;
		data["ProductID"] = toUtf(task_data->ProductID);
		data["QuoteCurrencyID"] = toUtf(task_data->QuoteCurrencyID);
		data["ExchangeRate"] = task_data->ExchangeRate;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryProductExchRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryProductGroup(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcProductGroupField *task_data = (CThostFtdcProductGroupField*)task->task_data;
		data["ProductID"] = toUtf(task_data->ProductID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ProductGroupID"] = toUtf(task_data->ProductGroupID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryProductGroup(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryOptionInstrTradeCost(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOptionInstrTradeCostField *task_data = (CThostFtdcOptionInstrTradeCostField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["FixedMargin"] = task_data->FixedMargin;
		data["MiniMargin"] = task_data->MiniMargin;
		data["Royalty"] = task_data->Royalty;
		data["ExchFixedMargin"] = task_data->ExchFixedMargin;
		data["ExchMiniMargin"] = task_data->ExchMiniMargin;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryOptionInstrTradeCost(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryOptionInstrCommRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOptionInstrCommRateField *task_data = (CThostFtdcOptionInstrCommRateField*)task->task_data;
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["InvestorRange"] = task_data->InvestorRange;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["OpenRatioByMoney"] = task_data->OpenRatioByMoney;
		data["OpenRatioByVolume"] = task_data->OpenRatioByVolume;
		data["CloseRatioByMoney"] = task_data->CloseRatioByMoney;
		data["CloseRatioByVolume"] = task_data->CloseRatioByVolume;
		data["CloseTodayRatioByMoney"] = task_data->CloseTodayRatioByMoney;
		data["CloseTodayRatioByVolume"] = task_data->CloseTodayRatioByVolume;
		data["StrikeRatioByMoney"] = task_data->StrikeRatioByMoney;
		data["StrikeRatioByVolume"] = task_data->StrikeRatioByVolume;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryOptionInstrCommRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExecOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExecOrderField *task_data = (CThostFtdcExecOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExecOrderRef"] = toUtf(task_data->ExecOrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OffsetFlag"] = task_data->OffsetFlag;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionType"] = task_data->ActionType;
		data["PosiDirection"] = task_data->PosiDirection;
		data["ReservePositionFlag"] = task_data->ReservePositionFlag;
		data["CloseFlag"] = task_data->CloseFlag;
		data["ExecOrderLocalID"] = toUtf(task_data->ExecOrderLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["ExecOrderSysID"] = toUtf(task_data->ExecOrderSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["ExecResult"] = task_data->ExecResult;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerExecOrderSeq"] = task_data->BrokerExecOrderSeq;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExecOrder(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryForQuote(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcForQuoteField *task_data = (CThostFtdcForQuoteField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryForQuote(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryQuote(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcQuoteField *task_data = (CThostFtdcQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["QuoteRef"] = toUtf(task_data->QuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["AskPrice"] = task_data->AskPrice;
		data["BidPrice"] = task_data->BidPrice;
		data["AskVolume"] = task_data->AskVolume;
		data["BidVolume"] = task_data->BidVolume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["AskOffsetFlag"] = task_data->AskOffsetFlag;
		data["BidOffsetFlag"] = task_data->BidOffsetFlag;
		data["AskHedgeFlag"] = task_data->AskHedgeFlag;
		data["BidHedgeFlag"] = task_data->BidHedgeFlag;
		data["QuoteLocalID"] = toUtf(task_data->QuoteLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["NotifySequence"] = task_data->NotifySequence;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["QuoteSysID"] = toUtf(task_data->QuoteSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["QuoteStatus"] = task_data->QuoteStatus;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["AskOrderSysID"] = toUtf(task_data->AskOrderSysID);
		data["BidOrderSysID"] = toUtf(task_data->BidOrderSysID);
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerQuoteSeq"] = task_data->BrokerQuoteSeq;
		data["AskOrderRef"] = toUtf(task_data->AskOrderRef);
		data["BidOrderRef"] = toUtf(task_data->BidOrderRef);
		data["ForQuoteSysID"] = toUtf(task_data->ForQuoteSysID);
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryQuote(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryLock(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcLockField *task_data = (CThostFtdcLockField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["LockRef"] = toUtf(task_data->LockRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["LockType"] = task_data->LockType;
		data["LockLocalID"] = toUtf(task_data->LockLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["LockSysID"] = toUtf(task_data->LockSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["LockStatus"] = task_data->LockStatus;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerLockSeq"] = task_data->BrokerLockSeq;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryLock(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryLockPosition(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcLockPositionField *task_data = (CThostFtdcLockPositionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["Volume"] = task_data->Volume;
		data["FrozenVolume"] = task_data->FrozenVolume;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryLockPosition(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryInvestorLevel(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInvestorLevelField *task_data = (CThostFtdcInvestorLevelField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["LevelType"] = task_data->LevelType;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryInvestorLevel(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryExecFreeze(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExecFreezeField *task_data = (CThostFtdcExecFreezeField*)task->task_data;
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["PosiDirection"] = task_data->PosiDirection;
		data["OptionsType"] = task_data->OptionsType;
		data["Volume"] = task_data->Volume;
		data["FrozenAmount"] = task_data->FrozenAmount;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryExecFreeze(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCombInstrumentGuard(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCombInstrumentGuardField *task_data = (CThostFtdcCombInstrumentGuardField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["GuarantRatio"] = task_data->GuarantRatio;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryCombInstrumentGuard(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCombAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCombActionField *task_data = (CThostFtdcCombActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["CombActionRef"] = toUtf(task_data->CombActionRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Direction"] = task_data->Direction;
		data["Volume"] = task_data->Volume;
		data["CombDirection"] = task_data->CombDirection;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionLocalID"] = toUtf(task_data->ActionLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["ActionStatus"] = task_data->ActionStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryCombAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTransferSerial(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTransferSerialField *task_data = (CThostFtdcTransferSerialField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTransferSerial(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryAccountregister(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcAccountregisterField *task_data = (CThostFtdcAccountregisterField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryAccountregister(data, error, task->task_id, task->task_last);
};

void TdApi::processRspError(Task *task)
{
	gil_scoped_acquire acquire;
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspError(error, task->task_id, task->task_last);
};

void TdApi::processRtnOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOrderField *task_data = (CThostFtdcOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["OrderPriceType"] = task_data->OrderPriceType;
		data["Direction"] = task_data->Direction;
		data["CombOffsetFlag"] = toUtf(task_data->CombOffsetFlag);
		data["CombHedgeFlag"] = toUtf(task_data->CombHedgeFlag);
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeTotalOriginal"] = task_data->VolumeTotalOriginal;
		data["TimeCondition"] = task_data->TimeCondition;
		data["GTDDate"] = toUtf(task_data->GTDDate);
		data["VolumeCondition"] = task_data->VolumeCondition;
		data["MinVolume"] = task_data->MinVolume;
		data["ContingentCondition"] = task_data->ContingentCondition;
		data["StopPrice"] = task_data->StopPrice;
		data["ForceCloseReason"] = task_data->ForceCloseReason;
		data["IsAutoSuspend"] = task_data->IsAutoSuspend;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["RequestID"] = task_data->RequestID;
		data["OrderLocalID"] = toUtf(task_data->OrderLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["OrderSysID"] = toUtf(task_data->OrderSysID);
		data["OrderSource"] = task_data->OrderSource;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OrderType"] = task_data->OrderType;
		data["VolumeTraded"] = task_data->VolumeTraded;
		data["VolumeTotal"] = task_data->VolumeTotal;
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["ActiveTime"] = toUtf(task_data->ActiveTime);
		data["SuspendTime"] = toUtf(task_data->SuspendTime);
		data["UpdateTime"] = toUtf(task_data->UpdateTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["ActiveTraderID"] = toUtf(task_data->ActiveTraderID);
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["UserForceClose"] = task_data->UserForceClose;
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerOrderSeq"] = task_data->BrokerOrderSeq;
		data["RelativeOrderSysID"] = toUtf(task_data->RelativeOrderSysID);
		data["ZCETotalTradedVolume"] = task_data->ZCETotalTradedVolume;
		data["IsSwapOrder"] = task_data->IsSwapOrder;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	this->onRtnOrder(data);
};

void TdApi::processRtnTrade(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradeField *task_data = (CThostFtdcTradeField*)task->task_data;
		delete task_data;
	}
	this->onRtnTrade(data);
};

void TdApi::processErrRtnOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputOrderField *task_data = (CThostFtdcInputOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["OrderPriceType"] = task_data->OrderPriceType;
		data["Direction"] = task_data->Direction;
		data["CombOffsetFlag"] = toUtf(task_data->CombOffsetFlag);
		data["CombHedgeFlag"] = toUtf(task_data->CombHedgeFlag);
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeTotalOriginal"] = task_data->VolumeTotalOriginal;
		data["TimeCondition"] = task_data->TimeCondition;
		data["GTDDate"] = toUtf(task_data->GTDDate);
		data["VolumeCondition"] = task_data->VolumeCondition;
		data["MinVolume"] = task_data->MinVolume;
		data["ContingentCondition"] = task_data->ContingentCondition;
		data["StopPrice"] = task_data->StopPrice;
		data["ForceCloseReason"] = task_data->ForceCloseReason;
		data["IsAutoSuspend"] = task_data->IsAutoSuspend;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["RequestID"] = task_data->RequestID;
		data["UserForceClose"] = task_data->UserForceClose;
		data["IsSwapOrder"] = task_data->IsSwapOrder;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnOrderInsert(data, error);
};

void TdApi::processErrRtnOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOrderActionField *task_data = (CThostFtdcOrderActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["OrderActionRef"] = task_data->OrderActionRef;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["RequestID"] = task_data->RequestID;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["OrderSysID"] = toUtf(task_data->OrderSysID);
		data["ActionFlag"] = task_data->ActionFlag;
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeChange"] = task_data->VolumeChange;
		data["ActionDate"] = toUtf(task_data->ActionDate);
		data["ActionTime"] = toUtf(task_data->ActionTime);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderLocalID"] = toUtf(task_data->OrderLocalID);
		data["ActionLocalID"] = toUtf(task_data->ActionLocalID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OrderActionStatus"] = task_data->OrderActionStatus;
		data["UserID"] = toUtf(task_data->UserID);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnOrderAction(data, error);
};

void TdApi::processRtnInstrumentStatus(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInstrumentStatusField *task_data = (CThostFtdcInstrumentStatusField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["SettlementGroupID"] = toUtf(task_data->SettlementGroupID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["InstrumentStatus"] = task_data->InstrumentStatus;
		data["TradingSegmentSN"] = task_data->TradingSegmentSN;
		data["EnterTime"] = toUtf(task_data->EnterTime);
		data["EnterReason"] = task_data->EnterReason;
		delete task_data;
	}
	this->onRtnInstrumentStatus(data);
};

void TdApi::processRtnTradingNotice(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradingNoticeInfoField *task_data = (CThostFtdcTradingNoticeInfoField*)task->task_data;
		delete task_data;
	}
	this->onRtnTradingNotice(data);
};

void TdApi::processRtnErrorConditionalOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcErrorConditionalOrderField *task_data = (CThostFtdcErrorConditionalOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["OrderPriceType"] = task_data->OrderPriceType;
		data["Direction"] = task_data->Direction;
		data["CombOffsetFlag"] = toUtf(task_data->CombOffsetFlag);
		data["CombHedgeFlag"] = toUtf(task_data->CombHedgeFlag);
		data["LimitPrice"] = task_data->LimitPrice;
		data["VolumeTotalOriginal"] = task_data->VolumeTotalOriginal;
		data["TimeCondition"] = task_data->TimeCondition;
		data["GTDDate"] = toUtf(task_data->GTDDate);
		data["VolumeCondition"] = task_data->VolumeCondition;
		data["MinVolume"] = task_data->MinVolume;
		data["ContingentCondition"] = task_data->ContingentCondition;
		data["StopPrice"] = task_data->StopPrice;
		data["ForceCloseReason"] = task_data->ForceCloseReason;
		data["IsAutoSuspend"] = task_data->IsAutoSuspend;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["RequestID"] = task_data->RequestID;
		data["OrderLocalID"] = toUtf(task_data->OrderLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["OrderSysID"] = toUtf(task_data->OrderSysID);
		data["OrderSource"] = task_data->OrderSource;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OrderType"] = task_data->OrderType;
		data["VolumeTraded"] = task_data->VolumeTraded;
		data["VolumeTotal"] = task_data->VolumeTotal;
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["ActiveTime"] = toUtf(task_data->ActiveTime);
		data["SuspendTime"] = toUtf(task_data->SuspendTime);
		data["UpdateTime"] = toUtf(task_data->UpdateTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["ActiveTraderID"] = toUtf(task_data->ActiveTraderID);
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["UserForceClose"] = task_data->UserForceClose;
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerOrderSeq"] = task_data->BrokerOrderSeq;
		data["RelativeOrderSysID"] = toUtf(task_data->RelativeOrderSysID);
		data["ZCETotalTradedVolume"] = task_data->ZCETotalTradedVolume;
		data["ErrorID"] = task_data->ErrorID;
		data["ErrorMsg"] = toUtf(task_data->ErrorMsg);
		data["IsSwapOrder"] = task_data->IsSwapOrder;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	this->onRtnErrorConditionalOrder(data);
};

void TdApi::processRtnExecOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExecOrderField *task_data = (CThostFtdcExecOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExecOrderRef"] = toUtf(task_data->ExecOrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OffsetFlag"] = task_data->OffsetFlag;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionType"] = task_data->ActionType;
		data["PosiDirection"] = task_data->PosiDirection;
		data["ReservePositionFlag"] = task_data->ReservePositionFlag;
		data["CloseFlag"] = task_data->CloseFlag;
		data["ExecOrderLocalID"] = toUtf(task_data->ExecOrderLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["ExecOrderSysID"] = toUtf(task_data->ExecOrderSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["ExecResult"] = task_data->ExecResult;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerExecOrderSeq"] = task_data->BrokerExecOrderSeq;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	this->onRtnExecOrder(data);
};

void TdApi::processErrRtnExecOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputExecOrderField *task_data = (CThostFtdcInputExecOrderField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ExecOrderRef"] = toUtf(task_data->ExecOrderRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OffsetFlag"] = task_data->OffsetFlag;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionType"] = task_data->ActionType;
		data["PosiDirection"] = task_data->PosiDirection;
		data["ReservePositionFlag"] = task_data->ReservePositionFlag;
		data["CloseFlag"] = task_data->CloseFlag;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnExecOrderInsert(data, error);
};

void TdApi::processErrRtnExecOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcExecOrderActionField *task_data = (CThostFtdcExecOrderActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["ExecOrderActionRef"] = task_data->ExecOrderActionRef;
		data["ExecOrderRef"] = toUtf(task_data->ExecOrderRef);
		data["RequestID"] = task_data->RequestID;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ExecOrderSysID"] = toUtf(task_data->ExecOrderSysID);
		data["ActionFlag"] = task_data->ActionFlag;
		data["ActionDate"] = toUtf(task_data->ActionDate);
		data["ActionTime"] = toUtf(task_data->ActionTime);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["ExecOrderLocalID"] = toUtf(task_data->ExecOrderLocalID);
		data["ActionLocalID"] = toUtf(task_data->ActionLocalID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OrderActionStatus"] = task_data->OrderActionStatus;
		data["UserID"] = toUtf(task_data->UserID);
		data["ActionType"] = task_data->ActionType;
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnExecOrderAction(data, error);
};

void TdApi::processErrRtnForQuoteInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputForQuoteField *task_data = (CThostFtdcInputForQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["ForQuoteRef"] = toUtf(task_data->ForQuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnForQuoteInsert(data, error);
};

void TdApi::processRtnQuote(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcQuoteField *task_data = (CThostFtdcQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["QuoteRef"] = toUtf(task_data->QuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["AskPrice"] = task_data->AskPrice;
		data["BidPrice"] = task_data->BidPrice;
		data["AskVolume"] = task_data->AskVolume;
		data["BidVolume"] = task_data->BidVolume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["AskOffsetFlag"] = task_data->AskOffsetFlag;
		data["BidOffsetFlag"] = task_data->BidOffsetFlag;
		data["AskHedgeFlag"] = task_data->AskHedgeFlag;
		data["BidHedgeFlag"] = task_data->BidHedgeFlag;
		data["QuoteLocalID"] = toUtf(task_data->QuoteLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["NotifySequence"] = task_data->NotifySequence;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["QuoteSysID"] = toUtf(task_data->QuoteSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["QuoteStatus"] = task_data->QuoteStatus;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["AskOrderSysID"] = toUtf(task_data->AskOrderSysID);
		data["BidOrderSysID"] = toUtf(task_data->BidOrderSysID);
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerQuoteSeq"] = task_data->BrokerQuoteSeq;
		data["AskOrderRef"] = toUtf(task_data->AskOrderRef);
		data["BidOrderRef"] = toUtf(task_data->BidOrderRef);
		data["ForQuoteSysID"] = toUtf(task_data->ForQuoteSysID);
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	this->onRtnQuote(data);
};

void TdApi::processErrRtnQuoteInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputQuoteField *task_data = (CThostFtdcInputQuoteField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["QuoteRef"] = toUtf(task_data->QuoteRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["AskPrice"] = task_data->AskPrice;
		data["BidPrice"] = task_data->BidPrice;
		data["AskVolume"] = task_data->AskVolume;
		data["BidVolume"] = task_data->BidVolume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["AskOffsetFlag"] = task_data->AskOffsetFlag;
		data["BidOffsetFlag"] = task_data->BidOffsetFlag;
		data["AskHedgeFlag"] = task_data->AskHedgeFlag;
		data["BidHedgeFlag"] = task_data->BidHedgeFlag;
		data["AskOrderRef"] = toUtf(task_data->AskOrderRef);
		data["BidOrderRef"] = toUtf(task_data->BidOrderRef);
		data["ForQuoteSysID"] = toUtf(task_data->ForQuoteSysID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnQuoteInsert(data, error);
};

void TdApi::processErrRtnQuoteAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcQuoteActionField *task_data = (CThostFtdcQuoteActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["QuoteActionRef"] = task_data->QuoteActionRef;
		data["QuoteRef"] = toUtf(task_data->QuoteRef);
		data["RequestID"] = task_data->RequestID;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["QuoteSysID"] = toUtf(task_data->QuoteSysID);
		data["ActionFlag"] = task_data->ActionFlag;
		data["ActionDate"] = toUtf(task_data->ActionDate);
		data["ActionTime"] = toUtf(task_data->ActionTime);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["QuoteLocalID"] = toUtf(task_data->QuoteLocalID);
		data["ActionLocalID"] = toUtf(task_data->ActionLocalID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["OrderActionStatus"] = task_data->OrderActionStatus;
		data["UserID"] = toUtf(task_data->UserID);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnQuoteAction(data, error);
};

void TdApi::processRtnForQuoteRsp(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcForQuoteRspField *task_data = (CThostFtdcForQuoteRspField*)task->task_data;
		delete task_data;
	}
	this->onRtnForQuoteRsp(data);
};

void TdApi::processRtnCFMMCTradingAccountToken(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCFMMCTradingAccountTokenField *task_data = (CThostFtdcCFMMCTradingAccountTokenField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["AccountID"] = toUtf(task_data->AccountID);
		data["KeyID"] = task_data->KeyID;
		data["Token"] = toUtf(task_data->Token);
		delete task_data;
	}
	this->onRtnCFMMCTradingAccountToken(data);
};

void TdApi::processRtnLock(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcLockField *task_data = (CThostFtdcLockField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["LockRef"] = toUtf(task_data->LockRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["LockType"] = task_data->LockType;
		data["LockLocalID"] = toUtf(task_data->LockLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["OrderSubmitStatus"] = task_data->OrderSubmitStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["LockSysID"] = toUtf(task_data->LockSysID);
		data["InsertDate"] = toUtf(task_data->InsertDate);
		data["InsertTime"] = toUtf(task_data->InsertTime);
		data["CancelTime"] = toUtf(task_data->CancelTime);
		data["LockStatus"] = task_data->LockStatus;
		data["ClearingPartID"] = toUtf(task_data->ClearingPartID);
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		data["ActiveUserID"] = toUtf(task_data->ActiveUserID);
		data["BrokerLockSeq"] = task_data->BrokerLockSeq;
		data["BranchID"] = toUtf(task_data->BranchID);
		delete task_data;
	}
	this->onRtnLock(data);
};

void TdApi::processErrRtnLockInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputLockField *task_data = (CThostFtdcInputLockField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["LockRef"] = toUtf(task_data->LockRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Volume"] = task_data->Volume;
		data["RequestID"] = task_data->RequestID;
		data["BusinessUnit"] = toUtf(task_data->BusinessUnit);
		data["LockType"] = task_data->LockType;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnLockInsert(data, error);
};

void TdApi::processRtnCombAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCombActionField *task_data = (CThostFtdcCombActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["CombActionRef"] = toUtf(task_data->CombActionRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Direction"] = task_data->Direction;
		data["Volume"] = task_data->Volume;
		data["CombDirection"] = task_data->CombDirection;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ActionLocalID"] = toUtf(task_data->ActionLocalID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ParticipantID"] = toUtf(task_data->ParticipantID);
		data["ClientID"] = toUtf(task_data->ClientID);
		data["ExchangeInstID"] = toUtf(task_data->ExchangeInstID);
		data["TraderID"] = toUtf(task_data->TraderID);
		data["InstallID"] = task_data->InstallID;
		data["ActionStatus"] = task_data->ActionStatus;
		data["NotifySequence"] = task_data->NotifySequence;
		data["TradingDay"] = toUtf(task_data->TradingDay);
		data["SettlementID"] = task_data->SettlementID;
		data["SequenceNo"] = task_data->SequenceNo;
		data["FrontID"] = task_data->FrontID;
		data["SessionID"] = task_data->SessionID;
		data["UserProductInfo"] = toUtf(task_data->UserProductInfo);
		data["StatusMsg"] = toUtf(task_data->StatusMsg);
		delete task_data;
	}
	this->onRtnCombAction(data);
};

void TdApi::processErrRtnCombActionInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcInputCombActionField *task_data = (CThostFtdcInputCombActionField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["InvestorID"] = toUtf(task_data->InvestorID);
		data["InstrumentID"] = toUtf(task_data->InstrumentID);
		data["CombActionRef"] = toUtf(task_data->CombActionRef);
		data["UserID"] = toUtf(task_data->UserID);
		data["Direction"] = task_data->Direction;
		data["Volume"] = task_data->Volume;
		data["CombDirection"] = task_data->CombDirection;
		data["HedgeFlag"] = task_data->HedgeFlag;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnCombActionInsert(data, error);
};

void TdApi::processRspQryContractBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcContractBankField *task_data = (CThostFtdcContractBankField*)task->task_data;
		data["BrokerID"] = toUtf(task_data->BrokerID);
		data["BankID"] = toUtf(task_data->BankID);
		data["BankBrchID"] = toUtf(task_data->BankBrchID);
		data["BankName"] = toUtf(task_data->BankName);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryContractBank(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryParkedOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcParkedOrderField *task_data = (CThostFtdcParkedOrderField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryParkedOrder(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryParkedOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcParkedOrderActionField *task_data = (CThostFtdcParkedOrderActionField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryParkedOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTradingNotice(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcTradingNoticeField *task_data = (CThostFtdcTradingNoticeField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryTradingNotice(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryBrokerTradingParams(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcBrokerTradingParamsField *task_data = (CThostFtdcBrokerTradingParamsField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryBrokerTradingParams(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryBrokerTradingAlgos(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcBrokerTradingAlgosField *task_data = (CThostFtdcBrokerTradingAlgosField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQryBrokerTradingAlgos(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQueryCFMMCTradingAccountToken(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcQueryCFMMCTradingAccountTokenField *task_data = (CThostFtdcQueryCFMMCTradingAccountTokenField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQueryCFMMCTradingAccountToken(data, error, task->task_id, task->task_last);
};

void TdApi::processRtnFromBankToFutureByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField*)task->task_data;
		delete task_data;
	}
	this->onRtnFromBankToFutureByBank(data);
};

void TdApi::processRtnFromFutureToBankByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField*)task->task_data;
		delete task_data;
	}
	this->onRtnFromFutureToBankByBank(data);
};

void TdApi::processRtnRepealFromBankToFutureByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromBankToFutureByBank(data);
};

void TdApi::processRtnRepealFromFutureToBankByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromFutureToBankByBank(data);
};

void TdApi::processRtnFromBankToFutureByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField*)task->task_data;
		delete task_data;
	}
	this->onRtnFromBankToFutureByFuture(data);
};

void TdApi::processRtnFromFutureToBankByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField*)task->task_data;
		delete task_data;
	}
	this->onRtnFromFutureToBankByFuture(data);
};

void TdApi::processRtnRepealFromBankToFutureByFutureManual(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromBankToFutureByFutureManual(data);
};

void TdApi::processRtnRepealFromFutureToBankByFutureManual(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromFutureToBankByFutureManual(data);
};

void TdApi::processRtnQueryBankBalanceByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcNotifyQueryAccountField *task_data = (CThostFtdcNotifyQueryAccountField*)task->task_data;
		delete task_data;
	}
	this->onRtnQueryBankBalanceByFuture(data);
};

void TdApi::processErrRtnBankToFutureByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnBankToFutureByFuture(data, error);
};

void TdApi::processErrRtnFutureToBankByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnFutureToBankByFuture(data, error);
};

void TdApi::processErrRtnRepealBankToFutureByFutureManual(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqRepealField *task_data = (CThostFtdcReqRepealField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnRepealBankToFutureByFutureManual(data, error);
};

void TdApi::processErrRtnRepealFutureToBankByFutureManual(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqRepealField *task_data = (CThostFtdcReqRepealField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnRepealFutureToBankByFutureManual(data, error);
};

void TdApi::processErrRtnQueryBankBalanceByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqQueryAccountField *task_data = (CThostFtdcReqQueryAccountField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onErrRtnQueryBankBalanceByFuture(data, error);
};

void TdApi::processRtnRepealFromBankToFutureByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromBankToFutureByFuture(data);
};

void TdApi::processRtnRepealFromFutureToBankByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField*)task->task_data;
		delete task_data;
	}
	this->onRtnRepealFromFutureToBankByFuture(data);
};

void TdApi::processRspFromBankToFutureByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspFromBankToFutureByFuture(data, error, task->task_id, task->task_last);
};

void TdApi::processRspFromFutureToBankByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspFromFutureToBankByFuture(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQueryBankAccountMoneyByFuture(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcReqQueryAccountField *task_data = (CThostFtdcReqQueryAccountField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField*)task->task_error;
		delete task_error;
	}
	this->onRspQueryBankAccountMoneyByFuture(data, error, task->task_id, task->task_last);
};

void TdApi::processRtnOpenAccountByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcOpenAccountField *task_data = (CThostFtdcOpenAccountField*)task->task_data;
		delete task_data;
	}
	this->onRtnOpenAccountByBank(data);
};

void TdApi::processRtnCancelAccountByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcCancelAccountField *task_data = (CThostFtdcCancelAccountField*)task->task_data;
		delete task_data;
	}
	this->onRtnCancelAccountByBank(data);
};

void TdApi::processRtnChangeAccountByBank(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CThostFtdcChangeAccountField *task_data = (CThostFtdcChangeAccountField*)task->task_data;
		delete task_data;
	}
	this->onRtnChangeAccountByBank(data);
};



///-------------------------------------------------------------------------------------
///��������
///-------------------------------------------------------------------------------------

void TdApi::createFtdcTraderApi(string pszFlowPath)
{
    this->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath.c_str());
    this->api->RegisterSpi(this);
};

void TdApi::release()
{
    this->api->Release();
};

void TdApi::init()
{
    this->active = true;
    this->task_thread = thread(&TdApi::processTask, this);

    this->api->Init();
};

int TdApi::join()
{
    int i = this->api->Join();
    return i;
};

int TdApi::exit()
{
    this->active = false;
    this->task_queue.terminate();
    this->task_thread.join();

    this->api->RegisterSpi(NULL);
    this->api->Release();
    this->api = NULL;
    return 1;
};

string TdApi::getTradingDay()
{
    string day = this->api->GetTradingDay();
    return day;
};

void TdApi::registerFront(string pszFrontAddress)
{
    this->api->RegisterFront((char*)pszFrontAddress.c_str());
};

void TdApi::subscribePrivateTopic(int nType)
{
    this->api->SubscribePrivateTopic((THOST_TE_RESUME_TYPE) nType);
};

void TdApi::subscribePublicTopic(int nType)
{
    this->api->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nType);
};

int TdApi::reqAuthenticate(const dict &req, int reqid)
{
	CThostFtdcReqAuthenticateField myreq = CThostFtdcReqAuthenticateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "UserID", myreq.UserID);
	getString(req, "UserProductInfo", myreq.UserProductInfo);
	getString(req, "AuthCode", myreq.AuthCode);
	int i = this->api->ReqAuthenticate(&myreq, reqid);
	return i;
};

int TdApi::reqUserLogin(const dict &req, int reqid)
{
	CThostFtdcReqUserLoginField myreq = CThostFtdcReqUserLoginField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "TradingDay", myreq.TradingDay);
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "UserID", myreq.UserID);
	getString(req, "Password", myreq.Password);
	getString(req, "UserProductInfo", myreq.UserProductInfo);
	getString(req, "InterfaceProductInfo", myreq.InterfaceProductInfo);
	getString(req, "ProtocolInfo", myreq.ProtocolInfo);
	getString(req, "MacAddress", myreq.MacAddress);
	getString(req, "OneTimePassword", myreq.OneTimePassword);
	getString(req, "ClientIPAddress", myreq.ClientIPAddress);
	int i = this->api->ReqUserLogin(&myreq, reqid);
	return i;
};

int TdApi::reqUserLogout(const dict &req, int reqid)
{
	CThostFtdcUserLogoutField myreq = CThostFtdcUserLogoutField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqUserLogout(&myreq, reqid);
	return i;
};

int TdApi::reqUserPasswordUpdate(const dict &req, int reqid)
{
	CThostFtdcUserPasswordUpdateField myreq = CThostFtdcUserPasswordUpdateField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqUserPasswordUpdate(&myreq, reqid);
	return i;
};

int TdApi::reqTradingAccountPasswordUpdate(const dict &req, int reqid)
{
	CThostFtdcTradingAccountPasswordUpdateField myreq = CThostFtdcTradingAccountPasswordUpdateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "AccountID", myreq.AccountID);
	getString(req, "OldPassword", myreq.OldPassword);
	getString(req, "NewPassword", myreq.NewPassword);
	getString(req, "CurrencyID", myreq.CurrencyID);
	int i = this->api->ReqTradingAccountPasswordUpdate(&myreq, reqid);
	return i;
};

int TdApi::reqOrderInsert(const dict &req, int reqid)
{
	CThostFtdcInputOrderField myreq = CThostFtdcInputOrderField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "OrderRef", myreq.OrderRef);
	getString(req, "UserID", myreq.UserID);
	getChar(req, "OrderPriceType", &myreq.OrderPriceType);
	getChar(req, "Direction", &myreq.Direction);
	getString(req, "CombOffsetFlag", myreq.CombOffsetFlag);
	getString(req, "CombHedgeFlag", myreq.CombHedgeFlag);
	getDouble(req, "LimitPrice", &myreq.LimitPrice);
	getInt(req, "VolumeTotalOriginal", &myreq.VolumeTotalOriginal);
	getChar(req, "TimeCondition", &myreq.TimeCondition);
	getString(req, "GTDDate", myreq.GTDDate);
	getChar(req, "VolumeCondition", &myreq.VolumeCondition);
	getInt(req, "MinVolume", &myreq.MinVolume);
	getChar(req, "ContingentCondition", &myreq.ContingentCondition);
	getDouble(req, "StopPrice", &myreq.StopPrice);
	getChar(req, "ForceCloseReason", &myreq.ForceCloseReason);
	getInt(req, "IsAutoSuspend", &myreq.IsAutoSuspend);
	getString(req, "BusinessUnit", myreq.BusinessUnit);
	getInt(req, "RequestID", &myreq.RequestID);
	getInt(req, "UserForceClose", &myreq.UserForceClose);
	getInt(req, "IsSwapOrder", &myreq.IsSwapOrder);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqOrderInsert(&myreq, reqid);
	return i;
};

int TdApi::reqParkedOrderInsert(const dict &req, int reqid)
{
	CThostFtdcParkedOrderField myreq = CThostFtdcParkedOrderField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqParkedOrderInsert(&myreq, reqid);
	return i;
};

int TdApi::reqParkedOrderAction(const dict &req, int reqid)
{
	CThostFtdcParkedOrderActionField myreq = CThostFtdcParkedOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqParkedOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqOrderAction(const dict &req, int reqid)
{
	CThostFtdcInputOrderActionField myreq = CThostFtdcInputOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqQueryMaxOrderVolume(const dict &req, int reqid)
{
	CThostFtdcQueryMaxOrderVolumeField myreq = CThostFtdcQueryMaxOrderVolumeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getChar(req, "Direction", &myreq.Direction);
	getChar(req, "OffsetFlag", &myreq.OffsetFlag);
	getChar(req, "HedgeFlag", &myreq.HedgeFlag);
	getInt(req, "MaxVolume", &myreq.MaxVolume);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQueryMaxOrderVolume(&myreq, reqid);
	return i;
};

int TdApi::reqSettlementInfoConfirm(const dict &req, int reqid)
{
	CThostFtdcSettlementInfoConfirmField myreq = CThostFtdcSettlementInfoConfirmField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqSettlementInfoConfirm(&myreq, reqid);
	return i;
};

int TdApi::reqRemoveParkedOrder(const dict &req, int reqid)
{
	CThostFtdcRemoveParkedOrderField myreq = CThostFtdcRemoveParkedOrderField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqRemoveParkedOrder(&myreq, reqid);
	return i;
};

int TdApi::reqRemoveParkedOrderAction(const dict &req, int reqid)
{
	CThostFtdcRemoveParkedOrderActionField myreq = CThostFtdcRemoveParkedOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqRemoveParkedOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqExecOrderInsert(const dict &req, int reqid)
{
	CThostFtdcInputExecOrderField myreq = CThostFtdcInputExecOrderField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExecOrderRef", myreq.ExecOrderRef);
	getString(req, "UserID", myreq.UserID);
	getInt(req, "Volume", &myreq.Volume);
	getInt(req, "RequestID", &myreq.RequestID);
	getString(req, "BusinessUnit", myreq.BusinessUnit);
	getChar(req, "OffsetFlag", &myreq.OffsetFlag);
	getChar(req, "HedgeFlag", &myreq.HedgeFlag);
	getChar(req, "ActionType", &myreq.ActionType);
	getChar(req, "PosiDirection", &myreq.PosiDirection);
	getChar(req, "ReservePositionFlag", &myreq.ReservePositionFlag);
	getChar(req, "CloseFlag", &myreq.CloseFlag);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqExecOrderInsert(&myreq, reqid);
	return i;
};

int TdApi::reqExecOrderAction(const dict &req, int reqid)
{
	CThostFtdcInputExecOrderActionField myreq = CThostFtdcInputExecOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqExecOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqForQuoteInsert(const dict &req, int reqid)
{
	CThostFtdcInputForQuoteField myreq = CThostFtdcInputForQuoteField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ForQuoteRef", myreq.ForQuoteRef);
	getString(req, "UserID", myreq.UserID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqForQuoteInsert(&myreq, reqid);
	return i;
};

int TdApi::reqQuoteInsert(const dict &req, int reqid)
{
	CThostFtdcInputQuoteField myreq = CThostFtdcInputQuoteField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "QuoteRef", myreq.QuoteRef);
	getString(req, "UserID", myreq.UserID);
	getDouble(req, "AskPrice", &myreq.AskPrice);
	getDouble(req, "BidPrice", &myreq.BidPrice);
	getInt(req, "AskVolume", &myreq.AskVolume);
	getInt(req, "BidVolume", &myreq.BidVolume);
	getInt(req, "RequestID", &myreq.RequestID);
	getString(req, "BusinessUnit", myreq.BusinessUnit);
	getChar(req, "AskOffsetFlag", &myreq.AskOffsetFlag);
	getChar(req, "BidOffsetFlag", &myreq.BidOffsetFlag);
	getChar(req, "AskHedgeFlag", &myreq.AskHedgeFlag);
	getChar(req, "BidHedgeFlag", &myreq.BidHedgeFlag);
	getString(req, "AskOrderRef", myreq.AskOrderRef);
	getString(req, "BidOrderRef", myreq.BidOrderRef);
	getString(req, "ForQuoteSysID", myreq.ForQuoteSysID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQuoteInsert(&myreq, reqid);
	return i;
};

int TdApi::reqQuoteAction(const dict &req, int reqid)
{
	CThostFtdcInputQuoteActionField myreq = CThostFtdcInputQuoteActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQuoteAction(&myreq, reqid);
	return i;
};

int TdApi::reqLockInsert(const dict &req, int reqid)
{
	CThostFtdcInputLockField myreq = CThostFtdcInputLockField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "LockRef", myreq.LockRef);
	getString(req, "UserID", myreq.UserID);
	getInt(req, "Volume", &myreq.Volume);
	getInt(req, "RequestID", &myreq.RequestID);
	getString(req, "BusinessUnit", myreq.BusinessUnit);
	getChar(req, "LockType", &myreq.LockType);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqLockInsert(&myreq, reqid);
	return i;
};

int TdApi::reqCombActionInsert(const dict &req, int reqid)
{
	CThostFtdcInputCombActionField myreq = CThostFtdcInputCombActionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "CombActionRef", myreq.CombActionRef);
	getString(req, "UserID", myreq.UserID);
	getChar(req, "Direction", &myreq.Direction);
	getInt(req, "Volume", &myreq.Volume);
	getChar(req, "CombDirection", &myreq.CombDirection);
	getChar(req, "HedgeFlag", &myreq.HedgeFlag);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqCombActionInsert(&myreq, reqid);
	return i;
};

int TdApi::reqQryOrder(const dict &req, int reqid)
{
	CThostFtdcQryOrderField myreq = CThostFtdcQryOrderField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryOrder(&myreq, reqid);
	return i;
};

int TdApi::reqQryTrade(const dict &req, int reqid)
{
	CThostFtdcQryTradeField myreq = CThostFtdcQryTradeField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryTrade(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestorPosition(const dict &req, int reqid)
{
	CThostFtdcQryInvestorPositionField myreq = CThostFtdcQryInvestorPositionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryInvestorPosition(&myreq, reqid);
	return i;
};

int TdApi::reqQryTradingAccount(const dict &req, int reqid)
{
	CThostFtdcQryTradingAccountField myreq = CThostFtdcQryTradingAccountField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "CurrencyID", myreq.CurrencyID);
	getChar(req, "BizType", &myreq.BizType);
	int i = this->api->ReqQryTradingAccount(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestor(const dict &req, int reqid)
{
	CThostFtdcQryInvestorField myreq = CThostFtdcQryInvestorField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryInvestor(&myreq, reqid);
	return i;
};

int TdApi::reqQryTradingCode(const dict &req, int reqid)
{
	CThostFtdcQryTradingCodeField myreq = CThostFtdcQryTradingCodeField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryTradingCode(&myreq, reqid);
	return i;
};

int TdApi::reqQryInstrumentMarginRate(const dict &req, int reqid)
{
	CThostFtdcQryInstrumentMarginRateField myreq = CThostFtdcQryInstrumentMarginRateField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryInstrumentMarginRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryInstrumentCommissionRate(const dict &req, int reqid)
{
	CThostFtdcQryInstrumentCommissionRateField myreq = CThostFtdcQryInstrumentCommissionRateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryInstrumentCommissionRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryExchange(const dict &req, int reqid)
{
	CThostFtdcQryExchangeField myreq = CThostFtdcQryExchangeField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryExchange(&myreq, reqid);
	return i;
};

int TdApi::reqQryProduct(const dict &req, int reqid)
{
	CThostFtdcQryProductField myreq = CThostFtdcQryProductField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ProductID", myreq.ProductID);
	getChar(req, "ProductClass", &myreq.ProductClass);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryProduct(&myreq, reqid);
	return i;
};

int TdApi::reqQryInstrument(const dict &req, int reqid)
{
	CThostFtdcQryInstrumentField myreq = CThostFtdcQryInstrumentField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryInstrument(&myreq, reqid);
	return i;
};

int TdApi::reqQryDepthMarketData(const dict &req, int reqid)
{
	CThostFtdcQryDepthMarketDataField myreq = CThostFtdcQryDepthMarketDataField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryDepthMarketData(&myreq, reqid);
	return i;
};

int TdApi::reqQrySettlementInfo(const dict &req, int reqid)
{
	CThostFtdcQrySettlementInfoField myreq = CThostFtdcQrySettlementInfoField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQrySettlementInfo(&myreq, reqid);
	return i;
};

int TdApi::reqQryTransferBank(const dict &req, int reqid)
{
	CThostFtdcQryTransferBankField myreq = CThostFtdcQryTransferBankField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BankID", myreq.BankID);
	getString(req, "BankBrchID", myreq.BankBrchID);
	int i = this->api->ReqQryTransferBank(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestorPositionDetail(const dict &req, int reqid)
{
	CThostFtdcQryInvestorPositionDetailField myreq = CThostFtdcQryInvestorPositionDetailField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryInvestorPositionDetail(&myreq, reqid);
	return i;
};

int TdApi::reqQryNotice(const dict &req, int reqid)
{
	CThostFtdcQryNoticeField myreq = CThostFtdcQryNoticeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	int i = this->api->ReqQryNotice(&myreq, reqid);
	return i;
};

int TdApi::reqQrySettlementInfoConfirm(const dict &req, int reqid)
{
	CThostFtdcQrySettlementInfoConfirmField myreq = CThostFtdcQrySettlementInfoConfirmField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	int i = this->api->ReqQrySettlementInfoConfirm(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestorPositionCombineDetail(const dict &req, int reqid)
{
	CThostFtdcQryInvestorPositionCombineDetailField myreq = CThostFtdcQryInvestorPositionCombineDetailField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryInvestorPositionCombineDetail(&myreq, reqid);
	return i;
};

int TdApi::reqQryCFMMCTradingAccountKey(const dict &req, int reqid)
{
	CThostFtdcQryCFMMCTradingAccountKeyField myreq = CThostFtdcQryCFMMCTradingAccountKeyField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryCFMMCTradingAccountKey(&myreq, reqid);
	return i;
};

int TdApi::reqQryEWarrantOffset(const dict &req, int reqid)
{
	CThostFtdcQryEWarrantOffsetField myreq = CThostFtdcQryEWarrantOffsetField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryEWarrantOffset(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestorProductGroupMargin(const dict &req, int reqid)
{
	CThostFtdcQryInvestorProductGroupMarginField myreq = CThostFtdcQryInvestorProductGroupMarginField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryInvestorProductGroupMargin(&myreq, reqid);
	return i;
};

int TdApi::reqQryExchangeMarginRate(const dict &req, int reqid)
{
	CThostFtdcQryExchangeMarginRateField myreq = CThostFtdcQryExchangeMarginRateField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryExchangeMarginRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryExchangeMarginRateAdjust(const dict &req, int reqid)
{
	CThostFtdcQryExchangeMarginRateAdjustField myreq = CThostFtdcQryExchangeMarginRateAdjustField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryExchangeMarginRateAdjust(&myreq, reqid);
	return i;
};

int TdApi::reqQryExchangeRate(const dict &req, int reqid)
{
	CThostFtdcQryExchangeRateField myreq = CThostFtdcQryExchangeRateField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryExchangeRate(&myreq, reqid);
	return i;
};

int TdApi::reqQrySecAgentACIDMap(const dict &req, int reqid)
{
	CThostFtdcQrySecAgentACIDMapField myreq = CThostFtdcQrySecAgentACIDMapField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQrySecAgentACIDMap(&myreq, reqid);
	return i;
};

int TdApi::reqQryProductExchRate(const dict &req, int reqid)
{
	CThostFtdcQryProductExchRateField myreq = CThostFtdcQryProductExchRateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ProductID", myreq.ProductID);
	int i = this->api->ReqQryProductExchRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryProductGroup(const dict &req, int reqid)
{
	CThostFtdcQryProductGroupField myreq = CThostFtdcQryProductGroupField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ProductID", myreq.ProductID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryProductGroup(&myreq, reqid);
	return i;
};

int TdApi::reqQryOptionInstrTradeCost(const dict &req, int reqid)
{
	CThostFtdcQryOptionInstrTradeCostField myreq = CThostFtdcQryOptionInstrTradeCostField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getChar(req, "HedgeFlag", &myreq.HedgeFlag);
	getDouble(req, "InputPrice", &myreq.InputPrice);
	getDouble(req, "UnderlyingPrice", &myreq.UnderlyingPrice);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryOptionInstrTradeCost(&myreq, reqid);
	return i;
};

int TdApi::reqQryOptionInstrCommRate(const dict &req, int reqid)
{
	CThostFtdcQryOptionInstrCommRateField myreq = CThostFtdcQryOptionInstrCommRateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryOptionInstrCommRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryExecOrder(const dict &req, int reqid)
{
	CThostFtdcQryExecOrderField myreq = CThostFtdcQryExecOrderField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryExecOrder(&myreq, reqid);
	return i;
};

int TdApi::reqQryForQuote(const dict &req, int reqid)
{
	CThostFtdcQryForQuoteField myreq = CThostFtdcQryForQuoteField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryForQuote(&myreq, reqid);
	return i;
};

int TdApi::reqQryQuote(const dict &req, int reqid)
{
	CThostFtdcQryQuoteField myreq = CThostFtdcQryQuoteField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryQuote(&myreq, reqid);
	return i;
};

int TdApi::reqQryLock(const dict &req, int reqid)
{
	CThostFtdcQryLockField myreq = CThostFtdcQryLockField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "LockSysID", myreq.LockSysID);
	getString(req, "InsertTimeStart", myreq.InsertTimeStart);
	getString(req, "InsertTimeEnd", myreq.InsertTimeEnd);
	int i = this->api->ReqQryLock(&myreq, reqid);
	return i;
};

int TdApi::reqQryLockPosition(const dict &req, int reqid)
{
	CThostFtdcQryLockPositionField myreq = CThostFtdcQryLockPositionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryLockPosition(&myreq, reqid);
	return i;
};

int TdApi::reqQryInvestorLevel(const dict &req, int reqid)
{
	CThostFtdcQryInvestorLevelField myreq = CThostFtdcQryInvestorLevelField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryInvestorLevel(&myreq, reqid);
	return i;
};

int TdApi::reqQryExecFreeze(const dict &req, int reqid)
{
	CThostFtdcQryExecFreezeField myreq = CThostFtdcQryExecFreezeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryExecFreeze(&myreq, reqid);
	return i;
};

int TdApi::reqQryCombInstrumentGuard(const dict &req, int reqid)
{
	CThostFtdcQryCombInstrumentGuardField myreq = CThostFtdcQryCombInstrumentGuardField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	int i = this->api->ReqQryCombInstrumentGuard(&myreq, reqid);
	return i;
};

int TdApi::reqQryCombAction(const dict &req, int reqid)
{
	CThostFtdcQryCombActionField myreq = CThostFtdcQryCombActionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "InvestorID", myreq.InvestorID);
	getString(req, "InstrumentID", myreq.InstrumentID);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryCombAction(&myreq, reqid);
	return i;
};

int TdApi::reqQryTransferSerial(const dict &req, int reqid)
{
	CThostFtdcQryTransferSerialField myreq = CThostFtdcQryTransferSerialField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryTransferSerial(&myreq, reqid);
	return i;
};

int TdApi::reqQryAccountregister(const dict &req, int reqid)
{
	CThostFtdcQryAccountregisterField myreq = CThostFtdcQryAccountregisterField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryAccountregister(&myreq, reqid);
	return i;
};

int TdApi::reqQryContractBank(const dict &req, int reqid)
{
	CThostFtdcQryContractBankField myreq = CThostFtdcQryContractBankField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BrokerID", myreq.BrokerID);
	getString(req, "BankID", myreq.BankID);
	getString(req, "BankBrchID", myreq.BankBrchID);
	int i = this->api->ReqQryContractBank(&myreq, reqid);
	return i;
};

int TdApi::reqQryParkedOrder(const dict &req, int reqid)
{
	CThostFtdcQryParkedOrderField myreq = CThostFtdcQryParkedOrderField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryParkedOrder(&myreq, reqid);
	return i;
};

int TdApi::reqQryParkedOrderAction(const dict &req, int reqid)
{
	CThostFtdcQryParkedOrderActionField myreq = CThostFtdcQryParkedOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryParkedOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqQryTradingNotice(const dict &req, int reqid)
{
	CThostFtdcQryTradingNoticeField myreq = CThostFtdcQryTradingNoticeField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryTradingNotice(&myreq, reqid);
	return i;
};

int TdApi::reqQryBrokerTradingParams(const dict &req, int reqid)
{
	CThostFtdcQryBrokerTradingParamsField myreq = CThostFtdcQryBrokerTradingParamsField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryBrokerTradingParams(&myreq, reqid);
	return i;
};

int TdApi::reqQryBrokerTradingAlgos(const dict &req, int reqid)
{
	CThostFtdcQryBrokerTradingAlgosField myreq = CThostFtdcQryBrokerTradingAlgosField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryBrokerTradingAlgos(&myreq, reqid);
	return i;
};

int TdApi::reqQueryCFMMCTradingAccountToken(const dict &req, int reqid)
{
	CThostFtdcQueryCFMMCTradingAccountTokenField myreq = CThostFtdcQueryCFMMCTradingAccountTokenField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQueryCFMMCTradingAccountToken(&myreq, reqid);
	return i;
};

int TdApi::reqFromBankToFutureByFuture(const dict &req, int reqid)
{
	CThostFtdcReqTransferField myreq = CThostFtdcReqTransferField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqFromBankToFutureByFuture(&myreq, reqid);
	return i;
};

int TdApi::reqFromFutureToBankByFuture(const dict &req, int reqid)
{
	CThostFtdcReqTransferField myreq = CThostFtdcReqTransferField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqFromFutureToBankByFuture(&myreq, reqid);
	return i;
};

int TdApi::reqQueryBankAccountMoneyByFuture(const dict &req, int reqid)
{
	CThostFtdcReqQueryAccountField myreq = CThostFtdcReqQueryAccountField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQueryBankAccountMoneyByFuture(&myreq, reqid);
	return i;
};



///-------------------------------------------------------------------------------------
///Boost.Python��װ
///-------------------------------------------------------------------------------------

class PyTdApi : public TdApi
{
public:
    using TdApi::TdApi;
    
	void onFrontConnected() override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFrontConnected);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onFrontDisconnected(int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFrontDisconnected, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onHeartBeatWarning(int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onHeartBeatWarning, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspAuthenticate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspAuthenticate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspUserLogin(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspUserLogin, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspUserLogout(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspUserLogout, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspUserPasswordUpdate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspUserPasswordUpdate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspTradingAccountPasswordUpdate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspTradingAccountPasswordUpdate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspOrderInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspOrderInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspParkedOrderInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspParkedOrderInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspParkedOrderAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspParkedOrderAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspOrderAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspOrderAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQueryMaxOrderVolume(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQueryMaxOrderVolume, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspSettlementInfoConfirm(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspSettlementInfoConfirm, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspRemoveParkedOrder(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspRemoveParkedOrder, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspRemoveParkedOrderAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspRemoveParkedOrderAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspExecOrderInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspExecOrderInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspExecOrderAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspExecOrderAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspForQuoteInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspForQuoteInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQuoteInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQuoteInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQuoteAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQuoteAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspLockInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspLockInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspCombActionInsert(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspCombActionInsert, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryOrder(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryOrder, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTrade(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTrade, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestorPosition(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestorPosition, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTradingAccount(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTradingAccount, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestor(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestor, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTradingCode(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTradingCode, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInstrumentMarginRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInstrumentMarginRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInstrumentCommissionRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInstrumentCommissionRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExchange(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExchange, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryProduct(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryProduct, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInstrument(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInstrument, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryDepthMarketData(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryDepthMarketData, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQrySettlementInfo(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQrySettlementInfo, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTransferBank(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTransferBank, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestorPositionDetail(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestorPositionDetail, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryNotice(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryNotice, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQrySettlementInfoConfirm(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQrySettlementInfoConfirm, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestorPositionCombineDetail(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestorPositionCombineDetail, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCFMMCTradingAccountKey(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCFMMCTradingAccountKey, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEWarrantOffset(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEWarrantOffset, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestorProductGroupMargin(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestorProductGroupMargin, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExchangeMarginRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExchangeMarginRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExchangeMarginRateAdjust(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExchangeMarginRateAdjust, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExchangeRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExchangeRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQrySecAgentACIDMap(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQrySecAgentACIDMap, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryProductExchRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryProductExchRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryProductGroup(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryProductGroup, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryOptionInstrTradeCost(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryOptionInstrTradeCost, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryOptionInstrCommRate(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryOptionInstrCommRate, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExecOrder(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExecOrder, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryForQuote(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryForQuote, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryQuote(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryQuote, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryLock(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryLock, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryLockPosition(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryLockPosition, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryInvestorLevel(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryInvestorLevel, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryExecFreeze(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryExecFreeze, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCombInstrumentGuard(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCombInstrumentGuard, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCombAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCombAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTransferSerial(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTransferSerial, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryAccountregister(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryAccountregister, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspError(const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspError, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnOrder(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnOrder, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnTrade(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnTrade, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnOrderInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnOrderInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnOrderAction(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnOrderAction, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnInstrumentStatus(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnInstrumentStatus, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnTradingNotice(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnTradingNotice, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnErrorConditionalOrder(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnErrorConditionalOrder, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnExecOrder(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnExecOrder, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnExecOrderInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnExecOrderInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnExecOrderAction(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnExecOrderAction, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnForQuoteInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnForQuoteInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnQuote(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnQuote, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnQuoteInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnQuoteInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnQuoteAction(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnQuoteAction, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnForQuoteRsp(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnForQuoteRsp, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnCFMMCTradingAccountToken(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnCFMMCTradingAccountToken, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnLock(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnLock, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnLockInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnLockInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnCombAction(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnCombAction, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnCombActionInsert(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnCombActionInsert, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryContractBank(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryContractBank, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryParkedOrder(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryParkedOrder, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryParkedOrderAction(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryParkedOrderAction, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTradingNotice(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTradingNotice, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryBrokerTradingParams(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryBrokerTradingParams, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryBrokerTradingAlgos(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryBrokerTradingAlgos, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQueryCFMMCTradingAccountToken(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQueryCFMMCTradingAccountToken, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnFromBankToFutureByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnFromBankToFutureByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnFromFutureToBankByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnFromFutureToBankByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromBankToFutureByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromBankToFutureByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromFutureToBankByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromFutureToBankByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnFromBankToFutureByFuture(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnFromBankToFutureByFuture, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnFromFutureToBankByFuture(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnFromFutureToBankByFuture, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromBankToFutureByFutureManual(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromBankToFutureByFutureManual, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromFutureToBankByFutureManual(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromFutureToBankByFutureManual, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnQueryBankBalanceByFuture(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnQueryBankBalanceByFuture, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnBankToFutureByFuture(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnBankToFutureByFuture, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnFutureToBankByFuture(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnFutureToBankByFuture, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnRepealBankToFutureByFutureManual(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnRepealBankToFutureByFutureManual, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnRepealFutureToBankByFutureManual(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnRepealFutureToBankByFutureManual, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onErrRtnQueryBankBalanceByFuture(const dict &data, const dict &error) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onErrRtnQueryBankBalanceByFuture, data, error);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromBankToFutureByFuture(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromBankToFutureByFuture, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnRepealFromFutureToBankByFuture(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnRepealFromFutureToBankByFuture, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspFromBankToFutureByFuture(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspFromBankToFutureByFuture, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspFromFutureToBankByFuture(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspFromFutureToBankByFuture, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQueryBankAccountMoneyByFuture(const dict &data, const dict &error, int reqid, bool last) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQueryBankAccountMoneyByFuture, data, error, reqid, last);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnOpenAccountByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnOpenAccountByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnCancelAccountByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnCancelAccountByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnChangeAccountByBank(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnChangeAccountByBank, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};



};


PYBIND11_MODULE(vnfohootd, m)
{
    class_<TdApi, PyTdApi> TdApi(m, "TdApi", module_local());
    TdApi
        .def(init<>())
        .def("createFtdcTraderApi", &TdApi::createFtdcTraderApi)
        .def("release", &TdApi::release)
        .def("init", &TdApi::init)
        .def("join", &TdApi::join)
        .def("exit", &TdApi::exit)
        .def("getTradingDay", &TdApi::getTradingDay)
        .def("registerFront", &TdApi::registerFront)
        .def("subscribePublicTopic", &TdApi::subscribePublicTopic)
        .def("subscribePrivateTopic", &TdApi::subscribePrivateTopic)

		.def("reqAuthenticate", &TdApi::reqAuthenticate)
		.def("reqUserLogin", &TdApi::reqUserLogin)
		.def("reqUserLogout", &TdApi::reqUserLogout)
		.def("reqUserPasswordUpdate", &TdApi::reqUserPasswordUpdate)
		.def("reqTradingAccountPasswordUpdate", &TdApi::reqTradingAccountPasswordUpdate)
		.def("reqOrderInsert", &TdApi::reqOrderInsert)
		.def("reqParkedOrderInsert", &TdApi::reqParkedOrderInsert)
		.def("reqParkedOrderAction", &TdApi::reqParkedOrderAction)
		.def("reqOrderAction", &TdApi::reqOrderAction)
		.def("reqQueryMaxOrderVolume", &TdApi::reqQueryMaxOrderVolume)
		.def("reqSettlementInfoConfirm", &TdApi::reqSettlementInfoConfirm)
		.def("reqRemoveParkedOrder", &TdApi::reqRemoveParkedOrder)
		.def("reqRemoveParkedOrderAction", &TdApi::reqRemoveParkedOrderAction)
		.def("reqExecOrderInsert", &TdApi::reqExecOrderInsert)
		.def("reqExecOrderAction", &TdApi::reqExecOrderAction)
		.def("reqForQuoteInsert", &TdApi::reqForQuoteInsert)
		.def("reqQuoteInsert", &TdApi::reqQuoteInsert)
		.def("reqQuoteAction", &TdApi::reqQuoteAction)
		.def("reqLockInsert", &TdApi::reqLockInsert)
		.def("reqCombActionInsert", &TdApi::reqCombActionInsert)
		.def("reqQryOrder", &TdApi::reqQryOrder)
		.def("reqQryTrade", &TdApi::reqQryTrade)
		.def("reqQryInvestorPosition", &TdApi::reqQryInvestorPosition)
		.def("reqQryTradingAccount", &TdApi::reqQryTradingAccount)
		.def("reqQryInvestor", &TdApi::reqQryInvestor)
		.def("reqQryTradingCode", &TdApi::reqQryTradingCode)
		.def("reqQryInstrumentMarginRate", &TdApi::reqQryInstrumentMarginRate)
		.def("reqQryInstrumentCommissionRate", &TdApi::reqQryInstrumentCommissionRate)
		.def("reqQryExchange", &TdApi::reqQryExchange)
		.def("reqQryProduct", &TdApi::reqQryProduct)
		.def("reqQryInstrument", &TdApi::reqQryInstrument)
		.def("reqQryDepthMarketData", &TdApi::reqQryDepthMarketData)
		.def("reqQrySettlementInfo", &TdApi::reqQrySettlementInfo)
		.def("reqQryTransferBank", &TdApi::reqQryTransferBank)
		.def("reqQryInvestorPositionDetail", &TdApi::reqQryInvestorPositionDetail)
		.def("reqQryNotice", &TdApi::reqQryNotice)
		.def("reqQrySettlementInfoConfirm", &TdApi::reqQrySettlementInfoConfirm)
		.def("reqQryInvestorPositionCombineDetail", &TdApi::reqQryInvestorPositionCombineDetail)
		.def("reqQryCFMMCTradingAccountKey", &TdApi::reqQryCFMMCTradingAccountKey)
		.def("reqQryEWarrantOffset", &TdApi::reqQryEWarrantOffset)
		.def("reqQryInvestorProductGroupMargin", &TdApi::reqQryInvestorProductGroupMargin)
		.def("reqQryExchangeMarginRate", &TdApi::reqQryExchangeMarginRate)
		.def("reqQryExchangeMarginRateAdjust", &TdApi::reqQryExchangeMarginRateAdjust)
		.def("reqQryExchangeRate", &TdApi::reqQryExchangeRate)
		.def("reqQrySecAgentACIDMap", &TdApi::reqQrySecAgentACIDMap)
		.def("reqQryProductExchRate", &TdApi::reqQryProductExchRate)
		.def("reqQryProductGroup", &TdApi::reqQryProductGroup)
		.def("reqQryOptionInstrTradeCost", &TdApi::reqQryOptionInstrTradeCost)
		.def("reqQryOptionInstrCommRate", &TdApi::reqQryOptionInstrCommRate)
		.def("reqQryExecOrder", &TdApi::reqQryExecOrder)
		.def("reqQryForQuote", &TdApi::reqQryForQuote)
		.def("reqQryQuote", &TdApi::reqQryQuote)
		.def("reqQryLock", &TdApi::reqQryLock)
		.def("reqQryLockPosition", &TdApi::reqQryLockPosition)
		.def("reqQryInvestorLevel", &TdApi::reqQryInvestorLevel)
		.def("reqQryExecFreeze", &TdApi::reqQryExecFreeze)
		.def("reqQryCombInstrumentGuard", &TdApi::reqQryCombInstrumentGuard)
		.def("reqQryCombAction", &TdApi::reqQryCombAction)
		.def("reqQryTransferSerial", &TdApi::reqQryTransferSerial)
		.def("reqQryAccountregister", &TdApi::reqQryAccountregister)
		.def("reqQryContractBank", &TdApi::reqQryContractBank)
		.def("reqQryParkedOrder", &TdApi::reqQryParkedOrder)
		.def("reqQryParkedOrderAction", &TdApi::reqQryParkedOrderAction)
		.def("reqQryTradingNotice", &TdApi::reqQryTradingNotice)
		.def("reqQryBrokerTradingParams", &TdApi::reqQryBrokerTradingParams)
		.def("reqQryBrokerTradingAlgos", &TdApi::reqQryBrokerTradingAlgos)
		.def("reqQueryCFMMCTradingAccountToken", &TdApi::reqQueryCFMMCTradingAccountToken)
		.def("reqFromBankToFutureByFuture", &TdApi::reqFromBankToFutureByFuture)
		.def("reqFromFutureToBankByFuture", &TdApi::reqFromFutureToBankByFuture)
		.def("reqQueryBankAccountMoneyByFuture", &TdApi::reqQueryBankAccountMoneyByFuture)

		.def("onFrontConnected", &TdApi::onFrontConnected)
		.def("onFrontDisconnected", &TdApi::onFrontDisconnected)
		.def("onHeartBeatWarning", &TdApi::onHeartBeatWarning)
		.def("onRspAuthenticate", &TdApi::onRspAuthenticate)
		.def("onRspUserLogin", &TdApi::onRspUserLogin)
		.def("onRspUserLogout", &TdApi::onRspUserLogout)
		.def("onRspUserPasswordUpdate", &TdApi::onRspUserPasswordUpdate)
		.def("onRspTradingAccountPasswordUpdate", &TdApi::onRspTradingAccountPasswordUpdate)
		.def("onRspOrderInsert", &TdApi::onRspOrderInsert)
		.def("onRspParkedOrderInsert", &TdApi::onRspParkedOrderInsert)
		.def("onRspParkedOrderAction", &TdApi::onRspParkedOrderAction)
		.def("onRspOrderAction", &TdApi::onRspOrderAction)
		.def("onRspQueryMaxOrderVolume", &TdApi::onRspQueryMaxOrderVolume)
		.def("onRspSettlementInfoConfirm", &TdApi::onRspSettlementInfoConfirm)
		.def("onRspRemoveParkedOrder", &TdApi::onRspRemoveParkedOrder)
		.def("onRspRemoveParkedOrderAction", &TdApi::onRspRemoveParkedOrderAction)
		.def("onRspExecOrderInsert", &TdApi::onRspExecOrderInsert)
		.def("onRspExecOrderAction", &TdApi::onRspExecOrderAction)
		.def("onRspForQuoteInsert", &TdApi::onRspForQuoteInsert)
		.def("onRspQuoteInsert", &TdApi::onRspQuoteInsert)
		.def("onRspQuoteAction", &TdApi::onRspQuoteAction)
		.def("onRspLockInsert", &TdApi::onRspLockInsert)
		.def("onRspCombActionInsert", &TdApi::onRspCombActionInsert)
		.def("onRspQryOrder", &TdApi::onRspQryOrder)
		.def("onRspQryTrade", &TdApi::onRspQryTrade)
		.def("onRspQryInvestorPosition", &TdApi::onRspQryInvestorPosition)
		.def("onRspQryTradingAccount", &TdApi::onRspQryTradingAccount)
		.def("onRspQryInvestor", &TdApi::onRspQryInvestor)
		.def("onRspQryTradingCode", &TdApi::onRspQryTradingCode)
		.def("onRspQryInstrumentMarginRate", &TdApi::onRspQryInstrumentMarginRate)
		.def("onRspQryInstrumentCommissionRate", &TdApi::onRspQryInstrumentCommissionRate)
		.def("onRspQryExchange", &TdApi::onRspQryExchange)
		.def("onRspQryProduct", &TdApi::onRspQryProduct)
		.def("onRspQryInstrument", &TdApi::onRspQryInstrument)
		.def("onRspQryDepthMarketData", &TdApi::onRspQryDepthMarketData)
		.def("onRspQrySettlementInfo", &TdApi::onRspQrySettlementInfo)
		.def("onRspQryTransferBank", &TdApi::onRspQryTransferBank)
		.def("onRspQryInvestorPositionDetail", &TdApi::onRspQryInvestorPositionDetail)
		.def("onRspQryNotice", &TdApi::onRspQryNotice)
		.def("onRspQrySettlementInfoConfirm", &TdApi::onRspQrySettlementInfoConfirm)
		.def("onRspQryInvestorPositionCombineDetail", &TdApi::onRspQryInvestorPositionCombineDetail)
		.def("onRspQryCFMMCTradingAccountKey", &TdApi::onRspQryCFMMCTradingAccountKey)
		.def("onRspQryEWarrantOffset", &TdApi::onRspQryEWarrantOffset)
		.def("onRspQryInvestorProductGroupMargin", &TdApi::onRspQryInvestorProductGroupMargin)
		.def("onRspQryExchangeMarginRate", &TdApi::onRspQryExchangeMarginRate)
		.def("onRspQryExchangeMarginRateAdjust", &TdApi::onRspQryExchangeMarginRateAdjust)
		.def("onRspQryExchangeRate", &TdApi::onRspQryExchangeRate)
		.def("onRspQrySecAgentACIDMap", &TdApi::onRspQrySecAgentACIDMap)
		.def("onRspQryProductExchRate", &TdApi::onRspQryProductExchRate)
		.def("onRspQryProductGroup", &TdApi::onRspQryProductGroup)
		.def("onRspQryOptionInstrTradeCost", &TdApi::onRspQryOptionInstrTradeCost)
		.def("onRspQryOptionInstrCommRate", &TdApi::onRspQryOptionInstrCommRate)
		.def("onRspQryExecOrder", &TdApi::onRspQryExecOrder)
		.def("onRspQryForQuote", &TdApi::onRspQryForQuote)
		.def("onRspQryQuote", &TdApi::onRspQryQuote)
		.def("onRspQryLock", &TdApi::onRspQryLock)
		.def("onRspQryLockPosition", &TdApi::onRspQryLockPosition)
		.def("onRspQryInvestorLevel", &TdApi::onRspQryInvestorLevel)
		.def("onRspQryExecFreeze", &TdApi::onRspQryExecFreeze)
		.def("onRspQryCombInstrumentGuard", &TdApi::onRspQryCombInstrumentGuard)
		.def("onRspQryCombAction", &TdApi::onRspQryCombAction)
		.def("onRspQryTransferSerial", &TdApi::onRspQryTransferSerial)
		.def("onRspQryAccountregister", &TdApi::onRspQryAccountregister)
		.def("onRspError", &TdApi::onRspError)
		.def("onRtnOrder", &TdApi::onRtnOrder)
		.def("onRtnTrade", &TdApi::onRtnTrade)
		.def("onErrRtnOrderInsert", &TdApi::onErrRtnOrderInsert)
		.def("onErrRtnOrderAction", &TdApi::onErrRtnOrderAction)
		.def("onRtnInstrumentStatus", &TdApi::onRtnInstrumentStatus)
		.def("onRtnTradingNotice", &TdApi::onRtnTradingNotice)
		.def("onRtnErrorConditionalOrder", &TdApi::onRtnErrorConditionalOrder)
		.def("onRtnExecOrder", &TdApi::onRtnExecOrder)
		.def("onErrRtnExecOrderInsert", &TdApi::onErrRtnExecOrderInsert)
		.def("onErrRtnExecOrderAction", &TdApi::onErrRtnExecOrderAction)
		.def("onErrRtnForQuoteInsert", &TdApi::onErrRtnForQuoteInsert)
		.def("onRtnQuote", &TdApi::onRtnQuote)
		.def("onErrRtnQuoteInsert", &TdApi::onErrRtnQuoteInsert)
		.def("onErrRtnQuoteAction", &TdApi::onErrRtnQuoteAction)
		.def("onRtnForQuoteRsp", &TdApi::onRtnForQuoteRsp)
		.def("onRtnCFMMCTradingAccountToken", &TdApi::onRtnCFMMCTradingAccountToken)
		.def("onRtnLock", &TdApi::onRtnLock)
		.def("onErrRtnLockInsert", &TdApi::onErrRtnLockInsert)
		.def("onRtnCombAction", &TdApi::onRtnCombAction)
		.def("onErrRtnCombActionInsert", &TdApi::onErrRtnCombActionInsert)
		.def("onRspQryContractBank", &TdApi::onRspQryContractBank)
		.def("onRspQryParkedOrder", &TdApi::onRspQryParkedOrder)
		.def("onRspQryParkedOrderAction", &TdApi::onRspQryParkedOrderAction)
		.def("onRspQryTradingNotice", &TdApi::onRspQryTradingNotice)
		.def("onRspQryBrokerTradingParams", &TdApi::onRspQryBrokerTradingParams)
		.def("onRspQryBrokerTradingAlgos", &TdApi::onRspQryBrokerTradingAlgos)
		.def("onRspQueryCFMMCTradingAccountToken", &TdApi::onRspQueryCFMMCTradingAccountToken)
		.def("onRtnFromBankToFutureByBank", &TdApi::onRtnFromBankToFutureByBank)
		.def("onRtnFromFutureToBankByBank", &TdApi::onRtnFromFutureToBankByBank)
		.def("onRtnRepealFromBankToFutureByBank", &TdApi::onRtnRepealFromBankToFutureByBank)
		.def("onRtnRepealFromFutureToBankByBank", &TdApi::onRtnRepealFromFutureToBankByBank)
		.def("onRtnFromBankToFutureByFuture", &TdApi::onRtnFromBankToFutureByFuture)
		.def("onRtnFromFutureToBankByFuture", &TdApi::onRtnFromFutureToBankByFuture)
		.def("onRtnRepealFromBankToFutureByFutureManual", &TdApi::onRtnRepealFromBankToFutureByFutureManual)
		.def("onRtnRepealFromFutureToBankByFutureManual", &TdApi::onRtnRepealFromFutureToBankByFutureManual)
		.def("onRtnQueryBankBalanceByFuture", &TdApi::onRtnQueryBankBalanceByFuture)
		.def("onErrRtnBankToFutureByFuture", &TdApi::onErrRtnBankToFutureByFuture)
		.def("onErrRtnFutureToBankByFuture", &TdApi::onErrRtnFutureToBankByFuture)
		.def("onErrRtnRepealBankToFutureByFutureManual", &TdApi::onErrRtnRepealBankToFutureByFutureManual)
		.def("onErrRtnRepealFutureToBankByFutureManual", &TdApi::onErrRtnRepealFutureToBankByFutureManual)
		.def("onErrRtnQueryBankBalanceByFuture", &TdApi::onErrRtnQueryBankBalanceByFuture)
		.def("onRtnRepealFromBankToFutureByFuture", &TdApi::onRtnRepealFromBankToFutureByFuture)
		.def("onRtnRepealFromFutureToBankByFuture", &TdApi::onRtnRepealFromFutureToBankByFuture)
		.def("onRspFromBankToFutureByFuture", &TdApi::onRspFromBankToFutureByFuture)
		.def("onRspFromFutureToBankByFuture", &TdApi::onRspFromFutureToBankByFuture)
		.def("onRspQueryBankAccountMoneyByFuture", &TdApi::onRspQueryBankAccountMoneyByFuture)
		.def("onRtnOpenAccountByBank", &TdApi::onRtnOpenAccountByBank)
		.def("onRtnCancelAccountByBank", &TdApi::onRtnCancelAccountByBank)
		.def("onRtnChangeAccountByBank", &TdApi::onRtnChangeAccountByBank)
		;

}
