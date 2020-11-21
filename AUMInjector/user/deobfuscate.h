// This file contains deobfuscation mappings for different versions of the game

#pragma once
#include "il2cpp-appdata.h"

#define GAME_VERSION_2020_9_22s 20209220
#define GAME_VERSION_2020_10_22s 202010220
#define GAME_VERSION_2020_11_4s 202011040
#ifndef GAME_VERSION
	#define GAME_VERSION GAME_VERSION_2020_11_4s
#endif

using namespace app;

// Deobfuscate game bindings, depending on version
#if GAME_VERSION == GAME_VERSION_2020_9_22s
	#define version_text "2020.9.22s"
	using InnerNetClient_GameState__Enum = InnerNetClient_IFLBIJFJPMK__Enum;
	using Player_Die_Reason__Enum = NPLMBOLMMLB__Enum;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Joined = InnerNetClient_IFLBIJFJPMK__Enum_Joined;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Ended = InnerNetClient_IFLBIJFJPMK__Enum_Ended;
	#define PlayerControl_FixedUpdate_Trampoline PlayerControl_FixedUpdate
	#define PlayerControl_GetTruePosition_Trampoline PlayerControl_GetTruePosition
	#define PlayerControl_Die_Trampoline PlayerControl_Die
	#define MeetingHud_Close_Trampoline MeetingHud_Close
	#define MeetingHud_Start_Trampoline MeetingHud_Start
	#define InnerNetClient_FixedUpdate_Trampoline InnerNetClient_FixedUpdate
#elif GAME_VERSION == GAME_VERSION_2020_10_22s
	#define version_text "2020.10.22s"
	using InnerNetClient_GameState__Enum = DNAFMCDBMCI_JPCEFDHGHAK__Enum;
	using PlayerControl = GLHCHLEDNBA;
	using Player_Die_Reason__Enum = CCCHKEBONBN__Enum;
	using MeetingHud = GPOHFPAIEMA;
	using InnerNetClient = DNAFMCDBMCI;
	using InnerNet_DisconnectReasons__Enum = NCBONGGBCNE__Enum;
	using HqHudOverrideTask = MMPIJGKLMDC;
	using HudOverrideTask = GFBKIHICFNI;
	using ChatController = MLINJDBIIEC;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Joined = DNAFMCDBMCI_JPCEFDHGHAK__Enum_Joined;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Ended = DNAFMCDBMCI_JPCEFDHGHAK__Enum_Ended;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Started = DNAFMCDBMCI_JPCEFDHGHAK__Enum_Started;
	#define PlayerControl_FixedUpdate_Trampoline GLHCHLEDNBA_FixedUpdate
	#define PlayerControl_GetTruePosition_Trampoline GLHCHLEDNBA_GetTruePosition
	#define PlayerControl_Die_Trampoline GLHCHLEDNBA_Die
	#define MeetingHud_Close_Trampoline GPOHFPAIEMA_Close
	#define MeetingHud_Start_Trampoline GPOHFPAIEMA_Start
	#define InnerNetClient_FixedUpdate_Trampoline DNAFMCDBMCI_FixedUpdate
	#define InnerNetClient_Disconnect_Trampoline DNAFMCDBMCI_GPKBCOKMFHK //DNAFMCDBMCI_HandleDisconnect ? 
	#define HqHudOverrideTask_Initialize_Trampoline MMPIJGKLMDC_Initialize
	#define HqHudOverrideTask_Complete_Trampoline MMPIJGKLMDC_Complete
	#define HudOverrideTask_Initialize_Trampoline GFBKIHICFNI_Initialize
	#define HudOverrideTask_Complete_Trampoline GFBKIHICFNI_Complete
	#define ChatController_AddChat_Trampoline MLINJDBIIEC_AddChat
	#define InnerNetClient_StartRpc DNAFMCDBMCI_StartRpc
	#define MessageWriter_Write_String MessageWriter_Write_6

	// Stuff I researched at one point but thats not required atm
	//SystemTypes__Enum SystemTypes__Enum_Comms = JBPEMAACAEP__Enum_Comms;
	//using SystemTypes__Enum = JBPEMAACAEP__Enum;
	//using ShipStatus = DAFPFFMKPJJ;
	//#define ShipStatus_RepairSystem_Trampoline DAFPFFMKPJJ_RepairSystem
	//#define ShipStatus_RpcRepairSystem_Trampoline DAFPFFMKPJJ_RpcRepairSystem
	//auto HudOverrideSystemType_IsActive__BackingField = &HHIJNMBJCAE__Fields::_IPANONPMHHE_k__BackingField;
	//using Dictionary_2_SystemType_ISystemType = Dictionary_2_JBPEMAACAEP_IOKAAHHLALE_;
	//#define ShipStatus_FixedUpdate_Trampoline DAFPFFMKPJJ_FixedUpdate
	//using ISystemType = IOKAAHHLALE;
	//using HudOverrideSystemType = HHIJNMBJCAE;
	//#define HudOverrideSystemType__ctor_Trampoline HHIJNMBJCAE__ctor
	//#define HudOverrideSystemType__TypeInfo HHIJNMBJCAE__TypeInfo
	//#define Dictionary_2_SystemType_ISystemType__TryGetValue_Trampoline Dictionary_2_JBPEMAACAEP_IOKAAHHLALE__TryGetValue
	//#define ShipStatus_OnDestroy_Trampoline DAFPFFMKPJJ_OnDestroy
	//#define ShipStatus_OnEnable_Trampoline DAFPFFMKPJJ_OnEnable
	//#define ShipStatus_Deserialize_Trampoline DAFPFFMKPJJ_Deserialize
	//#define HudOverrideSystemType_Deserialize_Trampoline HHIJNMBJCAE_Deserialize
	//#define HudOverrideSystemType_RepairDamage_Trampoline HHIJNMBJCAE_RepairDamage
#elif GAME_VERSION == GAME_VERSION_2020_11_4s
	//TODO add new functions
	#define version_text "2020.11.4s"
	using InnerNetClient_GameState__Enum = DBDDAJAICFN_DKEKFCCGGEO__Enum;
	using PlayerControl = APNNOJFGDGP;
	using Player_Die_Reason__Enum = LKBAAGPFMCB__Enum;
	using MeetingHud = LFBAPIAFCFM;
	using InnerNetClient = DBDDAJAICFN;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Joined = DBDDAJAICFN_DKEKFCCGGEO__Enum_Joined;
	InnerNetClient_GameState__Enum InnerNetClient_GameState__Enum_Ended = DBDDAJAICFN_DKEKFCCGGEO__Enum_Ended;
	#define PlayerControl_FixedUpdate_Trampoline APNNOJFGDGP_FixedUpdate
	#define PlayerControl_GetTruePosition_Trampoline APNNOJFGDGP_GetTruePosition
	#define PlayerControl_Die_Trampoline APNNOJFGDGP_Die
	#define MeetingHud_Close_Trampoline LFBAPIAFCFM_Close
	#define MeetingHud_Start_Trampoline LFBAPIAFCFM_Start
	#define InnerNetClient_FixedUpdate_Trampoline DBDDAJAICFN_FixedUpdate
#else
	#error Unknown game version!
#endif

#pragma message("Compiling for game version " version_text)