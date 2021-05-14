#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<5> Local_42 = { 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	char* sLocal_49 = NULL;
	struct<5> Local_50 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<5> Local_54 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_43 = -1;
	iLocal_44 = -1;
	fLocal_47 = 1.7f;
	fLocal_48 = 0f;
	sLocal_49 = "";
	iLocal_52 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_131();
	}
	Local_42 = { ScriptParam_54 };
	func_130();
	func_129();
	func_124(iLocal_43, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_123();
	func_115();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_114(iLocal_43);
		func_113();
		func_111();
		func_104();
		func_124(iLocal_43, 0, 0);
		func_130();
		func_6();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_5())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x103
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()//Position - 0x120
{
	Global_250CE3.f_275 = 1;
}

var func_3()//Position - 0x130
{
	return Global_250CE3.f_260;
}

bool func_4()//Position - 0x13F
{
	return MISC::IS_BIT_SET(Global_250CE3.f_2, 11);
}

bool func_5()//Position - 0x153
{
	return MISC::IS_BIT_SET(Global_250FDB.f_1.f_AF8, 3);
}

void func_6()//Position - 0x169
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		func_131();
	}
	if (bLocal_45)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_131();
		}
	}
	func_103();
	bVar0 = true;
	switch (Local_51.x)
	{
		case 4:
			func_102();
			return;
		
		case 5:
			func_99();
			return;
		
		case 6:
			func_97();
			return;
		
		case 7:
			func_96();
			return;
		
		case 8:
			func_95();
			return;
		
		case 9:
			func_93();
			return;
		
		case 10:
			func_92();
			func_89();
			func_88();
			return;
		
		case 11:
			func_87();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_51.x == 12)
	{
		return;
	}
	switch (Local_51.f_1)
	{
		case 1:
			if (!func_86())
			{
				func_85();
				func_89();
			}
			break;
		
		case 2:
			func_83();
			break;
		
		case 12:
			func_70();
			break;
		
		case 3:
			func_7();
			break;
		
		default:
			break;
	}
}

void func_7()//Position - 0x283
{
	char* sVar0;
	struct<53> Var1;
	int iVar2;
	
	PED::SET_PED_TO_RAGDOLL(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_64(PLAYER::PLAYER_ID(), 0, 57344, 1);
		Global_24B0C4.f_55D = 1;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_24B0C4.f_55E = 1;
		}
		else
		{
			Global_24B0C4.f_55E = 0;
		}
		func_62(1);
		func_131();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_1E = 1148829696;
	Var1.f_1F = 1148829696;
	Var1.f_34 = 1148829696;
	iVar2 = 7;
	switch (func_57())
	{
		case 0:
			if (func_55() != 2)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 1:
			if (!func_54(126))
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 3;
			}
			break;
		
		case 2:
			if (!func_53(4))
			{
				if (func_54(58))
				{
					iVar2 = 4;
				}
				if (func_54(59))
				{
					iVar2 = 5;
				}
				if (iVar2 == 7)
				{
					if (!func_52())
					{
						iVar2 = 4;
					}
					else
					{
						iVar2 = 5;
					}
				}
			}
			else
			{
				iVar2 = 6;
			}
			break;
	}
	switch (iVar2)
	{
		case 0:
			sVar0 = "DWC_MICHAEL_mansion";
			Var1 = "SAVEM_Default@";
			Var1.f_1 = "M_GetOut_R";
			Var1.f_2 = "M_GetOut_R_CAM";
			Var1.f_5 = { -814.181f, 181.1f, 75.74f };
			Var1.f_8 = { 0f, 0f, 21.1994f };
			Var1.f_4 = -1871534317;
			break;
		
		case 1:
			sVar0 = "DWC_MICHAEL_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "M_GetOut_countryside";
			Var1.f_2 = "M_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
		
		case 2:
			sVar0 = "DWC_FRANKLIN_city";
			Var1 = "SWITCH@FRANKLIN@BED";
			Var1.f_1 = "Sleep_GetUp_RubEyes";
			Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var1.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var1.f_8 = { 0f, 0f, -179.653f };
			Var1.f_4 = -1871534317;
			break;
		
		case 3:
			sVar0 = "DWC_FRANKLIN_hills";
			Var1 = "SAVEBighouse@";
			Var1.f_1 = "F_GetOut_r_bighouse";
			Var1.f_2 = "F_GetOut_r_bighouse_CAM";
			Var1.f_5 = { -1.049f, 524.283f, 170.064f };
			Var1.f_8 = { 0f, 0f, 24f };
			Var1.f_4 = -1871534317;
			break;
		
		case 4:
			sVar0 = "DWC_TREVOR_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "T_GetOut_countryside";
			Var1.f_2 = "T_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
		
		case 5:
			sVar0 = "DWC_TREVOR_beach";
			Var1 = "SAVEVeniceB@";
			Var1.f_1 = "T_GetOut_r_veniceB";
			Var1.f_2 = "T_GetOut_r_veniceB_CAM";
			Var1.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var1.f_8 = { 0f, 0f, 36.25f };
			Var1.f_4 = -1871534317;
			break;
		
		case 6:
			sVar0 = "DWC_TREVOR_stripclub";
			Var1 = "SAVECouch@";
			Var1.f_1 = "T_GetOut_couch";
			Var1.f_2 = "T_GetOut_couch_CAM";
			Var1.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		ENTITY::SET_ENTITY_COORDS(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var1.f_B), "", 16);
	Var1.f_F = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_131();
}

void func_8(int iParam0, int iParam1)//Position - 0x627
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_C53D[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_C53D[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_9(char* sParam0, var uParam1, char* sParam2)//Position - 0x684
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	var uVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	var uVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	var uVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_21 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_10);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_10))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_44();
	if (!func_43(uParam1->f_16, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 1, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, 0);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	func_41();
	while (func_40())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, 0);
		uVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_38(PLAYER::PLAYER_PED_ID(), uParam1->f_12);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		iVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, 1);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_11))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_10, uParam1->f_11, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_19)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_19 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_B)))
	{
		iVar10 = func_57();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_36(&uVar9, iVar11, PLAYER::PLAYER_PED_ID(), sVar12, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1A))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_1A, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1B))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1C))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_1C, uParam1->f_1B, 0);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1D))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_1D, uParam1->f_1B, 0);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_32();
			iVar15 = MISC::GET_GAME_TIMER();
			if (iVar15 >= (Global_8A88 - 500))
			{
				func_31(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_B)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_F)
					{
						if (func_19(&uVar9, "PRSAUD", &(uParam1->f_B), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar13)))
			{
				iVar19 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar20 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_34 > 0f)
			{
				if (fVar0 >= uParam1->f_34)
				{
					if (!uParam1->f_20)
					{
						fVar21 = 1.5f;
						Var22 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var23 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var23, 1);
						fVar21 = func_18(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_17(&(uParam1->f_22), PLAYER::PLAYER_PED_ID(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_22), uParam1->f_35);
						if (!uParam1->f_21)
						{
							uParam1->f_22 = 1;
							uParam1->f_22.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_22.f_8 = 0;
							uParam1->f_21 = 1;
						}
						if (uParam1->f_39 == 999f)
						{
							uParam1->f_38 = 0f;
						}
						if (uParam1->f_39 == 999f)
						{
							Var27 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							uVar28 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar29 = Var27.f_2;
							fVar30 = uVar28;
							uParam1->f_39 = (fVar29 - fVar30);
							if (uParam1->f_39 < 360f)
							{
								uParam1->f_39 = (uParam1->f_39 + 360f);
							}
							if (uParam1->f_39 > 360f)
							{
								uParam1->f_39 = (uParam1->f_39 - 360f);
							}
						}
						fVar25 = uParam1->f_38;
						fVar26 = uParam1->f_39;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar25);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar26);
						Var31 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var32 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var31, Var32, 1);
						uVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_20 = 1;
					}
					if (uParam1->f_20)
					{
						CAM::_0x59424BD75174C9B1();
						if (func_13(&(uParam1->f_22), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar14)) || iVar18)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							break;
						
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_1F == 999f)
								{
									uParam1->f_1E = 0f;
								}
								if (uParam1->f_1F == 999f)
								{
									Var37 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									uVar38 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar39 = Var37.f_2;
									fVar40 = uVar38;
									uParam1->f_1F = (fVar39 - fVar40);
									if (uParam1->f_1F < 360f)
									{
										uParam1->f_1F = (uParam1->f_1F + 360f);
									}
									if (uParam1->f_1F > 360f)
									{
										uParam1->f_1F = (uParam1->f_1F - 360f);
									}
								}
								fVar35 = uParam1->f_1E;
								fVar36 = uParam1->f_1F;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								Var41 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var42 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar43 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var41, Var42, 1);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(0, 1, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_43(uParam1->f_16, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar45 = CAM::_0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_20)
	{
		CAM::_0x59424BD75174C9B1();
		if (!func_13(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while (bVar45 || bVar46)
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_12(1, 26, &iVar47);
			func_12(1, 79, &iVar47);
			func_12(1, 1, &iVar47);
			func_12(1, 2, &iVar47);
			func_12(0, 22, &iVar47);
			func_12(0, 36, &iVar47);
			func_12(0, 142, &iVar47);
			func_12(0, 141, &iVar47);
			func_12(0, 140, &iVar47);
			func_12(0, 263, &iVar47);
			func_12(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = CAM::_0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_20)
			{
				CAM::_0x59424BD75174C9B1();
				if (!func_13(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_10);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(uVar5, 0);
	func_10(&(uParam1->f_22));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, iVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	sParam0 = sParam0;
}

void func_10(var uParam0)//Position - 0x10AA
{
	func_11(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_11(var uParam0)//Position - 0x10C5
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)//Position - 0x111D
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1136
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	var uVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_14();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var5 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.x)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.x)), SYSTEM::SIN(Var3.x) };
				Var6 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.x)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.x)), SYSTEM::SIN(Var4.x) };
				uVar7 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var2, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, uVar7);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var2, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, uVar7);
				if (uParam0->f_11 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var2, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uVar7);
				}
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_11, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_E - uParam0->f_11), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_E, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_14();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_10))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_F))
			{
				if (bParam2)
				{
					func_11(uParam0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_14()//Position - 0x14D8
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_15();
}

void func_15()//Position - 0x14E8
{
	Global_42CA.f_86 = 1;
}

void func_16(var uParam0, struct<3> Param1)//Position - 0x14F6
{
	uParam0->f_9 = { Param1 };
}

void func_17(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1508
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_C = fParam3;
	uParam0->f_E = iParam4;
	uParam0->f_F = iParam5;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = iParam7;
	uParam0->f_D = iParam8;
}

float func_18(float fParam0, float fParam1, float fParam2)//Position - 0x1540
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_19(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1567
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D55 = 0;
	Global_3D5A = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_280001 = 0;
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)//Position - 0x15B5
{
	Global_3D4D = 0;
	if (Global_3D4C == 0 || Global_3D4E == 2)
	{
		if (Global_3D4C != 0)
		{
			if (iParam1 > Global_3D4E)
			{
				if (Global_3D53 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3839.f_1 = 3;
					Global_3D4C = 0;
					Global_3D4D = 1;
					Global_3D81 = 0;
					Global_3D48 = 0;
					Global_3D49 = 0;
					Global_3D57 = 0;
					Global_3D56 = 0;
					Global_3838 = 0;
				}
				else
				{
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_27();
		Global_3A85 = { Global_3B2A };
		Global_3D52 = Global_3D53;
		Global_3D59 = Global_3D5A;
		Global_280002 = Global_280001;
		Global_3D5B = { Global_3D6B };
		Global_3D54 = Global_3D55;
		Global_412A = Global_412B;
		Global_4132 = { Global_4138 };
		Global_412C = Global_412D;
		Global_412E = Global_412F;
		Global_4130 = Global_4131;
		Global_3BCF.f_172 = Global_4129;
		Global_3BCF.f_170 = Global_4127;
		Global_3BCF.f_171 = Global_4128;
		Global_3D48 = Global_3D49;
		if (Global_3D52)
		{
			MISC::CLEAR_BIT(&Global_8D7, 20);
			MISC::CLEAR_BIT(&Global_8D8, 17);
			MISC::CLEAR_BIT(&Global_8D9, 0);
			if (bParam2)
			{
				func_25();
				if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_3839.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_3817 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_10A95)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_23())
			{
				return 0;
			}
			else
			{
				switch (Global_3839.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_8D7, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_21();
		return 1;
	}
	if (Global_3D4C == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3D4E || iParam1 == Global_3D4E)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_29();
	}
	return 0;
}

void func_21()//Position - 0x1881
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_38E0[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_3D4C = 1;
}

void func_22()//Position - 0x18B1
{
	Global_3D81 = Global_3D80;
	Global_3D7B = Global_3D7C;
	Global_3DAA = { Global_3D9E };
	Global_3DB0 = { Global_3DA4 };
	Global_3D83 = Global_3D82;
	Global_3DC8 = { Global_3DB6 };
	Global_3DCE = { Global_3DBC };
	Global_3DD4 = { Global_3DC2 };
	Global_3DDA = { Global_3DE0 };
	Global_62A = Global_62B;
	Global_62C = Global_62D;
	Global_3D57 = Global_3D58;
	Global_3D59 = Global_3D5A;
	Global_3D5B = { Global_3D6B };
	Global_3D50 = Global_3D51;
	Global_4144 = 0;
	Global_3D7D = 0;
	Global_3D7E = 0;
	MISC::CLEAR_BIT(&Global_8D8, 16);
}

int func_23()//Position - 0x1946
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x196D
{
	int iVar0;
	int iVar1;
	
	if (Global_10A95)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_25()//Position - 0x1A06
{
	if (func_26(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[0 /*29*/])
			{
				Global_3839 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[1 /*29*/])
			{
				Global_3839 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[2 /*29*/])
			{
				Global_3839 = 2;
			}
			else
			{
				Global_3839 = 0;
			}
		}
	}
	else
	{
		Global_3839 = func_57();
		if (Global_3839 == 145)
		{
			Global_3839 = 3;
		}
		if (Global_10A95)
		{
			Global_3839 = 3;
		}
		if (Global_3839 > 3)
		{
			Global_3839 = 3;
		}
	}
}

bool func_26(int iParam0)//Position - 0x1AA7
{
	return Global_8861 == iParam0;
}

void func_27()//Position - 0x1AB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3A85[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3A85[iVar0 /*10*/].f_1), "", 24);
		Global_3A85[iVar0 /*10*/].f_7 = 0;
		Global_3A85[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3A85.f_A1 = -99;
	Global_3A85.f_A2 = { 0f, 0f, 0f };
}

bool func_28(int iParam0, int iParam1)//Position - 0x1B0B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

void func_29()//Position - 0x1B46
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1B9D
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = uParam5;
	if (iParam3 == 0)
	{
		Global_4127 = 1;
		Global_4125 = 0;
	}
	else
	{
		Global_4127 = 0;
		Global_4125 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4128 = 1;
		Global_4126 = 0;
	}
	else
	{
		Global_4128 = 0;
		Global_4126 = 1;
	}
}

void func_31(int iParam0)//Position - 0x1BF3
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_32()//Position - 0x1C05
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_33(int iParam0)//Position - 0x1C2D
{
	if (Global_38D7)
	{
		func_34(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_3D4C = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 30);
	}
	if (!func_23())
	{
		Global_3839.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)//Position - 0x1C9D
{
	if (bParam0)
	{
		if (func_35(0))
		{
			Global_38D7 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_37FA);
			}
			Global_37F1 = { Global_3803[Global_3802 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
	else if (Global_38D7 == 1)
	{
		Global_38D7 = 0;
		Global_37F1 = { Global_380A[Global_3802 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37FA);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
}

int func_35(int iParam0)//Position - 0x1D11
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D6B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)//Position - 0x1E06
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)//Position - 0x1E1D
{
	if (func_39(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_39(uParam1, 0))
	{
	}
}

bool func_39(var uParam0, int iParam1)//Position - 0x1F14
{
	return (uParam0 && iParam1) != 0;
}

int func_40()//Position - 0x1F23
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

void func_41()//Position - 0x1F61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15504[iVar0 /*17*/] && !Global_15504[iVar0 /*17*/].f_1)
		{
			if (Global_15504[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15504[iVar0 /*17*/].f_5 != 88 && Global_15504[iVar0 /*17*/].f_5 != 89) && Global_15504[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_15504[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, bool bParam1)//Position - 0x1FE8
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

bool func_43(struct<3> Param0, struct<3> Param1)//Position - 0x2026
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_44()//Position - 0x204F
{
	func_45();
	func_62(1);
}

void func_45()//Position - 0x2060
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_124(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_8B96[iVar2 /*5*/] == 0)
		{
			func_46(iVar2);
		}
		iVar2++;
	}
}

void func_46(int iParam0)//Position - 0x20C0
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8B96[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8B96[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_8C73 = 0;
		}
	}
	Global_8B96[iParam0 /*5*/] = 13;
	Global_8B96[iParam0 /*5*/].f_1 = 0;
	Global_8B96[iParam0 /*5*/].f_2 = 0;
	Global_8B96[iParam0 /*5*/].f_3 = 0;
	Global_8B96[iParam0 /*5*/].f_4 = 0;
	Global_8B95 = (Global_8B95 - 1);
	if (Global_8B95 < 0)
	{
		Global_8B95 = 0;
	}
}

int func_47(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x2143
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_51(0);
		MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		func_50();
		func_49();
		SYSTEM::SETTIMERA(0);
		func_51(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam3 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && !func_48()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()//Position - 0x2360
{
	return !Global_10642.f_229;
}

void func_49()//Position - 0x2370
{
	Global_10642.f_229 = 1;
	Global_10642.f_22A = 0;
}

void func_50()//Position - 0x2388
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_10642[iVar0] = 0;
		iVar0++;
	}
}

void func_51(int iParam0)//Position - 0x23AC
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(Global_15F6A.f_14, 2))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&(Global_15F6A.f_14), 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_15F6A.f_14, 2))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 2);
		}
	}
}

int func_52()//Position - 0x2403
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)//Position - 0x2424
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_54(int iParam0)//Position - 0x243C
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

int func_55()//Position - 0x2469
{
	if (Global_7E68[11] == 1)
	{
		return 4;
	}
	if (!func_56(21))
	{
		return 0;
	}
	if (!func_54(130))
	{
		return 1;
	}
	if (!func_54(131))
	{
		return 2;
	}
	if (!func_56(22))
	{
		return 1;
	}
	if (!func_56(49))
	{
		return 3;
	}
	if (!func_56(28))
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)//Position - 0x24E7
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

int func_57()//Position - 0x2513
{
	func_58();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_58()//Position - 0x252C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_61(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_60(PLAYER::PLAYER_PED_ID());
			if (func_59(iVar0) && (!func_26(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_59(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

bool func_59(int iParam0)//Position - 0x2629
{
	return iParam0 < 3;
}

int func_60(int iParam0)//Position - 0x2635
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)//Position - 0x2672
{
	if (func_59(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)//Position - 0x269C
{
	CAM::_0x487A82C650EB7799(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_8C5F))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_8C5F))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_8C5F);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_8C54))
	{
		if (CAM::IS_CAM_SHAKING(Global_8C54))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_8C54, 0f);
			CAM::STOP_CAM_SHAKING(Global_8C54, 1);
		}
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_8C5A = 0f;
	StringCopy(&Global_8C5B, "", 16);
	StringCopy(&Global_8C5F, "", 64);
	StringCopy(&Global_8C6F, "", 16);
	func_63();
}

void func_63()//Position - 0x2769
{
	Global_8C53 = 0;
	Global_8C54 = 0;
	Global_8C55 = 0;
	Global_8C56 = 30000;
	Global_8C57 = 0f;
	Global_8C59 = 0f;
	Global_8C58 = 0f;
	Global_8C5A = 0f;
	StringCopy(&Global_8C5B, "", 16);
}

void func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x279A
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_68())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24D5B9[iParam0 /*254*/].f_EE = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(iVar23);
				PED::SET_PED_CAN_RAGDOLL(iVar23, 1);
				func_66();
				func_65();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24D5B9[iParam0 /*254*/].f_EF = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar23) && !PED::IS_PED_IN_ANY_VEHICLE(iVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}

void func_65()//Position - 0x2B19
{
	struct<2> Var0;
	
	Global_24F57C.f_2A4 = 0;
	Global_24F57C.f_2A5 = 0;
	Global_24F57C.f_2A6 = { 9999.9f, 9999.9f, 9999.9f };
	Global_24B0C4.f_560 = { Var0 };
}

void func_66()//Position - 0x2B56
{
	Global_24B0C4.f_21A = 0;
	Global_24B0C4.f_589 = 0;
	Global_24B0C4.f_1A4 = 0;
	Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CC = 0;
}

int func_67(int iParam0)//Position - 0x2B83
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_68()//Position - 0x2BB4
{
	if (func_69() == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x2BC9
{
	return Global_1406D3.f_12;
}

void func_70()//Position - 0x2BD7
{
	int iVar0;
	
	if (bLocal_45)
	{
		return;
	}
	Local_42.f_4 = 0;
	if (!func_71(Global_8BB0[iLocal_53 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Local_51.x = 5;
	Local_50.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_71(int iParam0)//Position - 0x2C1A
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_82();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_42.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_42.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_42.f_1))
		{
			return 0;
		}
		if (func_78(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_8BB0[iLocal_53 /*5*/].f_3 < 3 && Global_8BB0[iLocal_53 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_8BB0[iLocal_53 /*5*/].f_4 < 9 && Global_8BB0[iLocal_53 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
	{
		return 0;
	}
	if (func_78(Local_42.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_74(Local_42.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_42.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_49 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_42.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_42.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
	Local_51.f_2 = sVar1;
	bLocal_46 = true;
	iVar4 = 0;
	switch (func_60(Local_42.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_42.f_1))
			{
				if (!func_72())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_42.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_42.f_1, 200, 1);
	PED::SET_PED_RESET_FLAG(Local_42.f_1, 46, 1);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_42.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_42.f_1, 262144, 1);
	AUDIO::SET_PED_IS_DRUNK(Local_42.f_1, 1);
	return 1;
}

bool func_72()//Position - 0x2EAC
{
	return func_73(PLAYER::PLAYER_ID());
}

int func_73(int iParam0)//Position - 0x2EBC
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x2EDB
{
	struct<3> Var0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_105F2)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()//Position - 0x2FDC
{
	return Global_15F9E.f_123 > 0;
}

bool func_76()//Position - 0x2FED
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

char* func_77(int iParam0)//Position - 0x3002
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_78(int iParam0)//Position - 0x3043
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_79(iParam0);
	uVar1 = func_77(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_51.f_2))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(Local_51.f_2, sVar1);
}

int func_79(int iParam0)//Position - 0x3084
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8BB0[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)//Position - 0x30C7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8BB0[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_81(int iParam0)//Position - 0x30F7
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
		{
			return Global_8BB0[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_82()//Position - 0x3138
{
	int iVar0;
	
	if (Local_50 == -2)
	{
		return -2;
	}
	if (Local_50 == -1)
	{
		return -1;
	}
	iVar0 = (Local_50 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_83()//Position - 0x317E
{
	if (bLocal_45)
	{
		return;
	}
	if (!func_84())
	{
		Local_51.x = 5;
		Local_50.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	Local_51.x = 6;
}

bool func_84()//Position - 0x31AA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_42.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_1, 1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_4, 1) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, 1);
	return fVar2 < 7f;
}

void func_85()//Position - 0x31FA
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_42.f_1))
		{
			if (Global_8BB0[iLocal_53 /*5*/].f_2 == 0 || Global_8BB0[iLocal_53 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_42.f_1, 0, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_42.f_1))
		{
			PED::SET_PED_DUCKING(Local_42.f_1, 0);
		}
	}
	if (Local_50 != -2)
	{
		if (Local_50 == -1)
		{
			if (Global_8BB0[iLocal_53 /*5*/].f_2 != 0)
			{
				Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_50 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_8BB0[iLocal_53 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_8BB0[iLocal_53 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_8BB0[iLocal_53 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_8BB0[iLocal_53 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_49))
	{
		if (!func_74(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_42.f_1, sVar1, sLocal_49, 3))
			{
				TASK::STOP_ANIM_TASK(Local_42.f_1, sVar1, sLocal_49, -4f);
			}
			sLocal_49 = "";
			return;
		}
	}
	if (Global_8BB0[iLocal_53 /*5*/].f_3 >= 10 || Global_8BB0[iLocal_53 /*5*/].f_4 >= 15)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_42.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 1))
		{
			if (Global_8BB0[iLocal_53 /*5*/].f_3 >= 10)
			{
				Global_8BB0[iLocal_53 /*5*/].f_3 = 9;
			}
			if (Global_8BB0[iLocal_53 /*5*/].f_4 >= 15)
			{
				Global_8BB0[iLocal_53 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_51.f_1 = 3;
		return;
	}
	if (!bLocal_46)
	{
		return;
	}
	if (!func_78(Local_42.f_1))
	{
		return;
	}
}

int func_86()//Position - 0x3407
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_51.x = 7;
	return 1;
}

void func_87()//Position - 0x345A
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_51.x = 4;
		return;
	}
}

void func_88()//Position - 0x3475
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_45)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3, Var4) && !PED::IS_COP_PED_IN_AREA_3D(Var3, Var4))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	func_8(73, 1);
}

void func_89()//Position - 0x3544
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_42.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_42.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_48 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_50.f_4)
	{
		func_91(iVar0, fLocal_48);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_50.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_50.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_48 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_50.f_1 == -1)
	{
		fLocal_48 = func_90(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_50.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_48 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_48 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_48 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_48 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_48 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_48 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_48);
}

float func_90(int iParam0, float fParam1, float fParam2)//Position - 0x36CF
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_18(fVar0, -1f, 1f);
	return fVar0;
}

void func_91(int iParam0, float fParam1)//Position - 0x3763
{
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_92()//Position - 0x3798
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_51.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_8BB0[iLocal_53 /*5*/].f_3 >= 10 || Global_8BB0[iLocal_53 /*5*/].f_4 >= 15)
		{
			if (Global_8BB0[iLocal_53 /*5*/].f_3 >= 10)
			{
				Global_8BB0[iLocal_53 /*5*/].f_3 = 9;
			}
			if (Global_8BB0[iLocal_53 /*5*/].f_4 >= 15)
			{
				Global_8BB0[iLocal_53 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_45)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_42.f_1, 0, 0);
		Local_51.x = 11;
		return;
	}
}

void func_93()//Position - 0x383C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_50.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_50.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_51.x = 4;
		Local_50.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_94();
		Local_50.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_42.f_1, iVar1);
	Local_51.x = 9;
	Local_50.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_94()//Position - 0x38D5
{
	if (Local_51.x == 10)
	{
		return;
	}
	Local_51.x = 10;
	if (iLocal_43 == -1)
	{
		return;
	}
	func_124(iLocal_43, 2, 5);
	Local_50.f_4 = SYSTEM::TIMERA();
	fLocal_48 = 0f;
}

void func_95()//Position - 0x3907
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		Local_51.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_50.f_3)
	{
		return;
	}
	Local_51.x = 4;
	Local_50.f_3 = -2;
}

void func_96()//Position - 0x3939
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_45)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		if (!bLocal_45)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		if (!iVar0 == Local_42.f_4)
		{
			if (!bLocal_45)
			{
			}
			if (!bLocal_45)
			{
				if (!bLocal_45)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_42.f_1, 0, 0);
				Local_51.x = 11;
				return;
			}
			Local_42.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_45)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_45)
		{
			if (!bLocal_45)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_45)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_94();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_42.f_1, iVar0);
		Local_51.x = 9;
		Local_50.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_84())
	{
		TASK::CLEAR_PED_TASKS(Local_42.f_1);
		Local_51.x = 4;
		return;
	}
	if (!bLocal_45)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_42.f_1);
				Local_51.x = 4;
				return;
			}
		}
	}
}

void func_97()//Position - 0x3A53
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_45)
	{
		return;
	}
	if (Local_42.f_4 == 0)
	{
		Local_51.x = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_51.x = 4;
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_1, 1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_4, 1) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, 1);
	if (fVar2 > 3f)
	{
		if (!func_71(Global_8BB0[iLocal_53 /*5*/].f_2))
		{
			Local_51.x = 12;
			return;
		}
		Local_51.x = 5;
		Local_50.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_42.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_42.f_4, iVar4))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_51.x = 4;
			return;
		}
	}
	func_98();
	TASK::TASK_ENTER_VEHICLE(Local_42.f_1, Local_42.f_4, -1, iVar4, 1073741824, 1, 0);
	Local_51.x = 7;
}

void func_98()//Position - 0x3B55
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_42.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_42.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_42.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Local_42.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_42.f_1, 0, -1056964608);
		Local_51.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_42.f_1);
		PED::SET_PED_RESET_FLAG(Local_42.f_1, 200, 0);
		PED::SET_PED_RESET_FLAG(Local_42.f_1, 46, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_42.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_42.f_1, 262144, 0);
		AUDIO::SET_PED_IS_DRUNK(Local_42.f_1, 0);
	}
	if (!bLocal_46)
	{
		return;
	}
	bLocal_46 = false;
}

void func_99()//Position - 0x3BEA
{
	if (SYSTEM::TIMERA() < Local_50.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_50.f_2 = -2;
	Local_51.x = 12;
}

int func_100()//Position - 0x3C14
{
	if (!func_78(Local_42.f_1))
	{
		return 0;
	}
	if (!bLocal_46)
	{
		return 0;
	}
	func_101(Local_42.f_1);
	Local_51.f_2 = "";
	return 1;
}

void func_101(int iParam0)//Position - 0x3C45
{
	PED::RESET_PED_MOVEMENT_CLIPSET(uParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(uParam0, 200, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, 0);
	AUDIO::SET_PED_IS_DRUNK(iParam0, 0);
}

void func_102()//Position - 0x3C86
{
	int iVar0;
	
	if (Local_50 == -1)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
	}
	else if (Global_8BB0[iLocal_53 /*5*/].f_3 < 3 && Global_8BB0[iLocal_53 /*5*/].f_3 != 0)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_50 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_51.x = 10;
		return;
	}
	if (func_78(Local_42.f_1))
	{
		Local_51.x = 12;
		return;
	}
	if (Local_50 == -2)
	{
		return;
	}
	if (!func_71(Global_8BB0[iLocal_53 /*5*/].f_2))
	{
		return;
	}
	Local_51.x = 12;
}

void func_103()//Position - 0x3D5C
{
}

void func_104()//Position - 0x3D64
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_8C01[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_8C01[iVar1 /*5*/].f_1 == iLocal_43)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_8C01[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_44 == -1)
				{
					if (iLocal_44 == Global_8C01[iVar1 /*5*/])
					{
						func_106(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)//Position - 0x3DDC
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_8C01[iParam0 /*5*/] = -1;
	Global_8C01[iParam0 /*5*/].f_1 = -1;
	Global_8C01[iParam0 /*5*/].f_2 = 6;
	Global_8C01[iParam0 /*5*/].f_3 = 0;
	Global_8C01[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)//Position - 0x3E29
{
	int iVar0;
	
	iVar0 = Global_8C01[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_8C01[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_109();
			break;
		
		case 4:
			func_108();
			break;
		
		case 5:
			func_107();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_107()//Position - 0x3EA2
{
	Local_51.f_1 = 2;
}

void func_108()//Position - 0x3EAF
{
	int iVar0;
	
	Global_8BB0[iLocal_53 /*5*/].f_4++;
	if (Local_50 == -1)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
	}
	else if (Global_8BB0[iLocal_53 /*5*/].f_4 < 9 && Global_8BB0[iLocal_53 /*5*/].f_4 != 0)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_50 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_8BB0[iLocal_53 /*5*/].f_2);
		}
	}
}

void func_109()//Position - 0x3F6F
{
	int iVar0;
	
	Global_8BB0[iLocal_53 /*5*/].f_3++;
	if (Local_50 == -1)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
	}
	else if (Global_8BB0[iLocal_53 /*5*/].f_3 < 3 && Global_8BB0[iLocal_53 /*5*/].f_3 != 0)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_50 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_8BB0[iLocal_53 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)//Position - 0x402F
{
	Local_42.f_3 = (Local_42.f_3 + iParam0);
	Local_42.f_2 = (Local_42.f_2 + iParam0);
	Local_50.f_1 = (Local_50.f_1 + iParam0);
	Local_50 = (Local_50 + iParam0);
}

void func_111()//Position - 0x405F
{
	int iVar0;
	
	if (!bLocal_45)
	{
		iLocal_52 = -1;
		return;
	}
	if (iLocal_52 < 0)
	{
		iLocal_52 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_52)
	{
		if (iVar0 > iLocal_52)
		{
			func_112();
		}
		iLocal_52 = iVar0;
		return;
	}
}

void func_112()//Position - 0x40A9
{
}

void func_113()//Position - 0x40B1
{
	if (!Local_50 == -1)
	{
		if (!Local_50 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_50)
			{
				func_98();
				Local_50 = -2;
				Local_51.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_50.f_1)
		{
			func_131();
		}
	}
}

void func_114(int iParam0)//Position - 0x40F0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8C01[iVar0 /*5*/])
		{
			func_105(iVar0);
		}
		iVar0++;
	}
}

void func_115()//Position - 0x4120
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_51.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
		{
			Local_51.x = 10;
		}
	}
	if (bLocal_45)
	{
		func_122();
		func_8(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_121(2041, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2041, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_51.f_1 = 1;
		return;
	}
	Local_51.f_1 = 12;
	if (Local_50 == -1)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
	}
	else if (Global_8BB0[iLocal_53 /*5*/].f_3 < 3 && Global_8BB0[iLocal_53 /*5*/].f_3 != 0)
	{
		Global_8BB0[iLocal_53 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_50 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_8BB0[iLocal_53 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_8BB0[iLocal_53 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42CB
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_117(var uParam0)//Position - 0x42F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
		if (iVar1 > -1)
		{
			Global_25732E = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_25732E = 1;
		}
	}
	return iVar0;
}

var func_118()//Position - 0x432A
{
	return Global_1407E1;
}

void func_119(int iParam0)//Position - 0x4336
{
	int iVar0;
	
	iVar0 = func_120(81);
	Global_24C174[iVar0 /*83*/] = 81;
	Global_24C174[iVar0 /*83*/].f_11 = iParam0;
	StringCopy(&(Global_24C174[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

int func_120(int iParam0)//Position - 0x436D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24C174[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24C174[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x43BA
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_117(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122()//Position - 0x43EC
{
}

void func_123()//Position - 0x43F4
{
	Local_50 = Local_42.f_2;
	Local_50.f_1 = Local_42.f_3;
	Local_50.f_2 = -2;
	Local_50.f_3 = -2;
}

void func_124(int iParam0, int iParam1, int iParam2)//Position - 0x4418
{
	func_125(iParam0, iParam1, iParam2, 0, 0);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x442C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
	if (iVar0 == -1)
	{
		return;
	}
	Global_8C01[iVar0 /*5*/] = iParam0;
	Global_8C01[iVar0 /*5*/].f_1 = iParam1;
	Global_8C01[iVar0 /*5*/].f_2 = iParam2;
	Global_8C01[iVar0 /*5*/].f_3 = iParam3;
	Global_8C01[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()//Position - 0x44A3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8C01[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x44D4
{
	if (func_128(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2)//Position - 0x44EF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				if (iParam1 == Global_8C01[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129()//Position - 0x453B
{
	int iVar0;
	
	bLocal_45 = false;
	if (Local_42.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_45 = true;
		Global_8C74 = 1;
		Global_8C76++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		iVar0 = func_60(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()//Position - 0x45A7
{
	if (!iLocal_43 == -1)
	{
		return;
	}
	iLocal_43 = func_81(Local_42.f_1);
	if (iLocal_43 == -1)
	{
		return;
	}
	iLocal_53 = func_80(iLocal_43);
}

void func_131()//Position - 0x45D5
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
		{
			iVar0 = func_60(Local_42.f_1);
			if (Global_8BB0[iLocal_53 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_45)
	{
		Global_8C74 = 0;
	}
	func_132();
	STREAMING::REMOVE_ANIM_DICT(func_77(0));
	STREAMING::REMOVE_ANIM_DICT(func_77(2));
	STREAMING::REMOVE_ANIM_DICT(func_77(1));
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_132()//Position - 0x46D3
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_42.f_1)
	{
		return;
	}
	fLocal_48 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)//Position - 0x474B
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_134(iParam2), 1);
}

int func_134(int iParam0)//Position - 0x4762
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

