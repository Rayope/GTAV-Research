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
	int iLocal_17[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_37 = 0.82f;
	fLocal_38 = 0.42f;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_45(Global_3826, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_3802 == 0)
	{
		fLocal_42 = 0.75f;
		fLocal_43 = 0.8f;
	}
	else
	{
		fLocal_42 = 0.65f;
		fLocal_43 = 0.77f;
	}
	Global_BFC[Global_3839 /*2811*/][2 /*281*/].f_103 = Global_17C49.f_3011[Global_3839 /*20*/].f_6;
	Global_BFC[Global_3839 /*2811*/][4 /*281*/].f_103 = Global_17C49.f_3011[Global_3839 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_10A95)
		{
			Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_103 = func_43(1186, -1, 0);
			Global_BFC[Global_3839 /*2811*/][2 /*281*/].f_103 = func_43(2012, -1, 0);
			Global_BFC[Global_3839 /*2811*/][4 /*281*/].f_103 = func_43(2011, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_3011[Global_3839 /*20*/].f_B), &(Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_90[iVar0 /*6*/])))
		{
			Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_103 = iVar0;
		}
		iVar0++;
	}
	if (Global_10A95)
	{
		Global_17C49.f_3011[3 /*20*/].f_A = func_43(1185, -1, 0);
	}
	Global_BFC[Global_3839 /*2811*/][3 /*281*/].f_103 = Global_17C49.f_3011[Global_3839 /*20*/].f_A;
	func_42();
	if (Global_10A95)
	{
		Global_BFC[3 /*2811*/][0 /*281*/] = 190;
		Global_BFC[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_BFC[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_BFC[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_BFC[3 /*2811*/][0 /*281*/].f_118 = 1;
		StringCopy(&(Global_BFC[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_BFC[3 /*2811*/][0 /*281*/].f_7C[0] = 1;
		Global_BFC[3 /*2811*/][0 /*281*/].f_54[0] = 170;
		Global_BFC[3 /*2811*/][0 /*281*/].f_68[0] = 19;
		StringCopy(&(Global_BFC[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_BFC[3 /*2811*/][0 /*281*/].f_7C[1] = 1;
		Global_BFC[3 /*2811*/][0 /*281*/].f_54[1] = 175;
		Global_BFC[3 /*2811*/][0 /*281*/].f_68[1] = 19;
		StringCopy(&(Global_BFC[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_BFC[3 /*2811*/][0 /*281*/].f_7C[2] = 0;
		Global_BFC[3 /*2811*/][0 /*281*/].f_54[2] = 190;
		Global_BFC[3 /*2811*/][0 /*281*/].f_68[2] = 26;
		if (func_43(2074, -1, 0) == 0)
		{
			Global_BFC[3 /*2811*/][0 /*281*/].f_103 = 0;
		}
		else
		{
			Global_BFC[3 /*2811*/][0 /*281*/].f_103 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_29)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
				iLocal_29 = 0;
			}
		}
		if (Global_3839.f_1 != 9)
		{
			switch (Global_3839.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_35 || iLocal_36)
					{
						if (bLocal_35)
						{
							bLocal_35 = false;
							SYSTEM::SETTIMERB(0);
							Global_17C49.f_3011.f_52 = 1;
							iLocal_36 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_36 = 0;
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_32)
						{
							func_11();
						}
						if (func_10(2, Global_3819, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							iLocal_32 = 0;
							func_9();
							Global_3823 = 1;
							func_45(Global_3826, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_3839.f_1 > 3)
							{
								Global_3839.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_383B = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x449
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x48C
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_35)
	{
		HUD::CLEAR_HELP(1);
	}
	if (Global_17C49.f_3011.f_53 == 0 || Global_17C49.f_3011.f_52 == 0)
	{
		func_3();
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x4EE
{
	if (Global_BFC[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	MISC::CLEAR_BIT(&Global_8D7, 25);
	MISC::SET_BIT(&Global_8D8, 11);
}

int func_4(int iParam0)//Position - 0x56B
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x58D
{
	return func_6(iParam0, Global_8861);
}

int func_6(int iParam0, int iParam1)//Position - 0x59E
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

void func_7()//Position - 0x77F
{
	func_44();
	Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_7C[2] = 1;
}

int func_8()//Position - 0x79E
{
	if (Global_B35 == 1 || Global_3839.f_1 < 7)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x7C7
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x7E7
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

void func_11()//Position - 0x859
{
	int iVar0;
	
	iLocal_33 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_33 - iLocal_34);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_PAD_SHAKE(0, 100, 100);
	}
}

void func_12()//Position - 0x88E
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_22 == 1)
	{
		if (iLocal_31)
		{
			iLocal_33 = MISC::GET_GAME_TIMER();
			if ((iLocal_33 - iLocal_34) > 1000)
			{
				iLocal_30 = 1;
				iLocal_31 = 0;
			}
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_44 = 1;
				iLocal_45 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_44 = 0;
				iLocal_45 = 1;
			}
		}
		if ((((func_10(2, Global_3821, 0) || func_10(2, Global_3822, 0)) || iLocal_30) || iLocal_44 == 1) || iLocal_45 == 1)
		{
			iLocal_44 = 0;
			iLocal_45 = 0;
			iLocal_30 = 0;
			iLocal_31 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_29 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
			uLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_26 = iLocal_17[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_20)];
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_90[iLocal_26 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_90[iLocal_26 /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_3823 == 0)
	{
		if (func_10(2, Global_381A, 0))
		{
			func_23();
			Global_3823 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
			uLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_25 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_20);
			if (iLocal_25 < 0)
			{
				iLocal_25 = 0;
			}
			Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[iLocal_25];
			if (iLocal_22 == 2)
			{
				iVar0 = Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103;
				Global_17C49.f_3011[Global_3839 /*20*/].f_6 = Global_BFC[Global_3839 /*2811*/][2 /*281*/].f_104[iVar0];
				func_45(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_10A95)
				{
					Global_26D4D0 = Global_BFC[3 /*2811*/][2 /*281*/].f_103;
					func_20(2012, Global_BFC[3 /*2811*/][2 /*281*/].f_103, -1, 1);
					func_45(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_26D4D0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_24), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_24] /*4*/]), 0, 0, 0, 0);
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_25] /*4*/]), 0, 0, 0, 0);
				iLocal_24 = iLocal_25;
				func_45(Global_3826, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_25), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_22 == 4)
			{
				Global_17C49.f_3011[Global_3839 /*20*/].f_9 = Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103;
				if (Global_10A95)
				{
					Global_26D4D1 = Global_BFC[3 /*2811*/][4 /*281*/].f_103;
					func_20(2011, Global_BFC[3 /*2811*/][4 /*281*/].f_103, -1, 1);
					if (Global_26D4D1 == 0)
					{
						Var2 = { func_17(PLAYER::PLAYER_ID()) };
						iVar3 = 0;
						if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_26D4D4 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_45(Global_3826, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_3826, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_26D4D1), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_3826, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_24), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_24] /*4*/]), 0, 0, 0, 0);
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_25] /*4*/]), 0, 0, 0, 0);
				iLocal_24 = iLocal_25;
				func_45(Global_3826, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_25), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_22 == 1)
			{
				Global_17C49.f_3011[Global_3839 /*20*/].f_B = { Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_90[Global_BFC[Global_3839 /*2811*/][1 /*281*/].f_103 /*6*/] };
				if (Global_10A95)
				{
					func_20(1186, Global_BFC[3 /*2811*/][1 /*281*/].f_103, -1, 1);
				}
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_24), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_24] /*4*/]), 0, 0, 0, 0);
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_25] /*4*/]), 0, 0, 0, 0);
				iLocal_24 = iLocal_25;
				func_45(Global_3826, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_25), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_22 == 3)
			{
				Global_17C49.f_3011[Global_3839 /*20*/].f_A = Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103;
				if (Global_10A95)
				{
					func_20(1185, Global_17C49.f_3011[3 /*20*/].f_A, -1, 1);
				}
				if (Global_17C49.f_3011[Global_3839 /*20*/].f_A == 1)
				{
					iLocal_32 = 1;
					iLocal_34 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_32 = 0;
				}
			}
			if (iLocal_22 == 0)
			{
				if (Global_10A95 == 1)
				{
					Global_BFC[3 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[iLocal_25];
					func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_24), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_24] /*4*/]), 0, 0, 0, 0);
					func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iLocal_17[iLocal_25] /*4*/]), 0, 0, 0, 0);
					iLocal_24 = iLocal_25;
					func_45(Global_3826, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_25), -1082130432, -1082130432, -1082130432);
					func_20(2074, Global_BFC[3 /*2811*/][iLocal_22 /*281*/].f_103, -1, 1);
				}
				else
				{
					Global_BFC[0 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[iLocal_25];
					Global_BFC[1 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[iLocal_25];
					Global_BFC[2 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[iLocal_25];
					if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
					{
						if (Global_8861 == 15)
						{
							if (Global_17C49.f_3011.f_52 == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_42 == fLocal_43)
								{
								}
								bLocal_35 = true;
							}
							else
							{
								func_45(Global_3826, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_8D7, 25);
								MISC::SET_BIT(&Global_8D8, 11);
								if (Global_17C49.f_3011.f_53 == 0)
								{
									HUD::CLEAR_HELP(1);
									func_15("CELL_7051", -1);
									Global_17C49.f_3011.f_53 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_3826, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_8D7, 25);
						MISC::SET_BIT(&Global_8D8, 11);
					}
				}
			}
			func_13(Global_3826, "SET_HEADER", &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1144
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_14(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_14(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_14(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_14(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)//Position - 0x119F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15(char* sParam0, int iParam1)//Position - 0x11B1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_16(char* sParam0)//Position - 0x11C8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)//Position - 0x11DE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x11F5
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
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_14(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_14(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_14(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_14(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_19()//Position - 0x12A8
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

void func_20(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x151E
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)//Position - 0x1549
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()//Position - 0x157D
{
	return Global_1407E1;
}

void func_23()//Position - 0x1589
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_24();
	}
}

void func_24()//Position - 0x15AD
{
	if (func_25())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_25()//Position - 0x15C1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_26D4D2 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()//Position - 0x1608
{
	if (Global_3823 == 0)
	{
		if (func_10(2, Global_381A, 0))
		{
			func_23();
			Global_3823 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
			uLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_23 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_20);
			iLocal_22 = iLocal_17[iLocal_23];
			switch (iLocal_22)
			{
				case 0:
					if (Global_10A95 == 0)
					{
						if (Global_8861 == 15)
						{
							if (Global_17C49.f_3011.f_52 == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_42 == fLocal_43)
								{
								}
								bLocal_35 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_3839.f_1 > 3)
			{
				Global_3839.f_1 = 8;
			}
			func_27();
			iLocal_31 = 1;
			iLocal_34 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_27()//Position - 0x16DA
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_45(Global_3826, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_18 = 0;
	iVar1 = 0;
	if (Global_10A95)
	{
		StringCopy(&(Global_BFC[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(PLAYER::PLAYER_ID()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
		{
			StringCopy(&(Global_BFC[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7C[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar3] < Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_68[iVar4]), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_17[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 /*4*/]), &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_27 = iVar1;
			if (iLocal_27 < 0)
			{
				iLocal_27 = 0;
			}
			if ((iLocal_22 == 1 || iLocal_22 == 4) || iLocal_22 == 2)
			{
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_24 = iVar1;
			}
			if (iLocal_22 == 0 && Global_10A95 == 1)
			{
				func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_24 = iVar1;
			}
		}
		if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7C[iVar1] == 1)
		{
			iLocal_18++;
		}
		iVar1++;
	}
	func_45(Global_3826, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_3826, "SET_HEADER", &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
	if (Global_382D)
	{
		func_18(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

void func_28()//Position - 0x1A1F
{
	if (iLocal_41)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_41 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_19 > 0)
			{
				iLocal_19 = (iLocal_19 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_19++;
			if (iLocal_19 == iLocal_18)
			{
				iLocal_19 = 0;
			}
			func_29();
		}
	}
	if (iLocal_41 == 0)
	{
		if (func_10(2, Global_3821, 0))
		{
			if (iLocal_19 > 0)
			{
				iLocal_19 = (iLocal_19 - 1);
			}
			func_31();
			iLocal_41 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_3822, 0))
		{
			iLocal_19++;
			if (iLocal_19 == iLocal_18)
			{
				iLocal_19 = 0;
			}
			func_29();
			iLocal_41 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_29()//Position - 0x1ACC
{
	func_45(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_30();
}

void func_30()//Position - 0x1B09
{
	if (func_25())
	{
		if (Global_38DC == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_31()//Position - 0x1B2C
{
	func_45(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_32();
}

void func_32()//Position - 0x1B69
{
	if (func_25())
	{
		if (Global_38DC == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_33()//Position - 0x1B8C
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_18 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_BFC[Global_3839 /*2811*/][3 /*281*/].f_118 = 0;
		}
		else
		{
			Global_BFC[Global_3839 /*2811*/][3 /*281*/].f_118 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_BFC[Global_3839 /*2811*/][iVar2 /*281*/].f_118 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_BFC[Global_3839 /*2811*/][iVar2 /*281*/] < Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/])
					{
						if (Global_10A95)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_28), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_28), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_28), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_41(iVar2, iVar3);
							func_18(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_28), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_17[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_BFC[Global_3839 /*2811*/][iVar1 /*281*/].f_118 == 1)
		{
			iLocal_18++;
		}
		iVar1++;
	}
	func_45(Global_3826, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_23), -1082130432, -1082130432, -1082130432);
	func_13(Global_3826, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_382D)
	{
		func_18(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

int func_34()//Position - 0x1E58
{
	if (Global_10A95)
	{
		Global_3839 = 3;
	}
	else
	{
		Global_3839 = func_35();
	}
	if (Global_3839 > 3)
	{
		Global_3839 = 3;
	}
	return Global_17C49.f_3011[Global_3839 /*20*/].f_7;
}

var func_35()//Position - 0x1E8E
{
	func_36();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_36()//Position - 0x1EA7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_37(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_38(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_37(int iParam0)//Position - 0x1FA4
{
	return Global_8861 == iParam0;
}

bool func_38(int iParam0)//Position - 0x1FB2
{
	return iParam0 < 3;
}

int func_39(var uParam0)//Position - 0x1FBE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x1FFB
{
	if (func_38(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)//Position - 0x2025
{
	switch (iParam0)
	{
		case 0:
			if (Global_10A95)
			{
				iLocal_28 = 19;
			}
			else if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
			{
				iLocal_28 = 26;
			}
			else
			{
				iLocal_28 = 25;
			}
			break;
		
		case 3:
			if (Global_BFC[Global_3839 /*2811*/][3 /*281*/].f_103 == 1)
			{
				iLocal_28 = 20;
			}
			else
			{
				iLocal_28 = 21;
			}
			break;
		
		default:
			iLocal_28 = Global_BFC[Global_3839 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()//Position - 0x20A7
{
	if (Global_8861 != 15)
	{
		func_44();
		Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_7C[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x20CE
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_21(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()//Position - 0x2100
{
	if (func_37(14))
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
		Global_3839 = func_35();
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x21A1
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
