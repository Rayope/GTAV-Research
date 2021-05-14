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
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	struct<8> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<11> Local_47[30];
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55[4] = { 0, 0, 0, 0 };
	float fLocal_56[4] = { 0f, 0f, 0f, 0f };
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_50 = -1;
	iLocal_60 = 1;
	uLocal_62 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_77(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_diving")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_76(27);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_73(0))
		{
			if (!iLocal_66)
			{
				func_77(0);
				iLocal_66 = 1;
			}
		}
		else
		{
			iLocal_66 = 0;
			func_72(PLAYER::PLAYER_PED_ID());
			switch (iLocal_48)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()//Position - 0x113
{
	if (func_18(&Local_41, &Local_47) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_61)
			{
				bLocal_61 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)//Position - 0x180
{
	iLocal_48 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x18D
{
	struct<15> Var0;
	int iVar1;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_17C49.f_1738.f_38F == Var0)
		{
			Global_17C49.f_1738.f_38F = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_17C49.f_1738[Global_17C49.f_1738.f_88 /*15*/] = { Var0 };
		Global_17C49.f_1738.f_88++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar1))
			{
				func_4(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x30D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_17C49.f_1738[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_17C49.f_1738.f_2FC)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_17C49.f_1738.f_397[iParam0] = iVar1;
}

bool func_5(int iParam0)//Position - 0x3D1
{
	return iParam0 < 3;
}

int func_6(int iParam0)//Position - 0x3DD
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_7(bool bParam0)//Position - 0x447
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)//Position - 0x472
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()//Position - 0x55A
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
		func_12(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()//Position - 0xA1B
{
	if (func_7(0))
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

int func_11()//Position - 0xA66
{
	return Global_5F7C;
}

int func_12(int iParam0, int iParam1)//Position - 0xA71
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAC2
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
	int iVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()//Position - 0xD1B
{
	return Global_1407E1;
}

void func_15(bool bParam0)//Position - 0xD27
{
	if (bParam0)
	{
		Global_17C49.f_3011.f_59 = 1;
	}
	else
	{
		Global_17C49.f_3011.f_59 = 0;
	}
}

int func_16()//Position - 0xD4B
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0xD68
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

int func_18(var uParam0, int iParam1)//Position - 0xD95
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_A /*11*/])->f_6, 0f, 0f, 0f))
				{
					func_51(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, Var2);
		}
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0;
		}
		iVar0++;
	}
	if (uParam0->f_B)
	{
		if (!Global_10B99)
		{
			func_26(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 5, &iLocal_51, &uLocal_49, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (func_24(&Local_41, &Local_47, Var3, &iVar4))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_23(iVar4), Var3, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_61)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_61 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0xF42
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_17C49.f_5C53.f_96[iVar1]), iVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF84
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xFA5
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
		func_22();
	}
}

void func_22()//Position - 0x1178
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

Vector3 func_23(int iParam0)//Position - 0x1298
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x15D4
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_54(&(uParam0->f_1), iVar0))
		{
			fVar1 = SYSTEM::VDIST2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

int func_25(int iParam0)//Position - 0x163B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5C53.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)//Position - 0x167E
{
	var uVar0;
	
	func_35(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					uVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_28(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*iParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						func_35(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						func_35(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()//Position - 0x1801
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

int func_28(int iParam0)//Position - 0x182B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (MISC::IS_BIT_SET(Global_17C49.f_206F.f_6C, func_33(func_34(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x18F3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)//Position - 0x1930
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)//Position - 0x1A90
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

int func_32(int iParam0)//Position - 0x1BD7
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_33(int iParam0, int iParam1)//Position - 0x1C1E
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)//Position - 0x1C3A
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_35(int iParam0)//Position - 0x1C8A
{
	if (Global_10BA0 != iParam0)
	{
		Global_10BA0 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, struct<3> Param2)//Position - 0x1CA4
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_A = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x1D61
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

bool func_38(int iParam0)//Position - 0x1D7A
{
	return Global_8861 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)//Position - 0x1D88
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_A = 0;
	func_47(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	PAD::SET_PAD_SHAKE(0, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_40)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_B = 1;
}

void func_40(int iParam0, int iParam1)//Position - 0x1E33
{
	Global_15F91.f_7 = iParam0;
	Global_15F91.f_8 = iParam1;
}

void func_41()//Position - 0x1E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	STATS::STAT_GET_INT(func_42(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	STATS::STAT_GET_INT(func_42(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	STATS::STAT_GET_INT(func_42(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	STATS::STAT_SET_INT(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_42(int iParam0)//Position - 0x1EEE
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_43(var uParam0)//Position - 0x1F3F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)//Position - 0x1FC2
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_45(var uParam0, int iParam1)//Position - 0x1FFF
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_39)
		{
		}
	}
	if (bLocal_39)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)//Position - 0x2073
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_17C49.f_206F.f_7A), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_206F.f_7A), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_17C49.f_206F.f_7A.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_206F.f_7A.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_17C49.f_206F.f_7D), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_206F.f_7D), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_17C49.f_206F.f_7D.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_206F.f_7D.f_1), (iParam1 - 32));
		}
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)//Position - 0x215F
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			MISC::SET_BIT(uParam0, iParam1);
		}
		else
		{
			MISC::CLEAR_BIT(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_48(var uParam0)//Position - 0x21C0
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, 0);
		HUD::REMOVE_BLIP(uParam0);
	}
}

int func_49(var uParam0)//Position - 0x21E0
{
	var uVar0;
	int iVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	if (func_50(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x226C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x228C
{
	var uVar0;
	
	if (!uParam0->f_A)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_38(13) && !func_38(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(uParam1);
						while (!STREAMING::HAS_MODEL_LOADED(uParam1))
						{
							STREAMING::REQUEST_MODEL(uParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_52(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							MISC::SET_BIT(&uVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							MISC::SET_BIT(&uVar0, 3);
							MISC::SET_BIT(&uVar0, 4);
							MISC::SET_BIT(&uVar0, 8);
							MISC::SET_BIT(&uVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_A = 1;
			}
		}
	}
}

void func_52(struct<3> Param0)//Position - 0x23A5
{
	var uVar0;
	
	uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
	if (INTERIOR::IS_VALID_INTERIOR(uVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uVar0);
		while (!INTERIOR::IS_INTERIOR_READY(uVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(uVar0);
	}
}

bool func_53(struct<3> Param0, struct<3> Param1)//Position - 0x23E3
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_54(var uParam0, int iParam1)//Position - 0x240C
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return MISC::IS_BIT_SET(*uParam0, iParam1);
	}
	return MISC::IS_BIT_SET(uParam0->f_1, (iParam1 - 32));
}

void func_55()//Position - 0x244A
{
	float fVar0;
	
	switch (iLocal_65)
	{
		case 0:
			if (func_62())
			{
				if (func_50(uLocal_63))
				{
					func_61();
					VEHICLE::SET_BOAT_ANCHOR(uLocal_63, 0);
					iLocal_65 = 1;
					if (iLocal_48 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(uLocal_63) && func_50(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(PLAYER::PLAYER_PED_ID(), uLocal_63, 0) > fVar0)
				{
					func_59();
					if (iLocal_48 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_48 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_48 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(uLocal_63))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_64))
					{
						uLocal_64 = func_56(uLocal_63, 0, 0);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_63, 0, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(uLocal_63)))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uLocal_63))
						{
							VEHICLE::SET_BOAT_ANCHOR(uLocal_63, 1);
						}
					}
					iLocal_65 = 0;
				}
			}
			break;
	}
}

int func_56(var uParam0, bool bParam1, bool bParam2)//Position - 0x256A
{
	return func_57(uParam0, !bParam1, bParam2);
}

int func_57(var uParam0, bool bParam1, bool bParam2)//Position - 0x257D
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x2621
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()//Position - 0x2638
{
	func_61();
	if (func_50(uLocal_63))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(uLocal_63)))
		{
			VEHICLE::SET_BOAT_ANCHOR(uLocal_63, 0);
		}
		ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uLocal_63, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_63))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_63);
		}
	}
}

float func_60(var uParam0, var uParam1, int iParam2)//Position - 0x267D
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

void func_61()//Position - 0x26D9
{
	if (HUD::DOES_BLIP_EXIST(uLocal_64))
	{
		HUD::REMOVE_BLIP(&uLocal_64);
	}
}

int func_62()//Position - 0x26F2
{
	if (func_50(PLAYER::PLAYER_PED_ID()))
	{
		if (func_50(uLocal_63))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_63, 0))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			uLocal_63 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_63))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_63, 1, 1);
				ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uLocal_63, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()//Position - 0x2758
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("dinghy") || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("dinghy2"))
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

void func_64()//Position - 0x27AD
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (func_24(&Local_41, &Local_47, Var0, &iLocal_50))
	{
		Var1 = { func_23(iLocal_50) };
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, 0);
		if (fVar2 > 200f)
		{
			func_66();
			if (!iLocal_60)
			{
				iLocal_60 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_50 != iLocal_53)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_52))
					{
						HUD::REMOVE_BLIP(&uLocal_52);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_52))
				{
					uLocal_52 = HUD::ADD_BLIP_FOR_RADIUS(Var1, 200f);
					HUD::SET_BLIP_ALPHA(uLocal_52, 128);
					HUD::SET_BLIP_COLOUR(uLocal_52, 2);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(uLocal_52, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_52, "B_WRE");
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_52, 0);
					iLocal_53 = iLocal_50;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_52))
			{
				HUD::REMOVE_BLIP(&uLocal_52);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_52))
			{
				HUD::REMOVE_BLIP(&uLocal_52);
			}
			if (iLocal_50 != iLocal_53)
			{
				func_66();
				iLocal_53 = iLocal_50;
				iLocal_60 = 1;
			}
			if (Local_41.f_1.f_4 < Local_41.f_1.f_3)
			{
				if (iLocal_60)
				{
					fLocal_57 = 0f;
					fLocal_58 = fVar2;
					if (func_63())
					{
						fLocal_58 = func_65(fLocal_58, 20f, 200f);
					}
					else
					{
						fLocal_58 = func_65(fLocal_58, 10f, 200f);
					}
					fLocal_59 = (fLocal_58 * 0.025f);
					iLocal_60 = 0;
					if (func_63())
					{
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_62, "SINGLE_BLIP_FROM_BOAT", Var1, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_62, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_57 = (fLocal_57 + fLocal_59);
					fLocal_57 = func_65(fLocal_57, 0f, fLocal_58);
					if (!HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						uLocal_54 = HUD::ADD_BLIP_FOR_RADIUS(Var1, fLocal_57);
						HUD::SET_BLIP_ALPHA(uLocal_54, 255);
						HUD::SET_BLIP_COLOUR(uLocal_54, 4);
						HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_54, 1);
						HUD::SET_RADIUS_BLIP_EDGE(uLocal_54, 1);
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_54, 0);
					}
					else
					{
						HUD::SET_BLIP_SCALE(uLocal_54, fLocal_57);
					}
					iVar3 = 0;
					if (func_63())
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_55[iVar3]))
							{
								uLocal_55[iVar3] = HUD::ADD_BLIP_FOR_RADIUS(Var1, (fLocal_57 + fLocal_56[iVar3]));
								HUD::SET_BLIP_ALPHA(uLocal_55[iVar3], 255);
								HUD::SET_BLIP_COLOUR(uLocal_55[iVar3], 4);
								HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_55[iVar3], 1);
								HUD::SET_RADIUS_BLIP_EDGE(uLocal_55[iVar3], 1);
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_55[iVar3], 0);
							}
							else
							{
								HUD::SET_BLIP_SCALE(uLocal_55[iVar3], (fLocal_57 + fLocal_56[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_55[iVar3]))
							{
								HUD::SET_BLIP_SCALE(uLocal_55[iVar3], fLocal_57);
							}
							iVar3++;
						}
					}
					if (fLocal_57 >= fLocal_58)
					{
						iLocal_60 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)//Position - 0x2B1F
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

void func_66()//Position - 0x2B46
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_54))
	{
		HUD::REMOVE_BLIP(&uLocal_54);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_55[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_55[iVar0]));
		}
		iVar0++;
	}
}

void func_67()//Position - 0x2B8A
{
	iLocal_51 = 0;
	if (func_62())
	{
		iLocal_65 = 1;
	}
	else
	{
		iLocal_65 = 0;
	}
	func_71();
	func_70(&Local_41, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_41, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_56[0] = 0.25f;
	fLocal_56[1] = 0.5f;
	fLocal_56[2] = 0.75f;
	fLocal_56[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BF8
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(var uParam0, var uParam1, var uParam2)//Position - 0x2C12
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_29((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_47(uParam0, iVar0, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
	{
	}
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x2C7B
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0;
}

void func_71()//Position - 0x2C99
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_47[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_47[iVar0 /*11*/].f_A = 0;
		iVar0++;
	}
	Local_47[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_47[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_47[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_47[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_47[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_47[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_47[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_47[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_47[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_47[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_47[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_47[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_47[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_47[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_47[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_47[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_47[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_47[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_47[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_47[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_47[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_47[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_47[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_47[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_47[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_47[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_47[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_47[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_47[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_47[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(var uParam0)//Position - 0x2F97
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam0);
}

int func_73(int iParam0)//Position - 0x2FB4
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_74(int iParam0)//Position - 0x2FD6
{
	return func_75(iParam0, Global_8861);
}

int func_75(int iParam0, int iParam1)//Position - 0x2FE7
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

int func_76(int iParam0)//Position - 0x31C8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
	return 1;
}

void func_77(bool bParam0)//Position - 0x3222
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_52))
	{
		HUD::REMOVE_BLIP(&uLocal_52);
	}
	func_66();
	if (!AUDIO::HAS_SOUND_FINISHED(uLocal_62))
	{
		AUDIO::STOP_SOUND(uLocal_62);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_47)
	{
		func_48(&(Local_47[iVar0 /*11*/].f_2));
		func_37(&(Local_47[iVar0 /*11*/].f_1));
		Local_47[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_41.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_41.f_7);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		iLocal_48 = 0;
	}
}

int func_78(int iParam0)//Position - 0x32C1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)//Position - 0x331B
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

