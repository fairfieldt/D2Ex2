#ifndef __D2STUBS_H
#define __D2STUBS_H


namespace D2Funcs
{
int __fastcall D2CLIENT_DiffuseStat(int nStat);
void __fastcall D2CLIENT_SetView(int xLeft, int xRight, int yTop, int yBottom, void *pGameView);
BOOL __fastcall D2CLIENT_IsSquelched(RosterUnit* pRoster);
BOOL __fastcall D2CLIENT_IsMuted(RosterUnit* pRoster);
AutoMapLayer* __fastcall D2CLIENT_InitAutomapLayer(DWORD dwLayer);
void* __stdcall D2WIN_LoadMpq(DWORD OrderFlag, const char* szDllFile, const char* szMpqFile, const char* szName, DWORD _1, DWORD _2);
DWORD __fastcall D2CLIENT_TestPvpFlag(DWORD dwUnitId1, DWORD dwUnitId2, DWORD dwFlagMask);
void __fastcall D2CLIENT_PlaySound(int SoundNo);
void __stdcall D2CLIENT_DrawGZBox(int X1, int Y1, int X2, int Y2);
//int __fastcall D2WIN_GetTextWidth(const wchar_t* wStr);
wchar_t* __fastcall D2CLIENT_GetLevelName(int LevelNo);
int __fastcall D2CLIENT_GetSelectedMenu(int MouseY);
BYTE* __fastcall D2CLIENT_GetSkillsTxt(int SkillId);
BOOL __fastcall D2CLIENT_GetMeleeDmg(UnitAny* ptUnit, int SkillMinBonus, int* OutMin, int* OutMax, int* OutCol, int SkillMaxBonus, Skill* ptSkill, int a128, int a9, int a10);
}

namespace D2Stubs
{
void D2CLIENT_FixHostilePic();
void D2LAUNCH_OnMainMenuCreate();
void D2CLIENT_HideItem_STUB();
//void DrawItem_STUB();
void D2CLIENT_Lighting_STUB();
void  BNCLIENT_OverrideVersion_STUB();
void __fastcall D2CLIENT_Properties();
wchar_t* __fastcall D2CLIENT_OnGetItemName();
void __fastcall D2CLIENT_SendJoinGame_STUB(WORD SessionToken);
Room1* __fastcall D2CLIENT_GetRoomByXY_STUB();
void __fastcall D2CLIENT_CharInfoHook();
void D2CLIENT_CharInfoTipHook();
void __fastcall D2CLIENT_ScreenHook();
void __fastcall D2CLIENT_BlobHook();
void __fastcall D2CLIENT_BlobHook2();
DWORD __fastcall D2WIN_LoadMPQ_STUB();
void __fastcall D2WIN_UnloadMPQ_STUB();
}

#endif