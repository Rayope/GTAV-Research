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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[4] = { 0, 0, 0, 0 };
	var uLocal_33[4] = { 0, 0, 0, 0 };
	var uLocal_34[4] = { 0, 0, 0, 0 };
	var uLocal_35[4] = { 0, 0, 0, 0 };
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_58 = 0.95f;
	fLocal_59 = 0.07f;
	fLocal_60 = 0.755f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_17C0F = MISC::GET_GAME_TIMER();
	func_77();
	func_75();
	func_73();
	Global_3839.f_1 = 3;
	Global_382D = 0;
	Global_38D9 = 0;
	Global_4157 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_3839.f_1 == 6)
				{
					Global_3839.f_1 = 3;
				}
			}
		}
		if (func_72(146))
		{
			if (Global_10A95 == 0)
			{
				Global_1782D = 1;
				func_70(0);
			}
		}
		if (Global_2554DA.f_111B == 1)
		{
			if (Global_3839.f_1 > 3)
			{
				Global_3839.f_1 = 3;
			}
		}
		if (Global_10A95 == 1)
		{
			if (Global_3839.f_1 == 3)
			{
				if (MISC::IS_BIT_SET(Global_26D408, 15))
				{
					MISC::SET_BIT(&Global_26D408, 14);
					SYSTEM::WAIT(0);
					while (!func_68(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_26D408, 14);
					MISC::CLEAR_BIT(&Global_26D408, 15);
				}
				if (MISC::IS_BIT_SET(Global_26D408, 16))
				{
					MISC::SET_BIT(&Global_26D408, 14);
					SYSTEM::WAIT(0);
					while (!func_68(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_26D408, 14);
					MISC::CLEAR_BIT(&Global_26D408, 16);
				}
			}
		}
		if (Global_10A95 == 0)
		{
			if (MISC::IS_BIT_SET(Global_26D408, 11))
			{
				if ((Global_3839.f_1 != 10 && Global_3839.f_1 != 9) || func_67() == 0)
				{
					MISC::CLEAR_BIT(&Global_26D408, 11);
					MISC::SET_BIT(&Global_8D8, 11);
				}
			}
			else if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
			{
				if (func_67())
				{
					MISC::SET_BIT(&Global_26D408, 11);
					MISC::SET_BIT(&Global_8D8, 11);
				}
			}
			if (MISC::IS_BIT_SET(Global_26D408, 12))
			{
				MISC::CLEAR_BIT(&Global_26D408, 12);
				MISC::SET_BIT(&Global_8D8, 11);
			}
		}
		else if (MISC::IS_BIT_SET(Global_26D408, 12))
		{
			if ((Global_4173 == 0 || Global_4174 == 0) && !Global_4175)
			{
				MISC::CLEAR_BIT(&Global_26D408, 12);
				MISC::SET_BIT(&Global_8D8, 11);
			}
		}
		else if (Global_4175 || (Global_4173 > 0 && Global_4174 == 1))
		{
			MISC::SET_BIT(&Global_26D408, 12);
			MISC::SET_BIT(&Global_8D8, 11);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_LOCAL_TALKING())
			{
				if (!MISC::IS_BIT_SET(Global_26D408, 19))
				{
					MISC::SET_BIT(&Global_26D408, 19);
					MISC::SET_BIT(&Global_8D8, 11);
				}
			}
			else if (MISC::IS_BIT_SET(Global_26D408, 19))
			{
				MISC::CLEAR_BIT(&Global_26D408, 19);
				MISC::SET_BIT(&Global_8D8, 11);
			}
		}
		if (iLocal_65 == 0)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 25))
			{
				STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_64, -1);
				iLocal_62 = MISC::GET_GAME_TIMER();
				iLocal_65 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_8D7, 25))
		{
			STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_64, -1);
			iLocal_63 = MISC::GET_GAME_TIMER();
			iLocal_65 = 0;
			STATS::STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_64 + (iLocal_63 - iLocal_62)), 1);
		}
		func_66();
		func_65();
		func_64();
		func_62();
		func_51();
		func_50();
		func_49();
		if (MISC::IS_BIT_SET(Global_8D8, 21))
		{
			if (!AUDIO::_0xC8B1B2425604CDD0())
			{
				MISC::CLEAR_BIT(&Global_8D8, 21);
			}
		}
		if (MISC::IS_BIT_SET(Global_8D7, 7))
		{
			func_42();
			MISC::CLEAR_BIT(&Global_8D7, 7);
		}
		if (MISC::IS_BIT_SET(Global_8D7, 0))
		{
			func_41();
		}
		if (MISC::IS_BIT_SET(Global_26D408, 0))
		{
			func_40();
		}
		if (MISC::IS_BIT_SET(Global_8D8, 11))
		{
			Global_B97 = 0;
			if (MISC::IS_BIT_SET(Global_8D7, 25))
			{
				Global_B97++;
			}
			if (MISC::IS_BIT_SET(Global_26D408, 11))
			{
				if (Global_10A95 == 0)
				{
					Global_B97++;
				}
			}
			if (MISC::IS_BIT_SET(Global_26D408, 12))
			{
				if (Global_10A95 && (Global_4174 || Global_4175))
				{
					Global_B97++;
				}
			}
			if (MISC::IS_BIT_SET(Global_26D408, 19))
			{
				Global_B97++;
			}
			if (Global_B97 == 0)
			{
				MISC::CLEAR_BIT(&Global_8D8, 11);
				iLocal_30 = 0;
			}
			else
			{
				iLocal_30 = 1;
			}
		}
		if (!func_39())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_3839.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::_0x5EDEF0CF8C1DAB3C())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_10A95)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_3839.f_1 == 4)
			{
				if (MISC::IS_BIT_SET(Global_8D8, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_4157)
		{
			case 0:
				func_13();
				if (Global_4159 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_4159 == 1)
				{
					func_12();
				}
				if (Global_415A == 1)
				{
					Global_4157 = 9;
					Global_415A = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x5AC
{
	iLocal_42 = GRAPHICS::_RETURN_TWO(Global_415B);
	switch (iLocal_42)
	{
		case 0:
			Global_4157 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			MISC::SET_BIT(&Global_8D8, 15);
			func_12();
			break;
	}
}

void func_2()//Position - 0x5F0
{
	if (GRAPHICS::_0xEC72C258667BE5EA(Global_415B))
	{
		Global_4157 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()//Position - 0x60E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_41 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_39);
	}
	else
	{
		iLocal_40 = MISC::GET_GAME_TIMER();
		iLocal_41 = (iLocal_40 - iLocal_38);
	}
	if (iLocal_41 > 3000)
	{
		HUD::BUSYSPINNER_OFF();
	}
	if (iLocal_41 > 3200)
	{
		Global_4157 = 6;
	}
}

void func_4()//Position - 0x651
{
	iLocal_42 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
	switch (iLocal_42)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_39 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_38 = MISC::GET_GAME_TIMER();
			}
			Global_4157 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()//Position - 0x6A5
{
	Global_415C = -1;
	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_415C))
	{
		Global_4157 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_12();
	}
}

void func_6()//Position - 0x6D2
{
	iLocal_42 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
	switch (iLocal_42)
	{
		case 0:
			Global_4157 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()//Position - 0x70C
{
	iLocal_42 = GRAPHICS::_0xCB82A0BF0E3E3265(iLocal_43);
	switch (iLocal_42)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(1, 1);
			Global_4157 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_43 == 3)
			{
				MISC::SET_BIT(&Global_8D8, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_4157 = 6;
			}
			if (Global_4157 == 5)
			{
				if (iLocal_43 == 0)
				{
					Global_4157 = 4;
					iLocal_43 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_4157 == 5)
			{
				if (iLocal_43 == 1)
				{
					Global_4157 = 4;
					iLocal_43 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_4157 == 5)
			{
				if (iLocal_43 == 2)
				{
					Global_4157 = 4;
					iLocal_43 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_8()//Position - 0x7C0
{
	if (GRAPHICS::_0x759650634F07B6B4(iLocal_43))
	{
		Global_4157 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_8D8, 15);
		func_12();
	}
}

void func_9()//Position - 0x7E5
{
	iLocal_42 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
	switch (iLocal_42)
	{
		case 0:
			Global_4157 = 4;
			iLocal_43 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_3839.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()//Position - 0x826
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
	{
		Global_4157 = 3;
	}
}

void func_11()//Position - 0x839
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_4157 = 2;
	}
}

void func_12()//Position - 0x84D
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_4158 = 0;
	Global_4159 = 0;
	Global_415A = 0;
	Global_4157 = 0;
}

void func_13()//Position - 0x877
{
	if (Global_4158)
	{
		Global_4157 = 1;
		MISC::CLEAR_BIT(&Global_8D8, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_14()//Position - 0x897
{
	char* sVar0;
	
	if ((func_20(2, Global_3818, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				sVar0 = HUD::_GET_LABEL_TEXT("CELL_ANTIH_A");
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH");
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_19(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
		Global_416F = 0;
		Global_4170 = 0;
		if (HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() == Global_416D && HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() != -1)
		{
			Global_416F = Global_416E;
			iLocal_46 = MISC::GET_GAME_TIMER();
			iLocal_48 = 0;
			iLocal_49 = 0;
			while (((func_18(2, Global_3818) && iLocal_48 < 250) && Global_38DF == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_B97 > 0)
				{
					func_15();
				}
				SYSTEM::WAIT(0);
				iLocal_47 = MISC::GET_GAME_TIMER();
				iLocal_48 = (iLocal_47 - iLocal_46);
				if (Global_B97 > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_3818) && Global_38DF == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_49 = 1;
			}
			if (Global_38DF == 0)
			{
				if (iLocal_49 == 1)
				{
					Global_4170 = 1;
					Global_416F = Global_416E;
					if (Global_416F == 1)
					{
					}
					if (Global_416F == 2)
					{
					}
					if (Global_416F == 3)
					{
					}
					if (Global_416F == 0)
					{
					}
				}
				else
				{
					Global_416F = 0;
				}
			}
			else
			{
				Global_416F = 0;
			}
		}
		else
		{
			Global_416F = 0;
		}
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_416F = 0;
			Global_4170 = 0;
			return 0;
		}
	}
	return 0;
}

void func_15()//Position - 0xA49
{
	if (Global_4175)
	{
		fLocal_59 = -0.055f;
		fLocal_60 = 0.745f;
		fLocal_55 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_61 = ((100f * fLocal_58) - (100f * fLocal_55));
		fLocal_56 = (fLocal_59 + (fLocal_61 * 0.005f));
		fLocal_57 = (fLocal_60 - (fLocal_61 * 0.005f));
		if (!func_17())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::_0xEFABC7722293DA7C();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_28, fLocal_56, fLocal_57, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			if (Global_24C7F1.f_1C6)
			{
				bLocal_29 = false;
			}
			else if (MISC::IS_BIT_SET(Global_8D7, 13))
			{
				if (MISC::IS_BIT_SET(Global_26D408, 19))
				{
					bLocal_29 = false;
				}
				else
				{
					bLocal_29 = true;
				}
			}
			else
			{
				bLocal_29 = false;
			}
		}
		else if (Global_24C7F1.f_1C6 || MISC::IS_BIT_SET(Global_8D7, 13))
		{
			bLocal_29 = true;
		}
		else
		{
			bLocal_29 = false;
		}
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_29)
				{
					if (!func_39())
					{
						if (!func_16())
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
									if (MISC::IS_PC_VERSION() && Global_24C7F1.f_1C6)
									{
										fLocal_59 = 0.165f;
										fLocal_60 = 0.755f;
									}
									else
									{
										fLocal_59 = 0.07f;
										fLocal_60 = 0.755f;
									}
									fLocal_55 = GRAPHICS::GET_SAFE_ZONE_SIZE();
									fLocal_61 = ((100f * fLocal_58) - (100f * fLocal_55));
									fLocal_56 = (fLocal_59 + (fLocal_61 * 0.005f));
									fLocal_57 = (fLocal_60 - (fLocal_61 * 0.005f));
									if (!func_17())
									{
										if (MISC::IS_PC_VERSION())
										{
											GRAPHICS::_0xEFABC7722293DA7C();
										}
										GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_28, fLocal_56, fLocal_57, 0.27f, 0.45f, 255, 255, 255, 255, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_16()//Position - 0xC16
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0xC33
{
	if (MISC::IS_BIT_SET(Global_8D9, 3))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0, int iParam1)//Position - 0xC4E
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC94
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1))
			{
				if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_20(int iParam0, var uParam1, int iParam2)//Position - 0xCE5
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_21()//Position - 0xD57
{
	switch (Global_3839.f_1)
	{
		case 4:
			if (MISC::IS_BIT_SET(Global_8D8, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_3836))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_3836))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_B97 > 0)
								{
									func_15();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_3836 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					func_30(0);
				}
				if (Global_3D56 || Global_3D57)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_3836))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_B97 > 0)
								{
									func_15();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_3836 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) && Global_3828 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_B97 > 0)
						{
							func_15();
						}
					}
					if (Global_3828 == 0)
					{
						Global_3839.f_1 = 9;
						func_22();
					}
				}
				else
				{
					bLocal_54 = false;
					if (Global_10A95 && Global_4172)
					{
						bLocal_54 = true;
					}
					if (((Global_17C49.f_3011[Global_3839 /*20*/].f_12 == 1 || Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1) || bLocal_54 == 1) || Global_416F != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) && Global_3828 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_B97 > 0)
							{
								func_15();
							}
						}
						if (Global_3828 == 0)
						{
							if (Global_3839.f_1 > 3)
							{
								Global_3839.f_1 = 6;
								if (Global_416F == 0)
								{
									if (bLocal_54)
									{
									}
									else if (Global_10A95 == 0)
									{
										if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1)
										{
											func_68(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_416F == 3)
									{
									}
									if (Global_416F == 1)
									{
									}
									if (Global_416F == 2)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) && Global_3828 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_B97 > 0)
							{
								func_15();
							}
						}
						if (Global_3828 == 0)
						{
							if (Global_3839.f_1 > 3)
							{
								if (Global_3D56 || Global_3D57)
								{
									Global_3839.f_1 = 9;
								}
								else
								{
									Global_3839.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_22()//Position - 0xFD0
{
	struct<3> Var0;
	
	if (Global_3828 == 1)
	{
		return;
	}
	if (Global_3839.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_3839.f_1)
	{
		case 6:
			func_29(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_B34);
			if (Global_B34 == 1)
			{
				func_29(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383D), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383D;
			}
			else
			{
				func_29(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383E), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383E;
			}
			if (Global_382D)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_38D9 == 0)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else if (Global_10A95)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else
			{
				if (Global_38D8 == 1)
				{
					if (Global_382D)
					{
						func_26(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_26(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_382D)
				{
					func_26(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_26(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8D7, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_29(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_26(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_3838 == 1)
			{
				func_25();
				func_29(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_24("CELL_300");
					func_24("CELL_217");
					func_24("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
				{
					func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_217", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
				}
				func_29(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3D4C == 4 || Global_3D4C == 3)
			{
				func_29(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_25();
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_24("CELL_300");
					func_24("CELL_219");
					func_24("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_3E4E)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
					{
						func_29(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_29(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &Var0, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
					}
				}
				func_29(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_23()//Position - 0x1576
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		if (Global_3838 == 1)
		{
			if (Global_382D)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3D7B)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_26(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
		else
		{
			func_26(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24(char* sParam0)//Position - 0x16F7
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_25()//Position - 0x1709
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_3839 == 0)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 1)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 2)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 3)
		{
			switch (Global_26D4D0)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_26(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x197F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_24(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_24(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_24(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_24(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_24(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_27(int iParam0)//Position - 0x1A32
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_4178 = 0;
	Global_B34 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B10[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_28(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8DE[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_8DE[iVar1 /*15*/].f_4)
					{
						if (Global_B10[iVar0] == 0)
						{
							Global_AEC[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 3))
								{
									iVar2 = 42;
									Global_38DB = 1;
								}
								else
								{
									iVar2 = 255;
									Global_38DB = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_B10[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8DE[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_8DE[iVar1 /*15*/].f_4)
					{
						if (Global_B10[iVar0] == 0)
						{
							Global_AEC[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_17C49.f_306B[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_17C49.f_306B[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_17C49.f_306B[iVar3 /*104*/].f_63[Global_3839] == 1)
											{
												Global_4178++;
											}
										}
									}
									iVar3++;
								}
								func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4178), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_10A95)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_26CF17[iVar4 /*104*/].f_18 != 0)
										{
											if (Global_26CF17[iVar4 /*104*/].f_1C == 0)
											{
												if (Global_26CF17[iVar4 /*104*/].f_63[Global_3839] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_3839)
									{
										case 0:
											iVar6 = Global_8C7A;
											break;
										
										case 1:
											iVar6 = Global_8C7B;
											break;
										
										case 2:
											iVar6 = Global_8C7C;
											break;
										
										default:
											break;
									}
									func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4173), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DD);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 3))
								{
									iVar8 = 42;
									Global_38DB = 1;
								}
								else
								{
									iVar8 = 255;
									Global_38DB = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_26(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B10[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0)//Position - 0x1EBE
{
	return Global_8861 == iParam0;
}

void func_29(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1ECC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_30(bool bParam0)//Position - 0x1F2F
{
	if (bParam0)
	{
		if (Global_3839.f_1 == 9)
		{
			Global_38D7 = 1;
		}
	}
	else
	{
		Global_38D7 = 0;
	}
}

void func_31()//Position - 0x1F51
{
	if (func_14() || MISC::IS_BIT_SET(Global_8D7, 8))
	{
		MISC::CLEAR_BIT(&Global_8D7, 8);
		func_33();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_32())
				{
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (MISC::IS_BIT_SET(Global_8D8, 21))
					{
						MISC::CLEAR_BIT(&Global_8D8, 21);
					}
					if (Global_38DF == 1)
					{
						Global_38DF = 0;
					}
					switch (Global_3839.f_1)
					{
						case 3:
							Global_3839.f_1 = 4;
							break;
						
						default:
							break;
					}
					Global_38D5 = 1;
				}
			}
		}
	}
}

int func_32()//Position - 0x1FEB
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
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

void func_33()//Position - 0x2056
{
	if (func_28(14))
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
		Global_3839 = func_34();
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

var func_34()//Position - 0x20F7
{
	func_35();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_35()//Position - 0x2110
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_38(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_37(PLAYER::PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_28(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_36(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_36(int iParam0)//Position - 0x220D
{
	return iParam0 < 3;
}

int func_37(var uParam0)//Position - 0x2219
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)//Position - 0x2256
{
	if (func_36(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_39()//Position - 0x2280
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40()//Position - 0x22A7
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	MISC::CLEAR_BIT(&Global_26D408, 0);
	if (Global_4171 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_4171))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_4171))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_4171), 64);
				Global_4179[Global_4177] = Global_4171;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_4179[Global_26D3F8] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_4179[Global_26D3F8] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_26CF17[Global_26D3F8 /*104*/].f_11 /*29*/].f_7)), 64);
		Global_4179[Global_26D3F8] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_26CF17[Global_26D3F8 /*104*/].f_20 == 4 || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 5) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 6) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 7) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 8) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 9) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 10) || Global_26CF17[Global_26D3F8 /*104*/].f_20 == 11)
	{
		iVar1 = 0;
		switch (Global_26CF17[Global_26D3F8 /*104*/].f_31)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CF17[Global_26D3F8 /*104*/]));
		while (iVar1 < Global_26CF17[Global_26D3F8 /*104*/].f_31)
		{
			switch (Global_26CF17[Global_26D3F8 /*104*/].f_20)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2554DA.f_60F[iVar1 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0AF[iVar1 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0D8[iVar1 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0ED[iVar1 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0FE[iVar1 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B10B[iVar1 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B118[iVar1 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B125[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_26CF17[Global_26D3F8 /*104*/].f_11 /*29*/].f_3)), 64);
		uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar2, 0);
		MISC::SET_BIT(&Global_26D408, 1);
		Global_416E = 1;
		Global_416D = uLocal_37;
		Global_4171 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_26CF17[Global_26D3F8 /*104*/]));
		switch (Global_26CF17[Global_26D3F8 /*104*/].f_20)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_21));
				if (Global_26CF17[Global_26D3F8 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
				}
				if ((Global_26CF17[Global_26D3F8 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_53), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_26CF17[Global_26D3F8 /*104*/].f_43)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_26CF17[Global_26D3F8 /*104*/].f_53)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CF17[Global_26D3F8 /*104*/].f_53));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_53));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CF17[Global_26D3F8 /*104*/].f_31);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_21));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CF17[Global_26D3F8 /*104*/].f_31);
				if (Global_26CF17[Global_26D3F8 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
				}
				if ((Global_26CF17[Global_26D3F8 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_26CF17[Global_26D3F8 /*104*/].f_53), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_26CF17[Global_26D3F8 /*104*/].f_43)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_43));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_26CF17[Global_26D3F8 /*104*/].f_53)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CF17[Global_26D3F8 /*104*/].f_53));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CF17[Global_26D3F8 /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_26CF17[Global_26D3F8 /*104*/].f_11 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_B87, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar3, 0);
			MISC::SET_BIT(&Global_26D408, 1);
			Global_416E = 1;
			Global_416D = uLocal_37;
		}
		else
		{
			StringCopy(&cVar4, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_26CF17[Global_26D3F8 /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_26CF17[Global_26D3F8 /*104*/].f_11 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar5, 0);
			}
			else
			{
				uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar4, 0);
			}
			MISC::SET_BIT(&Global_26D408, 1);
			Global_416E = 1;
			Global_416D = uLocal_37;
			Global_4171 = 0;
		}
	}
	Global_26CF17[Global_26D3F8 /*104*/].f_10 = uLocal_37;
}

void func_41()//Position - 0x28FD
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_B85 /*29*/].f_7)), 64);
	if (Global_B98 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_B39[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_B39[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8D7, 0);
}

void func_42()//Position - 0x297E
{
	if (MISC::IS_BIT_SET(Global_8D7, 1))
	{
		func_48();
		func_43();
		Global_17C49.f_3011[Global_3839 /*20*/].f_12 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_34[Global_3839] = NETWORK::GET_NETWORK_TIME();
			iLocal_32[Global_3839] = 1;
		}
		else if (!MISC::IS_BIT_SET(Global_8D7, 10))
		{
			uLocal_33[Global_3839] = MISC::GET_GAME_TIMER();
			iLocal_32[Global_3839] = 1;
		}
		else
		{
			uLocal_33[0] = MISC::GET_GAME_TIMER();
			uLocal_33[2] = MISC::GET_GAME_TIMER();
			uLocal_33[1] = MISC::GET_GAME_TIMER();
			iLocal_32[0] = 1;
			iLocal_32[2] = 1;
			iLocal_32[1] = 1;
		}
		MISC::CLEAR_BIT(&Global_8D7, 1);
	}
}

void func_43()//Position - 0x2A1D
{
	func_33();
	if (Global_10A95)
	{
		Global_17C49.f_3011[3 /*20*/].f_A = func_45(1185, -1, 0);
	}
	if (Global_17C49.f_3011[Global_3839 /*20*/].f_A == 1)
	{
		if (!func_44(0))
		{
			PAD::SET_PAD_SHAKE(0, 2000, 100);
		}
	}
}

int func_44(int iParam0)//Position - 0x2A6A
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2AC4
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_25744D[iParam0 /*6*/][func_46(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(var uParam0)//Position - 0x2AF6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

var func_47()//Position - 0x2B2A
{
	return Global_1407E1;
}

void func_48()//Position - 0x2B36
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	if (Global_4171 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_4171))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_4171))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_4171), 64);
				Global_4179[Global_4177] = Global_4171;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_4179[Global_4177] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_4179[Global_4177] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_17C49.f_306B[Global_4177 /*104*/].f_11 /*29*/].f_7)), 64);
		Global_4179[Global_4177] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 4 || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 5) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 6) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 7) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 8) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 9) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 10) || Global_17C49.f_306B[Global_4177 /*104*/].f_20 == 11)
	{
		iVar1 = 0;
		switch (Global_17C49.f_306B[Global_4177 /*104*/].f_31)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[Global_4177 /*104*/]));
		while (iVar1 < Global_17C49.f_306B[Global_4177 /*104*/].f_31)
		{
			switch (Global_17C49.f_306B[Global_4177 /*104*/].f_20)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2554DA.f_60F[iVar1 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0AF[iVar1 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0D8[iVar1 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0ED[iVar1 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0FE[iVar1 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B10B[iVar1 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B118[iVar1 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B125[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_17C49.f_306B[Global_4177 /*104*/].f_11 /*29*/].f_3)), 64);
		uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar2, 0);
		Global_416E = 3;
		Global_416D = uLocal_37;
		Global_4171 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_17C49.f_306B[Global_4177 /*104*/]));
		switch (Global_17C49.f_306B[Global_4177 /*104*/].f_20)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_21));
				if (Global_17C49.f_306B[Global_4177 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
				}
				if ((Global_17C49.f_306B[Global_4177 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[Global_4177 /*104*/].f_31);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_21));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[Global_4177 /*104*/].f_31);
				if (Global_17C49.f_306B[Global_4177 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
				}
				if ((Global_17C49.f_306B[Global_4177 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_17C49.f_306B[Global_4177 /*104*/].f_11 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_B87, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar3, 0);
			Global_416E = 3;
			Global_416D = uLocal_37;
		}
		else
		{
			StringCopy(&cVar4, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_17C49.f_306B[Global_4177 /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_17C49.f_306B[Global_4177 /*104*/].f_11 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar5, 0);
			}
			else
			{
				uLocal_37 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar4, 0);
			}
			Global_416E = 3;
			Global_416D = uLocal_37;
			Global_4171 = 0;
		}
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_10 = uLocal_37;
}

void func_49()//Position - 0x31C5
{
	if (MISC::IS_BIT_SET(Global_8D7, 19))
	{
		MISC::CLEAR_BIT(&Global_8D7, 19);
		func_33();
		Global_17C49.f_3011[3 /*20*/].f_12 = 0;
		Global_17C49.f_3011[3 /*20*/].f_11 = 0;
	}
}

void func_50()//Position - 0x3200
{
	if (iLocal_32[Global_3839] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_36 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_34[Global_3839]);
		}
		else
		{
			uLocal_35[Global_3839] = MISC::GET_GAME_TIMER();
			iLocal_36 = (uLocal_35[Global_3839] - uLocal_33[Global_3839]);
		}
		if (iLocal_36 > 300000)
		{
			Global_17C49.f_3011[Global_3839 /*20*/].f_12 = 0;
			Global_17C49.f_3011[Global_3839 /*20*/].f_11 = 0;
			iLocal_32[Global_3839] = 0;
		}
	}
}

void func_51()//Position - 0x3279
{
	func_33();
	if (Global_10A95 == 0)
	{
		if (!func_39())
		{
			switch (Global_3839)
			{
				case 0:
					iLocal_31 = 21;
					break;
				
				case 1:
					iLocal_31 = 22;
					break;
				
				case 2:
					iLocal_31 = 23;
					break;
				
				default:
					iLocal_31 = 21;
					break;
			}
			if (iLocal_52 == 0)
			{
				if (Global_B7B[Global_3839])
				{
					iLocal_52 = 1;
					iLocal_53 = Global_3839;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_50 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_44 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_51 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_50);
				}
				else
				{
					iLocal_45 = MISC::GET_GAME_TIMER();
					iLocal_51 = (iLocal_45 - iLocal_44);
				}
				if (iLocal_51 > 7000)
				{
					if (func_60(0))
					{
						Global_B39[1 /*6*/] = { Global_B6A[Global_3839 /*4*/] };
						Global_B85 = Global_B80[Global_3839];
						Global_B7B[Global_3839] = 0;
						iLocal_52 = 0;
					}
				}
				if (iLocal_53 != Global_3839)
				{
					iLocal_52 = 0;
				}
			}
			if (Global_17C49.f_306B[iLocal_31 /*104*/].f_18 != 0)
			{
				if (func_52(Global_17C49.f_306B[iLocal_31 /*104*/].f_11, &(Global_17C49.f_306B[iLocal_31 /*104*/]), Global_17C49.f_306B[iLocal_31 /*104*/].f_18, Global_17C49.f_306B[iLocal_31 /*104*/].f_19, Global_17C49.f_306B[iLocal_31 /*104*/].f_1A, Global_17C49.f_306B[iLocal_31 /*104*/].f_1D, 0, 1, Global_17C49.f_306B[iLocal_31 /*104*/].f_1F, Global_17C49.f_306B[iLocal_31 /*104*/].f_1E))
				{
					Global_17C49.f_306B[iLocal_31 /*104*/].f_18 = 0;
				}
			}
		}
	}
}

int func_52(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x33F2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8D7, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_53(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_B9A = iParam6;
			Global_B39[3 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
			Global_B86 = iParam0;
			MISC::SET_BIT(&Global_8D7, 1);
			MISC::SET_BIT(&Global_8D7, 7);
		}
		return 1;
	}
	return 0;
}

int func_53(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x348A
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_33();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_3839 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_3839 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_3839 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_59() == 0)
	{
		func_57();
		return 0;
	}
	func_56(Global_4177);
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/]), sParam1, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_17C49.f_306B[Global_4177 /*104*/].f_18 = iParam2;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_19 = iParam7;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1A = uParam8;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1D = uParam9;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1E = uParam12;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1F = uParam11;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1C = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_21), sParam4, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_32), sParam5, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_8D7, 10))
	{
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 1;
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 1;
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 1;
		Global_B99 = 4;
		func_55(0);
		func_55(2);
		func_55(1);
	}
	else
	{
		func_33();
		switch (iParam16)
		{
			case 3:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[Global_3839] = 1;
				break;
			
			case 0:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_3839)
			{
				case 0:
					func_55(0);
					Global_B99 = 0;
					break;
				
				case 1:
					func_55(1);
					Global_B99 = 1;
					break;
				
				case 2:
					func_55(2);
					Global_B99 = 2;
					break;
				
				case 3:
					func_55(3);
					Global_B99 = 3;
					break;
				
				default:
					Global_B99 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_8D7, 10))
		{
			Global_17C49.f_3011[0 /*20*/].f_11 = 1;
			Global_17C49.f_3011[1 /*20*/].f_11 = 1;
			Global_17C49.f_3011[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_17C49.f_3011[Global_3839 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_17C49.f_3011[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_17C49.f_3011[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_17C49.f_3011[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_4179[Global_4177] = 0;
	if (bParam10)
	{
		func_33();
		if (Global_3800)
		{
			StringCopy(&Global_382E, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_3839)
			{
				case 0:
					StringCopy(&Global_382E, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_382E, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_382E, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_382E, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_54())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_382E, 1);
			}
		}
	}
	if (!Global_38D8)
	{
		if (Global_3839.f_1 == 6)
		{
			func_29(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(1);
			func_29(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3825), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_54()//Position - 0x393F
{
	return Global_14143C;
}

void func_55(int iParam0)//Position - 0x394B
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_17C49.f_3011[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_56(int iParam0)//Position - 0x396A
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_17C49.f_306B[iParam0 /*104*/].f_12 = uVar0;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_1 = uVar1;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_2 = uVar2;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_3 = uVar3;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_5 = uVar5;
}

void func_57()//Position - 0x39FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_4177 = 34;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12 = -1;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_1 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_2 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_3 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_58(Global_17C49.f_306B[iVar2 /*104*/].f_12, Global_17C49.f_306B[Global_4177 /*104*/].f_12))
		{
			Global_4177 = iVar2;
		}
		iVar2++;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_18 = 1;
}

int func_58(struct<6> Param0, struct<6> Param1)//Position - 0x3AC7
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_59()//Position - 0x3BB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_17C49.f_306B[iVar2 /*104*/].f_18 == 0)
		{
			Global_4177 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4177 = 34;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12 = -1;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_1 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_2 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_3 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_17C49.f_306B[iVar2 /*104*/].f_18 == 0 || Global_17C49.f_306B[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_58(Global_17C49.f_306B[iVar2 /*104*/].f_12, Global_17C49.f_306B[Global_4177 /*104*/].f_12))
			{
				Global_4177 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4177 == 34)
	{
		return 0;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 0;
	return 1;
}

bool func_60(int iParam0)//Position - 0x3D09
{
	return func_61(iParam0, Global_8861);
}

int func_61(int iParam0, int iParam1)//Position - 0x3D1A
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_62()//Position - 0x3EFB
{
	if (MISC::IS_BIT_SET(Global_8D7, 6))
	{
		if (Global_B97 > 0)
		{
			if (MISC::IS_BIT_SET(Global_8D8, 11))
			{
				if (iLocal_30)
				{
					func_63(uLocal_28, "CLEAR_ALL");
					if (MISC::IS_BIT_SET(Global_8D7, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (MISC::IS_BIT_SET(Global_26D408, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_10A95 == 1)
					{
						if (MISC::IS_BIT_SET(Global_26D408, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::IS_BIT_SET(Global_26D408, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						if ((MISC::IS_BIT_SET(Global_26D408, 12) || MISC::IS_BIT_SET(Global_26D408, 11)) || MISC::IS_BIT_SET(Global_8D7, 25))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					MISC::CLEAR_BIT(&Global_8D8, 11);
					iLocal_30 = 0;
				}
			}
		}
		if (Global_B97 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_28);
			MISC::CLEAR_BIT(&Global_8D7, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_B97 > 0)
	{
		uLocal_28 = unk_0x67D02A194A2FC2BD("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_28))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_8D7, 6);
	}
}

void func_63(var uParam0, char* sParam1)//Position - 0x409D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_64()//Position - 0x40B2
{
	if (MISC::IS_BIT_SET(Global_8D8, 7))
	{
		MISC::SET_BIT(&Global_8D8, 6);
		MISC::CLEAR_BIT(&Global_8D8, 7);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_8D8, 7))
	{
		MISC::CLEAR_BIT(&Global_8D8, 6);
		return;
	}
}

void func_65()//Position - 0x40EF
{
	if (MISC::IS_BIT_SET(Global_8D8, 4))
	{
		MISC::SET_BIT(&Global_8D8, 3);
		MISC::CLEAR_BIT(&Global_8D8, 4);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_8D8, 4))
	{
		MISC::CLEAR_BIT(&Global_8D8, 3);
		return;
	}
}

void func_66()//Position - 0x412C
{
	if (MISC::IS_BIT_SET(Global_8D8, 2))
	{
		if (!Global_3839.f_1 == 1)
		{
			Global_3839.f_1 = 0;
		}
		MISC::CLEAR_BIT(&Global_8D8, 2);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_8D8, 2))
	{
		if (!Global_3839.f_1 == 1)
		{
			if (Global_3839.f_1 < 4)
			{
				Global_3839.f_1 = 3;
			}
		}
		return;
	}
}

int func_67()//Position - 0x4184
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			if (Global_3800 == 0)
			{
				if (Global_62A != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_3D4C != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_17891)
		{
			return 0;
		}
	}
	if (Global_10A95)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_26D4D2 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_17C49.f_3011.f_59)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4397
{
	func_33();
	if (Global_10A95 == 0)
	{
		if (func_28(14))
		{
			return 0;
		}
	}
	if (Global_3839.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_44(0) == 1)
		{
			return 0;
		}
	}
	if (Global_3817 == 1)
	{
		return 0;
	}
	if (Global_3839.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_3836))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_3839.f_1 < 4)
			{
				func_69("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_3836 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_3827)
	{
		SYSTEM::WAIT(0);
	}
	func_75();
	func_73();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
	{
		Global_B35 = 0;
		Global_3839.f_1 = 7;
		func_69(&(Global_8DE[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
			{
				Global_3837 = SYSTEM::START_NEW_SCRIPT(&(Global_8DE[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
		{
			Global_3837 = SYSTEM::START_NEW_SCRIPT(&(Global_8DE[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8DE[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_69(char* sParam0)//Position - 0x44E4
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_70(int iParam0)//Position - 0x4504
{
	if (Global_38D7)
	{
		func_71(0, 0);
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
	if (!func_39())
	{
		Global_3839.f_1 = 3;
	}
}

void func_71(bool bParam0, bool bParam1)//Position - 0x4574
{
	if (bParam0)
	{
		if (func_44(0))
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

int func_72(int iParam0)//Position - 0x45E8
{
	if ((Global_41A6 || Global_41A5) || Global_41A7)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_3839.f_1 == 10)
		{
			if (Global_62A == iParam0)
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
	return 0;
}

void func_73()//Position - 0x464C
{
	if (Global_10A95 == 0)
	{
		Global_8DE[14 /*15*/].f_4 = -99;
		Global_8DE[4 /*15*/].f_4 = -99;
		if (Global_2528A2)
		{
			func_74(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
		}
		else
		{
			func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_74(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x46A6
{
	StringCopy(&(Global_8DE[iParam0 /*15*/]), sParam1, 16);
	Global_8DE[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8DE[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8DE[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8DE[iParam0 /*15*/].f_A = iParam4;
	Global_8DE[iParam0 /*15*/].f_B = iParam5;
	Global_8DE[iParam0 /*15*/].f_C = iParam6;
	Global_8DE[iParam0 /*15*/].f_D = iParam7;
	Global_8DE[iParam0 /*15*/].f_E = iParam8;
	if (Global_8DE[iParam0 /*15*/].f_C == 0)
	{
		Global_8DE[iParam0 /*15*/].f_C = 0;
	}
	if (Global_8DE[iParam0 /*15*/].f_D == 0)
	{
		Global_8DE[iParam0 /*15*/].f_D = 0;
	}
	if (Global_8DE[iParam0 /*15*/].f_E == 0)
	{
		Global_8DE[iParam0 /*15*/].f_E = 0;
	}
}

void func_75()//Position - 0x475C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8DE[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_10A95 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_17C49.f_744E[iVar2 /*29*/].f_13[Global_3839] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_74(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8861 == 15 && func_76(0) == 0) && Global_8DC == 0)
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_38DA = 0;
			Global_8DD = 255;
		}
		else
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_38DA = 1;
			Global_8DD = 42;
		}
		if (iVar1 == 1)
		{
			func_74(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_74(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_17C49.f_3011.f_59 == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_17C49.f_3011.f_58 == 1)
		{
			func_74(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_74(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_74(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_74(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_74(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_74(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_74(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_26D408, 4) == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_74(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_74(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_74(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_74(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_74(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_74(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_74(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_74(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_74(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_26D408, 4) == 1)
		{
			if (Global_1801A4)
			{
				func_74(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

bool func_76(bool bParam0)//Position - 0x4C19
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_77()//Position - 0x4C44
{
}

