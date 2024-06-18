#pragma once
#include "stdafx.h"

//////////////////////////////////////////////////////////////////////////
// Main defines
//////////////////////////////////////////////////////////////////////////
enum xSE_PlatfromGeneration: int
{
	xSE_PLATFORM_GENERATION_NONE,
	xSE_PLATFORM_GENERATION_MWSE,
	xSE_PLATFORM_GENERATION_OBSE,
	xSE_PLATFORM_GENERATION_FOSE,
	xSE_PLATFORM_GENERATION_NVSE,
	xSE_PLATFORM_GENERATION_SKSE,
	xSE_PLATFORM_GENERATION_SKSE64,
	xSE_PLATFORM_GENERATION_SKSE64AE,
	xSE_PLATFORM_GENERATION_SKSEVR,
	xSE_PLATFORM_GENERATION_F4SE,
	xSE_PLATFORM_GENERATION_F4SEVR,
	xSE_PLATFORM_GENERATION_SFSE
};

#if xSE_PLATFORM_MWSE

#define xSE_NAME MWSE
#define xSE_GAME_NAME Morrowind
#define xSE_FOLDER_NAME MWSE
#define xSE_CONFIG_FOLDER_NAME Morrowind
#define xSE_PACKED_VERSION PACKED_MWSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_MWSE

#define xSE_PRELOADFUNCTION MWSEPlugin_Preload
#define xSE_QUERYFUNCTION MWSEPlugin_Query
#define xSE_LOADFUNCTION MWSEPlugin_Load

#elif xSE_PLATFORM_OBSE

#define xSE_NAME OBSE
#define xSE_GAME_NAME Oblivion
#define xSE_FOLDER_NAME OBSE
#define xSE_CONFIG_FOLDER_NAME Oblivion
#define xSE_PACKED_VERSION OBSE_VERSION_INTEGER
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_OBSE

#define xSE_PRELOADFUNCTION OBSEPlugin_Preload
#define xSE_QUERYFUNCTION OBSEPlugin_Query
#define xSE_LOADFUNCTION OBSEPlugin_Load

#elif xSE_PLATFORM_FOSE

#define xSE_NAME FOSE
#define xSE_GAME_NAME Fallout 3
#define xSE_FOLDER_NAME FOSE
#define xSE_CONFIG_FOLDER_NAME Fallout3
#define xSE_PACKED_VERSION FOSE_VERSION_INTEGER
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_FOSE

#define xSE_PRELOADFUNCTION FOSEPlugin_Preload
#define xSE_QUERYFUNCTION FOSEPlugin_Query
#define xSE_LOADFUNCTION FOSEPlugin_Load

#elif xSE_PLATFORM_NVSE

#define xSE_NAME NVSE
#define xSE_GAME_NAME Fallout: New Vegas
#define xSE_FOLDER_NAME NVSE
#define xSE_CONFIG_FOLDER_NAME FalloutNV
#define xSE_PACKED_VERSION NVSE_VERSION_INTEGER
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_NVSE

#define xSE_PRELOADFUNCTION NVSEPlugin_Preload
#define xSE_QUERYFUNCTION NVSEPlugin_Query
#define xSE_LOADFUNCTION NVSEPlugin_Load

#elif xSE_PLATFORM_SKSE

#define xSE_NAME SKSE
#define xSE_GAME_NAME Skyrim
#define xSE_FOLDER_NAME SKSE
#define xSE_CONFIG_FOLDER_NAME Skyrim
#define xSE_PACKED_VERSION PACKED_SKSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_SKSE

#define xSE_PRELOADFUNCTION SKSEPlugin_Preload
#define xSE_QUERYFUNCTION SKSEPlugin_Query
#define xSE_LOADFUNCTION SKSEPlugin_Load

#elif xSE_PLATFORM_SKSE64

#define xSE_NAME SKSE64
#define xSE_GAME_NAME Skyrim Special Edition
#define xSE_FOLDER_NAME SKSE
#define xSE_CONFIG_FOLDER_NAME Skyrim Special Edition
#define xSE_PACKED_VERSION PACKED_SKSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_SKSE64

#define xSE_PRELOADFUNCTION SKSEPlugin_Preload
#define xSE_QUERYFUNCTION SKSEPlugin_Query
#define xSE_LOADFUNCTION SKSEPlugin_Load

#elif xSE_PLATFORM_SKSE64AE

#define xSE_NAME SKSE64AE
#define xSE_GAME_NAME Skyrim Anniversary Edition
#define xSE_FOLDER_NAME SKSE
#define xSE_CONFIG_FOLDER_NAME Skyrim Special Edition
#define xSE_PACKED_VERSION PACKED_SKSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_SKSE64AE

#define xSE_PRELOADFUNCTION SKSEPlugin_Preload
#define xSE_QUERYFUNCTION SKSEPlugin_Query
#define xSE_LOADFUNCTION SKSEPlugin_Load

#elif xSE_PLATFORM_SKSEVR

#define xSE_NAME SKSEVR
#define xSE_GAME_NAME Skyrim VR
#define xSE_FOLDER_NAME SKSE
#define xSE_CONFIG_FOLDER_NAME Skyrim VR
#define xSE_PACKED_VERSION PACKED_SKSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_SKSEVR

#define xSE_PRELOADFUNCTION SKSEPlugin_Preload
#define xSE_QUERYFUNCTION SKSEPlugin_Query
#define xSE_LOADFUNCTION SKSEPlugin_Load

#elif xSE_PLATFORM_F4SE

#define xSE_NAME F4SE
#define xSE_GAME_NAME Fallout 4
#define xSE_FOLDER_NAME F4SE
#define xSE_CONFIG_FOLDER_NAME Fallout4
#define xSE_PACKED_VERSION PACKED_F4SE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_F4SE

#define xSE_PRELOADFUNCTION F4SEPlugin_Preload
#define xSE_QUERYFUNCTION F4SEPlugin_Query
#define xSE_LOADFUNCTION F4SEPlugin_Load

#elif xSE_PLATFORM_F4SEVR

#define xSE_NAME F4SEVR
#define xSE_GAME_NAME Fallout 4 VR
#define xSE_FOLDER_NAME F4SE
#define xSE_CONFIG_FOLDER_NAME Fallout4VR
#define xSE_PACKED_VERSION PACKED_F4SE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_F4SEVR

#define xSE_PRELOADFUNCTION F4SEPlugin_Preload
#define xSE_QUERYFUNCTION F4SEPlugin_Query
#define xSE_LOADFUNCTION F4SEPlugin_Load

#elif xSE_PLATFORM_SFSE

#define xSE_NAME SFSE
#define xSE_GAME_NAME Starfield
#define xSE_FOLDER_NAME SFSE
#define xSE_CONFIG_FOLDER_NAME Starfield
#define xSE_PACKED_VERSION PACKED_SFSE_VERSION
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_SFSE

#define xSE_PRELOADFUNCTION SFSEPlugin_Preload
#define xSE_QUERYFUNCTION SFSEPlugin_Query
#define xSE_LOADFUNCTION SFSEPlugin_Load

#else

#define xSE_NAME None
#define xSE_GAME_NAME None
#define xSE_FOLDER_NAME None
#define xSE_CONFIG_FOLDER_NAME None
#define xSE_PACKED_VERSION 0
#define xSE_PLATFORM_GENERATION xSE_PLATFORM_GENERATION_NONE

#endif

#define xSE_NAME_A _CRT_STRINGIZE(xSE_NAME)
#define xSE_NAME_W _CRT_WIDE(xSE_NAME_A)

#define xSE_GAME_NAME_A _CRT_STRINGIZE(xSE_GAME_NAME)
#define xSE_GAME_NAME_W _CRT_WIDE(xSE_GAME_NAME_A)

#define xSE_FOLDER_NAME_A _CRT_STRINGIZE(xSE_FOLDER_NAME)
#define xSE_FOLDER_NAME_W _CRT_WIDE(xSE_FOLDER_NAME_A)

#define xSE_CONFIG_FOLDER_NAME_A _CRT_STRINGIZE(xSE_CONFIG_FOLDER_NAME)
#define xSE_CONFIG_FOLDER_NAME_W _CRT_WIDE(xSE_CONFIG_FOLDER_NAME_A)

//////////////////////////////////////////////////////////////////////////
// Call conventions
//////////////////////////////////////////////////////////////////////////
#define xSE_API(retType) extern "C" __declspec(dllexport) retType __cdecl
