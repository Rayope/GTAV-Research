#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	fLocal_4 = -99f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_30();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()//Position - 0x80
{
	if (Global_8C53)
	{
		return 1;
	}
	if (CAM::DOES_CAM_EXIST(Global_8C54))
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_8B95 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0xBD
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	
	if (!Global_8C53)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_8C55 > iVar0 || Global_8C55 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_8C58 != Global_8C59)
		{
			fVar3 = (Global_8C59 - Global_8C58);
			Global_8C58 = (Global_8C58 + (fVar3 * 0.1f));
			if (MISC::ABSF((Global_8C58 - Global_8C59)) < 0.01f)
			{
				Global_8C58 = Global_8C59;
			}
		}
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", ((Global_8C58 * fVar1) * fVar2));
		}
		CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(((Global_8C58 * fVar1) * fVar2));
		CAM::_0x487A82C650EB7799(((Global_8C57 * fVar1) * fVar2));
		if (((Global_8C57 * fVar1) * fVar2) < 1f)
		{
			CAM::_0x0225778816FDC28C(((Global_8C57 * fVar1) * fVar2));
		}
		else
		{
			CAM::_0x0225778816FDC28C(1f);
		}
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		{
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (((Global_8C58 * Global_8C52) * fVar1) * fVar2));
		}
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE((((Global_8C58 * Global_8C52) * fVar1) * fVar2));
		if (CAM::DOES_CAM_EXIST(Global_8C54))
		{
			if (CAM::IS_CAM_SHAKING(Global_8C54))
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_8C54, ((Global_8C58 * fVar1) * fVar2));
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_8C6F) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_8C5F))
		{
			AUDIO::START_AUDIO_SCENE(&Global_8C5F);
			StringCopy(&Global_8C6F, "", 16);
		}
		CAM::INVALIDATE_IDLE_CAM();
		if (Global_8C5A > 0f)
		{
			if (fLocal_4 != Global_8C5A)
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
				{
				}
				else
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_8C5B, 15f);
					fLocal_4 = Global_8C5A;
				}
			}
			else
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					fLocal_4 = -99f;
				}
				AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
				iVar4 = (Global_8C55 - iVar0);
				if (iVar4 <= (Global_8C56 / 2))
				{
					bVar5 = false;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							bVar5 = true;
						}
					}
					if (func_5(PLAYER::PLAYER_PED_ID()))
					{
						Global_8C55 += 1000;
					}
					else if (bVar5)
					{
						Global_8C55 += 1000;
					}
					else if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
					{
						Global_8C55 += 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05((SYSTEM::TO_FLOAT((Global_8C56 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_8C5A = 0f;
						StringCopy(&Global_8C5B, "", 16);
					}
				}
			}
		}
		return;
	}
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)//Position - 0x2FE
{
	CAM::_0x487A82C650EB7799(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_8C5F))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_8C5F))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_8C5F);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_8C54))
	{
		if (CAM::IS_CAM_SHAKING(Global_8C54))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_8C54, 0f);
			CAM::STOP_CAM_SHAKING(Global_8C54, 1);
		}
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_8C5A = 0f;
	StringCopy(&Global_8C5B, "", 16);
	StringCopy(&Global_8C5F, "", 64);
	StringCopy(&Global_8C6F, "", 16);
	func_4();
}

void func_4()//Position - 0x3CC
{
	Global_8C53 = 0;
	Global_8C54 = 0;
	Global_8C55 = 0;
	Global_8C56 = 30000;
	Global_8C57 = 0f;
	Global_8C59 = 0f;
	Global_8C58 = 0f;
	Global_8C5A = 0f;
	StringCopy(&Global_8C5B, "", 16);
}

int func_5(int iParam0)//Position - 0x3FE
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)//Position - 0x41F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8BB0[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()//Position - 0x468
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar1 = func_11(PLAYER::PLAYER_PED_ID());
	iVar2 = func_8(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 != 0)
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 != 0)
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)//Position - 0x4CF
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8BB0[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)//Position - 0x512
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8BB0[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)//Position - 0x542
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
		{
			return Global_8BB0[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)//Position - 0x583
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8BB0[iVar1 /*5*/].f_3;
}

float func_12()//Position - 0x5C6
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = (Global_8C55 - iVar0);
	if (iVar2 <= Global_8C56)
	{
		if (Global_8C55 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_8C56));
		}
	}
	return fVar1;
}

void func_13()//Position - 0x600
{
	if (Global_8B96[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)//Position - 0x619
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_8B96[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_8B96[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_8BB0[iVar0 /*5*/] = func_15();
	Global_8BB0[iVar0 /*5*/].f_1 = Global_8B96[iParam0 /*5*/].f_1;
	Global_8BB0[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_8B96[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_17(iParam0);
}

var func_15()//Position - 0x6E0
{
	var uVar0;
	
	uVar0 = Global_8B94;
	Global_8B94++;
	return uVar0;
}

int func_16()//Position - 0x6F7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8BB0[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)//Position - 0x726
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8B96[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8B96[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_8C73 = 0;
		}
	}
	Global_8B96[iParam0 /*5*/] = 13;
	Global_8B96[iParam0 /*5*/].f_1 = 0;
	Global_8B96[iParam0 /*5*/].f_2 = 0;
	Global_8B96[iParam0 /*5*/].f_3 = 0;
	Global_8B96[iParam0 /*5*/].f_4 = 0;
	Global_8B95 = (Global_8B95 - 1);
	if (Global_8B95 < 0)
	{
		Global_8B95 = 0;
	}
}

void func_18()//Position - 0x7A9
{
	if (!Global_8C01[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_8C01[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)//Position - 0x7D9
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_8C01[iParam0 /*5*/] = -1;
	Global_8C01[iParam0 /*5*/].f_1 = -1;
	Global_8C01[iParam0 /*5*/].f_2 = 6;
	Global_8C01[iParam0 /*5*/].f_3 = 0;
	Global_8C01[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)//Position - 0x826
{
	int iVar0;
	
	iVar0 = Global_8C01[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()//Position - 0x870
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_8BB0[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_8BB0[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_8BB0[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)//Position - 0x8B0
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)//Position - 0x8D5
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_8BB0[iParam0 /*5*/] = -1;
	Global_8BB0[iParam0 /*5*/].f_1 = 0;
	Global_8BB0[iParam0 /*5*/].f_2 = -1;
	Global_8BB0[iParam0 /*5*/].f_3 = 0;
	Global_8BB0[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)//Position - 0x922
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8BB0[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)//Position - 0x952
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)//Position - 0x966
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8C01[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)//Position - 0x998
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()//Position - 0x9D6
{
	if (Global_8C01[iLocal_1 /*5*/] == 1)
	{
		Global_8C01[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)//Position - 0x9F1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8C01[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()//Position - 0xA21
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_31()//Position - 0xA3C
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_8C74 = 0;
	Global_8C73 = 0;
	Global_8B95 = 0;
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
}

void func_32()//Position - 0xA67
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()//Position - 0xA8B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()//Position - 0xAAF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

