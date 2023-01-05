#include <Windows.h>
#include <detours.h>

#include "loader.h"
#include "address.h"
#include "pointer.h"
#include "hook.h"
#include "structure.h"

#define UCAST(x) reinterpret_cast<unsigned int>(x)
#define UCASTP(x) *reinterpret_cast<unsigned int*>(x)

bool flag = false;

void __cdecl CStateMgr__MouseDownContinue(void* pSender);

// Entry point
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    // Nothing to do . . .
    return TRUE;
}

// Get mod information
void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, TOSTRING(MOD_NAME));
    strcpy_s(info.version, TOSTRING(MOD_VERSION));
    strcpy_s(info.author, TOSTRING(MOD_AUTHOR));
    info.exe_version = MOD_EXE_VERSION;
}

// Start the mod
void Start(const char* path)
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pkodev::pointer::CStateMgr__Init, pkodev::hook::CStateMgr__Init);
    DetourAttach(&(PVOID&)pkodev::pointer::CStateMgr__MainMouseDown, pkodev::hook::CStateMgr__MainMouseDown);
    DetourTransactionCommit();
}

// Stop the mod
void Stop()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)pkodev::pointer::CStateMgr__Init, pkodev::hook::CStateMgr__Init);
    DetourDetach(&(PVOID&)pkodev::pointer::CStateMgr__MainMouseDown, pkodev::hook::CStateMgr__MainMouseDown);
    DetourTransactionCommit();
}

bool __fastcall pkodev::hook::CStateMgr__Init(void* This, void* NotUsed)
{
    const bool ret = pkodev::pointer::CStateMgr__Init(This);

    if (ret == true)
    {
        const unsigned int handler_offset = 0xA0;

        const unsigned int handler = UCAST(CStateMgr__MouseDownContinue);

        UCASTP(UCASTP(UCAST(This) + 0x60) + handler_offset) = handler; // str
        UCASTP(UCASTP(UCAST(This) + 0x64) + handler_offset) = handler; // agi
        UCASTP(UCASTP(UCAST(This) + 0x68) + handler_offset) = handler; // con
        UCASTP(UCASTP(UCAST(This) + 0x6C) + handler_offset) = handler; // sta
        UCASTP(UCASTP(UCAST(This) + 0x70) + handler_offset) = handler; // dex
    }

    return ret;
}

void __cdecl CStateMgr__MouseDownContinue(void* pSender)
{
    flag = true;
    pkodev::pointer::CStateMgr__MainMouseDown(pSender, 0, 0, 0);
}

void __cdecl pkodev::hook::CStateMgr__MainMouseDown(void* This, int x, int y, int key)
{
    if (flag == true) {
        flag = false;
        return;
    }
    
    pkodev::pointer::CStateMgr__MainMouseDown(This, x, y, key);
}