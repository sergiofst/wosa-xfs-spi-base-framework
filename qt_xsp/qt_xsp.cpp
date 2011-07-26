#include "qt_xsp.h"
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

HRESULT extern WINAPI WFPCancelAsyncRequest ( HSERVICE hService, REQUESTID RequestID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPClose ( HSERVICE hService, HWND hWnd, REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPDeregister ( HSERVICE hService, DWORD dwEventClass,
                                      HWND hWndReg, HWND hWnd, REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPExecute ( HSERVICE hService, DWORD dwCommand,
                                   LPVOID lpCmdData, DWORD dwTimeOut, HWND hWnd,
                                   REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPGetInfo ( HSERVICE hService, DWORD dwCategory,
                                   LPVOID lpQueryDetails, DWORD dwTimeOut,
                                   HWND hWnd, REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPLock ( HSERVICE hService, DWORD dwTimeOut,
                                HWND hWnd, REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPOpen ( HSERVICE hService, LPSTR lpszLogicalName,
                                HAPP hApp, LPSTR lpszAppID,
                                DWORD dwTraceLevel, DWORD dwTimeOut,
                                HWND hWnd, REQUESTID ReqID,
                                HPROVIDER hProvider, DWORD dwSPIVersionsRequired,
                                LPWFSVERSION lpSPIVersion, DWORD dwSrvcVersionsRequired,
                                LPWFSVERSION lpSrvcVersion)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPRegister ( HSERVICE hService,  DWORD dwEventClass,
                                    HWND hWndReg, HWND hWnd,
                                    REQUESTID ReqID)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPSetTraceLevel ( HSERVICE hService, DWORD dwTraceLevel)
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPUnloadService ()
{
    return WFS_SUCCESS;
}

HRESULT extern WINAPI WFPUnlock ( HSERVICE hService, HWND hWnd, REQUESTID )
{
    return WFS_SUCCESS;
}


#ifdef __cplusplus
}    /*extern "C"*/
#endif
