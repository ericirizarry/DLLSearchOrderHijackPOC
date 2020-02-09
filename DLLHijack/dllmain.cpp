// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
/*
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
*/

#include <windows.h>
#include <tchar.h>
#define DllExport __declspec (dllexport)

int dll_hijack()
{
	MessageBox(0, _T("DLL Hijacking DEMO!"), _T("DLL HAS BEEN HIJACKED"), MB_OK);
	return 0;
}

BOOL WINAPI  DllMain(
	HANDLE    hinstDLL,
	DWORD     fdwReason,
	LPVOID    lpvReserved)
{
	dll_hijack();
	return 0;
}

