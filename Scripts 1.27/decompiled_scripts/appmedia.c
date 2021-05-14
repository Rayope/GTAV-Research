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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_26[25];
	int iLocal_27 = 0;
	struct<3> Local_28 = { 0, 0, 0 } ;
	struct<3> Local_29 = { 0, 0, 0 } ;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_23 == 0)
		{
			if (Global_3839.f_1 != 9)
			{
				switch (Global_3839.f_1)
				{
					case 7:
						if ((iLocal_30 == 0 && iLocal_31 == 0) && Global_4157 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_3819, 0) && iLocal_30 == 0) && iLocal_31 == 0)
						{
							func_14();
							Global_3823 = 1;
							if (Global_3839.f_1 > 3)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_30)
				{
					func_9();
				}
				if (iLocal_31)
				{
					func_8();
				}
			}
			else
			{
				Global_383B = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()//Position - 0x114
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x157
{
	iLocal_24 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_24)
	{
		case 0:
			iLocal_23 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_3839.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	
	func_7(Global_3826, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_20 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_21 = 0;
	iVar0 = 0;
	while (iLocal_21 < iLocal_20)
	{
		if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_21))
		{
			func_6(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_26[iLocal_21 /*6*/]), 0, 0, 0, 0);
			iLocal_25[iVar0] = iLocal_21;
			iVar0++;
		}
		iLocal_21++;
	}
	func_7(Global_3826, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_3826, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_382D)
	{
		func_6(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_5(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_5(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_5(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_5(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_5(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_5(var uParam0)//Position - 0x326
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x338
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
		func_5(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_5(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_5(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_5(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_5(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3EB
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

void func_8()//Position - 0x44E
{
	if (iLocal_30 == 0 && iLocal_31 == 1)
	{
		if (iLocal_35)
		{
			Local_29.x = (Local_29.x + 1f);
		}
		if (Local_29.x > Local_28.x || Local_29.x == Local_28.x)
		{
			Local_29.x = Local_28.x;
			iLocal_35 = 0;
		}
		if (iLocal_36)
		{
			Local_29.f_1 = (Local_29.f_1 - 2f);
		}
		if (Local_29.f_1 < Local_28.f_1 || Local_29.f_1 == Local_28.f_1)
		{
			Local_29.f_1 = Local_28.f_1;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			Local_29.f_2 = (Local_29.f_2 - 7f);
		}
		if (Local_29.f_2 < Local_28.f_2 || Local_29.f_2 == Local_28.f_2)
		{
			Local_29.f_2 = Local_28.f_2;
			iLocal_37 = 0;
		}
		if ((iLocal_35 == 0 && iLocal_36 == 0) && iLocal_37 == 0)
		{
			iLocal_31 = 0;
			if (Global_3839.f_1 > 3)
			{
				Global_3839.f_1 = 7;
				HUD::CLEAR_HELP(1);
				Global_4159 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_29, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_30 == 1 && iLocal_31 == 0) && Global_4157 == 6)
	{
		if (iLocal_32)
		{
			Local_29.x = (Local_29.x - 1f);
		}
		if (Local_29.x < Local_28.x || Local_29.x == Local_28.x)
		{
			Local_29.x = Local_28.x;
			iLocal_32 = 0;
		}
		if (iLocal_33)
		{
			Local_29.f_1 = (Local_29.f_1 - 0.5f);
		}
		if (Local_29.f_1 < Local_28.f_1 || Local_29.f_1 == Local_28.f_1)
		{
			Local_29.f_1 = Local_28.f_1;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			Local_29.f_2 = (Local_29.f_2 + 7f);
		}
		if (Local_29.f_2 > Local_28.f_2 || Local_29.f_2 == Local_28.f_2)
		{
			Local_29.f_2 = Local_28.f_2;
			iLocal_34 = 0;
		}
		if ((iLocal_32 == 0 && iLocal_33 == 0) && iLocal_34 == 0)
		{
			iLocal_30 = 0;
			func_10("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_29, 0);
	}
	if (MISC::IS_BIT_SET(Global_8D8, 15))
	{
		iLocal_30 = 0;
		iLocal_31 = 0;
		func_7(Global_3826, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_382D)
		{
			func_6(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8D7, 17);
		func_7(Global_3826, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_3826, "SET_HEADER", &(Local_26[iLocal_22 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x71F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11()//Position - 0x735
{
	Global_4159 = 1;
	HUD::CLEAR_HELP(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_12()//Position - 0x74A
{
	if (Global_B35 == 1 || Global_3839.f_1 < 7)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x773
{
	if (iLocal_30 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_29, 0);
		Local_28 = { Global_3811 };
		iLocal_31 = 1;
		iLocal_35 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
	}
}

void func_14()//Position - 0x79D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7BD
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

void func_16()//Position - 0x82F
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_15(2, Global_3821, 0))
		{
			func_20();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_3822, 0))
		{
			func_17();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()//Position - 0x8A4
{
	func_7(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_18();
}

void func_18()//Position - 0x8DF
{
	if (func_19())
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

int func_19()//Position - 0x902
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

void func_20()//Position - 0x949
{
	func_7(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_21();
}

void func_21()//Position - 0x984
{
	if (func_19())
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

void func_22()//Position - 0x9A7
{
	int iVar0;
	
	if (Global_3823 == 0)
	{
		if (func_15(2, Global_381A, 0))
		{
			MISC::CLEAR_BIT(&Global_8D8, 15);
			func_24();
			Global_3823 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
			uLocal_19 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_19))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_19);
			if (iVar0 > -1)
			{
				iLocal_22 = iLocal_25[iVar0];
				if (Global_3839.f_1 > 3)
				{
					if (Global_4157 == 0)
					{
						func_7(Global_3826, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_3826, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_3826, "SET_HEADER", &(Local_26[iLocal_22 /*6*/]), 0, 0, 0, 0);
						if (Global_382D)
						{
							func_6(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8D7, 17);
						Global_415B = iLocal_22;
						Global_4157 = 12;
						Global_3839.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB27
{
	if (iLocal_31 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_29, 0);
		Local_28 = { -90.3f, -0.8f, 90f };
		iLocal_30 = 1;
		iLocal_32 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
	}
}

void func_24()//Position - 0xB5B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_25();
	}
}

void func_25()//Position - 0xB7F
{
	if (func_19())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_26()//Position - 0xB93
{
	if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_23 = 1;
		}
		else
		{
			Global_4159 = 1;
			Global_3839.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()//Position - 0xBDD
{
	StringCopy(&(Local_26[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_26[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_26[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_26[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_26[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_26[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_26[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_26[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_26[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_26[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_26[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_26[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_26[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_26[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_26[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_26[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_26[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_26[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_26[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_26[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

