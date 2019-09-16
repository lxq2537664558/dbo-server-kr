//***********************************************************************************
//
//	File		:	NtlPacketGN.cpp
//
//	Begin		:	2006-05-12
//
//	Copyright	:	�� NTL-Inc Co., Ltd
//
//	Author		:	Hyun Woo, Koo   ( zeroera@ntl-inc.com )
//
//	Desc		:	
//
//***********************************************************************************


#include "StdAfx.h"
#include "NtlPacketGN.h"


const char * s_packetName_GN[] =
{
	DECLARE_PACKET_NAME( GN_GAME_DATA_RES ),
	DECLARE_PACKET_NAME( GN_CHAR_SPAWN_REQ ),

	DECLARE_PACKET_NAME( GN_WORLD_CREATED_NFY ),
	DECLARE_PACKET_NAME( GN_WORLD_DESTROYED_NFY ),
	DECLARE_PACKET_NAME( GN_OBJECT_CREATED_NFY ),
	DECLARE_PACKET_NAME( GN_OBJECT_DESTROYED_NFY ),
	DECLARE_PACKET_NAME( GN_OBJECT_WORLD_ENTERED ),
	DECLARE_PACKET_NAME( GN_OBJECT_WORLD_LEAVED ),

	DECLARE_PACKET_NAME( GN_PREPARE_ENTER_GAME ),
	DECLARE_PACKET_NAME( GN_ENTER_GAME_RES ),
	DECLARE_PACKET_NAME( GN_LEAVE_GAME_RES ),
	DECLARE_PACKET_NAME( GN_ENTER_WORLD_RES ),
	DECLARE_PACKET_NAME( GN_LEAVE_WORLD_RES ),

	DECLARE_PACKET_NAME( GN_CHAR_MOVE ),
	DECLARE_PACKET_NAME( GN_CHAR_DEST_MOVE ),
	DECLARE_PACKET_NAME( GN_CHAR_CHANGE_HEADING ),
	DECLARE_PACKET_NAME( GN_CHAR_FOLLOW_MOVE ),
	DECLARE_PACKET_NAME( GN_CHAR_JUMP ),
	DECLARE_PACKET_NAME( GN_CHAR_JUMP_END ),
	DECLARE_PACKET_NAME( GN_CHAR_FIGHTMODE ),
	DECLARE_PACKET_NAME( GN_CHAR_MOVE_SYNC ),
	DECLARE_PACKET_NAME( GN_CHAR_CHANGE_DIRECTION_ON_FLOATING ),

	DECLARE_PACKET_NAME( GN_CHAR_ACTION_ATTACK ),
	DECLARE_PACKET_NAME( GN_CHAR_ACTION_SKILL ),
	DECLARE_PACKET_NAME( GN_CHAR_ACTION_ITEM ),
	DECLARE_PACKET_NAME( GN_CHAR_ACTION_HTB ),
	DECLARE_PACKET_NAME( GN_CHAR_TARGET_SELECT ),
	DECLARE_PACKET_NAME( GN_CHAR_TARGET_FACING ),
	DECLARE_PACKET_NAME( GN_CHAR_TARGET_LOST_NFY ),
	DECLARE_PACKET_NAME( GN_CHAR_KEEP_AGGRO ),
	DECLARE_PACKET_NAME( GN_CHAR_CHANGE_AGGRO ),
	DECLARE_PACKET_NAME( GN_CHAR_ERASE_AGGRO_AROUND_ME ),
	DECLARE_PACKET_NAME( GN_CHAR_START_ESCORT_REQ),
	DECLARE_PACKET_NAME( GN_CHAR_STOP_ESCORT_NFY),

	DECLARE_PACKET_NAME( GN_BUFF_REGISTERED ),
	DECLARE_PACKET_NAME( GN_BUFF_DROPPED ),
	DECLARE_PACKET_NAME( GN_EFFECT_AFFECTED ),

	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_STATE ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_ASPECT_STATE ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_CONDITION ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_LEVEL ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_LP ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_EP ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_LP_EP ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_SPEED ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_SCALE ),

	DECLARE_PACKET_NAME( GN_SERVER_COMMAND ),
	DECLARE_PACKET_NAME( GN_TS_SERVER_EVENT ),
	DECLARE_PACKET_NAME( GN_TQS_SERVER_EVENT ),

	DECLARE_PACKET_NAME( GN_BOT_SKILL_RES ),	// [2/11/2008 SGpro]

	DECLARE_PACKET_NAME( GN_SKILL_TARGET_LIST_REQ ),
	DECLARE_PACKET_NAME( GN_SKILL_COOL_TIME_STARTED_NFY ),
	DECLARE_PACKET_NAME( GN_SKILL_CONFUSE_TARGET_NFY ),
	DECLARE_PACKET_NAME( GN_SKILL_TERROR_COURSE_CHANGE_NFY ),

	DECLARE_PACKET_NAME( GN_CHAR_TELEPORT_RES ), // [8/4/2008 SGpro]
	DECLARE_PACKET_NAME( GN_WPS_SERVER_EVENT ),
	DECLARE_PACKET_NAME( GN_SEND_TQS_EVENT ),
	DECLARE_PACKET_NAME( GN_SEND_WPS_EVENT ),

	DECLARE_PACKET_NAME( GN_MONSTER_TRANSFORMED_NFY ),

	DECLARE_PACKET_NAME( GN_SCRIPT_ITEM_USE ),

	DECLARE_PACKET_NAME( GN_CHANGE_SPS_SCENE_REQ ),

	DECLARE_PACKET_NAME( GN_WORLD_ADD_BOT_NFY ),

	DECLARE_PACKET_NAME( GN_PET_ATTACK_TARGET_NFY ),

	DECLARE_PACKET_NAME( GN_CHAR_TARGET_CHANGED_NFY ),

	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_MAX_LP ),
	DECLARE_PACKET_NAME( GN_UPDATE_CHAR_MAX_EP ),
};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_GN(WORD wOpCode)
{
	if( wOpCode < GN_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > GN_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - GN_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_GN) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_GN[ nIndex ];
}
