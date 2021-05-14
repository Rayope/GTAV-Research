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
	struct<3> Local_19 = { 0, 0, 0 } ;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
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
	fLocal_24 = 9.99f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_9();
	func_6();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_3839.f_1 != 9)
		{
			switch (Global_3839.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_9();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_26) * 30 && SYSTEM::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_3819, 0))
					{
						func_4();
						Global_3823 = 1;
						func_9();
						func_6();
						if (Global_3839.f_1 > 3)
						{
							Global_3839.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
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

int func_1()//Position - 0x141
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x184
{
	MISC::CLEAR_BIT(&Global_8D8, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x199
{
	if (Global_B35 == 1 || Global_3839.f_1 < 7)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1C2
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)//Position - 0x1E2
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

void func_6()//Position - 0x254
{
	if (Global_382D)
	{
		func_7(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_7(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8D7, 17);
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2E6
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
		func_8(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_8(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_8(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_8(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_8(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_8(var uParam0)//Position - 0x399
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9()//Position - 0x3AB
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fLocal_20 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_16();
			func_15();
			func_14();
			fLocal_21 = (360f - fLocal_20);
			fLocal_24 = (fLocal_24 - fLocal_21);
			if (fLocal_24 < 0f)
			{
				fLocal_24 = (fLocal_24 + 360f);
			}
			if (iLocal_28 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (MISC::IS_BIT_SET(Global_8D8, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_24));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (MISC::IS_BIT_SET(Global_8D8, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				if (MISC::IS_BIT_SET(Global_8D8, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_8D9, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_27);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_20 == fLocal_20)
			{
			}
			func_13(Global_3826, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Local_19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fLocal_20 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		if (Global_26D4CF > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_26D4CF)
		{
			func_12(iVar0);
			func_11(iVar0);
			func_10(iVar0);
			fLocal_21 = (360f - fLocal_20);
			fLocal_24 = (fLocal_24 - fLocal_21);
			if (fLocal_24 < 0f)
			{
				fLocal_24 = (fLocal_24 + 360f);
			}
			if (iLocal_28 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (MISC::IS_BIT_SET(Global_26D408, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (MISC::IS_BIT_SET(Global_26D408, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (MISC::IS_BIT_SET(Global_26D408, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (MISC::IS_BIT_SET(Global_26D408, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_24));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (MISC::IS_BIT_SET(Global_8D8, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_8D8, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_8D9, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_27);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_20 == fLocal_20)
			{
			}
			func_13(Global_3826, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_10(int iParam0)//Position - 0x674
{
	fLocal_22 = (Global_26D4BF[iParam0 /*3*/] - Local_19.x);
	fLocal_23 = (SYSTEM::COS(((3.14159f / 180f) * Local_19.x)) * (Global_26D4BF[iParam0 /*3*/].f_1 - Local_19.f_1));
	fLocal_24 = MISC::ATAN2(fLocal_22, fLocal_23);
	if (fLocal_24 < 0f)
	{
		fLocal_24 = (fLocal_24 + 360f);
	}
	return fLocal_24;
}

float func_11(int iParam0)//Position - 0x6CA
{
	fLocal_26 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_26D4BF[iParam0 /*3*/], Local_19));
	fLocal_27 = (Global_26D4BF[iParam0 /*3*/].f_2 - Local_19.f_2);
	return fLocal_26;
}

float func_12(int iParam0)//Position - 0x6FD
{
	fLocal_25 = SYSTEM::SQRT((((Global_26D4BF[iParam0 /*3*/] - Local_19.x) * (Global_26D4BF[iParam0 /*3*/] - Local_19.x)) + ((Global_26D4BF[iParam0 /*3*/].f_1 - Local_19.f_1) * (Global_26D4BF[iParam0 /*3*/].f_1 - Local_19.f_1))));
	return fLocal_25;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x744
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

float func_14()//Position - 0x7A7
{
	fLocal_22 = (Global_419E - Local_19.x);
	fLocal_23 = (SYSTEM::COS(((3.14159f / 180f) * Local_19.x)) * (Global_419E.f_1 - Local_19.f_1));
	fLocal_24 = MISC::ATAN2(fLocal_22, fLocal_23);
	if (fLocal_24 < 0f)
	{
		fLocal_24 = (fLocal_24 + 360f);
	}
	return fLocal_24;
}

float func_15()//Position - 0x7F3
{
	fLocal_26 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_419E, Local_19));
	fLocal_27 = (Global_419E.f_2 - Local_19.f_2);
	return fLocal_26;
}

float func_16()//Position - 0x81C
{
	fLocal_25 = SYSTEM::SQRT((((Global_419E - Local_19.x) * (Global_419E - Local_19.x)) + ((Global_419E.f_1 - Local_19.f_1) * (Global_419E.f_1 - Local_19.f_1))));
	return fLocal_25;
}

int func_17()//Position - 0x84F
{
	if (Global_10A95 == 1)
	{
		return 1;
	}
	return 0;
}

