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
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<487> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	char* sLocal_89 = NULL;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	struct<33> Local_95 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 1;
	var uLocal_97[3] = { 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 5;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 5;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
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
	Local_48 = { 500f, 500f, 500f };
	iLocal_106 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_303();
	}
	if (func_300(0))
	{
		bLocal_85 = true;
		iLocal_82 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_3)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_299(14))
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_298(&Local_95, 3);
	func_289(&uScriptParam_119);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var1 = { 24.94562f, -1344.954f, 29.49f };
	Var2 = { Var0 - Var1 };
	Var2 = { Var1 - Var0 };
	fVar4 = 147.297f;
	Var3 = { -1228.443f, -905.3416f, 13.523f };
	Var2 = { Var3 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var2 = { func_288(Var2, fVar4) };
	if ((((func_287() && !func_286()) || Global_17C11) || Global_5F7E) || Global_17C3E != -1)
	{
		if (func_287() && !func_286())
		{
		}
		else if (Global_17C11)
		{
		}
		else if (Global_5F7E)
		{
		}
		else if (Global_17C3E != -1)
		{
		}
		if (!func_285())
		{
			func_283(&(Local_65.f_1D6), 64);
			func_281(1);
		}
		else
		{
			func_281(0);
		}
		func_303();
	}
	else if (Global_17C49.f_4771[iLocal_79] > 0)
	{
		if (func_280())
		{
			func_278(iLocal_79, Local_65.f_1E6.f_9.f_2, &Var5, &Var6);
			MISC::CLEAR_AREA_OF_PEDS(Local_65.f_B5, 15f, 0);
			uLocal_78 = PED::ADD_SCENARIO_BLOCKING_AREA(Var5, Var6, 0, 1, 1, 1);
			if (!func_285())
			{
				func_281(1);
			}
			else
			{
				func_281(0);
				func_276(&(Local_65.f_1D6), 512);
			}
			iLocal_64 = 2;
		}
		else
		{
			func_281(0);
		}
		if (!func_275())
		{
			iLocal_61 = 10;
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar7 == 0)
			{
				Local_65.f_2.f_C = 1;
			}
			else
			{
				Local_65.f_2.f_C = 0;
			}
		}
	}
	else
	{
		func_281(0);
	}
	while (true)
	{
		func_272(&Local_95);
		if (func_267())
		{
			func_303();
		}
		if (!bLocal_85)
		{
			if (func_300(0))
			{
				func_266();
				bLocal_85 = true;
			}
		}
		switch (iLocal_64)
		{
			case 0:
				func_237();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_285())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_79)))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
							func_2("SHOP_CLOSED", func_4(iLocal_79));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_79)))
					{
						HUD::CLEAR_HELP(1);
					}
					if (func_1(Local_65.f_1D6, 512))
					{
						func_281(1);
						func_283(&(Local_65.f_1D6), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x35B
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)//Position - 0x36A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_3(char* sParam0, char* sParam1)//Position - 0x386
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_4(int iParam0)//Position - 0x39F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_5()//Position - 0x447
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_234();
	func_231();
	func_226();
	func_220();
	func_202();
	func_180();
	func_174();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!func_49())
	{
		func_36();
		func_26();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_65))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_65, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_87 = false;
	if (!PED::IS_PED_INJURED(Local_65.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_65.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65.f_2, 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_65.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_65.f_2))
				{
					if (!func_25() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_87 = true;
					}
				}
			}
		}
	}
	if (bLocal_87)
	{
		if (!iLocal_88 && func_1(Local_65.f_1D6, 4))
		{
			iVar2 = func_24(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_89 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_89, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_89 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_89, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_89 = "";
			}
			iLocal_88 = 1;
		}
	}
	else if (iLocal_88)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_89))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_89, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_89, -1056964608);
			}
		}
		iLocal_88 = 0;
	}
	switch (iLocal_61)
	{
		case 0:
			if (func_285())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_61 = 12;
				}
				else
				{
					iLocal_49 = 2;
					iLocal_56 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_65))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65, 0))
						{
							if ((func_24(Local_65) == joaat("weapon_unarmed") || func_24(Local_65) == joaat("object")) || func_24(Local_65) == joaat("weapon_briefcase"))
							{
								iLocal_59 = 1;
								iLocal_61 = 1;
							}
							else if (!func_1(Local_65.f_1D6, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_59 = 2;
									iLocal_61 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_59 = 3;
									iLocal_61 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_59 = 4;
									iLocal_61 = 5;
								}
								else
								{
									iLocal_61 = 2;
								}
								func_276(&(Local_65.f_1D6), 1);
							}
						}
						else
						{
							iLocal_61 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_49 = 2;
				iLocal_61 = 3;
			}
			else if (!func_285() && func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1))
			{
				iLocal_61 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_65.f_1D6, 2))
			{
				iLocal_50 = 1;
				iLocal_55 = 1;
				func_276(&(Local_65.f_1D6), 2);
			}
			iLocal_61 = 5;
			break;
		
		case 2:
			iLocal_50 = 5;
			iLocal_55 = 3;
			iLocal_61 = 5;
			break;
		
		case 3:
			iLocal_50 = 6;
			iLocal_55 = 4;
			iLocal_61 = 5;
			break;
		
		case 5:
			if (!func_285() && !func_1(Local_65.f_1D6, 1))
			{
				iLocal_61 = 0;
			}
			break;
		
		case 6:
			if (iLocal_50 >= 13)
			{
				if (Local_65.f_2.f_C)
				{
					if (!func_19())
					{
						iLocal_61 = 7;
					}
				}
				else
				{
					iLocal_61 = 8;
				}
				iLocal_51 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_65.f_1D6, 256))
			{
				func_18();
				MISC::CLEAR_BIT(&Global_150CA, 3);
				iLocal_61 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_65.f_1D6, 16))
			{
				if (func_16())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
					{
						if (!PED::IS_PED_RAGDOLL(Local_65.f_2))
						{
							if (func_285())
							{
								if (Local_65.f_1E6 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
									{
										TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_1E6.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_57 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_65.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								iLocal_57 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_150CA, 3);
					iLocal_61 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_58 = 7;
			if (iLocal_62 == 1)
			{
				iLocal_61 = 8;
			}
			else
			{
				iLocal_61 = 13;
			}
			break;
		
		case 10:
			if (func_285())
			{
				iLocal_61 = 11;
			}
			break;
		
		case 11:
			if (!func_14(&(Local_65.f_1DD)))
			{
				if (!Local_65.f_2.f_C)
				{
					iLocal_50 = 28;
				}
				else
				{
					iLocal_50 = 29;
				}
				func_11(&(Local_65.f_1DD));
			}
			else if (func_8(&(Local_65.f_1DD)) > 5f)
			{
				func_15(1, 0);
				iLocal_61 = 13;
			}
			else if (func_8(&(Local_65.f_1DD)) > 1.5f)
			{
				if (!func_19())
				{
					if (iLocal_57 != 12)
					{
						iLocal_57 = 12;
						if (!Local_65.f_2.f_C)
						{
							func_7();
						}
						else
						{
							func_18();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_14(&(Local_65.f_1DD)))
			{
				func_6();
				iLocal_50 = 30;
				iLocal_57 = 12;
				func_11(&(Local_65.f_1DD));
			}
			else if (func_8(&(Local_65.f_1DD)) > 3f)
			{
				iLocal_61 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()//Position - 0xA20
{
	var uVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_65.f_2.f_6, 2f, -1, 0.25f, 0, Local_65.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_65.f_2, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	func_276(&(Local_65.f_1D6), 128);
}

void func_7()//Position - 0xA7E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(Local_65.f_2, uLocal_77);
	}
}

float func_8(var uParam0)//Position - 0xACB
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)//Position - 0xB0A
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_10(var uParam0)//Position - 0xB52
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_11(var uParam0)//Position - 0xB62
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)//Position - 0xB7A
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)//Position - 0xB89
{
	uParam0->f_1 = (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)//Position - 0xBB7
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_15(int iParam0, bool bParam1)//Position - 0xBC7
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_85 || (bLocal_85 && iParam0 < iLocal_82)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
		Local_65.f_9E = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_85 && iParam0 > iLocal_82)
	{
	}
}

int func_16()//Position - 0xC3A
{
	func_17();
	switch (iLocal_53)
	{
		case 0:
			Local_65.f_1E6 = PED::CREATE_SYNCHRONIZED_SCENE(Local_65.f_1E6.f_6, Local_65.f_1E6.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_65.f_2, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C))
				{
					if (Local_65.f_1E6 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_65.f_1C, 1, 0);
						ENTITY::SET_ENTITY_DYNAMIC(Local_65.f_1C, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_65.f_2, Local_65.f_1E6, Local_65.f_1E6.f_1, Local_65.f_1E6.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_65.f_1C, Local_65.f_1E6, Local_65.f_1E6.f_4, Local_65.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_65.f_60.f_1, Local_65.f_1E6, Local_65.f_1E6.f_5, Local_65.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_54 = 1;
					iLocal_57 = 5;
					iLocal_53 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_65.f_1E6 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_65.f_1C, Local_65.f_1E6, Local_65.f_1E6.f_4, Local_65.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
							Local_65.f_1C.f_7 = { Local_65.f_1C.f_7, Local_65.f_1C.f_7.f_1, (Local_65.f_1C.f_7.f_2 + 0.2f) };
						}
						iLocal_53 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_65.f_1E6 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_65.f_1C))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_65.f_1C, 1);
							}
						}
					}
					if (Local_65.f_1D3)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_65.f_1E6) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_65.f_1E6, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.894f)
					{
						iLocal_53 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C))
			{
				if (Local_65.f_1E6 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
					{
						if (iLocal_52 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.871f)
							{
								iLocal_54 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_65.f_1C, -16f, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_65.f_1C);
						}
					}
				}
			}
			iLocal_53 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0xEDA
{
	if (Local_65.f_1E6 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.117f)
				{
					iLocal_52 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.154f)
				{
					iLocal_52 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.477f)
				{
					iLocal_52 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.487f)
				{
					iLocal_52 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.809f)
				{
					iLocal_52 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.871f)
				{
					iLocal_52 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.894f)
				{
					iLocal_52 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) < 0.999f)
				{
					iLocal_52 = 8;
				}
				else if (iLocal_52 == 9)
				{
				}
			}
			else
			{
				iLocal_52 = 0;
			}
		}
		else if (iLocal_52 == 0)
		{
		}
	}
	else
	{
		iLocal_52 = 0;
	}
}

void func_18()//Position - 0xFE2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_65.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_65.f_2, joaat("weapon_pumpshotgun"), 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65.f_2, -2065892691);
		TASK::OPEN_SEQUENCE_TASK(&(Local_65.f_2.f_16));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_65, 2000, 0);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_65, 4000, -957453492);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_65.f_2.f_16);
		TASK::TASK_PERFORM_SEQUENCE(Local_65.f_2, Local_65.f_2.f_16);
	}
}

int func_19()//Position - 0x1069
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x108B
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(uParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(uParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_21(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x1203
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(uVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_22(int iParam0, int iParam1, int iParam2)//Position - 0x12CF
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_23()//Position - 0x132B
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_65, 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_65, 0);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 0, 1, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_65.f_C8, Local_65.f_CB, Local_65.f_CE, 0, 1, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_65.f_CF, Local_65.f_D2, Local_65.f_D5, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_65.f_C7 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_65.f_C1, Local_65.f_C4, Local_65.f_C7, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x1410
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25()//Position - 0x1424
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1441
{
	switch (iLocal_49)
	{
		case 0:
			break;
		
		case 2:
			if (!func_49())
			{
				if (func_285())
				{
					if (!func_1(Global_17C49.f_4771.f_14, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_276(&(Global_17C49.f_4771.f_14), 1);
								iLocal_49 = 1;
								break;
						}
						if (iLocal_62 > 0)
						{
							if (func_32("SHR_HOLDUP_1"))
							{
								func_28("SHR_HOLDUP_1", 1);
								iLocal_49 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_49 = 1;
					}
				}
				else if (func_32("SHR_HOLDUP_1"))
				{
					func_28("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_49())
			{
				if (func_285())
				{
					if (!func_1(Global_17C49.f_4771.f_14, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_276(&(Global_17C49.f_4771.f_14), 2);
								iLocal_49 = 4;
								break;
						}
					}
					else
					{
						iLocal_49 = 4;
					}
				}
				else if (func_32("SHR_SNK_TUT"))
				{
					func_28("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_17C49.f_4771.f_14, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_17C49.f_4771.f_14, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_49 = 4;
			break;
		
		case 4:
			if ((!func_285() && func_32("SHR_HOLDUP_1")) && !func_1(Global_17C49.f_4771.f_14, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_49 = 2;
			}
			if ((!func_285() && func_32("SHR_SNK_TUT")) && !func_1(Global_17C49.f_4771.f_14, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_49 = 2;
			}
			break;
	}
}

int func_27(char* sParam0)//Position - 0x166E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_28(char* sParam0, int iParam1)//Position - 0x1681
{
	int iVar0;
	int iVar1;
	
	if (Global_176FC && iParam1)
	{
		if (func_27(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_17C49.f_5C53[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_17C49.f_5C53.f_91 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_17C49.f_5C53.f_91 - 1));
			Global_17C49.f_5C53.f_91 = (Global_17C49.f_5C53.f_91 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()//Position - 0x172E
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

void func_30(int iParam0)//Position - 0x184E
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

void func_31(int iParam0, int iParam1)//Position - 0x18E8
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

int func_32(char* sParam0)//Position - 0x19F8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_17C49.f_5C53[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1A33
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1A54
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
		func_29();
	}
}

int func_35(char* sParam0)//Position - 0x1C27
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_176FF))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_36()//Position - 0x1C4E
{
	if (func_285())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
	}
	switch (iLocal_50)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_GREET", 3);
			}
			iLocal_50 = 14;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, func_45(bLocal_93, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_50 = 14;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, func_45(bLocal_93, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_50 = 14;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, func_45(bLocal_93, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_50 = 14;
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, func_45(bLocal_93, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_50 = 14;
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, func_45(bLocal_93, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_50 = 14;
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_50 = 14;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_50 = 14;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_50 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "BUMP", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_90)
					{
						iLocal_50 = 7;
						iLocal_90 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_91)
					{
						iLocal_50 = 8;
						iLocal_91 = 1;
					}
				}
				if (!func_14(&(Local_65.f_1E3)))
				{
					func_11(&(Local_65.f_1E3));
				}
				else if (func_10(&(Local_65.f_1E3)))
				{
					func_42(&(Local_65.f_1E3));
				}
				else if (func_8(&(Local_65.f_1E3)) > 10f)
				{
					if (!func_1(Local_65.f_1D6, 32))
					{
						if (!PED::IS_PED_INJURED(Local_65.f_2) && func_1(Local_65.f_1D6, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_65.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_50 = 36;
						func_15(1, 0);
						func_276(&(Local_65.f_1D6), 32);
					}
				}
			}
			else if (func_14(&(Local_65.f_1E3)) && !func_10(&(Local_65.f_1E3)))
			{
				func_41(&(Local_65.f_1E3));
			}
			break;
		
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					func_47(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				func_12(&(Local_65.f_1D7));
				if (Local_65.f_2.f_B)
				{
					iLocal_50 = 37;
				}
				else
				{
					iLocal_50 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 13:
			if (func_40(&(Local_65.f_1D7)) > 3f)
			{
				if (Local_65.f_2.f_C)
				{
					iLocal_50 = 22;
				}
				else if (Local_65.f_1CA)
				{
					iLocal_50 = 17;
				}
				else if (Local_65.f_1CB)
				{
					iLocal_50 = 18;
				}
				else if (Local_65.f_1CC)
				{
					iLocal_50 = 19;
				}
				else if (Local_65.f_1CD)
				{
					iLocal_50 = 20;
				}
				else if (Local_65.f_1CE)
				{
					iLocal_50 = 21;
				}
				else
				{
					iLocal_50 = 16;
				}
				func_39(&(Local_65.f_1D7));
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_SCARED", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_BRAVE", 8);
				}
				func_276(&(Local_65.f_1D6), 256);
				iLocal_50 = 37;
			}
			break;
		
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_65.f_1C.f_E)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
					{
						func_47(Local_65.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_50 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65.f_2E.f_4[0], 0))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_65.f_2E.f_4[0], 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[0]))
			{
				func_47(Local_65.f_2E[0], "SURROUNDED", 15);
			}
			iLocal_50 = 25;
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_47(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_50 = 37;
			}
			else
			{
				func_37();
			}
			break;
		
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_50 = 37;
			break;
		
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_50 = 37;
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				func_47(Local_65.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_50 = 37;
			break;
		
		case 31:
			if (!func_19())
			{
				iLocal_50 = 37;
			}
			break;
		
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_65.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					func_47(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_65.f_1D7));
				iLocal_50 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_65.f_1D7)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_SELL", 3);
				}
				iLocal_50 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
				{
					func_47(Local_65.f_2, "SHOP_STEAL", 3);
				}
				iLocal_50 = 37;
			}
			break;
	}
}

void func_37()//Position - 0x246A
{
	Global_38DE = 0;
	func_38();
}

void func_38()//Position - 0x247A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_39(var uParam0)//Position - 0x249B
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_40(var uParam0)//Position - 0x24B1
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_41(var uParam0)//Position - 0x24ED
{
	if (func_14(uParam0))
	{
		if (!func_10(uParam0))
		{
			uParam0->f_2 = (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

void func_42(var uParam0)//Position - 0x2527
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			uParam0->f_1 = (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			MISC::CLEAR_BIT(uParam0, 2);
		}
	}
}

int func_43()//Position - 0x2565
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_C8, Local_65.f_CB, Local_65.f_CE, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()//Position - 0x2598
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_D6, Local_65.f_D9, Local_65.f_DC, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_45(bool bParam0, char* sParam1, char* sParam2)//Position - 0x25CB
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_46()//Position - 0x25E2
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)//Position - 0x2603
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_48(iParam2), 1);
}

int func_48(int iParam0)//Position - 0x261A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_49()//Position - 0x280F
{
	return Global_42C8;
}

void func_50()//Position - 0x281A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_285() && iLocal_63 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 140:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_51(Local_65.f_2) && iVar1 != func_51(PLAYER::PLAYER_PED_ID()))
							{
								func_276(&(Local_65.f_1D6), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_276(&(Local_65.f_1D6), 8);
						}
					}
					break;
				
				case 139:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_51(Local_65.f_2) && iVar1 != func_51(PLAYER::PLAYER_PED_ID()))
							{
								func_276(&(Local_65.f_1D6), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_276(&(Local_65.f_1D6), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_51(int iParam0)//Position - 0x2938
{
	return iParam0;
}

int func_52(int iParam0)//Position - 0x2942
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_65.f_B9)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_65.f_C8, Local_65.f_CB, Local_65.f_CE, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_65.f_CF, Local_65.f_D2, Local_65.f_D5, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_65.f_C7 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_65.f_C1, Local_65.f_C4, Local_65.f_C7, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()//Position - 0x29FE
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_285())
		{
			if (!MISC::IS_BIT_SET(Local_65.f_A2.f_12, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_65.f_A2)
				{
					Local_65.f_A2[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_65.f_A2)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_65.f_A2[iVar0] = uVar1[iVar3];
								Local_65.f_A2.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&(Local_65.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_65.f_A2)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_65.f_A2[iVar0]) && !PED::IS_PED_INJURED(Local_65.f_A2[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_65.f_A2[iVar0], 0))
				{
					if (MISC::IS_BIT_SET(Local_65.f_A2.f_12, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_65.f_A2[iVar0], 0);
						ENTITY::SET_ENTITY_COLLISION(Local_65.f_A2[iVar0], 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_A2[iVar0], 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_65.f_A2[iVar0], Local_65.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_65.f_A2[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_65.f_A2[iVar0], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_65.f_A2[iVar0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_A2[iVar0], 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_65.f_A2[iVar0], Local_65.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_65.f_A2.f_12, 0))
			{
				MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_65.f_A2)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_65.f_A2[iVar0]) && !PED::IS_PED_INJURED(Local_65.f_A2[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_65.f_A2[iVar0], 0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_65.f_A2[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_65.f_A2[iVar0], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_65.f_A2[iVar0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_A2[iVar0], 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_65.f_A2[iVar0], Local_65.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()//Position - 0x2CAC
{
	switch (iLocal_98)
	{
		case 0:
			if (func_285())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_63(iLocal_79), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_85)
				{
					STREAMING::REQUEST_MODEL(Local_65.f_2E.f_1A);
					STREAMING::REQUEST_MODEL(Local_65.f_2E.f_1B);
				}
				iLocal_98 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_85)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_65.f_2E.f_1A))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_65.f_2E.f_1B))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_79))
			{
				return;
			}
			if (!func_1(Local_65.f_1D6, 4))
			{
				if (!func_1(Local_65.f_1D6, 1024))
				{
					uLocal_97[0] = OBJECT::CREATE_OBJECT(func_60(0), func_59(0), 1, 1, 0);
					uLocal_97[1] = OBJECT::CREATE_OBJECT(func_60(1), func_59(1), 1, 1, 0);
					uLocal_97[2] = OBJECT::CREATE_OBJECT(func_60(2), func_59(2), 1, 1, 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_97[0], 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_97[1], 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_97[2], 0);
					func_276(&(Local_65.f_1D6), 1024);
				}
				func_276(&(Local_65.f_1D6), 4);
				iLocal_98 = 2;
			}
			break;
		
		case 2:
			if (!func_285())
			{
				func_55();
				func_283(&(Local_65.f_1D6), 4);
				iLocal_98 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_65.f_1D6, 4))
			{
				func_55();
				func_283(&(Local_65.f_1D6), 4);
			}
			break;
	}
}

void func_55()//Position - 0x2EB1
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_63(iLocal_79));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	func_56(1, iLocal_79);
	if (!bLocal_85)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_65.f_2E.f_1A);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_65.f_2E.f_1B);
	}
}

void func_56(bool bParam0, int iParam1)//Position - 0x2F1A
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_4354.f_1C27)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_4354.f_1C27 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_4354.f_1316[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_4354.f_1316[iVar0] = 0;
	}
	if (Global_4354.f_130F[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_4354.f_130F[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

void func_57(var uParam0)//Position - 0x2FB8
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)//Position - 0x2FE1
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_4354.f_1373[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_4354.f_1373[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_4354.f_1373[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)//Position - 0x307E
{
	switch (iParam0)
	{
		case 0:
			return Local_65.f_1E6.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_65.f_1E6.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_65.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_65.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
}

int func_60(int iParam0)//Position - 0x30E8
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_61(char* sParam0, int iParam1)//Position - 0x3126
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_4354.f_131D[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_131D[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_4354.f_131D[iVar0 /*4*/]), 9);
		Global_4354.f_1316[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_4354.f_131D[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_4354.f_130F[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_4354.f_1336[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_4354.f_1336[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_62(var uParam0)//Position - 0x31F4
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_63(int iParam0)//Position - 0x3296
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_64()//Position - 0x3342
{
	switch (iLocal_99)
	{
		case 0:
			if (func_285())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_65.f_1E6.f_1);
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_65.f_1E6.f_1))
			{
				return;
			}
			if (!func_1(Local_65.f_1D6, 16))
			{
				func_276(&(Local_65.f_1D6), 16);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_285() && iLocal_62 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_65.f_1E6.f_1);
				func_283(&(Local_65.f_1D6), 16);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_65.f_1D6, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_65.f_1E6.f_1);
				func_283(&(Local_65.f_1D6), 16);
			}
			break;
	}
}

void func_65()//Position - 0x340B
{
	switch (iLocal_118)
	{
		case 0:
			if (Local_65.f_9E)
			{
				iLocal_118 = 1;
			}
			break;
		
		case 1:
			if (func_285())
			{
				if (func_14(&(Local_65.f_9E.f_1)))
				{
					func_39(&(Local_65.f_9E.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				func_12(&(Local_65.f_9E.f_1));
				iLocal_118 = 2;
			}
			break;
		
		case 2:
			if (func_285())
			{
				iLocal_118 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_66()//Position - 0x34A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_173();
	if (((((iLocal_57 == 1 || iLocal_57 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_65)) && !func_172(-1082130432)) && !PED::IS_PED_INJURED(Local_65.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_63 != 2 && iLocal_63 != 3) && iLocal_63 != 4) && func_285())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_63)
		{
			case 0:
				if (func_1(Local_65.f_1D6, 4) && func_24(Local_65) == joaat("weapon_unarmed"))
				{
					if (func_171(iLocal_79, &(Local_65.f_1E6.f_6), Local_65.f_1E6.f_9.f_2, &(Local_65.f_66.f_1A[0 /*3*/]), &(Local_65.f_66.f_1A[1 /*3*/]), &(Local_65.f_66.f_21), &(Local_65.f_66.f_24)))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_65.f_66.f_21, 1) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_65.f_66.f_1A[0 /*3*/], Local_65.f_66.f_1A[1 /*3*/], Local_65.f_66.f_24, 0, 1, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_65.f_66.f_21, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_170())
									{
										func_169("SHR_MENU");
									}
									Local_65.f_1D5 = -1;
									func_168(&(Local_65.f_1D5), 4, "SHR_MENU", 0, 0);
									MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
									MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 0);
									iLocal_63 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_65.f_66.f_21, 135f) || !func_24(Local_65) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					Local_65.f_66.f_16 = -1;
					func_167(&(Local_65.f_1D5));
					iLocal_63 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_170()) && !func_166(Local_65.f_1D5, 0))
				{
					func_169("SHR_MENU");
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_164(Local_65.f_1D5, 1))
					{
						if (func_27("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						MISC::SET_BIT(&(Local_65.f_A2.f_12), 1);
						func_12(&(Local_65.f_66.f_35));
						func_167(&(Local_65.f_1D5));
						func_163(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_65.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65.f_2, 0);
						}
						iLocal_63 = 2;
					}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(uLocal_117))
				{
					uLocal_117 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_162(iLocal_79, Local_65.f_1E6.f_6, Local_65.f_1E6.f_9.f_2, &(Local_65.f_66), &(Local_65.f_66.f_3), &uVar6);
				CAM::SET_CAM_COORD(uLocal_117, Local_65.f_66);
				CAM::SET_CAM_ROT(uLocal_117, Local_65.f_66.f_3, 2);
				CAM::SET_CAM_FOV(uLocal_117, 35f);
				CAM::SHAKE_CAM(uLocal_117, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_117, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					func_276(&(Local_65.f_1D6), 2048);
				}
				Local_65.f_66.f_2E = func_63(iLocal_79);
				Local_65.f_66.f_17 = 0;
				Local_65.f_66.f_18 = 3;
				func_161(0);
				func_160(1, 1, 0, 0, 0);
				func_159(1, 2, 1, 1, 1);
				func_158(func_4(iLocal_79));
				func_156(1, Local_65.f_66.f_2E, Local_65.f_66.f_2E);
				func_155();
				func_152(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_152(0, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(0), 0);
				func_152(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_152(1, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(1), 0);
				func_152(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_152(2, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(2), 0);
				func_147(0);
				func_146(Local_65.f_66.f_17, 1, 1);
				func_145("SNK_ITEM1_D", 0, 0);
				func_144(201, "ITEM_SELECT", -1);
				func_144(202, "ITEM_BACK", -1);
				func_144(203, "SNK_LIFT", -1);
				iLocal_63 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_141(0, 0, 0, 1);
						func_140(0, -1);
						if (func_139())
						{
							if (Global_26CF15 != Local_65.f_66.f_17)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_65.f_66.f_17 = Global_26CF15;
								func_146(Local_65.f_66.f_17, 1, 1);
								Local_65.f_66.f_25 = 0;
								Local_65.f_66.f_29 = 0;
								Local_65.f_66.f_2A = 0;
								sVar5 = func_138(Local_65.f_66.f_17);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar5))
								{
									func_145(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_102(1, iLocal_79, 1, 0, 1, -1082130432, 0, 0);
				func_98();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201) || iVar4 == 1)
				{
					Local_65.f_66.f_25 = 1;
					Local_65.f_66.f_29 = 0;
					Local_65.f_66.f_2A = 0;
					if (Local_65.f_66.f_28 && Local_65.f_66.f_2B)
					{
						Local_65.f_66.f_2C = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_107 = 1;
						iLocal_110 = Local_65.f_66.f_17;
						iLocal_63 = 4;
					}
					else
					{
						Local_65.f_66.f_2C = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203))
				{
					iLocal_63 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_97();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					iLocal_63 = 7;
					Local_65.f_66.f_2D = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_97();
				}
				break;
			
			case 4:
				func_102(1, iLocal_79, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_65.f_66.f_17)
				{
					case 0:
						iVar0 = func_151(Local_65.f_66.f_17);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10);
						}
						break;
					
					case 1:
						iVar0 = func_151(Local_65.f_66.f_17);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20);
						}
						break;
					
					case 2:
						iVar0 = func_151(Local_65.f_66.f_17);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15);
						}
						break;
				}
				func_68(func_92(), 96, iVar0);
				if (!Local_65.f_66.f_27)
				{
					iLocal_50 = 34;
					Local_65.f_66.f_27 = 1;
				}
				func_12(&(Local_65.f_66.f_35));
				iLocal_63 = 3;
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_85)
					{
					}
					iLocal_63 = 6;
				}
				break;
			
			case 6:
				switch (Local_65.f_66.f_17)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				func_163(23, 0);
				iLocal_50 = 35;
				if (!PED::IS_PED_INJURED(Local_65.f_2) && func_1(Local_65.f_1D6, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_65.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_63 = 8;
				break;
			
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_65.f_66.f_2D) > 1000)
				{
					iLocal_63 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 193);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_63 != 8 && func_1(Local_65.f_1D6, 4))
		{
			if ((iLocal_63 == 3 || iLocal_63 == 2) || iLocal_63 == 4)
			{
				func_97();
			}
			iLocal_63 = 8;
		}
		if (func_27("SHR_SNACKS"))
		{
			HUD::CLEAR_HELP(1);
			func_167(&(Local_65.f_1D5));
		}
		if (func_27("SHR_MENU"))
		{
			HUD::CLEAR_HELP(1);
			func_167(&(Local_65.f_1D5));
		}
		if (MISC::IS_BIT_SET(Local_65.f_A2.f_12, 1) && iLocal_100 < 2)
		{
			MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
		}
		if (func_1(Local_65.f_1D6, 4))
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3E25
{
	if (func_1(Local_65.f_1D6, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_283(&(Local_65.f_1D6), 2048);
		}
	}
	Local_65.f_66.f_25 = 0;
	MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
	if (CAM::DOES_CAM_EXIST(uLocal_117))
	{
		CAM::DESTROY_CAM(uLocal_117, 0);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x3E96
{
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_69(Global_17C49.f_744E[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EDF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_91();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_90(99, 1);
					func_89(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_77(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_76(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_90(95, iParam3);
					break;
				
				case 1:
					func_90(97, iParam3);
					break;
				
				case 2:
					func_90(96, iParam3);
					break;
			}
			func_90(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_72(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_72(iVar1);
	}
	iVar5 = (Global_CAD5[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CAD5[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CAD5[iVar2] = 2147483647;
				}
				else
				{
					Global_CAD5[iVar2] = (Global_CAD5[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_89(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CAD5[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CAD5[iVar2];
			Global_CAD5[iVar2] = (Global_CAD5[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/]++;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1++;
		if (Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_8861 == 15)
	{
		func_70(0);
	}
	return 1;
}

void func_70(bool bParam0)//Position - 0x44E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CADD[iVar0 /*3*/][0] = Global_17C49.f_5CED[iVar0];
		Global_CADD.f_1F[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_B[iVar0];
		Global_CADD.f_3E[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_16[iVar0];
		Global_CADD.f_5D[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_21[iVar0];
		Global_CADD.f_7C[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_2C[iVar0];
		Global_CADD.f_9B[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_37[iVar0];
		Global_CADD.f_BA[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_42[iVar0];
		Global_CADD.f_D9[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_4D[iVar0];
		Global_CADD.f_F8[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_58[iVar0];
		if (!bParam0)
		{
			Global_CADD[iVar0 /*3*/][1] = Global_17C49.f_5CED[iVar0];
			Global_CADD.f_1F[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_B[iVar0];
			Global_CADD.f_3E[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_16[iVar0];
			Global_CADD.f_5D[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_21[iVar0];
			Global_CADD.f_7C[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_2C[iVar0];
			Global_CADD.f_9B[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_37[iVar0];
			Global_CADD.f_BA[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_42[iVar0];
			Global_CADD.f_D9[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_4D[iVar0];
			Global_CADD.f_F8[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_71(int iParam0)//Position - 0x4762
{
	int iVar0;
	
	iVar0 = Global_CAD5[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_72(int iParam0)//Position - 0x47BC
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_74() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_74() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_73(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_73(int iParam0)//Position - 0x487E
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_74()//Position - 0x48F8
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_75(int iParam0)//Position - 0x4905
{
	func_90(93, iParam0);
	func_90(29, iParam0);
	func_90(30, iParam0);
}

bool func_76(int iParam0)//Position - 0x4925
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_74() /*8053*/].f_167C.f_A, iParam0);
}

int func_77(bool bParam0)//Position - 0x4961
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_88(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_78(27, 1);
	return 1;
}

int func_78(int iParam0, int iParam1)//Position - 0x4A18
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_79(iParam0, iParam1);
}

int func_79(int iParam0, int iParam1)//Position - 0x4A33
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_87(&Global_26D4DB))
	{
		if (func_85(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_80(&Global_26D4DB, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_80(var uParam0, int iParam1)//Position - 0x4AB7
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	func_83(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_81(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_81(var uParam0, int iParam1)//Position - 0x4B3D
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_82(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)//Position - 0x4B8D
{
	return (*uParam0)[iParam1] == 61;
}

void func_83(var uParam0)//Position - 0x4B9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_84(uParam0, iVar0);
		iVar0++;
	}
	func_13(&(uParam0->f_3E), (8f - 0.5f));
}

void func_84(var uParam0, int iParam1)//Position - 0x4BD5
{
	(*uParam0)[iParam1] = 61;
}

bool func_85(var uParam0, int iParam1)//Position - 0x4BE5
{
	return func_86(uParam0, iParam1) != -1;
}

int func_86(var uParam0, int iParam1)//Position - 0x4BF7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_87(var uParam0)//Position - 0x4C24
{
	return uParam0->f_44 == 1;
}

int func_88(int iParam0, int iParam1)//Position - 0x4C32
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

void func_89(int iParam0, int iParam1)//Position - 0x4C83
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_90(int iParam0, int iParam1)//Position - 0x4CA6
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_C53D[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_C53D[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_91()//Position - 0x4D03
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CAD5[0] == iVar0)
		{
			Global_CAD5[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CAD5[1] == iVar0)
		{
			Global_CAD5[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CAD5[2] == iVar0)
		{
			Global_CAD5[2] = iVar0;
		}
	}
}

int func_92()//Position - 0x4D78
{
	func_93();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_93()//Position - 0x4D91
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_95(PLAYER::PLAYER_PED_ID());
			if (func_94(iVar0) && (!func_299(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_94(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_94(int iParam0)//Position - 0x4E8E
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x4E9A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)//Position - 0x4ED7
{
	if (func_94(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()//Position - 0x4F01
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_283(&(Local_65.f_1D6), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	func_163(23, 0);
	Local_65.f_66.f_25 = 0;
	MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
	if (CAM::DOES_CAM_EXIST(uLocal_117))
	{
		CAM::DESTROY_CAM(uLocal_117, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_98()//Position - 0x4F79
{
	char* sVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 193);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (func_101())
	{
		Local_65.f_66.f_25 = 0;
		func_39(&(Local_65.f_66.f_35));
		Local_65.f_66.f_17 = (Local_65.f_66.f_17 - 1);
		if (Local_65.f_66.f_17 < 0)
		{
			Local_65.f_66.f_17 = (Local_65.f_66.f_18 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_146(Local_65.f_66.f_17, 1, 1);
		sVar0 = func_138(Local_65.f_66.f_17);
		Local_65.f_66.f_29 = 0;
		Local_65.f_66.f_2A = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_145(sVar0, 0, 0);
		}
	}
	if (func_100())
	{
		Local_65.f_66.f_25 = 0;
		func_39(&(Local_65.f_66.f_35));
		Local_65.f_66.f_17++;
		if (Local_65.f_66.f_17 > (Local_65.f_66.f_18 - 1))
		{
			Local_65.f_66.f_17 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_146(Local_65.f_66.f_17, 1, 1);
		sVar0 = func_138(Local_65.f_66.f_17);
		Local_65.f_66.f_29 = 0;
		Local_65.f_66.f_2A = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_145(sVar0, 0, 0);
		}
	}
	if (!Local_65.f_66.f_29)
	{
		Local_65.f_66.f_28 = func_99(func_95(PLAYER::PLAYER_PED_ID())) >= func_151(Local_65.f_66.f_17);
		Local_65.f_66.f_29 = 1;
	}
	if (!Local_65.f_66.f_2A)
	{
		Local_65.f_66.f_2B = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_65.f_66.f_2A = 1;
	}
	if (Local_65.f_66.f_25)
	{
		if (func_40(&(Local_65.f_66.f_35)) < 3f)
		{
			if (Local_65.f_66.f_2C)
			{
				func_145("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_65.f_66.f_28)
			{
				func_145("SNK_AFFORD", 0, 0);
			}
			else if (!Local_65.f_66.f_2B)
			{
				func_145("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_65.f_66.f_25 = 0;
			Local_65.f_66.f_2C = 0;
			func_39(&(Local_65.f_66.f_35));
			sVar0 = func_138(Local_65.f_66.f_17);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_145(sVar0, 0, 0);
			}
		}
	}
}

int func_99(int iParam0)//Position - 0x5198
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_100()//Position - 0x51F0
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_14(&uLocal_114))
		{
			func_11(&uLocal_114);
			return 1;
		}
		else if (func_8(&uLocal_114) > 0.25f)
		{
			func_12(&uLocal_114);
			return 1;
		}
	}
	else if (func_14(&uLocal_114))
	{
		func_39(&uLocal_114);
	}
	return 0;
}

int func_101()//Position - 0x526F
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_14(&uLocal_111))
		{
			func_11(&uLocal_111);
			return 1;
		}
		else if (func_8(&uLocal_111) > 0.25f)
		{
			func_12(&uLocal_111);
			return 1;
		}
	}
	else if (func_14(&uLocal_111))
	{
		func_39(&uLocal_111);
	}
	return 0;
}

void func_102(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x52EE
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	float fVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	int iVar55;
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_135(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_133(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar53 = fVar36;
			fVar53 = (fVar53 + 0f);
		}
		else
		{
			Global_4354 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar54 = Global_4352;
	}
	else
	{
		fVar54 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_4353;
	}
	fVar57 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar55, &iVar56);
		fVar58 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_132())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_132())
		{
			fVar57 = 1f;
		}
		iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar55) / fVar57));
		iVar56 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) / fVar57));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar55, &iVar56);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_4354.f_137A)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar47 = Global_4352;
			}
			else
			{
				if (Global_4354)
				{
					GRAPHICS::DRAW_SPRITE(func_131(29), func_129(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_4354.f_1C09)
				{
					iVar1 = Global_4354.f_1C05;
					iVar2 = Global_4354.f_1C06;
					iVar3 = Global_4354.f_1C07;
					iVar4 = Global_4354.f_1C08;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_128(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_127();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_4354.f_44)
					{
						if (Global_4354.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_4354.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E[iVar16], Global_4354.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_4354.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_4351 + 0.00390625f), ((Global_4352 + fVar53) + 0.00416664f), 0);
				}
				if (Global_4354.f_137D > Global_4354.f_1193)
				{
					if (Global_4354.f_1380 != 0)
					{
						func_127();
						func_125((((Global_4351 + fParam5) - 0.00390625f) - func_126("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
					}
				}
			}
			iVar6 = Global_4354.f_1381;
			iVar9 = 0;
			fVar60 = fVar47;
			if (Global_4354.f_1C13)
			{
				iVar1 = Global_4354.f_1C0F;
				iVar2 = Global_4354.f_1C10;
				iVar3 = Global_4354.f_1C11;
				iVar4 = Global_4354.f_1C12;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_4354.f_1193 && iVar6 <= Global_4354.f_118C)
			{
				if (iVar6 >= 0)
				{
					if (Global_4354.f_1291[iVar6])
					{
						if (Global_4354.f_1213[iVar6] && iVar6 != Global_4354.f_1381)
						{
							fVar47 = (fVar47 + 0.00277776f);
						}
						fVar52 = 0.034722f;
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar52 = Global_4354.f_1388[iVar6];
						}
						fVar47 = (fVar47 + fVar52);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar52 = 0.034722f;
					fVar47 = (fVar47 + fVar52);
					iVar9++;
					if (Global_4354.f_118C <= 1)
					{
						Global_4354.f_118C++;
					}
					iVar50 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar60 + ((fVar47 - fVar60) * 0.5f)) - 0.00138888f), fParam5, (fVar47 - fVar60), 0f, 255, 255, 255, 255, 0);
			if (Global_4354.f_137D > Global_4354.f_1193)
			{
				if (Global_4354.f_1C18)
				{
					iVar1 = Global_4354.f_1C14;
					iVar2 = Global_4354.f_1C15;
					iVar3 = Global_4354.f_1C16;
					iVar4 = Global_4354.f_1C17;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_128(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar57));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar57));
				if (Global_4354.f_1C25)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar55)), (Var37.f_1 / IntToFloat(iVar56)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar47 = (fVar47 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_4354.f_F81)) != 0 && Global_4354.f_FCB != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_4354.f_FCD != 0)
				{
					func_133(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_124(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_128(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_124(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_4354.f_FCD != 0)
				{
					func_133(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_123(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_FCD), func_129(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4354.f_FCB > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4354.f_FCC) > Global_4354.f_FCB)
					{
						StringCopy(&(Global_4354.f_F81), "", 16);
						Global_4354.f_FCB = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_15)) != 0 && Global_26CEC9.f_41 != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_26CEC9.f_43 != 0)
				{
					func_133(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_124(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_128(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_124(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_26CEC9.f_43 != 0)
				{
					func_133(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_123(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_131(Global_26CEC9.f_43), func_129(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_26CEC9.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_26CEC9.f_42) > Global_26CEC9.f_41)
					{
						StringCopy(&(Global_26CEC9.f_15), "", 16);
						Global_26CEC9.f_41 = -1;
					}
				}
			}
			func_115(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_4354.f_137A)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar61 = Global_4354.f_118C;
			if (Global_4354.f_137B)
			{
				iVar61 = (Global_4354.f_137E - 1);
			}
			fVar62 = 0f;
			fVar63 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar61)
			{
				fVar52 = 0.034722f;
				if (Global_4354.f_1388[iVar6] != 0f)
				{
					fVar52 = Global_4354.f_1388[iVar6];
				}
				if (Global_4354.f_137B)
				{
					iVar6 = Global_4354.f_1AB1[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_4354.f_1381 && iVar9 < Global_4354.f_1193)
				{
					bVar32 = true;
					if (Global_4354.f_1382 == iVar6)
					{
						fVar63 = fVar62;
					}
					if (Global_4354.f_1213[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_4354.f_140B[iVar6] = fVar34;
				fVar33 = (Global_4351 + 0.0046875f);
				bVar38 = false;
				bVar31 = Global_4354.f_1382 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar64 = 255;
					iVar65 = 255;
					iVar66 = 255;
					iVar67 = 255;
					if (Global_4354.f_1C1F)
					{
						HUD::GET_HUD_COLOUR(Global_4354.f_1C1E, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_4351 + (fParam5 * 0.5f)), (((fVar54 + fVar63) + (0.00277776f * IntToFloat(iVar12))) + (fVar52 * 0.5f)), fParam5, fVar52, 0f, iVar64, iVar65, iVar66, iVar67, 0);
					Global_4354.f_1409 = fVar34;
				}
				if (iVar50 && iVar7 == iVar61)
				{
					func_113(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar38 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_4354.f_1194)
					{
						if (MISC::IS_BIT_SET(Global_4354.f_110E[iVar6], iVar8) || Global_4354.f_10ED[iVar8] == 5)
						{
							if (Global_4354.f_137B)
							{
								iVar19 = Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar20 = Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar21 = Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar22 = Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar23 = Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)];
							}
							else
							{
								Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar19;
								Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar20;
								Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar21;
								Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar22;
								Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar23;
							}
							iVar68 = 0;
							bVar51 = false;
							if (Global_4354.f_148C[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[0])
								{
									bVar51 = true;
									iVar68 = 0;
								}
							}
							if (Global_4354.f_148C[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[1])
								{
									bVar51 = true;
									iVar68 = 1;
								}
							}
							if (Global_4354.f_10F3[iVar8] != -1f)
							{
								fVar33 = ((Global_4351 + 0.0046875f) + Global_4354.f_10F3[iVar8]);
							}
							if ((iVar8 < 4 && Global_4354.f_10F3[iVar8 + 1] != -1f) && fVar33 < Global_4354.f_10F3[iVar8 + 1])
							{
								fVar43 = (Global_4354.f_10F3[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar43 = (((Global_4351 + Global_4353) - 0.0046875f) - fVar33);
							}
							if ((Global_4354.f_1100[iVar8] && Global_4354.f_1406) && bVar31)
							{
								bVar49 = true;
							}
							else
							{
								bVar49 = false;
							}
							switch (Global_4354.f_10ED[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											fVar40 = 0f;
											fVar41 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												bVar48 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
													{
														bVar48 = true;
													}
													iVar14++;
												}
												func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_4354.f_49[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_133(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + fVar35);
														if (iVar14 > 0)
														{
															fVar41 = (fVar41 - (0.00078125f * 4f));
														}
														if (Global_4354.f_F03[(iVar22 + iVar14)] == 2)
														{
															fVar41 = (fVar41 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - (fVar40 + fVar41)) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - ((fVar40 + fVar41) * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
											Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_133(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_133(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(26), func_129(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_133(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_133(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(27), func_129(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											bVar48 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													bVar48 = true;
												}
												iVar14++;
											}
											func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_112(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_49[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_4354.f_F03[(iVar22 + iVar28)] == 2)
												{
													if (func_133(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_133(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_123(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[(iVar22 + iVar28)]), func_129(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[(iVar22 + iVar28)]), func_129(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															fVar39 = (fVar39 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_4354.f_1108[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar39) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar39), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar39 = (fVar39 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_4354.f_F03[(iVar22 + iVar14)] != 2)
												{
													if (func_133(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_133(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_123(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[(iVar22 + iVar14)]), func_129(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[(iVar22 + iVar14)]), func_129(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[(iVar22 + iVar14)]), func_129(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
														}
														fVar39 = (fVar39 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar38 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_112(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[iVar20]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_133(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_133(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(26), func_129(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_133(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_133(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(27), func_129(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_111((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_112(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_133(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_133(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(26), func_129(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_133(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_133(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_123(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_131(27), func_129(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_113(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_110((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_133(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_4354.f_137B)
											{
												fVar41 = fVar35;
												fVar39 = 0f;
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 + ((fVar43 - fVar41) + (0.00078125f * 1f)));
												}
												else if (Global_4354.f_1108[iVar8] == 0)
												{
													fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar41 * 0.5f)));
												}
												Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
												Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
											}
											else
											{
												fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
												fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
											}
											if (bVar49)
											{
												if (func_133(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_133(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_123(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_131(26), func_129(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_133(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_133(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_123(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_131(27), func_129(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_133(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_123(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_131(Global_4354.f_F03[iVar22]), func_129(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_109(Global_4354.f_F03[iVar22])), (fVar36 * func_109(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
											}
										}
									}
									bVar38 = true;
									iVar22++;
									break;
								
								case 5:
									bVar38 = true;
									break;
							}
							if (Global_4354.f_10ED[iVar8] == 5)
							{
								if (Global_4354.f_10F9[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								if (Global_4354.f_1100[iVar8])
								{
									if (func_133(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar38)
				{
					if (bVar32)
					{
						Global_4354.f_1AB1[iVar9] = iVar6;
						Global_4354.f_1383 = iVar6;
						iVar9++;
						if (Global_4354.f_1213[iVar6])
						{
							iVar13++;
						}
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar62 = (fVar62 + Global_4354.f_1388[iVar6]);
						}
						else
						{
							fVar62 = (fVar62 + 0.034722f);
						}
					}
					if (!Global_4354.f_137A)
					{
						Global_4354.f_1291[iVar6] = 1;
						if (Global_4354.f_1195[iVar6])
						{
							if (bVar31)
							{
								Global_4354.f_1380 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_4354.f_1380 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_4354.f_137A)
			{
				Global_4354.f_137C = ((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12)));
				Global_4354.f_137F = iVar11;
				Global_4354.f_137D = iVar10;
				Global_4354.f_137A = 1;
			}
		}
		iVar5++;
	}
	if (!Global_4354.f_137B)
	{
		Global_4354.f_137E = iVar9;
		Global_4354.f_137B = 1;
	}
	Global_4354.f_1408 = fVar47;
	Global_4354.f_140A = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_4354.f_1408);
	if (!Global_4354.f_1C04)
	{
		func_104();
	}
	Global_4354.f_1C04 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_103(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_103(int iParam0)//Position - 0x7BFE
{
	Global_1446E8.f_2F4 = iParam0;
}

void func_104()//Position - 0x7C0F
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_108(0))
		{
			func_105(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_105(int iParam0)//Position - 0x7C37
{
	if (Global_38D7)
	{
		func_107(0, 0);
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
	if (!func_106())
	{
		Global_3839.f_1 = 3;
	}
}

int func_106()//Position - 0x7CA7
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107(bool bParam0, bool bParam1)//Position - 0x7CCE
{
	if (bParam0)
	{
		if (func_108(0))
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

int func_108(int iParam0)//Position - 0x7D42
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

float func_109(int iParam0)//Position - 0x7D9C
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_110(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x7E05
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_111(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x7E24
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_112(bool bParam0)//Position - 0x7E42
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x7E88
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_114(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_114(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8020
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x82AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_135(bParam4, bParam8))
	{
		return;
	}
	if (func_121())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_118(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_4354.f_FCE != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (Global_4354.f_10CF[iVar1] != 332)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10CF[iVar1], 1), 64);
				}
				else if (Global_4354.f_10DC[iVar1] != 31)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10DC[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_4354.f_FCF = 0;
		}
		if (!Global_4354.f_FCF)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_4354.f_1106 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_117(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_117(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_116(&(Global_4354.f_1091[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_4354.f_10CF[iVar1] != 332 && MISC::IS_BIT_SET(Global_4354.f_10E9, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_10CF[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_FCE);
				func_117(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_116(&(Global_26CEC9.f_10));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_4354.f_1107)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_4354.f_FCF = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_4354.f_FCE)
		{
			if (Global_4354.f_10C2[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_26CEC9.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_4354.f_1C27)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_4354.f_1C27 = 1;
			}
		}
		else if (Global_4354.f_1C27)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_4354.f_1C27 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_4354.f_10EC)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_4354.f_1336[iVar0 /*10*/], Global_4354.f_10EA, Global_4354.f_10EB, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_4354.f_1336[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_116(var uParam0)//Position - 0x8785
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_117(var uParam0)//Position - 0x8797
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_118(int iParam0, int iParam1)//Position - 0x87A5
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_119(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_119(int iParam0, bool bParam1)//Position - 0x87F0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_120();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_120()//Position - 0x8831
{
	return Global_1407E1;
}

int func_121()//Position - 0x883D
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_122())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_3802 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_122()//Position - 0x88AB
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_123(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x88C5
{
	var uVar0;
	
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_124(float fParam0)//Position - 0x8979
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_125(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x89D8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_126(char* sParam0, int iParam1, int iParam2)//Position - 0x89FB
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_127();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_127()//Position - 0x8A3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_4354.f_1C0E)
	{
		iVar0 = Global_4354.f_1C0A;
		iVar1 = Global_4354.f_1C0B;
		iVar2 = Global_4354.f_1C0C;
		iVar3 = Global_4354.f_1C0D;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_4351 + 0.0046875f), ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_128(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8AC7
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_129(int iParam0, bool bParam1)//Position - 0x8AF6
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_130(&(Global_4354.f_17A0[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_130(var uParam0)//Position - 0x8ED6
{
	return uParam0;
}

char* func_131(int iParam0)//Position - 0x8EE0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_130(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_132()//Position - 0x8F0F
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x8F41
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_131(iParam0);
	sVar1 = func_129(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_132())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_132())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_134(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_134(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_4353)
			{
				*fParam4 = (*fParam4 * (Global_4353 / *fParam3));
				*fParam3 = Global_4353;
			}
		}
		return 1;
	}
	return 0;
}

float func_134(int iParam0)//Position - 0x90A8
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_135(bool bParam0, bool bParam1)//Position - 0x9141
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_137(8, -1) && func_136() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_136()//Position - 0x91DE
{
	return Global_1413F8;
}

bool func_137(int iParam0, int iParam1)//Position - 0x91EA
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

char* func_138(int iParam0)//Position - 0x9225
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_139()//Position - 0x925E
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x9285
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_26CF15 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_26CF15 = -1;
			return 0;
		}
	}
	if (((Global_26CF15 > -1 || Global_26CF15 == -3) || Global_26CF15 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_26CF15 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_26CF15 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_141(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9360
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_26CF15 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_4351;
	fVar2 = (fVar0 + Global_4353);
	fVar3 = Global_4354.f_137C;
	fVar1 = (Global_4354.f_137C - (IntToFloat(Global_4354.f_137E) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_4354.f_137E < 1)
	{
		fVar1 = (Global_4354.f_137C - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_143();
	if (Global_26CF15 == -6)
	{
		return;
	}
	Global_26CF15 = -1;
	fVar7 = Global_26CF0F;
	fVar8 = Global_26CF10;
	if (Global_4354.f_137F > Global_4354.f_137E)
	{
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= fVar3) && Global_26CF10 < (fVar3 + fVar6))
		{
			Global_26CF15 = -2;
			if (bParam3)
			{
				func_142(0);
			}
			return;
		}
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= (fVar3 + fVar6)) && Global_26CF10 < (fVar3 + 0.034722f))
		{
			Global_26CF15 = -3;
			if (bParam3)
			{
				func_142(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_4354.f_137F == -1)
		{
			Global_26CF15 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_4354.f_137E);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_128(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_4353, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_26CF15 = Global_4354.f_1AB1[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_26CF15 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_26CF15 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_26CF15 = -4;
		return;
	}
	Global_26CF15 = -1;
}

void func_142(bool bParam0)//Position - 0x960C
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_4351;
	fVar1 = Global_4354.f_137C;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_26CF15 == -2)
	{
		func_128(fVar0, fVar1, Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_26CF15 == -3)
	{
		func_128(fVar0, (fVar1 + fVar2), Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_143()//Position - 0x9695
{
	Global_26CF11 = Global_26CF0F;
	Global_26CF12 = Global_26CF10;
	Global_26CF0F = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_26CF10 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_26CF13 = (Global_26CF0F - Global_26CF11);
	Global_26CF14 = (Global_26CF10 - Global_26CF12);
}

void func_144(int iParam0, char* sParam1, int iParam2)//Position - 0x96DD
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_4354.f_FCE >= 12)
	{
		StringCopy(&Global_26CEC9, sVar0, 64);
		StringCopy(&(Global_26CEC9.f_10), sParam1, 16);
		Global_26CEC9.f_14 = iParam2;
		return;
		return;
	}
	MISC::SET_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = iParam0;
	Global_4354.f_10DC[Global_4354.f_FCE] = 31;
	Global_4354.f_FCE++;
}

void func_145(char* sParam0, int iParam1, int iParam2)//Position - 0x978C
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_F81), sParam0, 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = iParam1;
	Global_4354.f_FCC = MISC::GET_GAME_TIMER();
	Global_4354.f_FCD = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
}

void func_146(var uParam0, bool bParam1, int iParam2)//Position - 0x97F1
{
	int iVar0;
	int iVar1;
	
	Global_4354.f_1382 = uParam0;
	Global_4354.f_1406 = iParam2;
	if (Global_4354.f_1382 < Global_4354.f_1381)
	{
		Global_4354.f_1381 = Global_4354.f_1382;
	}
	else if ((Global_4354.f_137B && Global_4354.f_1382 > Global_4354.f_1383) || (!Global_4354.f_137B && Global_4354.f_1382 >= (Global_4354.f_1381 + Global_4354.f_1193)))
	{
		iVar0 = Global_4354.f_1381;
		while (iVar0 <= Global_4354.f_1382)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_4354.f_110E[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_4354.f_1193 && Global_4354.f_1381 < 125)
		{
			Global_4354.f_1381++;
			iVar1 = 0;
			iVar0 = Global_4354.f_1381;
			while (iVar0 <= Global_4354.f_1382)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_4354.f_110E[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	if (bParam1)
	{
		StringCopy(&(Global_4354.f_F81), "", 16);
		StringCopy(&(Global_26CEC9.f_15), "", 16);
	}
}

void func_147(int iParam0)//Position - 0x9941
{
	Global_4354.f_1381 = iParam0;
}

void func_148(var uParam0, bool bParam1)//Position - 0x9951
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_4354.f_1190 >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 >= 4)
	{
		return;
	}
	if (Global_4354.f_1387 != 1)
	{
		return;
	}
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		return;
	}
	Global_4354.f_D0C[Global_4354.f_1190] = uParam0;
	Global_4354.f_1190++;
	Global_4354.f_628[Global_4354.f_1385 /*5*/][Global_4354.f_1386] = 2;
	Global_4354.f_1386++;
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		fVar0 = func_150();
		if (Global_4354.f_1100[Global_4354.f_118D] && Global_4354.f_1386 == Global_4354.f_1384)
		{
			func_133(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_4354.f_10F9[(Global_4354.f_118D - 1)])
		{
			Global_4354.f_10F9[(Global_4354.f_118D - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_4354.f_1386 >= Global_4354.f_1384)
		{
			fVar3 = func_149();
			if (fVar3 > Global_4354.f_1388[Global_4354.f_118C])
			{
				Global_4354.f_1388[Global_4354.f_118C] = fVar3;
			}
		}
	}
}

float func_149()//Position - 0x9A8B
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_4354.f_F03[((Global_4354.f_1192 - iVar1) + iVar0)] != 0)
		{
			if (func_133(Global_4354.f_F03[((Global_4354.f_1192 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_150()//Position - 0x9B3E
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_113(0, 1, 0, 0, 0, iVar6 > 0);
	if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_4354.f_49[Global_4354.f_1385 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(Global_4354.f_1385 + iVar8) /*4*/]));
			}
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(Global_4354.f_1385 + iVar8) /*4*/]));
			}
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[((Global_4354.f_1190 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[((Global_4354.f_1191 - iVar4) + iVar10)], Global_4354.f_E85[((Global_4354.f_1191 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_4354.f_F03[((Global_4354.f_1192 - iVar5) + iVar7)] != 0)
		{
			func_133(Global_4354.f_F03[((Global_4354.f_1192 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_151(int iParam0)//Position - 0x9F19
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_152(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x9F47
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_4354.f_118C > iParam0)
	{
		return;
	}
	if (Global_4354.f_118C >= 125)
	{
		return;
	}
	if (Global_4354.f_118E >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 < Global_4354.f_1384)
	{
		return;
	}
	if (Global_4354.f_118C != iParam0)
	{
		Global_4354.f_118C = iParam0;
		Global_4354.f_118D = 0;
	}
	iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
	if (iVar0 != 1)
	{
		while (Global_4354.f_118D < 4 && iVar0 != 1)
		{
			Global_4354.f_118D++;
			iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_4354.f_49[Global_4354.f_118E /*4*/]), sParam1, 16);
	Global_4354.f_432[Global_4354.f_118E] = iParam3;
	Global_4354.f_52D[Global_4354.f_118E] = iParam4;
	Global_4354.f_118E++;
	if (iParam2 == 0)
	{
		fVar1 = func_154(sParam1);
		if (Global_4354.f_1100[Global_4354.f_118D])
		{
			func_133(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_4354.f_10F9[Global_4354.f_118D])
		{
			Global_4354.f_10F9[Global_4354.f_118D] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_153(sParam1);
			if (fVar4 > Global_4354.f_1388[iParam0])
			{
				Global_4354.f_1388[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_4354.f_110E[iParam0]), Global_4354.f_118D);
	Global_4354.f_118D++;
	Global_4354.f_1387 = 1;
	Global_4354.f_1385 = (Global_4354.f_118E - 1);
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = iParam2;
}

float func_153(char* sParam0)//Position - 0xA107
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_154(char* sParam0)//Position - 0xA123
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_113(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_155()//Position - 0xA15F
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_156(int iParam0, char* sParam1, char* sParam2)//Position - 0xA17D
{
	Global_4354 = iParam0;
	func_157(29, sParam1, sParam2);
}

void func_157(int iParam0, char* sParam1, char* sParam2)//Position - 0xA194
{
	StringCopy(&(Global_4354.f_148F[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_4354.f_17A0[iParam0 /*16*/]), sParam2, 64);
}

void func_158(char* sParam0)//Position - 0xA1B8
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_1), sParam0, 16);
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA203
{
	Global_4354.f_1108[0] = iParam0;
	Global_4354.f_1108[1] = iParam1;
	Global_4354.f_1108[2] = iParam2;
	Global_4354.f_1108[3] = iParam3;
	Global_4354.f_1108[4] = iParam4;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA242
{
	Global_4354.f_10ED[0] = iParam0;
	Global_4354.f_10ED[1] = iParam1;
	Global_4354.f_10ED[2] = iParam2;
	Global_4354.f_10ED[3] = iParam3;
	Global_4354.f_10ED[4] = iParam4;
	Global_4354.f_1194 = 0;
	if (iParam0 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam1 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam2 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam3 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam4 != 0)
	{
		Global_4354.f_1194++;
	}
}

void func_161(bool bParam0)//Position - 0xA2EC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_4354.f_49[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_4354.f_628[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_252911[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_4354.f_D0C[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_E07[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_F03[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_110E[iVar0] = 0;
		Global_4354.f_1195[iVar0] = 0;
		Global_4354.f_1213[iVar0] = 0;
		Global_4354.f_140B[iVar0] = 0f;
		Global_4354.f_1291[iVar0] = 0;
		Global_4354.f_1388[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_4354.f_10ED[iVar0] = 0;
		Global_4354.f_10F9[iVar0] = 0f;
		Global_4354.f_10F3[iVar0] = -1f;
		Global_4354.f_1100[iVar0] = 0;
		Global_4354.f_1108[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_4354.f_1091[iVar0 /*4*/]), "", 16);
		Global_4354.f_10C2[iVar0] = -1;
		Global_4354.f_10CF[iVar0] = 332;
		Global_4354.f_10DC[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_4354.f_148F[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4354.f_17A0[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_26CEC9.f_10), "", 16);
	Global_26CEC9.f_14 = -1;
	Global_4354 = 0;
	Global_4354.f_118C = 0;
	Global_4354.f_118D = 0;
	Global_4354.f_118E = 0;
	Global_4354.f_1190 = 0;
	Global_4354.f_1191 = 0;
	Global_4354.f_1192 = 0;
	Global_4354.f_118F = 0;
	Global_4354.f_1406 = 0;
	Global_4354.f_1382 = 0;
	Global_4354.f_1381 = 0;
	Global_4354.f_1383 = 0;
	StringCopy(&(Global_4354.f_F81), "", 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = 0;
	Global_4354.f_FCC = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_FCD = 0;
	StringCopy(&(Global_26CEC9.f_15), "", 16);
	Global_26CEC9.f_3D = 0;
	Global_26CEC9.f_3E = 0;
	Global_26CEC9.f_3F = 0;
	Global_26CEC9.f_40 = 0;
	Global_26CEC9.f_41 = 0;
	Global_26CEC9.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_26CEC9.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_26CEC9.f_43 = 0;
	StringCopy(&(Global_4354.f_1), "", 16);
	Global_4354.f_10FF = 0f;
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_1387 = 0;
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = 0;
	Global_4354.f_1385 = 0;
	Global_4354.f_FCE = 0;
	Global_4354.f_FCF = 0;
	Global_4354.f_1193 = 10;
	Global_4354.f_1194 = 0;
	Global_4354.f_1408 = 0f;
	Global_4354.f_1409 = 0f;
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	Global_4354.f_137C = 0f;
	Global_4354.f_137D = 0;
	Global_4354.f_137F = 0;
	Global_4354.f_137E = 0;
	Global_4354.f_1380 = 0;
	Global_4354.f_1C23 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_4354.f_1489[iVar0] = -1;
		Global_4354.f_148C[iVar0] = -1;
		iVar0++;
	}
	Global_4354.f_1106 = 0f;
	Global_4354.f_10E9 = 0;
	Global_4354.f_1107 = 0;
	Global_4354.f_1C0E = 0;
	Global_4354.f_1C09 = 0;
	Global_4354.f_1C13 = 0;
	Global_4354.f_1C18 = 0;
	Global_4354.f_1C1D = 0;
	Global_4354.f_1C1F = 0;
	Global_4354.f_1C25 = 0;
	Global_4351 = 0.05f;
	Global_4352 = 0.05f;
	Global_4353 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_4353 = 0.225f;
	}
}

int func_162(int iParam0, struct<3> Param1, float fParam2, var uParam3, var uParam4, var uParam5)//Position - 0xA77D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case -2:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_163(int iParam0, bool bParam1)//Position - 0xA905
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6070, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_6070, iParam0);
	}
}

int func_164(int iParam0, bool bParam1)//Position - 0xA927
{
	int iVar0;
	
	iVar0 = func_165(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_108(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/] == 1 && Global_8B1D[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_8B1D[iVar0 /*18*/].f_10)
				{
					return 0;
				}
			}
			Global_8B1D[iVar0 /*18*/].f_4 = 1;
			Global_8B1D[iVar0 /*18*/].f_10 = 1;
			return 1;
		}
		else
		{
			if (Global_8B1D[iVar0 /*18*/] == 0)
			{
			}
			if (Global_8B1D[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0xA9DF
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_166(int iParam0, int iParam1)//Position - 0xAA1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_165(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_8B1D[iVar0 /*18*/].f_5)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_8B1D[iVar0 /*18*/].f_B)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_8B1D[iVar0 /*18*/].f_7));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8B8C);
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_8B1D[iVar0 /*18*/].f_7));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8B8C);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8B1D[iVar0 /*18*/].f_C));
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return iVar1;
}

void func_167(var uParam0)//Position - 0xAAB3
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_165(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_168(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0xAB0A
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_167(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/] = 1;
			Global_8B1D[iVar0 /*18*/].f_1 = Global_8B92;
			Global_8B92++;
			Global_8B1D[iVar0 /*18*/].f_3 = 0;
			Global_8B1D[iVar0 /*18*/].f_10 = 0;
			Global_8B1D[iVar0 /*18*/].f_4 = 0;
			Global_8B1D[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_8B1D[iVar0 /*18*/].f_7), sParam2, 16);
			Global_8B1D[iVar0 /*18*/].f_5 = iParam3;
			Global_8B1D[iVar0 /*18*/].f_11 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8B1D[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8B1D[iVar0 /*18*/].f_B = 1;
				StringCopy(&(Global_8B1D[iVar0 /*18*/].f_C), sParam4, 16);
			}
			else
			{
				Global_8B1D[iVar0 /*18*/].f_B = 0;
			}
			*uParam0 = Global_8B1D[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_169(char* sParam0)//Position - 0xAC15
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_170()//Position - 0xAC2B
{
	if (Global_17C49.f_5C53.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

int func_171(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xAC48
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_172(float fParam0)//Position - 0xAE2E
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return 0;
}

void func_173()//Position - 0xAE7F
{
	if (iLocal_107)
	{
		if (iLocal_106 == 3)
		{
			iLocal_106 = 0;
		}
		iLocal_107 = 0;
	}
	switch (iLocal_106)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(uLocal_97[iLocal_110], 1);
			uLocal_108 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_65.f_1E6.f_6, Local_65.f_1E6.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_65.f_1E6.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_65.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_65.f_2, uLocal_108, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_97[iLocal_110], uLocal_108, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_106 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_108))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_108) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_65.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_65.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_97[iLocal_110]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(uLocal_97[iLocal_110], 1);
					}
					iLocal_109 = MISC::GET_GAME_TIMER();
					iLocal_106 = 2;
				}
			}
			else
			{
				iLocal_109 = MISC::GET_GAME_TIMER();
				iLocal_106 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_109) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_97[iLocal_110]))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_97[iLocal_110], 0);
					ENTITY::SET_ENTITY_COORDS(uLocal_97[iLocal_110], func_59(iLocal_110), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_DYNAMIC(uLocal_97[iLocal_110], 0);
				}
				iLocal_106 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_174()//Position - 0xB01A
{
	if (iLocal_51 != 6)
	{
		switch (iLocal_51)
		{
			case 1:
				if (func_179())
				{
					iLocal_51 = 2;
				}
				else
				{
					iLocal_51 = 6;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_56))
				{
					func_178();
					func_11(&(Local_65.f_56.f_7));
					iLocal_51 = 3;
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_56))
				{
					if ((func_177(&(Local_65.f_56.f_7), 5f) || func_175(Local_65.f_2, &(Local_65.f_1C3))) || PED::IS_PED_RAGDOLL(Local_65.f_56))
					{
						iLocal_51 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_56))
				{
					iLocal_50 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_65.f_56, Local_65, 500f, -1, 0, 0);
					iLocal_51 = 5;
				}
				func_39(&(Local_65.f_56.f_7));
				break;
			}
	}
}

int func_175(int iParam0, var uParam1)//Position - 0xB0ED
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_176(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_176(int iParam0, int iParam1)//Position - 0xB171
{
	return func_22(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

int func_177(var uParam0, float fParam1)//Position - 0xB189
{
	if (func_14(uParam0))
	{
		if (func_8(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_178()//Position - 0xB1AB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_56))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_65.f_56.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_65, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_65, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_65.f_56.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_65.f_56, Local_65.f_56.f_6);
	}
}

int func_179()//Position - 0xB200
{
	PED::GET_CLOSEST_PED(Local_65.f_56.f_2, Local_65.f_56.f_5, 1, 0, &(Local_65.f_56), 0, 1, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_56))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_65.f_56) == Local_65.f_56.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_65.f_56, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_56, 1);
			return 1;
		}
	}
	return 0;
}

void func_180()//Position - 0xB25F
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_100 > 1 && iLocal_100 < 5)
	{
		if (func_201())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_100 = 6;
		}
	}
	switch (iLocal_100)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_65.f_2) || !func_200()) || func_1(Local_65.f_1D6, 128)) && iLocal_54 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_65.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_199(0))
				{
					func_198("SHR_ROBTILL", -1);
					Local_65.f_1D5 = -1;
					func_168(&(Local_65.f_1D5), 4, "SHR_ROBTILL", 0, 0);
					MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
					MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 0);
					iLocal_100 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_65.f_2))
			{
			}
			else if (iLocal_54 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_65.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_164(Local_65.f_1D5, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_65))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_65.f_D6, Local_65.f_D9, Local_65.f_DC, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_65.f_1E6.f_6, Local_65.f_1E6.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					MISC::SET_BIT(&(Local_65.f_A2.f_12), 1);
					if (func_27("SHR_ROBTILL"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_167(&(Local_65.f_1D5));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_104, 1);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
					CUTSCENE::_0xC61B86C9F61EB404(0);
					func_105(0);
					func_193(1, 1, 1, 0);
					HUD::DISPLAY_RADAR(0);
					func_163(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_65.f_2.f_1, 3f, 0);
					iLocal_100 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_65.f_1D5 <= 0)
					{
						Local_65.f_1D5 = -1;
						func_168(&(Local_65.f_1D5), 4, "SHR_ROBTILL", 0, 0);
					}
				}
			}
			else
			{
				if (func_27("SHR_ROBTILL"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_167(&(Local_65.f_1D5));
				iLocal_100 = 0;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_65.f_2, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_2, 1);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_65.f_2.f_1, Local_65.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_65.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_77);
				if (!CAM::DOES_CAM_EXIST(uLocal_101))
				{
					uLocal_101 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_101, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_101, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_101, 35f);
				CAM::SHAKE_CAM(uLocal_101, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_101, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_100 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_102))
				{
					uLocal_102 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_102, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_102, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_102, 35f);
				CAM::SHAKE_CAM(uLocal_102, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_102, uLocal_101, 8000, 1, 1);
			}
			iLocal_105 = MISC::GET_GAME_TIMER();
			iLocal_100 = 4;
			break;
		
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_105) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_65.f_2.f_1, 3f) > 0)
			{
				iLocal_100 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_105) > 4500)
			{
				if (func_192())
				{
					if (!iLocal_94)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_94 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_103)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						func_191(func_92(), 1, iVar1, 0, 0);
						iLocal_80 = (iLocal_80 + iVar1);
						Local_65.f_1C.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
						iLocal_103 = 1;
					}
				}
				else if (iLocal_103)
				{
					iLocal_103 = 0;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_65.f_2, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_2, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(uLocal_101))
			{
				CAM::DESTROY_CAM(uLocal_101, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_102))
			{
				CAM::DESTROY_CAM(uLocal_102, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, 1) };
			}
			if (iLocal_104 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_104, 1);
			}
			if (MISC::IS_BIT_SET(Local_65.f_A2.f_12, 1))
			{
				MISC::CLEAR_BIT(&(Local_65.f_A2.f_12), 1);
			}
			func_190(1, 1, 1);
			func_15(1, 0);
			iLocal_59 = 12;
			func_187();
			func_181(297, 0, 0);
			Local_65.f_1D4 = 1;
			iLocal_100 = 7;
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(uLocal_102, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_80 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					func_191(func_92(), 1, iVar1, 0, 0);
					iLocal_80 = (iLocal_80 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_100 = 5;
			}
			break;
	}
}

void func_181(int iParam0, int iParam1, int iParam2)//Position - 0xB97C
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
		func_186((891 + iParam0), 1, -1, 1);
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
		func_182();
	}
}

void func_182()//Position - 0xBA64
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
		func_88(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_185() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_183();
				}
			}
		}
	}
}

int func_183()//Position - 0xBF25
{
	if (func_184(0))
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

bool func_184(bool bParam0)//Position - 0xBF70
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_185()//Position - 0xBF9B
{
	return Global_5F7C;
}

int func_186(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBFA6
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_120();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_187()//Position - 0xC204
{
	if (!iLocal_86)
	{
		Global_17C49.f_4771[iLocal_79]++;
		Global_17C49.f_4771.f_3E[iLocal_79] = Local_65.f_1;
		if (func_92() == 0)
		{
			func_188(5);
		}
		iLocal_86 = 1;
	}
}

void func_188(int iParam0)//Position - 0xC253
{
	switch (iParam0)
	{
		case 0:
			func_189(&Global_15333, 1);
			break;
		
		case 1:
			func_189(&Global_15335, 3);
			break;
		
		case 2:
			func_189(&Global_15339, 1);
			break;
		
		case 3:
			func_189(&Global_1533B, 1);
			break;
		
		case 4:
			func_189(&Global_1533D, 1);
			break;
		
		case 5:
			func_189(&Global_1533F, 1);
			break;
		
		case 6:
			func_189(&Global_15341, 1);
			break;
		
		case 7:
			func_189(&Global_15343, 2);
			break;
		
		case 8:
			func_189(&Global_15346, 1);
			break;
		
		case 9:
			func_189(&Global_15348, 1);
			break;
	}
}

void func_189(var uParam0, int iParam1)//Position - 0xC316
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_190(bool bParam0, bool bParam1, int iParam2)//Position - 0xC355
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_193(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_163(23, 0);
}

void func_191(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC390
{
	int iVar0;
	int iVar1;
	
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_69(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_192()//Position - 0xC477
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_193(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xC490
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_197(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_106())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_196(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_197(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_196(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_194(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_194(int iParam0)//Position - 0xC561
{
	if (func_118(iParam0, 0))
	{
		return 1;
	}
	if (func_195())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_C2, 2))
	{
		return 1;
	}
	return 0;
}

bool func_195()//Position - 0xC5A2
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

int func_196(int iParam0, var uParam1, var uParam2)//Position - 0xC5B3
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_197(int iParam0)//Position - 0xC5E4
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 13);
	}
}

void func_198(char* sParam0, int iParam1)//Position - 0xC607
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_199(int iParam0)//Position - 0xC61E
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				if (Global_3838 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_3838 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_3839.f_1 > 3)
	{
		if (Global_3838 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_200()//Position - 0xC6A2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_65.f_2) == Local_65.f_B9)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65.f_2, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65.f_2, Local_65.f_C8, Local_65.f_CB, Local_65.f_CE, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65.f_2, Local_65.f_CF, Local_65.f_D2, Local_65.f_D5, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_65.f_C7 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65.f_2, Local_65.f_C1, Local_65.f_C4, Local_65.f_C7, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201()//Position - 0xC767
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_202()//Position - 0xC799
{
	int iVar0;
	
	func_219();
	func_216();
	if (ENTITY::DOES_ENTITY_EXIST(Local_65))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_65, &iVar0, 1);
		if ((iLocal_57 == 1 && iLocal_98 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_215()) || func_214()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_15(1, 0);
			iLocal_57 = 9;
		}
	}
	else
	{
		return;
	}
	func_211();
	if (!bLocal_85)
	{
		func_210();
	}
	switch (iLocal_57)
	{
		case 1:
			if (func_285())
			{
				if ((func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1) || (func_175(Local_65.f_2, &(Local_65.f_1C3)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_209();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					iLocal_50 = 12;
					iLocal_49 = 3;
					iLocal_57 = 5;
					MISC::SET_BIT(&Global_150CA, 3);
					func_208();
				}
				if (func_1(Local_65.f_1D6, 8))
				{
					if (!func_1(Local_65.f_1D6, 32))
					{
						if (!PED::IS_PED_INJURED(Local_65.f_2) && func_1(Local_65.f_1D6, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_65.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_50 = 36;
						func_15(1, 0);
						func_207();
						func_276(&(Local_65.f_1D6), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_285())
			{
				if (func_175(Local_65.f_2, &(Local_65.f_1C3)) && iVar0 != joaat("weapon_unarmed"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					Local_65.f_2.f_B = 1;
					func_187();
					iLocal_50 = 12;
					iLocal_49 = 3;
					iLocal_59 = 11;
					iLocal_57 = 3;
					MISC::SET_BIT(&Global_150CA, 3);
					func_208();
				}
				else if (func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					func_207();
					func_209();
					iLocal_50 = 12;
					iLocal_57 = 5;
					func_208();
				}
				else if (func_1(Local_65.f_1D6, 8))
				{
					if (!func_1(Local_65.f_1D6, 32))
					{
						if (!PED::IS_PED_INJURED(Local_65.f_2) && func_1(Local_65.f_1D6, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_65.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_50 = 36;
						func_15(1, 0);
						func_207();
						func_276(&(Local_65.f_1D6), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_50 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_65.f_2))
				{
					iLocal_50 = 15;
					iLocal_55 = 5;
					iLocal_59 = 12;
					iLocal_57 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1) && func_285())
			{
				func_209();
				if (Local_65.f_2.f_C)
				{
					iLocal_50 = 22;
				}
				else
				{
					iLocal_50 = 16;
				}
				iLocal_57 = 5;
			}
			break;
		
		case 5:
			if (Local_65.f_1E6 >= 0)
			{
				if (func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1) && func_285())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6) && !Local_65.f_1D3)
					{
						iLocal_50 = 33;
						Local_65.f_1D3 = 1;
					}
				}
			}
			if (iLocal_52 >= 1 && iLocal_52 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (func_205(Local_65.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
				{
					iLocal_57 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_53 != 3 && iLocal_53 != 4)
			{
				iLocal_53 = 4;
			}
			MISC::CLEAR_BIT(&Global_150CA, 3);
			if (!PED::IS_PED_RAGDOLL(Local_65.f_2))
			{
				func_6();
				iLocal_57 = 0;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_65.f_2))
			{
				func_204();
				iLocal_50 = 36;
				func_15(1, 0);
				func_276(&(Local_65.f_1D6), 32);
				iLocal_55 = 7;
				iLocal_57 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1) || func_175(Local_65.f_2, &(Local_65.f_1C3))) && func_285()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_65.f_2.f_C)
				{
					iLocal_50 = 10;
					iLocal_57 = 9;
				}
				else
				{
					func_18();
					iLocal_50 = 11;
					iLocal_57 = 0;
				}
				Local_65.f_2.f_D = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_57 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1) || func_175(Local_65.f_2, &(Local_65.f_1C3))) && func_285()) && iVar0 != joaat("weapon_unarmed")) && !func_14(&(Local_65.f_1E0)))
			{
				func_11(&(Local_65.f_1E0));
				if (PED::IS_PED_RAGDOLL(Local_65.f_2))
				{
					func_6();
				}
				iLocal_50 = 23;
			}
			else if (func_40(&(Local_65.f_1E0)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_65.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_65.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				iLocal_57 = 12;
			}
			break;
		
		case 11:
			func_203();
			iLocal_57 = 12;
			break;
	}
}

void func_203()//Position - 0xCCAB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2, 0);
	}
}

void func_204()//Position - 0xCCC8
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_65.f_2, Local_65, -1, 0, 2);
	}
}

int func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xCCE9
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_206(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_176(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_206(int iParam0, int iParam1)//Position - 0xCEAD
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_207()//Position - 0xCF02
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_285())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_65.f_2) && !PED::IS_PED_INJURED(uVar0[iVar2])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar2], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], 1, 1);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar2], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_208()//Position - 0xCFB8
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_285())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_65.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar2], uLocal_77);
			}
			iVar2++;
		}
	}
}

void func_209()//Position - 0xD072
{
	if (func_24(Local_65) == joaat("weapon_rpg"))
	{
		Local_65.f_1CA = 1;
	}
	else if (func_24(Local_65) == joaat("weapon_knife"))
	{
		Local_65.f_1CB = 1;
	}
	else if (((func_24(Local_65) == joaat("weapon_hammer") || func_24(Local_65) == joaat("weapon_crowbar")) || func_24(Local_65) == joaat("weapon_bat")) || func_24(Local_65) == joaat("weapon_bottle"))
	{
		Local_65.f_1CC = 1;
	}
	else if ((func_24(Local_65) == joaat("weapon_grenade") || func_24(Local_65) == joaat("weapon_smokegrenade")) || func_24(Local_65) == joaat("weapon_molotov"))
	{
		Local_65.f_1CD = 1;
	}
	else if (func_24(Local_65) == joaat("weapon_stickybomb"))
	{
		Local_65.f_1CE = 1;
	}
	iLocal_59 = 12;
	func_187();
	iLocal_58 = 2;
	iLocal_62 = 1;
	iLocal_61 = 6;
	Local_65.f_2.f_D = 0;
}

void func_210()//Position - 0xD15E
{
	if (iLocal_52 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
		{
			switch (iLocal_55)
			{
				case 1:
					iLocal_55 = 0;
					break;
				
				case 2:
					TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_2.f_F, Local_65.f_2.f_11, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_55 = 0;
					break;
				
				case 3:
					TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_2.f_F, Local_65.f_2.f_12, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_55 = 0;
					break;
				
				case 4:
					TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_2.f_F, Local_65.f_2.f_13, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_55 = 0;
					break;
				
				case 5:
					TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_2.f_F, Local_65.f_2.f_14, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_55 = 0;
					break;
				
				case 6:
					iLocal_55 = 0;
					break;
				
				case 7:
					TASK::TASK_PLAY_ANIM(Local_65.f_2, Local_65.f_2.f_F, Local_65.f_2.f_15, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_55 = 0;
					break;
				}
			}
	}
}

void func_211()//Position - 0xD287
{
	switch (iLocal_56)
	{
		case 1:
			func_204();
			iLocal_56 = 2;
			break;
		
		case 2:
			if (iLocal_52 == 2)
			{
				func_213();
				Local_65.f_2.f_D = 0;
				iLocal_56 = 3;
			}
			if ((func_44() || func_43()) && !Local_65.f_2.f_D)
			{
				Local_65.f_2.f_D = 1;
			}
			if (!Local_65.f_2.f_E)
			{
				if (!PED::IS_PED_INJURED(Local_65.f_2) && PED::IS_PED_FLEEING(Local_65.f_2))
				{
					Local_65.f_2.f_E = 1;
				}
			}
			if ((Local_65.f_2.f_D && !PED::IS_PED_INJURED(Local_65.f_2)) && !iLocal_57 == 12)
			{
				func_212();
			}
			break;
		
		case 3:
			if (iLocal_52 >= 7)
			{
				func_204();
				iLocal_56 = 4;
			}
			break;
	}
}

void func_212()//Position - 0xD34D
{
	if ((MISC::GET_GAME_TIMER() - Local_65.f_2.f_A) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_65.f_2.f_18));
		TASK::OPEN_SEQUENCE_TASK(&(Local_65.f_2.f_18));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_65, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_65, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_65.f_2.f_18);
		TASK::TASK_PERFORM_SEQUENCE(Local_65.f_2, Local_65.f_2.f_18);
		Local_65.f_2.f_A = MISC::GET_GAME_TIMER();
	}
}

void func_213()//Position - 0xD3AE
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_65.f_2);
	}
}

int func_214()//Position - 0xD3CA
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 1))
	{
		return 1;
	}
	return 0;
}

int func_215()//Position - 0xD3EF
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0))
	{
		return 1;
	}
	return 0;
}

void func_216()//Position - 0xD414
{
	if (!Local_65.f_1D1)
	{
		if (func_217())
		{
			if (!func_14(&(Local_65.f_1DA)))
			{
				func_11(&(Local_65.f_1DA));
			}
			else if (func_177(&(Local_65.f_1DA), 1f))
			{
				Local_65.f_1D1 = 1;
				iLocal_50 = 26;
				if (!PED::IS_PED_INJURED(Local_65.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_65.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&(Local_65.f_1DA)))
		{
			func_39(&(Local_65.f_1DA));
		}
	}
}

int func_217()//Position - 0xD49A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (func_218())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_65, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (PED::IS_PED_SHOOTING(Local_65))
				{
					if (PED::IS_PED_FACING_PED(Local_65.f_2, Local_65, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_218()//Position - 0xD4E7
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_219()//Position - 0xD51A
{
	if (iLocal_57 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
		{
			if (PED::IS_PED_FLEEING(Local_65.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_65.f_2, Local_65, 100f, -1, 0, 0);
				iLocal_57 = 12;
				iLocal_56 = 4;
				iLocal_55 = 8;
				iLocal_59 = 15;
				if (iLocal_62 == 1)
				{
					iLocal_62 = 2;
				}
				else
				{
					iLocal_62 = 3;
				}
				iLocal_61 = 13;
				iLocal_50 = 27;
				if (!Local_65.f_2.f_E)
				{
					Local_65.f_2.f_E = 1;
				}
			}
		}
	}
}

void func_220()//Position - 0xD589
{
	switch (iLocal_54)
	{
		case 1:
			if (Local_65.f_1E6 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.876f)
					{
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_65.f_1E6 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_65.f_1E6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_65.f_1E6) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65.f_1C, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 1f))
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_221(0);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_65.f_1C, 0, 0);
			iLocal_54 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_221(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_65.f_1C, 0);
			iLocal_54 = 5;
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_65.f_1C, PLAYER::PLAYER_PED_ID()))
			{
				func_191(func_92(), 1, iLocal_80, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_65.f_1C, 0);
				if (HUD::DOES_BLIP_EXIST(Local_65.f_1C.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_65.f_1C.f_2));
				}
				if (iLocal_59 != 12)
				{
					iLocal_59 = 12;
				}
				func_181(297, 0, 0);
				Local_65.f_1D4 = 1;
				Local_65.f_1C.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_12(&(Local_65.f_1C.f_F));
				iLocal_54 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C) && ENTITY::IS_ENTITY_VISIBLE(Local_65.f_1C))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_65.f_1C.f_F)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_1C) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_65.f_1C, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_65.f_1C));
				}
				iLocal_54 = 7;
			}
			break;
	}
}

void func_221(bool bParam0)//Position - 0xD75F
{
	Local_65.f_1C.f_3 = 0;
	MISC::SET_BIT(&(Local_65.f_1C.f_3), 3);
	MISC::SET_BIT(&(Local_65.f_1C.f_3), 4);
	if (!bParam0)
	{
		iLocal_80 = MISC::GET_RANDOM_INT_IN_RANGE(Local_65.f_1C.f_4, Local_65.f_1C.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_65.f_1C.f_2))
		{
			Local_65.f_1C.f_2 = func_224(Local_65.f_1C);
			HUD::SET_BLIP_COLOUR(Local_65.f_1C.f_2, 2);
		}
		OBJECT::_0xA08FE5E49BDC39DD(Local_65.f_1C, -0.2f, 1);
	}
	else
	{
		iLocal_80 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_65.f_1C.f_4);
		Local_65.f_1C.f_1 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), ENTITY::GET_ENTITY_COORDS(Local_65.f_1C, 1), Local_65.f_1C.f_3, iLocal_80, 1, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_65.f_1C.f_2))
		{
			Local_65.f_1C.f_2 = func_222(Local_65.f_1C.f_1);
		}
	}
	Local_65.f_1C.f_E = 1;
}

int func_222(var uParam0)//Position - 0xD82C
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_223(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

float func_223(bool bParam0, float fParam1, float fParam2)//Position - 0xD864
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_224(var uParam0)//Position - 0xD87B
{
	return func_225(uParam0, 1, 0);
}

int func_225(int iParam0, int iParam1, bool bParam2)//Position - 0xD88B
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_223(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_223(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_223(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_226()//Position - 0xD92F
{
	int iVar0;
	int iVar1;
	
	if (Local_65.f_1D0)
	{
		switch (iLocal_58)
		{
			case 2:
				if (func_1(Local_65.f_1D6, 4))
				{
					func_230();
					Local_65.f_2E.f_27 = MISC::GET_GAME_TIMER();
					iLocal_58 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_65.f_2E.f_27) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65.f_2E.f_4[0], 0))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_65.f_2E.f_4[0], 1);
					}
					iLocal_58 = 4;
				}
				break;
			
			case 4:
				if (func_229() && func_228())
				{
					iLocal_58 = 5;
				}
				break;
			
			case 5:
				iLocal_50 = 24;
				func_15(1, 0);
				iLocal_58 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_65.f_2E[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_65.f_2E[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_65.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_65.f_2, 0, 2))) || func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_65.f_2E[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_65.f_2E[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2E[iVar1], 0);
							}
							iVar1++;
						}
						iLocal_58 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_227();
				iLocal_58 = 0;
				break;
			}
	}
}

void func_227()//Position - 0xDACF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2E[iVar0], 0);
		}
		iVar0++;
	}
}

int func_228()//Position - 0xDB06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65.f_2E[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_229()//Position - 0xDB46
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_65.f_2E[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E.f_4[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_65.f_2E.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_230()//Position - 0xDBB7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_65.f_2E[iVar0] = PED::CREATE_PED(6, Local_65.f_2E.f_1A, Local_65.f_2E.f_8[iVar0 /*3*/], Local_65.f_2E.f_12[iVar0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_65.f_2E[iVar0], 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2E[iVar0], 1);
		Local_65.f_2E.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_65.f_2E.f_1B, Local_65.f_2E.f_8[iVar0 /*3*/], Local_65.f_2E.f_12[iVar0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_65.f_2E.f_4[iVar0], 1, 0);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]) && ENTITY::IS_ENTITY_DEAD(Local_65.f_2E.f_4[iVar0])))
		{
			PED::SET_PED_INTO_VEHICLE(Local_65.f_2E[iVar0], Local_65.f_2E.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_65.f_2E[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_65.f_2E.f_23[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65.f_2E.f_4[iVar0], Local_65.f_2E.f_16, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_65.f_2E.f_4[iVar0]) - 8f), 1, Local_65.f_2E.f_1B, 786981, Local_65.f_2E.f_19, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_65, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_65.f_2E.f_23[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_65.f_2E[iVar0], Local_65.f_2E.f_23[iVar0]);
		iVar0++;
	}
}

void func_231()//Position - 0xDD21
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_65))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_65, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_59)
	{
		case 1:
			iLocal_59 = 6;
			break;
		
		case 2:
			iLocal_50 = 2;
			iLocal_59 = 5;
			break;
		
		case 3:
			iLocal_50 = 3;
			iLocal_59 = 5;
			break;
		
		case 4:
			iLocal_50 = 4;
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((((func_24(Local_65) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_285())
			{
				iLocal_59 = 7;
			}
			break;
		
		case 6:
			if (func_24(Local_65) != joaat("weapon_unarmed") && func_285())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_59 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_59 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_59 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_59 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_50 = 5;
			iLocal_55 = 3;
			iLocal_59 = 15;
			break;
		
		case 8:
			iLocal_50 = 2;
			iLocal_55 = 2;
			iLocal_59 = 5;
			break;
		
		case 9:
			iLocal_50 = 3;
			iLocal_55 = 2;
			iLocal_59 = 5;
			break;
		
		case 10:
			iLocal_50 = 4;
			iLocal_55 = 2;
			iLocal_59 = 5;
			break;
		
		case 11:
			if (func_20(Local_65, Local_65.f_2, &(Local_65.f_1C3), 1))
			{
				func_209();
				iLocal_57 = 5;
			}
			break;
		
		case 12:
			if (!func_285())
			{
				if (!Local_65.f_1D0)
				{
					iLocal_61 = 9;
					iLocal_59 = 15;
				}
				else
				{
					iLocal_59 = 13;
				}
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_65) < 0.1f && !func_233())
			{
				func_232();
				iLocal_59 = 14;
			}
			else if (func_233() && !func_285())
			{
				iLocal_59 = 14;
			}
			break;
		
		case 14:
			if (func_233() && !func_285())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_65.f_2E[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_65.f_2E[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2E[iVar1], 0);
					}
					iVar1++;
				}
				iLocal_61 = 9;
				iLocal_59 = 15;
			}
			break;
	}
}

void func_232()//Position - 0xDFB1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2E[iVar0]))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_65.f_2E[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_65.f_2E[iVar0]);
				TASK::TASK_ARREST_PED(Local_65.f_2E[iVar0], Local_65);
			}
		}
		iVar0++;
	}
}

int func_233()//Position - 0xE005
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_2E.f_1C, Local_65.f_2E.f_1F, Local_65.f_2E.f_22, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_234()//Position - 0xE03E
{
	switch (iLocal_62)
	{
		case 0:
			if (!iLocal_92)
			{
				if (func_235())
				{
					iLocal_50 = 9;
					iLocal_57 = 7;
					iLocal_49 = 3;
					iLocal_61 = 13;
					iLocal_62 = 3;
					iLocal_92 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_235()//Position - 0xE082
{
	int iVar0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_65))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_65, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_65.f_1D6, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_65.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65.f_2, Local_65, 1) && iVar0 == joaat("weapon_unarmed"))) || func_236(Local_65.f_2, Local_65.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_65.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65.f_2, Local_65, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_236(Local_65.f_2, Local_65.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_65.f_2, Local_65.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_65.f_2, 1) };
				Var1 = { Local_65.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_236(int iParam0, struct<3> Param1, int iParam2)//Position - 0xE179
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

void func_237()//Position - 0xE1B2
{
	switch (iLocal_60)
	{
		case 0:
			if (func_265())
			{
				iLocal_60 = 1;
			}
			break;
		
		case 1:
			func_258();
			iLocal_60 = 2;
			break;
		
		case 2:
			func_254();
			iLocal_60 = 3;
			break;
		
		case 3:
			if (func_249())
			{
				iLocal_60 = 4;
			}
			break;
		
		case 4:
			func_238();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_64 = 1;
			break;
	}
}

void func_238()//Position - 0xE21F
{
	func_242();
	func_241();
	func_240();
	if (INTERIOR::IS_VALID_INTERIOR(Local_65.f_B9))
	{
		INTERIOR::_0x82EBB79E258FA2B7(Local_65.f_2, Local_65.f_B9);
		INTERIOR::_0x82EBB79E258FA2B7(Local_65.f_1C, Local_65.f_B9);
		if (!bLocal_85)
		{
			INTERIOR::_0x82EBB79E258FA2B7(Local_65.f_60.f_1, Local_65.f_B9);
		}
	}
	func_239();
}

void func_239()//Position - 0xE272
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (func_92() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_65.f_DD.f_DC = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_65.f_DD.f_DC = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_65.f_DD.f_DC = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_92() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_65.f_DD.f_DC = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_65.f_DD.f_DC = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_65.f_DD.f_DC = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_92() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_65.f_DD.f_D2 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_65.f_DD.f_DC = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_65.f_DD.f_DC = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_65.f_DD.f_DC = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_65.f_DD.f_E3 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_65.f_DD.f_C6 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_65.f_DD.f_C6 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_65.f_DD.f_C6 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_65.f_DD.f_C6 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_65.f_DD.f_C6 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_65.f_DD.f_C6 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_65.f_DD.f_C6 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_65.f_DD.f_C6 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_65.f_DD.f_C6 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_65.f_DD.f_C6 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_65.f_DD.f_C7 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_65.f_DD.f_C7 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_65.f_DD.f_C7 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_65.f_DD.f_C7 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_65.f_DD.f_C8 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_65.f_DD.f_C8 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_65.f_DD.f_C8 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_65.f_DD.f_C8 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_65.f_DD.f_C9 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_65.f_DD.f_C9 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_65.f_DD.f_CA = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CA = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CA = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_65.f_DD.f_CA = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_65.f_DD.f_CA = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_65.f_DD.f_CB = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CB = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CB = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_65.f_DD.f_CC = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CC = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CC = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_65.f_DD.f_CC = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_65.f_DD.f_CD = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CD = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CD = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_65.f_DD.f_CE = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CE = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CE = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_65.f_DD.f_CF = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_65.f_DD.f_CF = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_65.f_DD.f_CF = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_65.f_DD.f_CF = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_65.f_DD.f_D0 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D0 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_65.f_DD.f_D0 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_65.f_DD.f_D0 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_65.f_DD.f_D1 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D1 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_65.f_DD.f_D1 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_65.f_DD.f_D1 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_65.f_DD.f_D3 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_65.f_DD.f_D5 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_65.f_DD.f_D5 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_65.f_DD.f_D8 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D8 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_65.f_DD.f_D8 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_65.f_DD.f_D8 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_65.f_DD.f_D9 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D9 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_65.f_DD.f_D4 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_65.f_DD.f_D4 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_65.f_DD.f_D4 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_65.f_DD.f_D4 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_65.f_DD.f_D4 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_65.f_DD.f_DA = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_65.f_DD.f_DA = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_65.f_DD.f_DA = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_65.f_DD.f_DA = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_65.f_DD.f_DB = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_65.f_DD.f_DB = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_65.f_DD.f_DB = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_65.f_DD.f_DD = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_65.f_DD.f_DD = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_65.f_DD.f_DD = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_65.f_DD.f_DE = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_65.f_DD.f_DE = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_65.f_DD.f_DE = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_65.f_DD.f_DE = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_65.f_DD.f_DE = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_65.f_DD.f_DF = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_65.f_DD.f_DF = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_65.f_DD.f_DF = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_65.f_DD.f_DF = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_65.f_DD.f_DF = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_65.f_DD.f_E0 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_65.f_DD.f_E0 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_65.f_DD.f_E0 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_65.f_DD.f_E0 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_65.f_DD.f_E0 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_65.f_DD.f_E1 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_65.f_DD.f_E1 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_65.f_DD.f_E1 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_65.f_DD.f_E1 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_65.f_DD.f_E1 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_65.f_DD.f_E2 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_65.f_DD.f_E2 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_65.f_DD.f_E2 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_65.f_DD.f_E4 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_65.f_DD.f_E4 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_65.f_DD.f_E4 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_65.f_DD.f_E5 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_65.f_DD.f_E5 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_65.f_DD.f_E5 = "OJSR_STEAL_3";
			break;
	}
	Local_65.f_DD.f_A6 = "OJSRAUD";
	Local_65.f_DD.f_A7 = "OJSR_GREET";
	Local_65.f_DD.f_A8 = "OJSR_BATEQ";
	Local_65.f_DD.f_A9 = "OJSR_TOOLEQ";
	Local_65.f_DD.f_AA = "OJSR_STICKEQ";
	Local_65.f_DD.f_AB = "OJSR_WORRY";
	Local_65.f_DD.f_AC = "OJSR_SHOCK";
	Local_65.f_DD.f_AD = "OJSR_STUBBRN";
	Local_65.f_DD.f_AE = "OJSR_COUNTER";
	Local_65.f_DD.f_AF = "OJSR_BACKRM";
	Local_65.f_DD.f_B0 = "OJSR_BUMP";
	Local_65.f_DD.f_B1 = "OJSR_BPAIM";
	Local_65.f_DD.f_B2 = "OJSR_BPAIMAG";
	Local_65.f_DD.f_B3 = "OJSR_HOLDUP";
	Local_65.f_DD.f_B4 = "OJSR_SCARED";
	Local_65.f_DD.f_B5 = "OJSR_KNIFAIM";
	Local_65.f_DD.f_B6 = "OJSR_TOOLAIM";
	Local_65.f_DD.f_B7 = "OJSR_GRANAIM";
	Local_65.f_DD.f_B8 = "OJSR_STICAIM";
	Local_65.f_DD.f_B9 = "OJSR_BRAVE";
	Local_65.f_DD.f_BA = "OJSR_MOREAIM";
	Local_65.f_DD.f_BB = "OJSR_SURNDER";
	Local_65.f_DD.f_BC = "OJSR_COPS";
	Local_65.f_DD.f_BD = "OJSR_POURCAN";
	Local_65.f_DD.f_BE = "OJSR_FLEE";
	Local_65.f_DD.f_BF = "OJSR_RECSCAR";
	Local_65.f_DD.f_C0 = "OJSR_RECAGGR";
	Local_65.f_DD.f_C1 = "OJSR_CSTMER";
	Local_65.f_DD.f_C2 = "OJSR_MOSC";
	Local_65.f_DD.f_C3 = "OJSR_PLRHUR";
	Local_65.f_DD.f_C4 = "OJSR_BUY";
	Local_65.f_DD.f_C5 = "OJSR_STEAL";
	iLocal_90 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
}

void func_240()//Position - 0xEFFD
{
	ENTITY::CREATE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_01"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_65.f_60.f_1 = OBJECT::CREATE_OBJECT(Local_65.f_60, Local_65.f_1E6.f_6, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_65.f_60.f_1, Local_65.f_60.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_65.f_60.f_1, 1);
}

void func_241()//Position - 0xF082
{
	Local_65.f_1C = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed"), Local_65.f_1C.f_7, 0, Local_65.f_1C.f_D);
	ENTITY::SET_ENTITY_ROTATION(Local_65.f_1C, Local_65.f_1C.f_A, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_65.f_1C, 0);
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_65.f_1C, 1, 0);
	Local_65.f_1C.f_E = 0;
}

void func_242()//Position - 0xF0D2
{
	var uVar0;
	var uVar1;
	
	Local_65.f_2 = PED::CREATE_PED(4, Local_65.f_2.f_5, Local_65.f_2.f_1, Local_65.f_2.f_4, 1, 1);
	func_248(iLocal_79, &uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_65.f_2, 0, uVar1, uVar0, 0);
	func_247(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_65.f_2, 2, uVar1, uVar0, 0);
	func_246(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_65.f_2, 3, uVar1, uVar0, 0);
	func_245(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_65.f_2, 4, uVar1, uVar0, 0);
	func_244(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_65.f_2, 8, uVar1, uVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65.f_2, 1);
	if (Local_65.f_2.f_C)
	{
		func_243();
	}
}

void func_243()//Position - 0xF181
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
	}
}

void func_244(var uParam0, var uParam1)//Position - 0xF195
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_245(var uParam0, var uParam1)//Position - 0xF1BD
{
	*uParam0 = 0;
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_246(var uParam0, var uParam1)//Position - 0xF1D2
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_247(var uParam0, var uParam1)//Position - 0xF1EC
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_248(int iParam0, var uParam1, var uParam2)//Position - 0xF214
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_249()//Position - 0xF2C0
{
	if (!func_250(&Local_95))
	{
		return 0;
	}
	if (!bLocal_85)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_65.f_2.f_F))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_65.f_B9))
	{
		return 0;
	}
	MISC::_0x6F2135B6129620C1(0);
	return 1;
}

int func_250(var uParam0)//Position - 0xF306
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_251(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_251(var uParam0)//Position - 0xF368
{
	return func_252(*uParam0, "NULL", uParam0->f_1);
}

int func_252(int iParam0, char* sParam1, int iParam2)//Position - 0xF37D
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_253(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_253(int iParam0)//Position - 0xF470
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_254()//Position - 0xF49C
{
	MISC::_0x6F2135B6129620C1(1);
	if (!bLocal_85)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_65.f_2.f_F);
		Local_95.f_20 = MISC::GET_FRAME_COUNT();
	}
	func_255(&Local_95, Local_65.f_2.f_5);
	func_255(&Local_95, Local_65.f_1C.f_D);
	func_255(&Local_95, Local_65.f_60);
	Local_65.f_1D2 = 1;
}

void func_255(var uParam0, int iParam1)//Position - 0xF4EE
{
	func_256(uParam0, 0, iParam1, 0);
}

void func_256(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF500
{
	int iVar0;
	
	if (!func_257(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_257(int iParam0)//Position - 0xF5C3
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_258()//Position - 0xF662
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	func_263(iLocal_79, &(Local_65.f_2E.f_8), &(Local_65.f_2E.f_12), &(Local_65.f_2E.f_16), &(Local_65.f_2E.f_19), &(Local_65.f_2E.f_1A), &(Local_65.f_2E.f_1B), &(Local_65.f_2E.f_1C), &(Local_65.f_2E.f_1F), &(Local_65.f_2E.f_22));
	func_261(iLocal_79);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	Var1 = { -3242.008f, 1001.202f, 11.83071f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_288(Var2, fVar3) };
	Var1 = { -3245.088f, 1001.468f, 13.65071f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_288(Var2, fVar3) };
	Var1 = { -3243.37f, 1000.37f, 12.83f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_288(Var2, fVar3) };
	Local_65.f_1D5 = -1;
	Local_65.f_66.f_16 = -1;
	Local_65.f_60 = joaat("p_till_01_s");
	Local_65.f_60.f_2 = { Local_65.f_1E6.f_6 };
	Local_65.f_60.f_5 = (Local_65.f_1E6.f_9.f_2 + 180f);
	Local_65.f_1C3.f_3 = 0;
	Local_65.f_1CA = 0;
	Local_65.f_1CB = 0;
	Local_65.f_1CC = 0;
	Local_65.f_1CD = 0;
	Local_65.f_1CE = 0;
	Local_65.f_1D1 = 0;
	func_260(iLocal_79, &(Local_65.f_2.f_6), &(Local_65.f_2.f_9));
	func_259();
}

void func_259()//Position - 0xF7D1
{
	Local_65.f_56.f_1 = joaat("a_m_y_soucent_04");
	Local_65.f_56.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_65.f_56.f_5 = 2f;
}

void func_260(int iParam0, var uParam1, var uParam2)//Position - 0xF802
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_261(int iParam0)//Position - 0xFAE1
{
	struct<3> Var0;
	
	Var0 = { func_262(Local_65.f_BA, Local_65.f_BD) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_65.f_B9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_65.f_B9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_65.f_B9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_262(struct<3> Param0, struct<3> Param1)//Position - 0xFBAF
{
	struct<3> Var0;
	
	Var0.x = ((Param0.x + Param1.x) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param1.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param1.f_2) / 2f);
	return Var0;
}

void func_263(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0xFBE2
{
	if (!func_264(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_264(int iParam0)//Position - 0x10A5A
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_265()//Position - 0x10A7B
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_65, 1) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_65.f_B5, 1) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_266()//Position - 0x10AB5
{
	if (Local_65.f_2E.f_1A != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_65.f_2E.f_1A);
	}
	if (Local_65.f_2E.f_1B != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_65.f_2E.f_1B);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_2.f_F))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_65.f_2.f_F);
	}
}

int func_267()//Position - 0x10AFD
{
	if (Global_17C49.f_1CAD)
	{
		if (!func_271(56))
		{
			return 1;
		}
	}
	if (func_270())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (func_287() && !func_286())
	{
		return 1;
	}
	if (func_269() && func_268())
	{
		return 1;
	}
	if (Global_5F7E)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}

bool func_268()//Position - 0x10B6D
{
	return Global_17B2F > 0;
}

int func_269()//Position - 0x10B7B
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_270()//Position - 0x10B90
{
	struct<3> Var0;
	float fVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_65, 1) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_65.f_B5, 1);
		if (fVar1 > Local_65.f_B8)
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)//Position - 0x10BCD
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_272(var uParam0)//Position - 0x10BFA
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_20 + uParam0->f_21) || MISC::IS_BIT_SET(Global_15F6A.f_14, 2)) || MISC::IS_BIT_SET(Global_15F6A.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_273(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_273(var uParam0)//Position - 0x10C84
{
	func_274(uParam0, "NULL", uParam0->f_1);
}

void func_274(var uParam0, char* sParam1, int iParam2)//Position - 0x10C98
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_253(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

int func_275()//Position - 0x10D71
{
	int iVar0;
	
	if (Local_65.f_1 != Global_17C49.f_4771.f_3E[iLocal_79])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_17C49.f_4771.f_2A[iLocal_79]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_17C49.f_4771.f_2A[iLocal_79]);
	}
	if (iVar0 < iLocal_84)
	{
		return 0;
	}
	return 1;
}

void func_276(var uParam0, int iParam1)//Position - 0x10DDC
{
	func_277(uParam0, iParam1);
}

void func_277(var uParam0, var uParam1)//Position - 0x10DEC
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_278(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x10DFD
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_279(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_279(int iParam0)//Position - 0x10F42
{
	if (!func_264(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_280()//Position - 0x1112C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_17C49.f_4771.f_15[iLocal_79]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_17C49.f_4771.f_2A[iLocal_79]);
	iLocal_83 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_17C49.f_4771.f_15[iLocal_79]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_83 && iVar1 == 0) || (iVar0 < iLocal_83 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_281(bool bParam0)//Position - 0x111B3
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	struct<3> Var3[2];
	
	func_282(iLocal_79, &uVar1, &uVar2, &Var3);
	if (!func_1(Local_65.f_1D6, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar2[0], Var3[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar2[1], Var3[1 /*3*/], 0, 0, 0);
			}
		}
		func_276(&(Local_65.f_1D6), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1129E
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_283(var uParam0, int iParam1)//Position - 0x11943
{
	func_284(uParam0, iParam1);
}

void func_284(var uParam0, var uParam1)//Position - 0x11953
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_285()//Position - 0x11968
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_BA, Local_65.f_BD, Local_65.f_C0, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_C8, Local_65.f_CB, Local_65.f_CE, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_CF, Local_65.f_D2, Local_65.f_D5, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_65.f_C7 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65, Local_65.f_C1, Local_65.f_C4, Local_65.f_C7, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_286()//Position - 0x11A0D
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_287()//Position - 0x11A2A
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

Vector3 func_288(struct<3> Param0, float fParam1)//Position - 0x11A50
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_289(var uParam0)//Position - 0x11A94
{
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_59 = 0;
	iLocal_58 = 1;
	iLocal_54 = 0;
	iLocal_57 = 1;
	iLocal_56 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_50 = 0;
	iLocal_49 = 0;
	Local_65 = PLAYER::PLAYER_PED_ID();
	func_297(&(uParam0->f_1[0 /*3*/]), &(Local_65.f_B5), &iLocal_79);
	if ((((((((iLocal_79 == 10 || iLocal_79 == 11) || iLocal_79 == 12) || iLocal_79 == 13) || iLocal_79 == 14) || iLocal_79 == 15) || iLocal_79 == 16) || iLocal_79 == 17) || iLocal_79 == 18)
	{
		bLocal_93 = true;
	}
	Local_65.f_B8 = 150f;
	Local_65.f_2.f_F = "random@shop_robbery_reactions@";
	Local_65.f_2.f_10 = "absolutely";
	Local_65.f_2.f_11 = "is_this_it";
	Local_65.f_2.f_12 = "shock";
	Local_65.f_2.f_13 = "anger_a";
	Local_65.f_2.f_14 = "screw_you";
	Local_65.f_2.f_15 = "but_why";
	Local_65.f_1E6.f_1 = "mp_am_hold_up";
	Local_65.f_1E6.f_2 = "guard_handsup_loop";
	Local_65.f_1E6.f_3 = "holdup_victim_20s";
	Local_65.f_1E6.f_4 = "holdup_victim_20s_bag";
	Local_65.f_1E6.f_5 = "holdup_victim_20s_till";
	iLocal_81 = func_296();
	if (!bLocal_85)
	{
		func_292();
	}
	iLocal_86 = 0;
	if (iLocal_79 != 7)
	{
		iLocal_51 = 6;
	}
	else
	{
		iLocal_51 = 0;
	}
	if (func_92() == 0)
	{
		Local_65.f_1 = 0;
	}
	else if (func_92() == 1)
	{
		Local_65.f_1 = 1;
	}
	else if (func_92() == 2)
	{
		Local_65.f_1 = 2;
	}
	func_291(iLocal_79, &(Local_65.f_BA), &(Local_65.f_BD), &(Local_65.f_C0), &(Local_65.f_C1), &(Local_65.f_C4), &(Local_65.f_C7), &(Local_65.f_C8), &(Local_65.f_CB), &(Local_65.f_CE), &(Local_65.f_CF), &(Local_65.f_D2), &(Local_65.f_D5), &(Local_65.f_D6), &(Local_65.f_D9), &(Local_65.f_DC), &(Local_65.f_66.f_6), &(Local_65.f_66.f_9));
	func_290(iLocal_79, &(Local_65.f_1E6.f_6), &(Local_65.f_1E6.f_9), &(Local_65.f_2.f_1), &(Local_65.f_2.f_4), &(Local_65.f_2.f_5), &(Local_65.f_1C.f_7), &(Local_65.f_1C.f_A), &(Local_65.f_1C.f_D), &(Local_65.f_1C.f_4), &(Local_65.f_1C.f_5), &(Local_65.f_66.f_15));
}

void func_290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x11CC3
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x12225
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_292()//Position - 0x133F7
{
	func_295();
	func_294();
	func_293();
}

void func_293()//Position - 0x1340B
{
	int iVar0;
	
	if (iLocal_81 >= 9)
	{
		if (Global_17C49.f_4771.f_29 > 3)
		{
			if (iLocal_81 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_65.f_1D0 = 1;
				Global_17C49.f_4771.f_29 = 0;
			}
			else
			{
				Local_65.f_1D0 = 0;
				Global_17C49.f_4771.f_29++;
			}
		}
		else
		{
			Global_17C49.f_4771.f_29++;
		}
	}
	else
	{
		Global_17C49.f_4771.f_29++;
	}
}

void func_294()//Position - 0x1349F
{
	int iVar0;
	
	if (iLocal_81 >= 3)
	{
		if (iLocal_81 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_65.f_2.f_C = 1;
		}
		else
		{
			Local_65.f_2.f_C = 0;
		}
	}
}

void func_295()//Position - 0x134DE
{
	int iVar0;
	
	if (iLocal_81 >= 6)
	{
		if (iLocal_81 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_57 = 2;
		}
		else
		{
			iLocal_57 = 1;
		}
	}
}

int func_296()//Position - 0x13514
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_17C49.f_4771[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_297(var uParam0, var uParam1, int iParam2)//Position - 0x13544
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_279(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_279(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_279(*iParam2) };
}

void func_298(var uParam0, int iParam1)//Position - 0x135A3
{
	if (iParam1 > 0)
	{
		uParam0->f_21 = iParam1;
	}
}

bool func_299(int iParam0)//Position - 0x135BA
{
	return Global_8861 == iParam0;
}

int func_300(int iParam0)//Position - 0x135C8
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_301(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_301(int iParam0)//Position - 0x135EA
{
	return func_302(iParam0, Global_8861);
}

int func_302(int iParam0, int iParam1)//Position - 0x135FB
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

void func_303()//Position - 0x137DC
{
	if (((iLocal_62 == 1 || iLocal_62 == 2) || iLocal_100 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_65.f_2) && iLocal_64 == 1))
	{
		if (iLocal_62 == 1)
		{
		}
		if (iLocal_62 == 2)
		{
		}
		if (iLocal_100 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_65.f_2) && iLocal_64 == 1)
		{
		}
		Global_17C49.f_4771.f_15[iLocal_79] = CLOCK::GET_CLOCK_HOURS();
		Global_17C49.f_4771.f_2A[iLocal_79] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && func_315()) && Local_65.f_1D4)
	{
		func_310(&iLocal_79, &iLocal_86, &iLocal_80);
	}
	func_309();
	iLocal_86 = 0;
	iLocal_90 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	if (!bLocal_85)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_78, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_1(Local_65.f_1D6, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_97[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_97[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_97[2]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_97[0]));
			OBJECT::DELETE_OBJECT(&(uLocal_97[1]));
			OBJECT::DELETE_OBJECT(&(uLocal_97[2]));
		}
	}
	if (iLocal_99 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_65.f_1E6.f_1);
	}
	func_304(&Local_95, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_304(var uParam0, bool bParam1)//Position - 0x13973
{
	int iVar0;
	
	if (!bParam1)
	{
		func_306(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_305(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = -1;
	uParam0->f_21 = 1;
}

void func_305(var uParam0)//Position - 0x139B3
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_306(var uParam0)//Position - 0x139C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_307(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_307(var uParam0)//Position - 0x139FD
{
	func_308(*uParam0, "NULL", uParam0->f_1);
}

void func_308(int iParam0, char* sParam1, int iParam2)//Position - 0x13A12
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_253(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_309()//Position - 0x13AD2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_2))
	{
		TASK::CLEAR_PED_TASKS(Local_65.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_2))
	{
		func_203();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_56))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65.f_56));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_65.f_1C))
	{
		if (iLocal_52 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_65.f_1C, -8f, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_65.f_1C, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_1C))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_65.f_1C));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_65.f_60.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_65.f_60.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_01"), 0);
		ENTITY::REMOVE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 0);
		ENTITY::REMOVE_MODEL_HIDE(Local_65.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_65.f_1C.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_65.f_1C.f_1);
	}
	if (func_14(&(Local_65.f_1DD)))
	{
		func_39(&(Local_65.f_1DD));
	}
	if (Local_65.f_1D2)
	{
		if (!bLocal_85)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_65.f_2.f_F);
		}
		Local_65.f_1D2 = 0;
	}
}

void func_310(int iParam0, var uParam1, var uParam2)//Position - 0x13C0F
{
	var uVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	uVar0 = func_314(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_313(iParam0)}, 6);
	if (func_311(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, uVar0, SYSTEM::TO_FLOAT(uVar0));
	}
}

int func_311(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x13C8C
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_312(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_25260F.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_19B138.f_A));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

struct<13> func_312(var uParam0)//Position - 0x13DC0
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

struct<8> func_313(var uParam0)//Position - 0x13DD7
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_314(bool bParam0, int iParam1, int iParam2)//Position - 0x13EA8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_315()//Position - 0x13EBF
{
	if (func_317() && func_316(0))
	{
		return 1;
	}
	return 0;
}

var func_316(int iParam0)//Position - 0x13EDD
{
	return Global_140671[iParam0];
}

var func_317()//Position - 0x13EED
{
	return func_316(func_120() + 1);
}

