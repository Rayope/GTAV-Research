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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	bool bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	char cLocal_43[64] = "";
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
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
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_32 = -1;
	iLocal_39 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	StringCopy(&cLocal_43, "NULL", 64);
	StringCopy(&cLocal_52, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_65();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_68))
	{
		iLocal_34 = iScriptParam_68;
		iLocal_37 = iScriptParam_68;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_64();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_68))
		{
			if ((iLocal_40 != -1 && (func_63() && !func_62())) && !func_61(iLocal_40))
			{
				func_65();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_68))
			{
				func_65();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_68))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_59();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_68) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_40 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_38 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_38))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_38, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_40 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_5FB8[iLocal_40 /*11*/].f_2 = 0;
								Global_5FB8[iLocal_40 /*11*/].f_6 = 1;
								Global_5FB8[iLocal_40 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_5FB8[iLocal_40 /*11*/].f_1 = 0;
								Global_5FB8[iLocal_40 /*11*/].f_4 = 0;
								Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
								Global_5FB8[iLocal_40 /*11*/].f_8 = 0;
								Global_5FB8[iLocal_40 /*11*/].f_A = 0;
								fLocal_29 = -4f;
								func_52(&uLocal_25);
								func_50();
								func_49();
								SYSTEM::WAIT(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_34) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_34, 1119092736))
							{
								if (func_41() || Global_5FB8[iLocal_40 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								func_40(&iLocal_39);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_40))
							{
								func_40(&iLocal_39);
								if (func_39("TV_HLP1"))
								{
									HUD::CLEAR_HELP(1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_34))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_34, 1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_35))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_35, 0);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_43, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_43, 0);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(0);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_37);
							}
							if (!func_61(iLocal_40))
							{
								if ((Global_5FB8[iLocal_40 /*11*/] == 3 || Global_5FB8[iLocal_40 /*11*/] == 2) || Global_5FB8[iLocal_40 /*11*/] == -1)
								{
									Global_5FB8[iLocal_40 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_5FB8[iLocal_40 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_29);
							}
							else
							{
								iLocal_41 = Global_5FB8[iLocal_40 /*11*/];
								iLocal_42 = Global_5FB8[iLocal_40 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_41, func_38(iLocal_42), Global_5FB8[iLocal_40 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_41);
								if (Global_5FB8[iLocal_40 /*11*/].f_7)
								{
									Global_5FB8[iLocal_40 /*11*/].f_5 = 0;
									Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
								}
							}
							Global_5FB8[iLocal_40 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_5FB8[iLocal_40 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_5FB8[iLocal_40 /*11*/].f_7 && func_61(iLocal_40))
							{
								Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_40))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_5FB8[iLocal_40 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_40))
							{
								iLocal_28 = 2;
							}
							if (Global_5FB8[iLocal_40 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_39 != -1)
							{
								func_40(&iLocal_39);
							}
							Global_5FB8[iLocal_40 /*11*/].f_5 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_4 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_1 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_2 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_8 = 0;
							Global_5FB8[iLocal_40 /*11*/].f_A = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_65();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x4DE
{
	if (iLocal_40 != -1)
	{
		Global_5FB8[iLocal_40 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_29 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_43, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_43, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_3();
	func_49();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_35))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_35, 1);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	func_2();
}

void func_2()//Position - 0x587
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_66 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_66 = 0;
		}
	}
}

void func_3()//Position - 0x5A3
{
	if (!iLocal_32 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_32);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_34, 0);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 0);
	}
}

void func_4()//Position - 0x638
{
	if (iLocal_64)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (CAM::IS_CAM_ACTIVE(uLocal_61))
		{
			CAM::SET_CAM_ACTIVE(uLocal_61, 0);
		}
		CAM::DESTROY_CAM(uLocal_61, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_30, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_33 == 1)
				{
					bLocal_33 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_52, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_52))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_52);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 1);
		}
		func_5(0, 1, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		iLocal_64 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x6FF
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_13(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_12())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_11(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_13(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_11(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_6(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_6(int iParam0)//Position - 0x7D0
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_7())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_C2, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()//Position - 0x811
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_8(int iParam0, int iParam1)//Position - 0x822
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)//Position - 0x86D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()//Position - 0x8AE
{
	return Global_1407E1;
}

int func_11(int iParam0, var uParam1, var uParam2)//Position - 0x8BA
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()//Position - 0x8EB
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)//Position - 0x912
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 13);
	}
}

int func_14()//Position - 0x935
{
	if (!func_61(iLocal_40))
	{
		if (((((((func_28(&uLocal_25) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 1f, 1f, 1.5f, 0, 1, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_34) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !func_27(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_30, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_39 == -1)
			{
				func_26();
				func_25(&iLocal_39, 3, "TV_HLP5", 0, 0);
			}
			else if (func_23(iLocal_39, 1))
			{
				func_40(&iLocal_39);
				func_52(&uLocal_25);
				Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_2();
			func_40(&iLocal_39);
		}
	}
	return 0;
}

void func_15()//Position - 0xA3E
{
	if (iLocal_64 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_40(&iLocal_39);
			func_25(&iLocal_39, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (bLocal_33)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
		func_20(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		func_16();
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			func_40(&iLocal_39);
			func_4();
		}
	}
}

void func_16()//Position - 0xAF4
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_17(int iParam0)//Position - 0xB1C
{
	if (Global_38D7)
	{
		func_18(0, 0);
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
	if (!func_12())
	{
		Global_3839.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)//Position - 0xB8C
{
	if (bParam0)
	{
		if (func_19(0))
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

int func_19(int iParam0)//Position - 0xC00
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

void func_20(bool bParam0, bool bParam1)//Position - 0xC5A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_21(0))
		{
			if (!iLocal_21)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_23 = MISC::GET_GAME_TIMER();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_23 = MISC::GET_GAME_TIMER();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}

int func_21(int iParam0)//Position - 0xD9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_22()//Position - 0xDEB
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_64 == 0)
	{
		uLocal_61 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_62, Local_63, fVar0, 0, 2);
		CAM::SET_CAM_FAR_CLIP(uLocal_61, 100f);
		CAM::SET_CAM_ACTIVE(uLocal_61, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				bLocal_33 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_30, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_52, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_52))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_52);
			}
		}
		func_5(1, 1, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
		iLocal_64 = 1;
	}
}

int func_23(int iParam0, bool bParam1)//Position - 0xEBD
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/] == 1 && Global_8B1D[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_8B1D[iVar0 /*18*/].f_10)
				{
					return 0;
				}
			}
			Global_8B1D[iVar0 /*18*/].f_4 = 1;
			Global_8B1D[iVar0 /*18*/].f_10 = 1;
			return 1;
		}
		else
		{
			if (Global_8B1D[iVar0 /*18*/] == 0)
			{
			}
			if (Global_8B1D[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0xF75
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0xFB0
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/] = 1;
			Global_8B1D[iVar0 /*18*/].f_1 = Global_8B92;
			Global_8B92++;
			Global_8B1D[iVar0 /*18*/].f_3 = 0;
			Global_8B1D[iVar0 /*18*/].f_10 = 0;
			Global_8B1D[iVar0 /*18*/].f_4 = 0;
			Global_8B1D[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_8B1D[iVar0 /*18*/].f_7), sParam2, 16);
			Global_8B1D[iVar0 /*18*/].f_5 = iParam3;
			Global_8B1D[iVar0 /*18*/].f_11 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8B1D[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8B1D[iVar0 /*18*/].f_B = 1;
				StringCopy(&(Global_8B1D[iVar0 /*18*/].f_C), sParam4, 16);
			}
			else
			{
				Global_8B1D[iVar0 /*18*/].f_B = 0;
			}
			*iParam0 = Global_8B1D[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()//Position - 0x10BB
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_66 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("TV_Controls");
			iLocal_66 = 1;
		}
	}
}

bool func_27(int iParam0, int iParam1)//Position - 0x10DB
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

float func_28(var uParam0)//Position - 0x1116
{
	if (func_31(uParam0))
	{
		if (func_30(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_29(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)//Position - 0x1155
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_30(var uParam0)//Position - 0x119D
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_31(var uParam0)//Position - 0x11AD
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_32()//Position - 0x11BD
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_32);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_33(float fParam0)//Position - 0x11FE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()//Position - 0x123B
{
	Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
	Global_5FB8[iLocal_40 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_29 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_52))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_52);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_40(&iLocal_39);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_49();
}

int func_35(int iParam0)//Position - 0x12BB
{
	struct<3> Var0;
	
	Var0 = { func_36(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_36(int iParam0)//Position - 0x1330
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_37(int iParam0, int iParam1)//Position - 0x1343
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

char* func_38(int iParam0)//Position - 0x13A0
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_39(char* sParam0)//Position - 0x147F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_40(int iParam0)//Position - 0x1492
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_24(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()//Position - 0x14E9
{
	if (func_28(&uLocal_25) < 1f)
	{
		func_40(&iLocal_39);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 1f, 1f, 1.5f, 0, 1, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_30, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_34) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (Global_154FF)
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (Global_5FB8[iLocal_40 /*11*/].f_8)
	{
		func_40(&iLocal_39);
		return 0;
	}
	if (iLocal_39 == -1)
	{
		func_25(&iLocal_39, 3, "TV_HLP1", 0, 0);
		return 0;
	}
	if (func_23(iLocal_39, 1))
	{
		func_40(&iLocal_39);
		func_52(&uLocal_25);
		Global_5FB8[iLocal_40 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_42(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0x1615
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_17C49.f_2100[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_17C49.f_2100[iParam0 /*12*/].f_6 == 11 || Global_17C49.f_2100[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_17C49.f_2100[iParam0 /*12*/].f_5 = 1;
		Global_17C49.f_2100[iParam0 /*12*/].f_A = iParam1;
		Global_17C49.f_2100[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()//Position - 0x16FD
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_17B41 = 0;
	Global_17B42 = 0;
	Global_17B43 = 0;
	Global_17B44 = 0;
	Global_17B45 = 0;
	Global_17B46 = 0;
	Global_17B47 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_17C49.f_2100.f_F0D;
	Global_17C49.f_2100.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_17C49.f_2100[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_17C49.f_2100[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_17B41++;
					fVar1 = (fVar1 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_17B42++;
					fVar2 = (fVar2 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_17B43++;
					fVar3 = (fVar3 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_17B44++;
					fVar4 = (fVar4 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_17B45++;
					fVar5 = (fVar5 + (Global_17C49.f_2100[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_17B46++;
					fVar6 = (fVar6 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_17B47++;
					fVar7 = (fVar7 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_17B30 > 0)
	{
		if (Global_17B41 == Global_17B30)
		{
			fVar1 = 55f;
		}
	}
	if (Global_17B31 > 0)
	{
		if (Global_17B42 == Global_17B31)
		{
			fVar2 = 10f;
		}
	}
	if (Global_17B32 > 0)
	{
		if (Global_17B43 == Global_17B32)
		{
			fVar3 = 0f;
		}
	}
	if (Global_17B33 > 0)
	{
		if (Global_17B44 == Global_17B33)
		{
			fVar4 = 10f;
		}
	}
	if (Global_17B34 > 0)
	{
		if (((Global_17B45 == Global_17B34 || (Global_17B34 * 10 / Global_17B45) < 41) || Global_17B45 > Global_17B37) || Global_17B45 == Global_17B37)
		{
			if (!MISC::IS_BIT_SET(Global_17C49.f_2100.f_F10, 14))
			{
				if (Global_17B45 == Global_17B34)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_17B34, 0);
					MISC::SET_BIT(&(Global_17C49.f_2100.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_17B35 > 0)
	{
		if (Global_17B46 == Global_17B35)
		{
			fVar6 = 15f;
		}
	}
	if (Global_17B36 > 0)
	{
		if (Global_17B47 == Global_17B36)
		{
			fVar7 = 5f;
		}
	}
	Global_17C49.f_2100.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_17B45 > Global_17B37 || Global_17B45 == Global_17B37)
	{
		iVar9 = Global_17B37;
	}
	else
	{
		iVar9 = Global_17B45;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_17B41, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_17B30, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_17B42, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_17B31, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_17B43, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_17B32, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_17B44, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_17B33, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_17B37, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_17B47 + Global_17B46), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_17B36 + Global_17B35), 1);
	Global_17B48 = (Global_17B41 * 100 / Global_17B30);
	Global_17B4A = ((Global_17B43 + Global_17B42) * 100 / (Global_17B32 + Global_17B31));
	Global_17B49 = ((Global_17B44 + iVar9) * 100 / (Global_17B33 + Global_17B37));
	Global_17B4B = ((Global_17B46 + Global_17B47) * 100 / (Global_17B35 + Global_17B36));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_17C49.f_2100.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_17B48, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_17B49, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_17B4A, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D))
	{
		func_47(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_46() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()//Position - 0x1BBE
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_15F91.f_8)
	{
		if (Global_15F91.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_15F91.f_A > 1)
	{
		return 0;
	}
	Global_15F91.f_A++;
	return 1;
}

bool func_45(bool bParam0)//Position - 0x1C09
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_46()//Position - 0x1C34
{
	return Global_5F7C;
}

int func_47(int iParam0, int iParam1)//Position - 0x1C3F
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C90
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()//Position - 0x1EED
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_32 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_50()//Position - 0x1F19
{
	int iVar0;
	
	if (iLocal_40 == 4)
	{
		func_51();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		func_65();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_34);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_40 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				func_65();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_34))
			{
				func_65();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_32 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_51()//Position - 0x1FD7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_34 = 0;
	iLocal_34 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_34, uLocal_31);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_34, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_34, 0);
	iLocal_36 = 0;
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, uLocal_31);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 0);
}

void func_52(var uParam0)//Position - 0x2052
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)//Position - 0x2061
{
	uParam0->f_1 = (func_29(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_54()//Position - 0x208F
{
}

int func_55(int iParam0)//Position - 0x2097
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_56()//Position - 0x20C3
{
	Local_30 = { ENTITY::GET_ENTITY_COORDS(iLocal_34, 1) };
	uLocal_31 = ENTITY::GET_ENTITY_HEADING(iLocal_34);
	func_58();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_40 = 0;
			Local_62 = { -9.8135f, -1440.913f, 31.3654f };
			Local_63 = { 0f, 0f, -134.3211f };
			Local_67 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_43, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_52, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_40 = 2;
			Local_62 = { 1978.23f, 3819.65f, 34.2724f };
			Local_63 = { 0f, 0f, -105.15f };
			Local_67 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_43, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_52, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_40 = 1;
			Local_62 = { 2.5724f, 527.9989f, 176.1619f };
			Local_63 = { 0f, 0f, -29.9488f };
			Local_67 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_43, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_52, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_40 = 3;
			Local_62 = { -1160.502f, -1520.76f, 10.7393f };
			Local_63 = { 0f, 0f, 60.061f };
			Local_67 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_43, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_52, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_40 = 4;
			Local_62 = { -802.8972f, 172.537f, 74.5801f };
			Local_63 = { 0f, 0f, -69.0273f };
			Local_67 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_43, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_52, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_40 = 5;
			Local_62 = { -808.3051f, 171.2623f, 77.2822f };
			Local_63 = { 1.8886f, 0f, 110.9232f };
			Local_67 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_43, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_52, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()//Position - 0x23B2
{
	iLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_35, uLocal_31);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_35, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_35, 1);
}

void func_58()//Position - 0x23E2
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_38(1), 0);
	if (func_55(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_38(12), 0);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_38(2), 0);
	}
}

void func_59()//Position - 0x2418
{
	if (iLocal_40 == -1)
	{
		return;
	}
	if (Global_5FB8[iLocal_40 /*11*/].f_A == 0)
	{
		if (iLocal_65 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_34, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, 0);
			}
			iLocal_65 = 0;
		}
	}
	else if (iLocal_65 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_34, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, 1);
		}
		iLocal_65 = 1;
	}
}

bool func_60(int iParam0)//Position - 0x24CB
{
	return Global_8861 == iParam0;
}

int func_61(int iParam0)//Position - 0x24D9
{
	if (iParam0 != -1)
	{
		if (Global_5FB8[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()//Position - 0x24F8
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()//Position - 0x2515
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

void func_64()//Position - 0x253B
{
}

void func_65()//Position - 0x2543
{
	if (iLocal_40 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_40(&iLocal_39);
	if (iLocal_40 != -1)
	{
		func_1();
		Global_5FB8[iLocal_40 /*11*/].f_6 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_7 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_8 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_4 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_5 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_2 = 0;
		Global_5FB8[iLocal_40 /*11*/] = -1;
		Global_5FB8[iLocal_40 /*11*/].f_1 = 0;
		Global_5FB8[iLocal_40 /*11*/].f_A = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	SYSTEM::WAIT(0);
	func_66();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_52))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_52);
	}
	AUDIO::_0x19AF7ED9B9D23058();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_66()//Position - 0x260A
{
	func_49();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_34) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_34);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		OBJECT::DELETE_OBJECT(&iLocal_35);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

