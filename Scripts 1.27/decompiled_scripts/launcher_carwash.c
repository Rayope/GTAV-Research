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
	struct<24> Local_39[2];
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	bool bLocal_57 = 0;
	struct<3> Local_58[2];
	var uLocal_59[2] = { 0, 0 };
	int iLocal_60[2] = { 0, 0 };
	struct<2> Local_61 = { 0, 5 } ;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 5;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar3;
	
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
	Var2 = { ScriptParam_61.f_1[0 /*3*/] };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_carwash")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_65();
	}
	if (Global_28006E)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_61, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_64(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_58();
	while (true)
	{
		func_64(PLAYER::PLAYER_PED_ID());
		if (func_57(PLAYER::PLAYER_PED_ID(), Var2, 0) > (100f + 20f))
		{
			func_65();
		}
		bVar0 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			bVar0 = (func_54(uVar1) || func_53(uVar1));
			bLocal_57 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(uVar1);
			func_52(bLocal_57);
		}
		iVar3 = 0;
		while (iVar3 < Local_39)
		{
			func_51(iVar3);
			iVar3++;
		}
		if (func_1(&Local_39, &uLocal_40, bVar0, 0, 1, 1424))
		{
			func_65();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x193
{
	int iVar0;
	
	if (uParam1->f_A)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_46(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_D)
	{
		case 0:
			iVar0 = 0;
			if (func_43(uParam1->f_10))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_40(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_C = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_10 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							func_39(uParam1, 8);
						}
						else if (bParam2)
						{
							func_39(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_39(uParam1, 2);
						}
						else if (func_29() < (iParam0[uParam1->f_C /*24*/])->f_9)
						{
							func_39(uParam1, 1);
						}
						else if (func_24())
						{
							func_39(uParam1, 7);
						}
						else
						{
							func_39(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_23(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_6);
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_12(uParam1, uParam1->f_2, (iParam0[uParam1->f_C /*24*/])->f_9);
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || func_29() >= (iParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_1);
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_3);
			}
			if ((func_17(iParam0[uParam1->f_C /*24*/]) || bParam2 == 0) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_5);
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_4);
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_11())
				{
					func_21(uParam1, uParam1->f_7);
				}
				else
				{
					func_21(uParam1, uParam1->f_8);
				}
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || func_8(iParam0[uParam1->f_C /*24*/]))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			func_7();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_39(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_8)
			{
				func_39(uParam1, 2);
				return 0;
			}
			if (func_17(iParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0);
				return 0;
			}
			if (Global_105F2)
			{
				return 0;
			}
			if (func_4(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_3(PLAYER::PLAYER_PED_ID()) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_10 == 0))
			{
				func_39(uParam1, 6);
				return 0;
			}
			if (func_24())
			{
				func_39(uParam1, 7);
				return 0;
			}
			if (func_29() < (iParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_39(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_12(uParam1, *uParam1, (iParam0[uParam1->f_C /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_8(iParam0[uParam1->f_C /*24*/]))
				{
					func_39(uParam1, 9);
				}
				else
				{
					func_39(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_23(uParam1);
			(iParam0[uParam1->f_C /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_39(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_C /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_C /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_C /*24*/])->f_5))
				{
					func_7();
					if (func_64(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_10A95)
						{
							func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_C /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_C /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (func_64(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_10A95)
								{
									func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
							func_7();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_C /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_C /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x8D2
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_1C) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1C = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0xA54
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_4(bool bParam0)//Position - 0xAD1
{
	if (bParam0)
	{
		if (func_6())
		{
			return 1;
		}
	}
	if (func_5(14))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0xAF7
{
	return Global_8861 == iParam0;
}

int func_6()//Position - 0xB05
{
	if (Global_1782D)
	{
		return 1;
	}
	if (!func_5(14) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_7()//Position - 0xB37
{
	Global_42CA.f_6 = 1;
}

int func_8(var uParam0)//Position - 0xB45
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (uParam0->f_F == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_C))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_64(iVar1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iVar1, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar2) };
	if (func_9(uParam0->f_C, Var0) > SYSTEM::COS(uParam0->f_F))
	{
		return 1;
	}
	return 0;
}

float func_9(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0xBEE
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

int func_10(struct<3> Param0)//Position - 0xC05
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11()//Position - 0xC2F
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		return ENTITY::IS_ENTITY_UPRIGHT(uVar0, 1119092736);
	}
	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 1119092736);
}

int func_12(var uParam0, var uParam1, var uParam2)//Position - 0xC69
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_13(uParam1, uParam2);
		uParam0->f_E = uParam1;
		uParam0->f_F = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, var uParam1)//Position - 0xCB5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_14(var uParam0)//Position - 0xCD1
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_E))
	{
		return 0;
	}
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_E) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_E))
	{
		return func_16(uParam0->f_E, uParam0->f_F);
	}
	return func_15(uParam0->f_E);
}

var func_15(var uParam0)//Position - 0xD2B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_16(var uParam0, var uParam1)//Position - 0xD3E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_17(var uParam0)//Position - 0xD57
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
		if (func_3(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_B == 0)
	{
		return !func_20(PLAYER::PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_A + 2f));
	}
	Var0 = { func_18(uParam0->f_10, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_18(struct<8> Param0, float fParam1)//Position - 0xDF9
{
	struct<8> Var0;
	struct<3> Var1;
	
	Var0 = 2;
	Var1 = { func_19(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_19(struct<3> Param0)//Position - 0xE5B
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_20(int iParam0, struct<3> Param1, float fParam2)//Position - 0xE9A
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

int func_21(var uParam0, var uParam1)//Position - 0xEB7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_22(uParam1);
		uParam0->f_E = uParam1;
		uParam0->f_F = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_22(var uParam0)//Position - 0xF00
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_23(var uParam0)//Position - 0xF16
{
	if (func_14(uParam0))
	{
		HUD::CLEAR_HELP(1);
	}
	uParam0->f_E = 0;
	uParam0->f_F = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_24()//Position - 0xF43
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (func_28(iVar0))
	{
		return 1;
	}
	if (func_25(iVar0, 3))
	{
		return 1;
	}
	return !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0);
}

int func_25(int iParam0, int iParam1)//Position - 0xF97
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1033
{
	if (func_27(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x105D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x107D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_29()//Position - 0x10BF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_36(PLAYER::PLAYER_ID());
	}
	switch (func_31())
	{
		case 2:
			return func_30(2);
		
		case 0:
			return func_30(0);
		
		case 1:
			return func_30(1);
		
		default:
	}
	return 0;
}

var func_30(int iParam0)//Position - 0x110D
{
	return Global_CAD5[iParam0];
}

int func_31()//Position - 0x111C
{
	func_32();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_32()//Position - 0x1135
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_5(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_33(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_33(int iParam0)//Position - 0x1232
{
	return iParam0 < 3;
}

int func_34(int iParam0)//Position - 0x123E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x127B
{
	if (func_33(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)//Position - 0x12A5
{
	var uVar0;
	
	uVar0 = func_37(iParam0);
	return uVar0;
}

int func_37(int iParam0)//Position - 0x12B7
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_182604[iParam0 /*324*/].f_B4.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x12FA
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_24F57C.f_1, iParam0);
	}
	return 1;
}

void func_39(var uParam0, int iParam1)//Position - 0x131F
{
	uParam0->f_D = iParam1;
	func_23(uParam0);
}

bool func_40(var uParam0)//Position - 0x1333
{
	func_64(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (func_3(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_B == 1)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_10[0 /*3*/], uParam0->f_10[1 /*3*/], uParam0->f_10.f_7, 0, 1, 0);
	}
	return func_20(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_A);
}

bool func_41()//Position - 0x13EA
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

bool func_42(bool bParam0)//Position - 0x13FF
{
	if (bParam0)
	{
		return (Global_42CA.f_4 && Global_42CA.f_68 == 4);
	}
	return Global_42CA.f_4;
}

int func_43(int iParam0)//Position - 0x1428
{
	if (iParam0 == 0)
	{
		if (func_45())
		{
			return 0;
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (Global_D5D8)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)//Position - 0x1485
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

int func_45()//Position - 0x14DF
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0)//Position - 0x14F4
{
	if (uParam0->f_B == 1)
	{
		func_48(&(uParam0->f_10), 255, 100, 0, 100);
	}
	else
	{
		func_47(uParam0->f_1, uParam0->f_A, 0, 0, 255, 255, 32);
	}
}

void func_47(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1529
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	fVar4 = 0f;
	Var2 = { Param0 };
	Var2.x = (Var2.x + (SYSTEM::SIN((fVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		Var3 = { Param0 };
		Var3.x = (Var3.x + (SYSTEM::SIN(fVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (SYSTEM::COS(fVar4) * fParam1));
		unk_0x6A3E157475DBFCD9(Var2, Var3, iParam2, iParam3, iParam4, iParam5);
		Var2 = { Var3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15DE
{
	func_49(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_49(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1604
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	Var0 = { func_19(Param1 - Param0) };
	Var1 = { func_50(Var0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	Var3 = { Param0 };
	Var4 = { Param1 };
	Var4.f_2 = Param0.f_2;
	Var5[0 /*3*/] = { Var3 - Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[1 /*3*/] = { Var3 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[2 /*3*/] = { Var4 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[3 /*3*/] = { Var4 - Var1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x6A3E157475DBFCD9(Var5[0 /*3*/], Var5[1 /*3*/], uParam3, uParam4, uParam5, uParam6);
	unk_0x6A3E157475DBFCD9(Var5[1 /*3*/], Var5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[2 /*3*/], Var5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[3 /*3*/], Var5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		Var5[(4 + iVar6) /*3*/] = { Var5[iVar6 /*3*/] };
		Var5[(4 + iVar6) /*3*/].f_2 = Param1.f_2;
		iVar6++;
	}
	unk_0x6A3E157475DBFCD9(Var5[4 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[5 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[6 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[7 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[0 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[1 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[2 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x6A3E157475DBFCD9(Var5[3 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_50(struct<3> Param0, struct<3> Param1)//Position - 0x1814
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_51(int iParam0)//Position - 0x184D
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_40(&(Local_39[iParam0 /*24*/])))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_60[iParam0] = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_60[iParam0] = 0;
		return;
	}
	if (iLocal_60[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > uLocal_59[iParam0])
		{
			iLocal_60[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Local_58[iParam0 /*3*/], Local_58[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_60[iParam0], &iVar4, &uVar2, &uVar3, &uVar1);
		if (iVar0 == 2)
		{
			Local_39[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_39[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_60[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_60[iParam0] = 0;
		}
		uLocal_59[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}

void func_52(bool bParam0)//Position - 0x193E
{
	if (bParam0)
	{
	}
}

int func_53(int iParam0)//Position - 0x194B
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x19B6
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_27(uParam0))
	{
		return 0;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(uParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_55(iParam0))
	{
		return 1;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	if (MISC::ABSF((Var1.x - Var0.x)) > 3.4f)
	{
		return 1;
	}
	if (MISC::ABSF((Var1.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_10A95)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype"))
	{
		if (func_27(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 3)) || func_27(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1ACD
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (func_56(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x1C05
{
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
			return 1;
		
		default:
	}
	if (iParam0 == MISC::GET_HASH_KEY("ratloader2"))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	if (FILES::GET_NUM_DLC_VEHICLES() > 0)
	{
		if (iParam0 == MISC::GET_HASH_KEY("bifta"))
		{
			return 1;
		}
		if (iParam0 == MISC::GET_HASH_KEY("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_57(int iParam0, struct<3> Param1, int iParam2)//Position - 0x1D84
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}

void func_58()//Position - 0x1DBD
{
	func_62(&(Local_39[0 /*24*/]), 1, "Carwash1", func_63(155), 15, "", 0, 4f);
	func_62(&(Local_39[1 /*24*/]), 1, "Carwash2", func_63(156), 15, "", 0, 4f);
	func_60(&(Local_39[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_60(&(Local_39[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_59(&uLocal_40, 0);
	Local_58[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_58[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_59(var uParam0, int iParam1)//Position - 0x1E4C
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_10 = iParam1;
	if (!Global_10A95)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_60(var uParam0, struct<3> Param1, float fParam2)//Position - 0x1EE0
{
	uParam0->f_C = { func_19(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_F = func_61(fParam2, 0f, 360f);
}

float func_61(float fParam0, float fParam1, float fParam2)//Position - 0x1F09
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

void func_62(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0x1F30
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_B = 0;
	*uParam0 = 1;
	uParam0->f_C = { 0f, 0f, 0f };
	uParam0->f_F = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_A = 2.75f;
	}
	else
	{
		uParam0->f_A = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_A = fParam7;
	}
}

Vector3 func_63(int iParam0)//Position - 0x1FA5
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_60AC[iVar0 /*23*/][0 /*3*/];
}

bool func_64(int iParam0)//Position - 0x1FBD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0);
}

void func_65()//Position - 0x1FDA
{
	func_66(&Local_39);
	func_23(&uLocal_40);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_66(var uParam0)//Position - 0x1FF2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_67(var uParam0)//Position - 0x201B
{
	*uParam0 = 0;
}

