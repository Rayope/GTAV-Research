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
	int iLocal_27 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_30();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("controller_races")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	func_29();
	while (true)
	{
		if (func_26(9) || Global_154F7)
		{
			func_30();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (func_12() == 1)
				{
					switch (iLocal_27)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		SYSTEM::WAIT(1000);
	}
}

void func_1()//Position - 0xE2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, iVar0))
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, iVar0))
				{
					fVar2 = SYSTEM::VDIST2(func_9(PLAYER::PLAYER_ID()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_17C2F[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_17C49.f_6E10.f_3), iVar0);
							}
							else if ((MISC::GET_GAME_TIMER() - Global_17C35[iVar0]) > 60000)
							{
								Global_17C2F[iVar0] = 0;
								Global_17C35[iVar0] = MISC::GET_GAME_TIMER();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_17C49.f_6E10.f_3), iVar0);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_17C49.f_6E10.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_17C2F[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((MISC::GET_GAME_TIMER() - Global_17C35[iVar0]) > 60000)
					{
						Global_17C2F[iVar0] = 0;
						Global_17C35[iVar0] = MISC::GET_GAME_TIMER();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)//Position - 0x256
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
		if (Global_60A9 == 1)
		{
			Global_60AA = 1;
		}
		Global_60A9 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_60AC[iVar0 /*23*/].f_13));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

void func_3(int iParam0)//Position - 0x35F
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)//Position - 0x37D
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_5(int iParam0, bool bParam1)//Position - 0x403
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x489
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

bool func_7(int iParam0)//Position - 0x535
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13);
}

Vector3 func_8(int iParam0, int iParam1)//Position - 0x571
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0f, 0f, 0f;
	}
	return Global_60AC[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(var uParam0)//Position - 0x5AF
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_10(int iParam0)//Position - 0x5C2
{
	switch (iParam0)
	{
		case 0:
			return 85;
			break;
		
		case 1:
			return 86;
			break;
		
		case 2:
			return 87;
			break;
		
		case 3:
			return 88;
			break;
		
		case 4:
			return 89;
			break;
	}
	return 85;
}

bool func_11(int iParam0)//Position - 0x619
{
	return MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], iParam0);
}

int func_12()//Position - 0x635
{
	func_13();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_13()//Position - 0x64E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_14(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_15(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_14(int iParam0)//Position - 0x74B
{
	return Global_8861 == iParam0;
}

bool func_15(int iParam0)//Position - 0x759
{
	return iParam0 < 3;
}

int func_16(var uParam0)//Position - 0x765
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)//Position - 0x7A2
{
	if (func_15(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_18()//Position - 0x7CC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_21(iVar0);
			if (MISC::IS_BIT_SET(Global_17C49.f_6E0D.f_2, iVar0))
			{
				fVar2 = SYSTEM::VDIST2(func_9(PLAYER::PLAYER_ID()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_17C25[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_6E0D.f_2), iVar0);
						}
						else if ((MISC::GET_GAME_TIMER() - Global_17C2A[iVar0]) > 60000)
						{
							Global_17C25[iVar0] = 0;
							Global_17C2A[iVar0] = MISC::GET_GAME_TIMER();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_6E0D.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_17C25[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((MISC::GET_GAME_TIMER() - Global_17C2A[iVar0]) > 60000)
				{
					Global_17C25[iVar0] = 0;
					Global_17C2A[iVar0] = MISC::GET_GAME_TIMER();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_17C49.f_6E0D)
			{
				if (iVar1 == 81)
				{
					func_20(81);
					func_19(65, 1000);
					Global_17C49.f_6E0D = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_19(int iParam0, int iParam1)//Position - 0x947
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_20(int iParam0)//Position - 0x984
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_21(int iParam0)//Position - 0x9A2
{
	switch (iParam0)
	{
		case 0:
			return 81;
			break;
		
		case 1:
			return 82;
			break;
		
		case 2:
			return 83;
			break;
		
		case 3:
			return 84;
			break;
	}
	return 81;
}

void func_22()//Position - 0x9EB
{
	switch (iLocal_27)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			else
			{
				iLocal_27 = 2;
			}
			break;
		
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
			{
				iLocal_27 = 2;
			}
			break;
		
		case 2:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			break;
	}
}

void func_23()//Position - 0xA6C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_24()//Position - 0xA94
{
	if (func_26(9))
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

int func_25()//Position - 0xAD0
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0xAEA
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)//Position - 0xB0C
{
	return func_28(iParam0, Global_8861);
}

int func_28(int iParam0, int iParam1)//Position - 0xB1D
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

void func_29()//Position - 0xCFE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_17C25[iVar0] = 0;
		Global_17C2A[iVar0] = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_17C2F[iVar0] = 0;
		iVar0++;
	}
}

void func_30()//Position - 0xD4C
{
	SCRIPT::TERMINATE_THIS_THREAD();
}
