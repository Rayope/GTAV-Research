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
	int iLocal_17[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
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
	fLocal_24 = 0.82f;
	fLocal_25 = 0.42f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	iLocal_23 = 1;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_3839.f_1 != 9)
		{
			switch (Global_3839.f_1)
			{
				case 7:
					func_21();
					if (iLocal_23)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_3819, 0))
					{
						func_10();
						Global_3823 = 1;
						func_9(Global_3826, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_3839.f_1 > 3)
						{
							Global_3839.f_1 = 7;
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

int func_1()//Position - 0x110
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x153
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x16F
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

int func_4(int iParam0)//Position - 0x1EC
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

bool func_5(int iParam0)//Position - 0x20E
{
	return func_6(iParam0, Global_8861);
}

int func_6(int iParam0, int iParam1)//Position - 0x21F
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

void func_7()//Position - 0x400
{
	func_28();
	Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_7C[2] = 1;
}

int func_8()//Position - 0x41F
{
	if (Global_B35 == 1 || Global_3839.f_1 < 7)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x448
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

void func_10()//Position - 0x4AB
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)//Position - 0x4CB
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

void func_12()//Position - 0x53D
{
	if (Global_3823 == 0)
	{
		if (func_11(2, Global_381A, 0))
		{
			func_15();
			Global_3823 = 1;
			func_28();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
			uLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 = iLocal_17[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_20)];
			func_13(Global_3826, "SET_HEADER", &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
			if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
			{
				func_9(Global_3826, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_3826, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x634
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

void func_14(var uParam0)//Position - 0x68F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15()//Position - 0x6A1
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_16();
	}
}

void func_16()//Position - 0x6C5
{
	if (func_17())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_17()//Position - 0x6D9
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

void func_18()//Position - 0x720
{
	Global_3823 = 1;
	iLocal_22 = 0;
	iLocal_23 = 0;
	func_19();
}

void func_19()//Position - 0x736
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_3826, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_18 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7C[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar2] < Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_54[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_68[iVar3]), -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_17[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7C[iVar1] == 1)
		{
			iLocal_18++;
		}
		iVar1++;
	}
	func_9(Global_3826, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_3826, "SET_HEADER", &(Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_7[Global_BFC[Global_3839 /*2811*/][iLocal_22 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
	if (Global_382D)
	{
		func_20(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x93D
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

void func_21()//Position - 0x9F0
{
	if (iLocal_28)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_19 > 0)
			{
				iLocal_19 = (iLocal_19 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_19++;
			if (iLocal_19 == iLocal_18)
			{
				iLocal_19 = 0;
			}
			func_22();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_11(2, Global_3821, 0))
		{
			if (iLocal_19 > 0)
			{
				iLocal_19 = (iLocal_19 - 1);
			}
			func_24();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_11(2, Global_3822, 0))
		{
			iLocal_19++;
			if (iLocal_19 == iLocal_18)
			{
				iLocal_19 = 0;
			}
			func_22();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()//Position - 0xA9D
{
	func_9(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_23();
}

void func_23()//Position - 0xAD8
{
	if (func_17())
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

void func_24()//Position - 0xAFB
{
	func_9(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_25();
}

void func_25()//Position - 0xB36
{
	if (func_17())
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

void func_26()//Position - 0xB59
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_18 = 0;
	iVar1 = 0;
	func_28();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_BFC[Global_3839 /*2811*/][iVar2 /*281*/].f_118 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_BFC[Global_3839 /*2811*/][iVar2 /*281*/] < Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar1), -1f, -1f, -1f, &(Global_BFC[Global_3839 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
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
	func_9(Global_3826, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_3826, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_382D)
	{
		func_20(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

void func_27()//Position - 0xCF4
{
	if (Global_8861 != 15)
	{
		func_28();
		Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_7C[2] = 0;
	}
}

void func_28()//Position - 0xD1B
{
	if (func_34(14))
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
		Global_3839 = func_29();
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

var func_29()//Position - 0xDBC
{
	func_30();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_30()//Position - 0xDD5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_34(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_31(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_31(int iParam0)//Position - 0xED2
{
	return iParam0 < 3;
}

int func_32(var uParam0)//Position - 0xEDE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0xF1B
{
	if (func_31(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0xF45
{
	return Global_8861 == iParam0;
}

