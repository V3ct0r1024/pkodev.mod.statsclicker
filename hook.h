#pragma once
#include "structure.h"

namespace pkodev
{
	namespace hook
	{
		// bool CStateMgr::Init()
		bool __fastcall CStateMgr__Init(void* This, void* NotUsed);

		// void CStateMgr::MainMouseDown(CGuiData *pSender, int x, int y, DWORD key)
		void __cdecl CStateMgr__MainMouseDown(void* This, int x, int y, int key);
	}
}