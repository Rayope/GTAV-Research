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
	struct<17> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_17C49.f_5C53.f_91 > 0 || Global_176FC)
		{
			if (!Global_176FC)
			{
				if ((Global_8861 != 6 && Global_8861 != 15) && !Global_15166)
				{
					func_22();
				}
				if (!Global_176FB)
				{
					if (Global_17C49.f_5C53.f_91 > 0)
					{
						if (func_19(&(Global_17C49.f_5C53[iLocal_20 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iLocal_20 /*16*/].f_B, func_12()))
								{
									if (Global_17C49.f_5C53[iLocal_20 /*16*/].f_C == Global_17C49.f_5C53.f_92[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_176FE)
										{
											if (MISC::GET_GAME_TIMER() > Global_17C49.f_5C53[iLocal_20 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iLocal_20 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_11(&(Global_17C49.f_5C53[iLocal_20 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&(Global_17C49.f_5C53[iLocal_20 /*16*/]), &(Global_17C49.f_5C53[iLocal_20 /*16*/].f_4));
												}
												if (Global_17C49.f_5C53[iLocal_20 /*16*/].f_D != 0)
												{
													func_9(Global_17C49.f_5C53[iLocal_20 /*16*/].f_D, 0);
												}
												Local_19 = { Global_17C49.f_5C53[iLocal_20 /*16*/] };
												Local_19.f_4 = { Global_17C49.f_5C53[iLocal_20 /*16*/].f_4 };
												Local_19.f_8 = Global_17C49.f_5C53[iLocal_20 /*16*/].f_8;
												Local_19.f_A = Global_17C49.f_5C53[iLocal_20 /*16*/].f_A;
												Local_19.f_9 = Global_17C49.f_5C53[iLocal_20 /*16*/].f_9;
												Local_19.f_B = Global_17C49.f_5C53[iLocal_20 /*16*/].f_B;
												Local_19.f_C = Global_17C49.f_5C53[iLocal_20 /*16*/].f_C;
												Local_19.f_D = Global_17C49.f_5C53[iLocal_20 /*16*/].f_D;
												Local_19.f_E = Global_17C49.f_5C53[iLocal_20 /*16*/].f_E;
												Local_19.f_F = Global_17C49.f_5C53[iLocal_20 /*16*/].f_F;
												Local_19.f_10 = 0;
												Global_176FF = { Global_17C49.f_5C53[iLocal_20 /*16*/] };
												Global_176FD = MISC::GET_GAME_TIMER();
												iVar0 = iLocal_20;
												while (iVar0 <= (Global_17C49.f_5C53.f_91 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_17C49.f_5C53.f_91 - 1));
												Global_17C49.f_5C53.f_91 = (Global_17C49.f_5C53.f_91 - 1);
												func_6();
												Global_176FC = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
				{
					if (func_3(&Local_19))
					{
						HUD::CLEAR_HELP(0);
					}
				}
				else if (func_2(&Local_19, &(Local_19.f_4)))
				{
					HUD::CLEAR_HELP(0);
				}
				if ((MISC::GET_GAME_TIMER() - Global_176FD) > 4000 || Local_19.f_10)
				{
					if (Local_19.f_E != 0)
					{
						func_9(Local_19.f_E, 0);
					}
					Global_176FE = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_19.f_A != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_19, &(Local_19.f_4), Local_19.f_C, 1000, iVar1, Local_19.f_9, Local_19.f_B, Local_19.f_D, Local_19.f_E, Local_19.f_F);
				}
				StringCopy(&Local_19, "", 16);
				StringCopy(&(Local_19.f_4), "", 16);
				Local_19.f_8 = 0;
				Local_19.f_9 = 0;
				Local_19.f_A = -1;
				Local_19.f_B = 0;
				Local_19.f_C = 0;
				Local_19.f_D = 0;
				Local_19.f_E = 0;
				Local_19.f_F = 0;
				Local_19.f_10 = 0;
				Global_176FD = 0;
				Global_176FC = 0;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iLocal_20 /*16*/]), &Local_19) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iLocal_20 /*16*/]), ""))
			{
				if (Global_17C49.f_5C53[iLocal_20 /*16*/].f_A != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_17C49.f_5C53[iLocal_20 /*16*/].f_A)
					{
						iVar2 = iLocal_20;
						while (iVar2 <= (Global_17C49.f_5C53.f_91 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_17C49.f_5C53.f_91 - 1));
						Global_17C49.f_5C53.f_91 = (Global_17C49.f_5C53.f_91 - 1);
						func_6();
					}
				}
			}
			iLocal_20++;
			if (iLocal_20 >= Global_17C49.f_5C53.f_91)
			{
				iLocal_20 = 0;
			}
		}
		else if ((Global_8861 != 6 && Global_8861 != 15) && !Global_15166)
		{
			func_22();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x472
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_17C49.f_5C53.f_91 < 9)
	{
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_4), sParam1, 16);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_9 = iParam5;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_B = iParam6;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_C = uParam2;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_D = iParam7;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_E = iParam8;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = -1;
		}
		Global_17C49.f_5C53.f_91++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)//Position - 0x644
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_3(var uParam0)//Position - 0x65D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_4()//Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_19.f_9 != -1 && (MISC::GET_GAME_TIMER() - Global_176FD) > Local_19.f_9)
	{
		return 0;
	}
	if (Global_176FB)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
	{
		if (!func_3(&Local_19))
		{
			Local_19.f_10 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_19, &(Local_19.f_4)))
	{
		Local_19.f_10 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x6FF
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x719
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_17C49.f_5C53.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 0))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[0])
			{
				Global_17C49.f_5C53.f_92[0] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 1))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[1])
			{
				Global_17C49.f_5C53.f_92[1] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 2))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[2])
			{
				Global_17C49.f_5C53.f_92[2] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x839
{
	StringCopy(&(Global_17C49.f_5C53[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_17C49.f_5C53[iParam0 /*16*/].f_4), "", 16);
	Global_17C49.f_5C53[iParam0 /*16*/].f_8 = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_9 = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_B = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_A = -1;
	Global_17C49.f_5C53[iParam0 /*16*/].f_C = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_D = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_E = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_F = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8D1
{
	Global_17C49.f_5C53[iParam0 /*16*/] = { Global_17C49.f_5C53[iParam1 /*16*/] };
	Global_17C49.f_5C53[iParam0 /*16*/].f_4 = { Global_17C49.f_5C53[iParam1 /*16*/].f_4 };
	Global_17C49.f_5C53[iParam0 /*16*/].f_8 = Global_17C49.f_5C53[iParam1 /*16*/].f_8;
	Global_17C49.f_5C53[iParam0 /*16*/].f_A = Global_17C49.f_5C53[iParam1 /*16*/].f_A;
	Global_17C49.f_5C53[iParam0 /*16*/].f_9 = Global_17C49.f_5C53[iParam1 /*16*/].f_9;
	Global_17C49.f_5C53[iParam0 /*16*/].f_B = Global_17C49.f_5C53[iParam1 /*16*/].f_B;
	Global_17C49.f_5C53[iParam0 /*16*/].f_C = Global_17C49.f_5C53[iParam1 /*16*/].f_C;
	Global_17C49.f_5C53[iParam0 /*16*/].f_D = Global_17C49.f_5C53[iParam1 /*16*/].f_D;
	Global_17C49.f_5C53[iParam0 /*16*/].f_E = Global_17C49.f_5C53[iParam1 /*16*/].f_E;
	Global_17C49.f_5C53[iParam0 /*16*/].f_F = Global_17C49.f_5C53[iParam1 /*16*/].f_F;
}

void func_9(int iParam0, int iParam1)//Position - 0x9E1
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_10(var uParam0, var uParam1)//Position - 0xA1E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11(var uParam0)//Position - 0xA3A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_12()//Position - 0xA50
{
	func_13();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_13()//Position - 0xA69
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_14(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_17(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_14(int iParam0)//Position - 0xB66
{
	return Global_8861 == iParam0;
}

int func_15(var uParam0)//Position - 0xB74
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBB1
{
	if (func_17(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0xBDB
{
	return iParam0 < 3;
}

int func_18()//Position - 0xBE7
{
	func_13();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

int func_19(var uParam0)//Position - 0xC00
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_C < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_10A93)
		{
			return 0;
		}
		if (Global_154F7)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_F, 1))
		{
			if (Global_154FF)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()//Position - 0xC8D
{
	if (Global_10B99)
	{
		return 1;
	}
	else if (Global_D5D8 && !Global_D5DE)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xCB7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

void func_22()//Position - 0xCD3
{
	if (Global_176FC)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
		{
			if (func_3(&Local_19))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		else if (func_2(&Local_19, &(Local_19.f_4)))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	Global_176FD = 0;
	Global_176FC = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

