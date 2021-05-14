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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	char cLocal_37[24] = "";
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	char cLocal_41[24] = "";
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	char cLocal_54[24] = "";
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	char* sLocal_58 = NULL;
	char cLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	char cLocal_69[24] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	char* sLocal_73 = NULL;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	var uLocal_98 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_33 = 5000;
	iLocal_34 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_8D8, 1))
		{
			if (!MISC::IS_BIT_SET(Global_8D7, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_382D)
					{
						func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_3800)
						{
							func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_8D8, 1);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_38DE, 0))
		{
			if (!func_104())
			{
				if (!MISC::IS_BIT_SET(Global_38DE, 1))
				{
					MISC::SET_BIT(&Global_38DE, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_88 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_84 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_90 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_88);
				}
				else
				{
					iLocal_85 = MISC::GET_GAME_TIMER();
					iLocal_90 = (iLocal_85 - iLocal_84);
				}
				if (iLocal_90 < 3000)
				{
					if (func_102(&Global_3B2A, &Global_3D92, &Global_3D42, Global_3D4F, Global_4125, Global_4126, 0))
					{
						Global_38DE = 0;
					}
				}
				else
				{
					Global_38DE = 0;
				}
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_3D4C != 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_101();
				}
			}
		}
		if (iLocal_31 == 1)
		{
			func_97();
		}
		switch (Global_3D4C)
		{
			case 0:
				break;
			
			case 1:
				if (Global_3D52)
				{
					if (Global_3D48 == 0)
					{
						func_95();
					}
					else
					{
						func_94();
						func_95();
					}
				}
				else if (Global_3D48 == 0)
				{
					func_85();
				}
				else
				{
					func_94();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_3D52)
				{
					if (Global_3D54)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x23A
{
	Global_3D56 = 0;
	Global_3838 = 0;
	func_2();
}

void func_2()//Position - 0x24E
{
	Global_280001 = 0;
	Global_280002 = 0;
	Global_3D57 = 0;
	Global_3D58 = 0;
	Global_3D59 = 0;
	Global_3D5A = 0;
	Global_3A85.f_A1 = -99;
	Global_3A85.f_A2 = { 0f, 0f, 0f };
	Global_3D50 = 0;
	Global_3D51 = 0;
	Global_3D7B = 0;
	Global_3D7C = 0;
	Global_3D7F = 0;
	Global_3D81 = 0;
	Global_3D80 = 0;
	Global_3D83 = 0;
	Global_3D82 = 0;
	Global_4145 = 0;
	Global_3D85 = 0;
	if (Global_3839.f_1 == 10)
	{
	}
	else if (MISC::IS_BIT_SET(Global_8D7, 11))
	{
		func_3();
	}
	Global_3D52 = 0;
	Global_3D53 = 0;
	Global_3D54 = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412A = 0;
	Global_4131 = 0;
	Global_4130 = 0;
	Global_412D = 0;
	Global_412C = 0;
	Global_412E = 0;
	Global_412F = 0;
	Global_3D48 = 0;
	Global_3D49 = 0;
	Global_3D4A = 0;
	Global_3D4B = 0;
	Global_3E4E = 0;
	Global_4149 = 5000;
	Global_3828 = 0;
	MISC::CLEAR_BIT(&Global_8D7, 20);
	MISC::CLEAR_BIT(&Global_8D7, 24);
	MISC::CLEAR_BIT(&Global_8D8, 23);
	MISC::CLEAR_BIT(&Global_8D9, 0);
	MISC::CLEAR_BIT(&Global_8D8, 9);
	MISC::CLEAR_BIT(&Global_8D8, 31);
	MISC::CLEAR_BIT(&Global_8D8, 17);
	MISC::CLEAR_BIT(&Global_8D9, 5);
	Global_4124 = 0;
	Global_4123 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_3D4C = 4;
	}
	else
	{
		Global_3D4C = 0;
		Global_413F = 0;
		Global_414A = MISC::GET_GAME_TIMER();
	}
}

void func_3()//Position - 0x384
{
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_8D7, 11))
			{
				if (!Global_3800)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_10A95)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
				}
				MISC::CLEAR_BIT(&Global_8D7, 11);
			}
		}
	}
}

void func_4()//Position - 0x3EE
{
	Global_3D56 = 0;
	Global_3838 = 0;
	func_2();
}

void func_5()//Position - 0x402
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_3D84 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_32 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_412C == 0)
	{
		if (iLocal_30 == 0)
		{
			if (Global_413F == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_30 = 1;
			}
		}
		else if (Global_413F == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_30 = 0;
		}
	}
	else if (Global_412E > 0)
	{
		iLocal_36 = MISC::GET_GAME_TIMER();
		if ((iLocal_36 - iLocal_35) > Global_412E)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_412C = 0;
		}
	}
	if (Global_413F == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_3D4C = 6;
		}
	}
}

void func_6()//Position - 0x49C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_7()//Position - 0x4BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!MISC::IS_BIT_SET(Global_8D7, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_10A95 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_10A95 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_10A95 == 0)
	{
		func_53();
	}
	if (iLocal_32 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		if (Global_413F == 1)
		{
			if (Global_4140 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_30 = 1;
				Global_4140 = 0;
			}
		}
	}
	else if (Global_413F == 0)
	{
		if (Global_4140 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_30 = 0;
			Global_4140 = 0;
		}
	}
	if (Global_3D81 == 0)
	{
		if (!Global_3D59)
		{
			if (!MISC::IS_BIT_SET(Global_8D8, 31))
			{
				if (!MISC::IS_BIT_SET(Global_8D8, 27))
				{
					if (func_49())
					{
						if (Global_3839.f_1 > 6)
						{
							MISC::SET_BIT(&Global_8D8, 24);
							MISC::SET_BIT(&Global_8D8, 27);
							MISC::CLEAR_BIT(&Global_8D8, 26);
							MISC::CLEAR_BIT(&Global_8D8, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_3D59 == 0)
	{
		if (Global_3D81 == 1)
		{
			MISC::SET_BIT(&Global_8D8, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8D8, 23);
		}
		if (Global_3D85)
		{
			if (Global_3D81 == 0)
			{
				Global_3BCF = { Global_3D86 };
				Global_3D98 = { Global_3D8C };
				Global_3D56 = 0;
				Global_4145 = 6;
				func_48();
				return;
			}
		}
		if (!Global_3D83)
		{
			while (Global_3D81 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_3839.f_1 < 6)
				{
					Global_3D81 = 0;
				}
				else
				{
					if (iLocal_29 == 0)
					{
						func_47();
						if (Global_3D83)
						{
							iLocal_29 = 1;
							Global_4143 = 1;
							func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3DDA, &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
							func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_382D)
							{
								func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8D7, 17);
								func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8D7, 17);
								func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_29 = 1;
							Global_4141 = 1;
							if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
							{
								func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3DDA, "CELL_300", &(Global_61[Global_62A /*10*/].f_4), "CELL_195", 0);
								func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3DDA, &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
								func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_382D)
							{
								func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_8D7, 17);
						}
					}
					if (func_45(2, Global_381A, 0))
					{
						func_43();
						Global_37EF = 0.19f;
						Global_3D81 = 0;
						func_41();
						if (Global_3D83)
						{
							Global_3BCF = { Global_3DD4 };
							Global_4145 = 5;
						}
						else if (Global_3D4A > 0)
						{
							Global_3E4E = 1;
							Global_3D4C = 0;
							Global_4149 = 0;
							if (MISC::IS_BIT_SET(Global_8D8, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_4124 + 1)
								{
									uLocal_93[iVar0] = func_40(&(Global_3E4F[iVar0 /*6*/]));
									uLocal_94[iVar0] = func_40(&(Global_3FB9[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_4124, &Global_3A85, Global_62A, &Global_3D98, &uLocal_93, &uLocal_94, 9, 0, 0, 0, 0);
							}
							else if (Global_3D4A == 2)
							{
								func_22(&Global_3A85, Global_62A, &Global_3D98, &(Global_3DE6[0 /*6*/]), &(Global_3E1A[0 /*6*/]), &(Global_3DE6[1 /*6*/]), &(Global_3E1A[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_4145 = 1;
							Global_4141 = 0;
							Global_4143 = 0;
							Global_3D56 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3BCF = { Global_3DAA };
							Global_4145 = 1;
						}
						Global_4141 = 0;
						Global_4143 = 0;
						Global_3D56 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_381B, 0) || MISC::IS_BIT_SET(Global_8D7, 24))
					{
						func_43();
						Global_37EF = 0.19f;
						Global_3D81 = 0;
						func_41();
						if (Global_3D83)
						{
							Global_3BCF = { Global_3DCE };
							Global_4145 = 4;
						}
						else if (Global_3D4A > 0)
						{
							Global_3E4E = 1;
							Global_3D4C = 0;
							Global_4149 = 0;
							if (MISC::IS_BIT_SET(Global_8D8, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_4123 + 1)
								{
									uLocal_95[iVar1] = func_40(&(Global_3F04[iVar1 /*6*/]));
									uLocal_96[iVar1] = func_40(&(Global_406E[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_4123, &Global_3A85, Global_62A, &Global_3D98, &uLocal_95, &uLocal_96, 9, 0, 0, 0, 0);
							}
							else if (Global_3D4A == 2)
							{
								func_22(&Global_3A85, Global_62A, &Global_3D98, &(Global_3DF3[0 /*6*/]), &(Global_3E27[0 /*6*/]), &(Global_3DF3[1 /*6*/]), &(Global_3E27[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_4145 = 2;
							Global_4141 = 0;
							Global_4143 = 0;
							Global_3D56 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3BCF = { Global_3DB0 };
							Global_4145 = 2;
						}
						Global_4141 = 0;
						Global_4143 = 0;
						Global_3D56 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_381D, 0))
					{
						if (Global_3D83)
						{
							Global_37EF = 0.19f;
							Global_3D81 = 0;
							func_41();
							func_43();
							Global_3BCF = { Global_3DC8 };
							Global_4145 = 3;
							Global_4141 = 0;
							Global_4143 = 0;
							Global_3D56 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_3D81)
			{
				SYSTEM::WAIT(0);
				if (Global_3839.f_1 < 6)
				{
					Global_3D81 = 0;
				}
				else
				{
					if (iLocal_29 == 0)
					{
						func_47();
						func_46(Global_3826, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_3826, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_3826, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_382D)
						{
							func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8D7, 17);
						iLocal_97 = 0;
						iLocal_29 = 1;
					}
					func_14();
					if (func_45(2, Global_381A, 0))
					{
						func_43();
						Global_3D81 = 0;
						func_41();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
						uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
						switch (iVar2)
						{
							case 0:
								Global_3BCF = { Global_3DCE };
								Global_4145 = 4;
								break;
							
							case 1:
								Global_3BCF = { Global_3DC8 };
								Global_4145 = 3;
								break;
							
							case 2:
								Global_3BCF = { Global_3DD4 };
								Global_4145 = 5;
								break;
						}
						Global_4141 = 0;
						Global_4143 = 0;
						Global_3D56 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_381B, 0))
					{
						Global_3D81 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_3D4D == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_3839.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_3D4C = 6;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_382E, 1);
		func_13();
		Global_3839.f_1 = Global_383B;
		func_8();
	}
	else if (Global_38D7 == 0)
	{
		if (func_45(2, Global_3819, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_8D7, 20))
					{
					}
					else
					{
						Global_3823 = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_3D7D = 1;
						Global_3D7E = 1;
						Global_3D4C = 6;
						func_13();
						Global_3839.f_1 = Global_383B;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE2A
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
			func_46(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_B34);
			if (Global_B34 == 1)
			{
				func_46(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383D), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383D;
			}
			else
			{
				func_46(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383E), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383E;
			}
			if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_38D9 == 0)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else if (Global_10A95)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else
			{
				if (Global_38D8 == 1)
				{
					if (Global_382D)
					{
						func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_382D)
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8D7, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_3838 == 1)
			{
				func_10();
				func_46(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
				{
					func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_217", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
				}
				func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3D4C == 4 || Global_3D4C == 3)
			{
				func_46(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_46(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &Var0, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
					}
				}
				func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13C1
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0x13D3
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

void func_11(int iParam0)//Position - 0x1649
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
		if (func_12(14))
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4178), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4173), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x1AD5
{
	return Global_8861 == iParam0;
}

void func_13()//Position - 0x1AE3
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return;
	}
	switch (Global_383B)
	{
		case 5:
			Global_383B = 6;
			break;
		
		case 6:
			if (MISC::IS_BIT_SET(Global_8D8, 5))
			{
				Global_383B = 6;
				MISC::CLEAR_BIT(&Global_8D8, 5);
			}
			else
			{
				Global_383B = 3;
			}
			break;
		
		case 7:
			Global_383B = 3;
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Global_8D8, 5))
			{
				Global_383B = 6;
				MISC::CLEAR_BIT(&Global_8D8, 5);
			}
			else
			{
				Global_383B = 3;
			}
			break;
		
		default:
			Global_383B = 3;
			break;
	}
}

void func_14()//Position - 0x1B7C
{
	if (iLocal_97)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_97 = 0;
		}
	}
	if (iLocal_97 == 0)
	{
		if (func_45(2, Global_3821, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_18();
			iLocal_97 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_45(2, Global_3822, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_15();
			iLocal_97 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x1BE5
{
	func_46(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_16();
}

void func_16()//Position - 0x1C22
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

int func_17()//Position - 0x1C45
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

void func_18()//Position - 0x1C8C
{
	func_46(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_19();
}

void func_19()//Position - 0x1CC9
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

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1CEC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_21()//Position - 0x1D47
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		if (Global_3838 == 1)
		{
			if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3D7B)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
		else
		{
			func_105(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1EBC
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1F1B
{
	int iVar0;
	
	Global_3D4D = 0;
	if (Global_3D4C == 0 || Global_3D4E == 2)
	{
		if (Global_3D4C != 0)
		{
			if (iParam2 > Global_3D4E)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3839.f_1 = 3;
					Global_3D4C = 0;
					Global_3D4D = 1;
					Global_3D81 = 0;
					Global_3D48 = 0;
					Global_3D49 = 0;
				}
				else
				{
					func_101();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_33();
		Global_3A85 = { Global_3B2A };
		Global_3D52 = Global_3D53;
		Global_3D59 = Global_3D5A;
		Global_280002 = Global_280001;
		Global_3D5B = { Global_3D6B };
		Global_3D54 = Global_3D55;
		Global_412A = Global_412B;
		Global_4132 = { Global_4138 };
		Global_4130 = Global_4131;
		Global_412C = Global_412D;
		Global_412E = Global_412F;
		Global_3BCF.f_170 = Global_4127;
		Global_3BCF.f_171 = Global_4128;
		Global_3BCF.f_172 = Global_4129;
		Global_3D48 = Global_3D49;
		Global_3D4A = Global_3D4B;
		if (Global_3E4E == 0)
		{
			Global_3DE6[0 /*6*/] = { Global_3E00[0 /*6*/] };
			Global_3DE6[1 /*6*/] = { Global_3E00[1 /*6*/] };
			Global_3E1A[0 /*6*/] = { Global_3E34[0 /*6*/] };
			Global_3E1A[1 /*6*/] = { Global_3E34[1 /*6*/] };
			Global_3DF3[0 /*6*/] = { Global_3E0D[0 /*6*/] };
			Global_3DF3[1 /*6*/] = { Global_3E0D[1 /*6*/] };
			Global_3E27[0 /*6*/] = { Global_3E41[0 /*6*/] };
			Global_3E27[1 /*6*/] = { Global_3E41[1 /*6*/] };
		}
		if (Global_3D52)
		{
			MISC::CLEAR_BIT(&Global_8D7, 20);
			MISC::CLEAR_BIT(&Global_8D8, 17);
			MISC::CLEAR_BIT(&Global_8D9, 0);
			if (bParam3)
			{
				func_27();
				if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
				if (func_26())
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
					if (Global_3E4E == 0)
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
			}
			if (func_25())
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
			}
			func_24();
			Global_3D56 = bParam3;
		}
		Global_3D4E = iParam2;
		if (Global_3D48 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_3D48)
			{
				StringCopy(&(Global_3BCF.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_3BCF.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_38DE = 0;
		func_48();
		return 1;
	}
	if (Global_3D4C == 5)
	{
		return 0;
	}
	if (iParam2 < Global_3D4E || iParam2 == Global_3D4E)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_101();
	}
	return 0;
}

void func_24()//Position - 0x2285
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

int func_25()//Position - 0x231A
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x2341
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

void func_27()//Position - 0x23DA
{
	if (func_12(14))
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
		Global_3839 = func_28();
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

var func_28()//Position - 0x247B
{
	func_29();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_29()//Position - 0x2494
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_32(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_31(PLAYER::PLAYER_PED_ID());
			if (func_30(iVar0) && (!func_12(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_30(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_30(int iParam0)//Position - 0x2591
{
	return iParam0 < 3;
}

int func_31(var uParam0)//Position - 0x259D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)//Position - 0x25DA
{
	if (func_30(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()//Position - 0x2604
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

bool func_34(int iParam0, int iParam1)//Position - 0x265C
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2697
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)//Position - 0x2707
{
	Global_3D49 = uParam0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_4131 = 0;
	Global_280001 = 0;
}

void func_37()//Position - 0x272D
{
	Global_3D7C = 0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_3D5A = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 0;
	Global_3D82 = 0;
	Global_280001 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2766
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = iParam5;
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

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x27BC
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)//Position - 0x27FA
{
	return uParam0;
}

void func_41()//Position - 0x2804
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_42();
	}
}

void func_42()//Position - 0x2829
{
	if (func_17())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_43()//Position - 0x283D
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_3800)
				{
					if (!MISC::IS_BIT_SET(Global_8D7, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

int func_44()//Position - 0x287D
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
		if (func_12(14))
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2A90
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2B02
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

void func_47()//Position - 0x2B65
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_3800)
				{
					if (MISC::IS_BIT_SET(Global_8D7, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()//Position - 0x2BA4
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

int func_49()//Position - 0x2BD6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_90 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_89);
	}
	else
	{
		iLocal_87 = MISC::GET_GAME_TIMER();
		iLocal_90 = (iLocal_87 - iLocal_86);
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2C02
{
	if (Global_38D7)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_3839.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)//Position - 0x2C72
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)//Position - 0x2CE6
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

void func_53()//Position - 0x2D40
{
	if (func_45(2, Global_3822, 0))
	{
		if (Global_413F == 0)
		{
			if (Global_3D52)
			{
				if (MISC::IS_BIT_SET(Global_8D8, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_54()//Position - 0x2D74
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_55() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_10A95)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_3800)
			{
				if (Global_62A != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_10A95)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								MISC::SET_BIT(&Global_8D7, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()//Position - 0x2E96
{
	var uVar0;
	int iVar1;
	
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x2EBA
{
	if (Global_10A95 == 0)
	{
		func_53();
	}
	if (iLocal_32 == 1)
	{
		func_50(0);
	}
	if (iLocal_29 == 0)
	{
		iLocal_29 = 1;
		Global_4141 = 1;
		if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
		{
			func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3DDA, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3DDA, &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
			func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_37EF = 0.2f;
		if (Global_382D)
		{
			func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_105(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8D7, 17);
	}
	if (Global_3D81 == 1)
	{
		if (Global_3839.f_1 < 6)
		{
			Global_3D81 = 0;
		}
		else
		{
			if (Global_37FD == 0)
			{
				if (func_45(2, Global_381A, 0))
				{
					Global_37EF = 0.19f;
					Global_3D81 = 0;
					func_41();
					Global_4146 = 1;
					iLocal_31 = 1;
				}
			}
			if (func_45(2, Global_381B, 0))
			{
				Global_37EF = 0.19f;
				Global_3D81 = 0;
				func_41();
				Global_4146 = 2;
			}
		}
	}
	else if (Global_4146 == 2)
	{
		if (Global_3D4D == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_3D4C = 6;
		}
		func_13();
		Global_3839.f_1 = Global_383B;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_31 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_382E, 1);
		func_13();
		Global_3839.f_1 = Global_383B;
		func_8();
	}
}

void func_57()//Position - 0x30FC
{
	if (Global_38DF == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_38DF = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_38DF = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_3D4C = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_34)
	{
		if (Global_38DF == 1)
		{
			Global_38DF = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_4149 || Global_38DF == 1)
	{
		if (func_45(2, Global_3819, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_8D7, 20))
					{
					}
					else
					{
						Global_3823 = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_3D7D = 1;
						Global_3D4C = 6;
						MISC::CLEAR_BIT(&Global_8D7, 27);
						if (!Global_3D57)
						{
							MISC::SET_BIT(&Global_8D8, 5);
						}
						func_13();
						Global_3839.f_1 = Global_383B;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 27);
		Global_3D4C = 4;
		Global_3D85 = 0;
		func_60();
		func_59();
		if (!Global_3D59)
		{
			if (Global_4145 == 0)
			{
				if (!MISC::IS_BIT_SET(Global_8D9, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_8D9, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171);
			}
		}
		func_58();
	}
}

void func_58()//Position - 0x3229
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_89 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_86 = MISC::GET_GAME_TIMER();
	}
}

void func_59()//Position - 0x3247
{
	if (Global_3D59)
	{
		if (Global_10A95)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2554DA.f_653), 15);
				}
			}
		}
	}
}

void func_60()//Position - 0x3295
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		if (!Global_3D54)
		{
			func_105(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3D59)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
			{
				func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_105(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_219", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
			}
		}
		func_46(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()//Position - 0x3448
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_77);
		iLocal_92 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_80);
	}
	else
	{
		iLocal_76 = MISC::GET_GAME_TIMER();
		iLocal_91 = (iLocal_76 - iLocal_75);
		iLocal_79 = MISC::GET_GAME_TIMER();
		iLocal_92 = (iLocal_79 - iLocal_78);
	}
	if (Global_3D7B == 1)
	{
		if (func_44())
		{
			if (iLocal_91 > 4000)
			{
				if (MISC::IS_BIT_SET(Global_8D7, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
					{
						func_41();
						Global_3838 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_91 > 2000)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
				{
					func_41();
					Global_3838 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_92 > 10000)
	{
		Global_3838 = 3;
	}
	if (Global_3838 == 2)
	{
		iLocal_29 = 0;
		Global_3D4C = 4;
		func_54();
		Global_3D85 = 0;
		func_60();
		func_59();
		if (!Global_3D59)
		{
			if (Global_4145 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171);
			}
		}
		func_58();
		Global_4144 = 0;
	}
	if (Global_3D7B == 0)
	{
		if (Global_3838 == 3)
		{
			if (Global_3D59)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_4144 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_3D4C = 6;
				func_13();
				Global_3839.f_1 = Global_383B;
				func_8();
			}
		}
	}
	else if (Global_3838 == 3)
	{
	}
}

void func_62()//Position - 0x359C
{
}

void func_63()//Position - 0x35A4
{
	Global_256647.f_2 = 1;
	Global_256647.f_26 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_256647 = 0;
			Global_256647.f_2 = 0;
		}
		else if (func_66(Global_256647.f_14))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_256647.f_14)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_256647.f_14)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_256647.f_25)
	{
		func_50(0);
	}
	Global_256647.f_25 = 0;
	Global_256647.f_3 = 0;
}

void func_64()//Position - 0x3644
{
	Global_256647.f_1 = 0;
	Global_256647 = 0;
	Global_256647.f_2 = 0;
	Global_256647.f_21 = -1;
	Global_256647.f_22 = -1;
	StringCopy(&(Global_256647.f_4), "", 64);
	StringCopy(&(Global_256647.f_27[0 /*16*/]), "", 64);
	Global_256647.f_26 = 0;
	Global_256647.f_38 = 0;
	Global_256647.f_39 = 0;
	Global_256647.f_3A = -2;
	Global_256647.f_3 = 0;
	func_65(&(Global_256647.f_14));
}

void func_65(var uParam0)//Position - 0x36B7
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x36FF
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_67()//Position - 0x370F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_74 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_28 = 0;
	iLocal_30 = 0;
	while (iLocal_74 < Global_3D48)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_28 == 0)
		{
			cLocal_41 = { Global_3BCF.f_6[iLocal_74 /*6*/] };
			StringConCat(&cLocal_41, "A", 24);
			Global_38E0[iVar2 /*6*/] = { Global_3BCF.f_6[iLocal_74 /*6*/] };
			StringConCat(&(Global_38E0[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_38E0[iVar2 /*6*/]), iVar1, 24);
			cLocal_37 = { Global_38E0[iVar2 /*6*/] };
			StringConCat(&cLocal_37, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_37))
			{
				StringCopy(&cLocal_45, HUD::_GET_LABEL_TEXT(&cLocal_37), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_66 = func_77();
				uLocal_67 = func_76();
				uLocal_68 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_38E0[iVar2 /*6*/]), &(Global_3BCF.f_BB[iLocal_74 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &(Global_38E0[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_41))
			{
				StringCopy(&cLocal_45, HUD::_GET_LABEL_TEXT(&cLocal_41), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_66 = func_77();
				uLocal_67 = func_76();
				uLocal_68 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &(Global_3BCF.f_6[iLocal_74 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_38E0[iVar2 /*6*/]), "END", 24);
				iLocal_28 = 1;
			}
			else
			{
				StringCopy(&(Global_38E0[iVar2 /*6*/]), "END", 24);
				iLocal_28 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_74++;
		iLocal_28 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_3D52 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(uLocal_67);
		AUDIO::_0x61631F5DF50D1C34(uLocal_68);
		AUDIO::START_SCRIPT_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171, Global_3BCF.f_172, uLocal_66);
		Global_3D4C = 4;
	}
}

int func_68(int iParam0)//Position - 0x398E
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0x39C3
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x39F8
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3A2D
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x3AA3
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)//Position - 0x3AD8
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x3B0D
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_69), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()//Position - 0x3B40
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()//Position - 0x3B6B
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()//Position - 0x3B96
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x3BC1
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_54), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)//Position - 0x3BE7
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x3E84
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_54), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)//Position - 0x3EAA
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_54), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()//Position - 0x3ECE
{
	cLocal_69 = { Global_3BCF.f_6[iLocal_74 /*6*/] };
	StringConCat(&cLocal_69, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_69))
	{
		sLocal_73 = HUD::_GET_LABEL_TEXT(&cLocal_69);
		if (MISC::IS_STRING_NULL(sLocal_73))
		{
		}
	}
}

void func_83()//Position - 0x3F07
{
	cLocal_59 = { Global_3BCF.f_6[iLocal_74 /*6*/] };
	StringConCat(&cLocal_59, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_59))
	{
		sLocal_63 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_63))
		{
		}
		sLocal_64 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
	}
}

void func_84()//Position - 0x3F74
{
	cLocal_54 = { Global_3BCF.f_6[iLocal_74 /*6*/] };
	StringConCat(&cLocal_54, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_54))
	{
		sLocal_58 = HUD::_GET_LABEL_TEXT(&cLocal_54);
		if (MISC::IS_STRING_NULL(sLocal_58))
		{
		}
	}
}

void func_85()//Position - 0x3FAD
{
	func_86();
	AUDIO::_0x0B568201DD99F0EB(uLocal_67);
	AUDIO::_0x61631F5DF50D1C34(uLocal_68);
	if (Global_412C)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171, Global_3BCF.f_172, uLocal_66);
		iLocal_35 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171, Global_3BCF.f_172, uLocal_66);
	}
	Global_3D4C = 4;
}

void func_86()//Position - 0x400B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_28 = 0;
	iLocal_30 = 0;
	iLocal_32 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_3D98))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_3D98, "CT_AUD"))
		{
			Global_280002 = 1;
		}
		iVar13 = 0;
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (Global_180040 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_10A95 || func_93())
		{
			if (Global_180040 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_91())
		{
			iVar14 = 1;
		}
		if (((Global_3D4E < 5 || Global_3D4E == 10) || Global_3D4E == 12) || Global_3D4E == 13)
		{
			if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_3D98, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_3D98, 14);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_3D98, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_3D98, 13);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(13))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_32 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_413E = 0;
	while (iVar2 < 70 && iLocal_28 == 0)
	{
		cLocal_41 = { Global_3BCF };
		StringConCat(&cLocal_41, "A", 24);
		Global_38E0[iVar2 /*6*/] = { Global_3BCF };
		StringConCat(&(Global_38E0[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_38E0[iVar2 /*6*/]), iVar1, 24);
		cLocal_37 = { Global_38E0[iVar2 /*6*/] };
		StringConCat(&cLocal_37, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_37))
		{
			StringCopy(&cLocal_45, HUD::_GET_LABEL_TEXT(&cLocal_37), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_26D4BE == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_66 = func_77();
			uLocal_67 = func_76();
			uLocal_68 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar2 /*6*/])))
			{
				if (Global_412A == 0 && Global_4130 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &(Global_38E0[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_38E0[iVar2 /*6*/]), &Global_4132))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &(Global_38E0[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_413E = iVar2;
					if (Global_4130 == 1)
					{
						Global_4130 = 0;
					}
				}
			}
			else if (Global_4130 == 0 && Global_412A == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &cLocal_45, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_41))
			{
				StringCopy(&cLocal_45, HUD::_GET_LABEL_TEXT(&cLocal_41), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_66 = func_77();
				uLocal_67 = func_76();
				uLocal_68 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_45, &Global_3BCF, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_28 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()//Position - 0x43FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_3A85[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_3A85[iVar0 /*10*/]) || Global_3A85[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_3A85[iVar0 /*10*/], &(Global_3A85[iVar0 /*10*/].f_1));
			}
			if (Global_3A85.f_A1 == iVar0)
			{
				if ((Global_3A85.f_A2 != 0f && Global_3A85.f_A2.f_1 != 0f) && Global_3A85.f_A2.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_3A85.f_A1, Global_3A85.f_A2);
				}
			}
		}
		iVar0++;
	}
	if (Global_26D4BE == 1)
	{
		Global_26D4BE = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_26D409[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_26D409[iVar0 /*9*/]) || Global_26D409[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_26D409[iVar0 /*9*/].f_8, Global_26D409[iVar0 /*9*/], &(Global_26D409[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()//Position - 0x450D
{
	cLocal_69 = { Global_3BCF };
	StringConCat(&cLocal_69, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_69))
	{
		sLocal_73 = HUD::_GET_LABEL_TEXT(&cLocal_69);
		if (MISC::IS_STRING_NULL(sLocal_73))
		{
		}
	}
}

void func_89()//Position - 0x4540
{
	cLocal_59 = { Global_3BCF };
	StringConCat(&cLocal_59, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_59))
	{
		sLocal_63 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_63))
		{
		}
		sLocal_64 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_59), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
	}
}

void func_90()//Position - 0x45A7
{
	cLocal_54 = { Global_3BCF };
	StringConCat(&cLocal_54, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_54))
	{
		sLocal_58 = HUD::_GET_LABEL_TEXT(&cLocal_54);
		if (MISC::IS_STRING_NULL(sLocal_58))
		{
		}
	}
}

int func_91()//Position - 0x45DA
{
	if (Global_28006E)
	{
		if (func_12(0))
		{
			if (Global_300000 || func_92(0))
			{
				return 1;
			}
		}
	}
	if (Global_28006D)
	{
		if (func_12(0))
		{
			if (Global_380000 || func_92(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_92(bool bParam0)//Position - 0x462D
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

var func_93()//Position - 0x4658
{
	return Global_141422;
}

void func_94()//Position - 0x4664
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (Global_180040 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_10A95)
	{
		if (Global_180040 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_91())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_3D98))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_3D98, "CT_AUD"))
		{
			Global_280002 = 1;
		}
	}
	if (((Global_3D4E < 5 || Global_3D4E == 10) || Global_3D4E == 12) || Global_3D4E == 13)
	{
		if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_3D98, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_3D98, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_3D98, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_3D98, 13);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(13))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_87();
}

void func_95()//Position - 0x47B0
{
	while (Global_3828 == 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_3828 = 0;
	if (MISC::IS_BIT_SET(Global_8D7, 20))
	{
		MISC::SET_BIT(&Global_8D8, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D8, 1);
	}
	Global_3829 = 0;
	if (Global_3D48 == 0)
	{
		if (!Global_3D59)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_38DF = 0;
	if (Global_3D56)
	{
		if (Global_4145 == 0)
		{
			if (Global_3D59 == 0)
			{
				iLocal_33 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171);
			}
			else
			{
				iLocal_33 = 0;
			}
		}
		else
		{
			iLocal_33 = 0;
		}
		Global_38DF = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_38DF == 1 && Global_3D4C == 1) && SYSTEM::TIMERB() < iLocal_33)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_38DF = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_3D4C = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_38DF = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_33)
		{
		}
		if (Global_3D4C != 1)
		{
		}
		if (Global_38DF == 0)
		{
		}
	}
	Global_38DF = 0;
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 0) || Global_3D4C != 1) || Global_3817 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
	else
	{
		if (Global_3D54)
		{
			Global_4146 = 0;
			iLocal_31 = 0;
		}
		if (Global_3D56 == 0)
		{
			if (Global_3D7F == 0)
			{
				Global_383B = Global_3839.f_1;
				Global_3D7F = 1;
			}
			iLocal_29 = 0;
			if (Global_4145 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171);
				SYSTEM::WAIT(0);
				Global_3D4C = 3;
				Global_38DF = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_8D7, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_38DF = 0;
				Global_3D4C = 4;
			}
			Global_3838 = 0;
			if (Global_3D57 == 1)
			{
				if (Global_3839.f_1 == 10)
				{
				}
				if (!Global_3839.f_1 == 9)
				{
					if (Global_3839.f_1 > 4)
					{
						if (Global_3828 == 0)
						{
							Global_3839.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_3839.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_3839.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_38DF == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_38DF = 0;
							}
						}
					}
				}
				if (Global_3839.f_1 == 6)
				{
				}
				if (Global_3839.f_1 == 10)
				{
				}
				if (Global_3839.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3D4C = 6;
					Global_3829 = 1;
					return;
				}
				Global_3839.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_83 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
			while (Global_3839.f_1 != 9 && Global_3828 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_38DF == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_38DF = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_90 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_83);
				}
				else
				{
					iLocal_82 = MISC::GET_GAME_TIMER();
					iLocal_90 = (iLocal_82 - iLocal_81);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_90 > 15000)
					{
						Global_4144 = 1;
						Global_3828 = 1;
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_8D7, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_3828 == 0)
			{
				if (!Global_4145 == 0)
				{
					Global_3D85 = 0;
					func_60();
					func_59();
					if (!Global_3D59)
					{
						if (Global_4145 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3BCF.f_170, Global_3BCF.f_171);
						}
					}
					func_58();
				}
			}
			else
			{
				func_96();
				Global_3829 = 1;
			}
		}
		else
		{
			Global_3838 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_3839.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_8D8, 21);
				}
			}
			if (Global_3D7F == 0)
			{
				Global_383B = Global_3839.f_1;
				Global_3D7F = 1;
			}
			if (Global_3839.f_1 == 3)
			{
				Global_3839.f_1 = 4;
			}
			else
			{
				while (Global_3839.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_3839.f_1 == 6)
				{
				}
				Global_3839.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_83 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
			while (Global_3839.f_1 != 9 && Global_3828 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_90 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_83);
				}
				else
				{
					iLocal_82 = MISC::GET_GAME_TIMER();
					iLocal_90 = (iLocal_82 - iLocal_81);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_90 > 20000)
					{
						Global_4144 = 1;
						Global_3828 = 1;
						MISC::CLEAR_BIT(&Global_8D8, 21);
					}
				}
			}
			if (Global_3828 == 0)
			{
				Global_3D4C = 2;
			}
			else
			{
				func_96();
				Global_3829 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_77 = NETWORK::GET_NETWORK_TIME();
				uLocal_80 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_75 = MISC::GET_GAME_TIMER();
				iLocal_78 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_96()//Position - 0x4C45
{
	Global_38DE = 0;
	func_101();
}

void func_97()//Position - 0x4C55
{
	float fVar0;
	
	fVar0 = func_98(Global_380A[Global_3802 /*3*/], Global_3803[Global_3802 /*3*/], Global_3811, Global_37F4, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_4142 == 0)
		{
			HUD::DISPLAY_RADAR(1);
		}
		iLocal_31 = 0;
	}
}

float func_98(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)//Position - 0x4C9D
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_26D4D3 == 0)
	{
		if (MISC::IS_BIT_SET(Global_8D7, 14) && Global_3839.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_380A[Global_3802 /*3*/].f_1 == Var0.f_1)
			{
				Global_26D4D3 = 1;
			}
		}
	}
	if (func_44() && Global_26D4D3 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_100((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_17)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_37F1 = { func_99(Param0, Param1, fVar2) };
		Global_37F4 = { func_99(Param2, Param3, fVar2) };
	}
	else
	{
		Global_37F1 = { Param1 };
		Global_37F4 = { Param3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_37F4, 0);
	return fVar1;
}

Vector3 func_99(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x4DAF
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_100(float fParam0, float fParam1, float fParam2)//Position - 0x4DC9
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

void func_101()//Position - 0x4DF0
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

bool func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4E47
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_103(sParam2, iParam3, 0);
}

int func_103(char* sParam0, int iParam1, bool bParam2)//Position - 0x4E95
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
					func_101();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_33();
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
				func_27();
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
				if (func_26())
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
			if (func_25())
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
			func_24();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_48();
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
		func_101();
	}
	return 0;
}

int func_104()//Position - 0x5161
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5183
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_9(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_9(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_9(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_9(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

