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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_53 = 0f;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	char* sLocal_66 = NULL;
	char* sLocal_67 = NULL;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	char* sLocal_76 = NULL;
	var uLocal_77 = 0;
	struct<2> Local_78 = { 0, 5 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_46 = (175f * 175f);
	fLocal_47 = (5f * 5f);
	fLocal_48 = (5f * 5f);
	fLocal_49 = (2f * 2f);
	Local_50 = { -1011.737f, -480.254f, 39.0734f };
	Local_51 = { -1003.078f, -477.962f, 49.1374f };
	Local_52 = { -1018.376f, -483.9436f, 36.0964f };
	fLocal_53 = 114.7664f;
	Local_54 = { -1005.191f, -478.2104f, 49.0262f };
	fLocal_55 = 80.6659f;
	Local_56 = { 1f, 1f, 2f };
	Local_57 = { -596.05f, 2088.56f, 130.59f };
	sLocal_66 = "FOUND_CLUE";
	sLocal_67 = "NOIR_FILTER_SOUNDS";
	iLocal_70 = 7;
	sLocal_73 = "missmurder";
	sLocal_74 = "idle";
	sLocal_75 = "MM_LETREAD";
	sLocal_76 = "MM_LETCANC";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_82();
	}
	func_75(ScriptParam_78.f_1[0 /*3*/]);
	while (true)
	{
		func_74();
		if (func_69())
		{
			func_1();
		}
		else
		{
			func_82();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x15A
{
	switch (iLocal_70)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_68(iLocal_70))
			{
				if (((func_65() && !func_64()) && func_63()) && !func_62(0))
				{
					if (iLocal_72 != 0)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_72))
						{
							func_60(iLocal_70, 1, 0);
						}
					}
				}
			}
			break;
		
		case 4:
			if (func_59(uLocal_65))
			{
				PED::SET_PED_CAPSULE(uLocal_65, 0.75f);
			}
			if (!func_68(4))
			{
				if ((func_65() && func_63()) && !func_62(0))
				{
					func_60(4, 1, 0);
				}
			}
			break;
		
		case 5:
			if (func_55())
			{
				func_29();
			}
			if (((!func_68(5) && iLocal_60 == 4) && func_63()) && !func_62(0))
			{
				func_60(5, 1, 0);
			}
			break;
		
		case 6:
			if (!func_28(3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.8914f, 2033.12f, 130.5113f, -578.4783f, 2035.029f, 127.5615f, 0.75f, 0, 1, 0))
				{
					func_27(3, 1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0))
			{
				if (func_28(3))
				{
					func_18(-595.1746f, 2085.768f, 136.8813f, -601.5754f, 2106.162f, 125.4619f, 20.5f, -602.8466f, 2115.511f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, 1, 0, 1, 1, 0);
					func_27(3, 0);
				}
			}
			if (!func_28(2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0) || CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::CREATE_MODEL_HIDE(Local_57, 200f, joaat("prop_mineshaft_door"), 0);
					func_27(2, 1);
				}
			}
			if (func_65() && !func_64())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
				if (func_16(6))
				{
					if ((!func_68(6) && func_63()) && !func_62(0))
					{
						func_7(134, 4, 1);
						func_60(6, 1, 0);
						func_27(1, 1);
					}
				}
				if (func_6())
				{
					if (!func_5(0))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
						{
							func_3();
						}
						func_2("MM_TOGGLE", 10);
					}
				}
			}
			if (func_28(1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.9976f, 2089.005f, 130.3449f, -597.1125f, 2088.365f, 133.3035f, 1f, 0, 1, 0))
				{
					func_2("MM_HELP", 10000);
					func_27(1, 0);
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1)//Position - 0x446
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_3()//Position - 0x45D
{
	switch (Global_17C49.f_206F.f_86)
	{
		case 0:
			Global_17C49.f_206F.f_86 = 1;
			break;
		
		case 1:
			Global_17C49.f_206F.f_86 = 2;
			GRAPHICS::_SET_EXTRA_TIMECYCLE_MODIFIER(func_4());
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ON", "NOIR_FILTER_SOUNDS", 1);
			break;
		
		case 2:
			Global_17C49.f_206F.f_86 = 0;
			break;
	}
}

char* func_4()//Position - 0x4C0
{
	switch (Global_17C49.f_206F.f_86)
	{
		case 1:
			return "NG_filmnoir_BW02";
		
		case 2:
			return "NG_filmnoir_BW01";
		
		default:
	}
	return "";
}

int func_5(int iParam0)//Position - 0x4F1
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

bool func_6()//Position - 0x54B
{
	return Global_17C49.f_206F.f_85 == 127;
}

void func_7(int iParam0, int iParam1, bool bParam2)//Position - 0x55F
{
	Global_B85 = iParam0;
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		func_9();
		if (iParam1 == 4)
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_C[0] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_C[1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_C[2] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[0] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] == 1 && Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_10A95)
			{
				if (iParam1 != 4)
				{
					if (Global_3839 != iParam1)
					{
						Global_B6A[iParam1 /*4*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
						Global_B7B[iParam1] = 1;
						Global_B80[iParam1] = iParam0;
					}
					else if (iParam0 == Global_3839)
					{
					}
					else
					{
						Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
						Global_B39[1 /*6*/].f_5 = iParam1;
						func_8();
					}
				}
				else
				{
					Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
					Global_B39[1 /*6*/].f_5 = iParam1;
					func_8();
				}
			}
			else
			{
				Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
				Global_B39[1 /*6*/].f_5 = iParam1;
				func_8();
			}
		}
	}
}

void func_8()//Position - 0x709
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_B85 /*29*/].f_7)), 64);
	if (Global_B98 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_B39[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_B39[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8D7, 0);
}

void func_9()//Position - 0x786
{
	if (func_15(14))
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
		Global_3839 = func_10();
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

int func_10()//Position - 0x827
{
	func_11();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_11()//Position - 0x840
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_14(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_13(PLAYER::PLAYER_PED_ID());
			if (func_12(iVar0) && (!func_15(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_12(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_12(int iParam0)//Position - 0x93D
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0x949
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)//Position - 0x986
{
	if (func_12(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0x9B0
{
	return Global_8861 == iParam0;
}

bool func_16(int iParam0)//Position - 0x9BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = MISC::GET_BITS_IN_RANGE(Global_17C49.f_206F.f_85, 0, (iVar0 - 1));
	return iVar1 == (func_17(2, iVar0) - 1);
}

int func_17(int iParam0, int iParam1)//Position - 0x9F7
{
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_17(iParam0, (iParam1 - 1)));
}

void func_18(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA19
{
	func_19(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_19(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, var uParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA43
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam10)
			{
				func_26(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_23(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_21(iVar0, func_10(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_20(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.x = (Param5.x + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.x - Var4.x) > Param5.x)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, uParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_20(struct<3> Param0)//Position - 0xE29
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)//Position - 0xE53
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_22(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_17C49.f_156E[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xEC4
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_23(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0xF95
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_25(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.x = -Var1.f_1;
		Var0.f_1 = Var1.x;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_24(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_24(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_24(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_24(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_24(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_24(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_24(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_24(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_24(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_24(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_24(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_24(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_24(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_24(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_24(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_24(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x128B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_25(struct<3> Param0)//Position - 0x133F
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

void func_26(int iParam0)//Position - 0x137E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_27(int iParam0, bool bParam1)//Position - 0x13E3
{
	if (bParam1)
	{
		MISC::SET_BIT(&uLocal_77, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_77, iParam0);
	}
}

bool func_28(int iParam0)//Position - 0x1403
{
	return MISC::IS_BIT_SET(uLocal_77, iParam0);
}

void func_29()//Position - 0x1413
{
	int iVar0;
	
	switch (iLocal_59)
	{
		case 0:
			if (!MISC::GET_MISSION_FLAG())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50, Local_56, 1, 1, 0))
				{
					if (func_54())
					{
						iLocal_59 = 2;
						func_53(0, 800);
					}
				}
			}
			break;
		
		case 1:
			func_52();
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51, Local_56, 1, 1, 0))
				{
					func_48();
					iLocal_59 = 3;
					func_53(0, 800);
				}
				func_43();
				if (func_59(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
						}
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				}
			}
			break;
		
		case 2:
			func_52();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_39(24, 0);
				func_38(PLAYER::PLAYER_PED_ID(), Local_54, fLocal_55);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_37(1);
				func_18(-1023.439f, -479.5592f, 35.81806f, -1014.383f, -495.1239f, 40.10796f, 18.5f, -1024.096f, -485.1923f, 35.9779f, 209.0203f, func_36(), 1, 0, 1, 1, 0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_54, 20f, 0);
				func_33(24, &iLocal_58);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_58);
				iLocal_71 = (MISC::GET_GAME_TIMER() + 40000);
				while ((!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || !INTERIOR::IS_INTERIOR_READY(iLocal_58)) && iLocal_71 > MISC::GET_GAME_TIMER())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (iLocal_71 <= MISC::GET_GAME_TIMER())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_58);
					func_38(PLAYER::PLAYER_PED_ID(), Local_52, fLocal_53);
					func_53(1, 800);
					iLocal_59 = 0;
				}
				else
				{
					func_53(1, 800);
					iLocal_59 = 1;
					func_32();
				}
			}
			break;
		
		case 3:
			func_52();
			func_48();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_38(PLAYER::PLAYER_PED_ID(), Local_52, fLocal_53);
				func_39(24, 1);
				INTERIOR::UNPIN_INTERIOR(iLocal_58);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_37(0);
				func_31();
				func_30(Local_52, 30f, 12, 5000, 0, 0);
				func_53(1, 800);
				iLocal_59 = 0;
			}
			break;
	}
}

void func_30(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x16C0
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam1, iParam2, 127);
	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam3);
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam5)
			{
				func_48();
			}
			if (bParam4)
			{
				func_52();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}

void func_31()//Position - 0x172F
{
	if (MISC::IS_PC_VERSION())
	{
		if (func_28(0))
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			func_27(0, 0);
		}
	}
}

void func_32()//Position - 0x1750
{
	if (MISC::IS_PC_VERSION())
	{
		if (!func_28(0))
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("MYSTERY LETTER CAM");
			func_27(0, 1);
		}
	}
}

var func_33(int iParam0, int iParam1)//Position - 0x1777
{
	struct<5> Var0;
	
	Var0 = { func_34(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_34(int iParam0)//Position - 0x179C
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_35(1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_35(2) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_35(3) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_35(4) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_35(5) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_35(6) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_35(7) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1001A3[34 /*1425*/].f_92.f_411 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_35(35) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_35(36) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_35(37) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_35(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_35(39) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_35(40) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_35(41) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_35(42) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_35(43) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_35(int iParam0)//Position - 0x205B
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

Vector3 func_36()//Position - 0x24D9
{
	return 2.55f, 5.59f, 2.55f;
}

void func_37(bool bParam0)//Position - 0x24F0
{
	func_27(5, bParam0);
	CLOCK::PAUSE_CLOCK(bParam0);
}

void func_38(int iParam0, struct<3> Param1, float fParam2)//Position - 0x2505
{
	ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
}

void func_39(int iParam0, bool bParam1)//Position - 0x2523
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_33(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_42(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_40(iParam0))
			{
				func_42(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_40(int iParam0)//Position - 0x25AE
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (MISC::IS_BIT_SET(Global_783E[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_41(var uParam0)//Position - 0x25D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 2)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_42(int iParam0, bool bParam1)//Position - 0x2629
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_783E[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_783E[Var0.f_1]), Var0);
	}
}

void func_43()//Position - 0x2661
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { -1007.013f, -478.3662f, 49.02818f };
	Var1 = { -1007.85f, -476.9573f, 51.02807f };
	fVar2 = 1.75f;
	switch (iLocal_60)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, 0, 1, 0) && !func_5(0))
			{
				func_47(sLocal_75);
				iLocal_60++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, 0, 1, 0) && !func_5(0))
			{
				if (!func_46(PLAYER::PLAYER_PED_ID(), -880529684))
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1007.995f, -476.8016f, 49.9117f, -1, 0, 2);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					func_45(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1007.351f, -477.5197f, 49.0282f, 1f, -1, 0.5f, 0, 30.4025f);
					func_47(sLocal_76);
					HUD::DISPLAY_RADAR(0);
					CAM::SET_CAM_ACTIVE(uLocal_61, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					iLocal_60++;
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_60 = (iLocal_60 - 1);
			}
			break;
		
		case 2:
			func_48();
			func_45(0);
			HUD::DISPLAY_RADAR(0);
			if (!func_44(sLocal_76))
			{
				func_47(sLocal_76);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					iLocal_71 = MISC::GET_GAME_TIMER() + 300;
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				else
				{
					iLocal_71 = 0;
				}
				iLocal_60++;
			}
			break;
		
		case 3:
			func_48();
			if (iLocal_71 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				HUD::DISPLAY_RADAR(1);
				func_45(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(uLocal_61, 0);
				iLocal_60++;
			}
			break;
		
		case 4:
			iLocal_60 = 0;
			break;
	}
}

bool func_44(char* sParam0)//Position - 0x285C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_45(bool bParam0)//Position - 0x286F
{
	func_27(6, !bParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0);
}

bool func_46(var uParam0, int iParam1)//Position - 0x288A
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_47(char* sParam0)//Position - 0x28AA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_48()//Position - 0x28C0
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_5(0))
		{
			func_49(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_49(int iParam0)//Position - 0x28E8
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
	if (!func_50())
	{
		Global_3839.f_1 = 3;
	}
}

int func_50()//Position - 0x2958
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(bool bParam0, bool bParam1)//Position - 0x297F
{
	if (bParam0)
	{
		if (func_5(0))
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

void func_52()//Position - 0x29F3
{
	Global_42CA.f_6 = 1;
}

void func_53(bool bParam0, int iParam1)//Position - 0x2A01
{
	func_27(4, !bParam0);
	if (bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
}

int func_54()//Position - 0x2A25
{
	int iVar0;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		return 1;
	}
	func_2("MM_SOLBUSY", 5000);
	return 0;
}

int func_55()//Position - 0x2A58
{
	if (iLocal_59 == 1)
	{
		return 1;
	}
	if (!func_63())
	{
		return 0;
	}
	if (!func_58(61))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_59 == 0)
	{
		return 0;
	}
	if (func_62(0))
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (func_12(func_10()))
	{
		if (func_56(func_10()) == 4 || func_56(func_10()) == 5)
		{
			return 0;
		}
	}
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return 0;
	}
	if (Global_600E)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)//Position - 0x2AF7
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

int func_57()//Position - 0x2B1B
{
	var uVar0;
	
	if (Global_6012)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x2B52
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

int func_59(int iParam0)//Position - 0x2B7E
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

void func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x2B9E
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_17C49.f_206F.f_85), iParam0);
		if (!bParam2)
		{
			AUDIO::PLAY_SOUND_FRONTEND(uLocal_68, sLocal_66, sLocal_67, 1);
		}
		func_61();
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_206F.f_85), iParam0);
	}
}

int func_61()//Position - 0x2BE2
{
	if (func_62(0))
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

bool func_62(bool bParam0)//Position - 0x2C2D
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

bool func_63()//Position - 0x2C58
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("player_zero");
}

int func_64()//Position - 0x2C6E
{
	if (func_59(PLAYER::PLAYER_PED_ID()))
	{
		return PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	return 0;
}

bool func_65()//Position - 0x2C8E
{
	return SYSTEM::VDIST2(func_67(iLocal_70), Local_69) < func_66(iLocal_70);
}

float func_66(int iParam0)//Position - 0x2CAB
{
	switch (iParam0)
	{
		case 0:
			return fLocal_47;
		
		case 1:
			return fLocal_47;
		
		case 2:
			return fLocal_47;
		
		case 3:
			return fLocal_47;
		
		case 4:
			return fLocal_48;
		
		case 5:
			return fLocal_49;
		
		case 6:
			return 4f;
		
		default:
	}
	return 0f;
}

Vector3 func_67(int iParam0)//Position - 0x2D1C
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3160.96f, 3005.628f, -39.9701f;
		
		case 5:
			return -1008.142f, -476.2818f, 49.9633f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_68(int iParam0)//Position - 0x2DEB
{
	return MISC::IS_BIT_SET(Global_17C49.f_206F.f_85, iParam0);
}

int func_69()//Position - 0x2E02
{
	switch (iLocal_70)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return (!func_68(iLocal_70) && func_71());
		
		case 4:
			return func_71();
		
		case 5:
			return ((((func_16(iLocal_70) && func_71()) || iLocal_59 == 1) || iLocal_59 == 3) || iLocal_59 == 2);
		
		case 6:
			return (func_71() || (func_28(2) && func_70(Local_57)));
		
		default:
	}
	return 0;
}

var func_70(struct<3> Param0)//Position - 0x2EA5
{
	var uVar0;
	var uVar1;
	
	return GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &uVar0, &uVar1);
}

bool func_71()//Position - 0x2EB9
{
	return SYSTEM::VDIST2(func_73(iLocal_70), Local_69) < func_72(iLocal_70);
}

float func_72(int iParam0)//Position - 0x2ED6
{
	switch (iParam0)
	{
		case 0:
			return fLocal_46;
		
		case 1:
			return fLocal_46;
		
		case 2:
			return fLocal_46;
		
		case 3:
			return fLocal_46;
		
		case 4:
			return fLocal_46;
		
		case 5:
			return fLocal_46;
		
		case 6:
			return fLocal_46;
		
		default:
	}
	return 0f;
}

Vector3 func_73(int iParam0)//Position - 0x2F48
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3174.901f, 3034.061f, -35.645f;
		
		case 5:
			return -1008.69f, -476.4341f, 49.9544f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74()//Position - 0x3017
{
	if (func_59(PLAYER::PLAYER_PED_ID()))
	{
		Local_69 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
}

void func_75(struct<3> Param0)//Position - 0x3037
{
	int iVar0;
	int iVar1;
	
	if (!func_81())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("murdermystery")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_70 == 7)
	{
		iVar1 = iVar0;
		if (func_80(Param0, func_73(iVar1), 1056964608))
		{
			iLocal_70 = iVar1;
		}
		iVar0++;
	}
	func_76();
}

void func_76()//Position - 0x309A
{
	switch (iLocal_70)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_79(&iLocal_72, func_67(iLocal_70), 0.2f);
			break;
		
		case 4:
			func_78(joaat("u_f_m_drowned_01"));
			func_77(sLocal_73);
			uLocal_65 = PED::CREATE_PED(26, joaat("u_f_m_drowned_01"), func_67(4), 184.5548f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_f_m_drowned_01"));
			TASK::TASK_PLAY_ANIM(uLocal_65, sLocal_73, sLocal_74, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_65, 1);
			PED::SET_PED_KEEP_TASK(uLocal_65, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_65, 1);
			AUDIO::STOP_PED_SPEAKING(uLocal_65, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_65, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_65, 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_65, 208, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_65, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_65, 1862763509);
			break;
		
		case 5:
			iLocal_62 = 731806707;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_62, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, 1, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_62, 1, 1, 0);
			uLocal_61 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f, 50f, 0, 2);
			break;
		
		case 6:
			func_78(joaat("u_m_o_filmnoir"));
			uLocal_63 = PED::CREATE_PED(26, joaat("u_m_o_filmnoir"), func_67(6), 22.9631f, 1, 1);
			PED::SET_PED_PROP_INDEX(uLocal_63, 0, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_o_filmnoir"));
			AUDIO::STOP_PED_SPEAKING(uLocal_63, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_63, 1);
			PED::EXPLODE_PED_HEAD(uLocal_63, joaat("weapon_sniperrifle"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_63, 1862763509);
			uLocal_64 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vintage_filmcan"), -543.71f, 1986.2f, 126.05f, 1, 1, 0);
			break;
	}
}

void func_77(char* sParam0)//Position - 0x3252
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_78(int iParam0)//Position - 0x3272
{
	STREAMING::REQUEST_MODEL(iParam0);
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_79(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3292
{
	*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
	if (*iParam0 == 0)
	{
	}
	else
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam2);
	}
}

bool func_80(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x32B8
{
	return SYSTEM::VDIST(Param0, Param1) <= fParam2;
}

int func_81()//Position - 0x32CF
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_29C.f_2AB, 7))
		{
			return 1;
		}
	}
	if (Global_20258 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_82()//Position - 0x3352
{
	func_83();
	func_31();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_83()//Position - 0x3366
{
	switch (iLocal_70)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_72);
			iLocal_72 = 0;
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_65))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_65);
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_73);
			break;
		
		case 5:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_62))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_62);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_61))
			{
				CAM::DESTROY_CAM(uLocal_61, 0);
			}
			if (func_28(4))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_28(5))
			{
				CLOCK::PAUSE_CLOCK(false);
			}
			if (func_28(6))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (func_44(sLocal_75) || func_44(sLocal_76))
			{
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_63))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_64))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_64);
			}
			if (func_28(2))
			{
				ENTITY::REMOVE_MODEL_HIDE(Local_57, 200f, joaat("prop_mineshaft_door"), 0);
			}
			break;
	}
}

