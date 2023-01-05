#pragma once
#include "address.h"
#include "structure.h"

namespace pkodev
{
	namespace pointer
	{
		// bool CStateMgr::Init()
		typedef bool* (__thiscall* CStateMgr__Init__Ptr)(void*);
		CStateMgr__Init__Ptr CStateMgr__Init = (CStateMgr__Init__Ptr)(void*)(address::MOD_EXE_VERSION::CStateMgr__Init);
		
		// void CStateMgr::MainMouseDown(CGuiData *pSender, int x, int y, DWORD key)
		typedef void* (__cdecl *CStateMgr__MainMouseDown_Ptr)(void*, int, int, int);
		CStateMgr__MainMouseDown_Ptr CStateMgr__MainMouseDown = (CStateMgr__MainMouseDown_Ptr)(void*)(address::MOD_EXE_VERSION::CStateMgr__MainMouseDown);
	}
}