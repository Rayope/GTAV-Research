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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<27> Local_55 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_56 = 0;
	struct<3> Local_57[32];
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	struct<20> Local_61 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_146(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_133(ScriptParam_61);
	}
	else
	{
		func_129();
	}
	while (true)
	{
		func_128();
		if (func_118() || func_114(15))
		{
			func_129();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_129();
		}
		switch (func_113(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (func_111(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_55.f_2), 0))
							{
								if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
								{
									func_110("PTD_HELP1", -1);
								}
								else
								{
									func_110("PTD_HELP1H", -1);
								}
							}
						}
					}
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_112() == 4)
				{
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_20();
				}
				else if (func_112() == 4)
				{
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_55.f_18));
				if (func_18(&(Local_55.f_18)))
				{
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_129();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_112())
			{
				case 0:
					if (func_11())
					{
						Local_55 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_55 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1F2
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x206
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (func_7(Local_55.f_2))
	{
		if (Local_55.f_16 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_55.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						Var0.f_2 = 110;
					}
					else
					{
						Var0.f_2 = 113;
					}
					func_5(Var0, func_6(1));
					MISC::SET_BIT(&(Local_55.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_55.f_17 == 0)
	{
		if (Local_55 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
				{
					if (func_3(&(Local_55.f_1A), 3000, 0))
					{
						if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
						{
							Var1.f_2 = 109;
						}
						else
						{
							Var1.f_2 = 112;
						}
						func_5(Var1, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)//Position - 0x2FF
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x35D
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x3A2
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_6(int iParam0)//Position - 0x3CB
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_146(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(var uParam0)//Position - 0x428
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_8(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x448
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x480
{
	switch (Local_55.f_17)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()//Position - 0x4A3
{
	struct<14> Var0;
	var uVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
	{
		if (Local_55 != 4)
		{
			iLocal_59 = 0;
			while (iLocal_59 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_59)))
				{
					uVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_59));
					if (MISC::IS_BIT_SET(Local_57[iLocal_59 /*3*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
						{
							Var0.f_2 = 108;
						}
						else
						{
							Var0.f_2 = 111;
						}
						Var0.f_A = uVar1;
						func_5(Var0, func_6(1));
						Local_55 = 4;
						return;
					}
				}
				iLocal_59++;
			}
		}
	}
}

int func_11()//Position - 0x534
{
	if (func_17(Local_55.f_4) && func_17(Local_55.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()//Position - 0x579
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3) && func_17(Local_55.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (func_7(Local_55.f_2))
		{
			if (func_13(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_55.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_55.f_3), Global_1804A6);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_55.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_55.f_3), 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x613
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x69B
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (func_17(Local_55.f_4))
		{
			if (func_15(&(Local_55.f_2), Local_55.f_4, Local_55.f_6, func_16(Local_55.f_6, Local_55.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_55.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_55.f_2), 1);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_55.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_55.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_55.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				if (Local_55.f_4 == joaat("cuban800"))
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_55.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset"))
					{
						uVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset");
					}
					MISC::SET_BIT(&uVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x7D2
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, uParam3, iParam5, iParam4);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam8);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam6)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
			else
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
			}
		}
		VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, iParam7);
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x855
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_17(int iParam0)//Position - 0x86F
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_18(var uParam0)//Position - 0x88D
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_19(var uParam0)//Position - 0x8B6
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()//Position - 0x8D5
{
	switch (Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_109();
			func_21();
			if (Local_55.f_17 > 0)
			{
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_129();
			break;
	}
}

void func_21()//Position - 0x91D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (!MISC::IS_BIT_SET(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_55.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_55.f_2, &uVar0))
				{
					func_108(2045, -1);
					iVar1 = func_107(2045, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_40001.f_18FE)
					{
						iVar2 = Global_40001.f_18FE;
					}
					iVar3 = (Global_40001.f_18FC * iVar2);
					func_58(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_40001.f_18FD)
					{
						iVar1 = Global_40001.f_18FD;
					}
					iVar4 = (Global_40001.f_18FB * iVar1);
					func_54(iVar4, 1, 1, 1092616192);
					if (func_53())
					{
						func_46(1780666425, iVar4, &uVar6, 0, 0);
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					MISC::SET_BIT(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_55.f_16 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_55.f_2), Local_55.f_9[Local_55.f_16 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_55.f_16++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_55.f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_55.f_2) && func_23(Local_55.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 1, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_2))
							{
								func_22(&(Local_55.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_55.f_3), 1);
								func_22(&(Local_55.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(var uParam0)//Position - 0xB37
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_23(var uParam0)//Position - 0xB5B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_24()//Position - 0xB7D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()//Position - 0xBEE
{
	struct<3> Var0;
	
	if (func_7(Local_55.f_2) && !func_26(Local_55.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
		{
			if (Local_55.f_16 < 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 0)
				{
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_16 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
					}
					else
					{
						TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_16 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 0)
			{
				if (func_23(Local_55.f_2))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_55.f_2), 0f, 12000f, 0f) };
					if (Var0.x < -3700f)
					{
						Var0.x = -3700f;
					}
					else if (Var0.x > 4500f)
					{
						Var0.x = 4500f;
					}
					if (Var0.f_1 < -3900f)
					{
						Var0.f_1 = -3900f;
					}
					else if (Var0.f_1 > 8000f)
					{
						Var0.f_1 = 8000f;
					}
					Var0.f_2 = 100f;
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
					}
					else
					{
						TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
					}
				}
			}
		}
	}
}

int func_26(var uParam0)//Position - 0xDF7
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_27(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0xE16
{
	func_28(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_28(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xE2D
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_29(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_29(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0xE4E
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, bParam3);
	func_34(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_31(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)//Position - 0xEFA
{
	Global_14292B.f_3B[iParam0 /*16*/].f_F = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)//Position - 0xF10
{
	StringCopy(&(Global_14292B.f_3B[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)//Position - 0xF37
{
	MISC::SET_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)//Position - 0xF4E
{
	MISC::SET_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)//Position - 0xF65
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_14292B.f_3B[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)//Position - 0xF85
{
	Global_14292B.f_3B[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)//Position - 0xFDF
{
	Global_14292B.f_3B[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)//Position - 0xFF5
{
	MISC::SET_BIT(&(Global_14292B.f_3B[iParam0 /*16*/]), 0);
}

int func_38()//Position - 0x100C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)//Position - 0x103A
{
	return MISC::IS_BIT_SET(Global_14292B.f_3B[iParam0 /*16*/], 0);
}

int func_40()//Position - 0x1051
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2)//Position - 0x1072
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_42(iParam0, iVar0, iParam2);
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0x1099
{
	int iVar0;
	
	iVar0 = Global_25C4E1[iParam0 /*6*/][func_44(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)//Position - 0x10BD
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25C4E1[iParam0 /*6*/][func_44(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x10E9
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
		if (iVar1 > -1)
		{
			Global_25732E = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_25732E = 1;
		}
	}
	return iVar0;
}

var func_45()//Position - 0x111D
{
	return Global_1407E1;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x1129
{
	int iVar0;
	
	if (!func_53())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x13C1
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_45()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_26C40D = 1;
			return 0;
		}
		if (Global_252B28)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_26C40E = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_26C240[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_52(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_26C240[*uParam0 /*69*/].f_3E = 1;
				}
			}
			Global_26C40A = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_26C40C = 1;
			Global_26C40F = iParam4;
			Global_26C411 = iParam3;
			Global_26C412 = 1;
			Global_26C410 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_26C40F = iParam4;
			Global_26C411 = iParam3;
			Global_26C412 = 1;
			Global_26C410 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_51(1, iParam4);
			Global_26C40C = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1535
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_79.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)//Position - 0x156C
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_50(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_26C240[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_26C240[iParam0 /*69*/] = { Var1 };
	}
}

int func_50(int iParam0)//Position - 0x15CD
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_51(int iParam0, var uParam1)//Position - 0x15F5
{
	Global_25300C = uParam1;
	Global_25300B = iParam0;
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)//Position - 0x1609
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_26C240[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_53())
			{
				iParam0 = iVar0 + 900;
			}
			Global_26C240[iVar0 /*69*/].f_2 = 1;
			Global_26C240[iVar0 /*69*/].f_1 = uParam5;
			Global_26C240[iVar0 /*69*/].f_3 = uParam1;
			Global_26C240[iVar0 /*69*/].f_4 = uParam2;
			Global_26C240[iVar0 /*69*/].f_7 = uParam3;
			Global_26C240[iVar0 /*69*/].f_5 = 0;
			Global_26C240[iVar0 /*69*/] = iParam0;
			Global_26C240[iVar0 /*69*/].f_6 = iParam4;
			Global_26C240[iVar0 /*69*/].f_41 = uParam8;
			Global_26C240[iVar0 /*69*/].f_40 = uParam7;
			Global_26C240[iVar0 /*69*/].f_44 = 0;
			Global_26C40A = 0;
			if (bParam6)
			{
				Global_26C240[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53()//Position - 0x16DD
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x16F1
{
	func_55(iParam0, iParam1, iParam2, fParam3);
}

void func_55(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x1705
{
	func_56(iParam0, iParam1, iParam2, fParam3);
}

void func_56(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x1719
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_4 = iVar1;
	Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_3 = (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_57(iVar1, 0);
	}
}

void func_57(int iParam0, bool bParam1)//Position - 0x179C
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_58(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x17AD
{
	return func_59(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x17CD
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_69(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_65(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_60(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_60(int iParam0, int iParam1, char* sParam2)//Position - 0x1842
{
	struct<3> Var0;
	
	Var0 = { func_63(iParam0, 1) };
	if (iParam0 == func_62(PLAYER::PLAYER_PED_ID()))
	{
		func_61(1);
	}
	func_65(Var0, iParam1, 0, sParam2);
}

void func_61(int iParam0)//Position - 0x1874
{
	Global_24F57C.f_51B = iParam0;
}

int func_62(var uParam0)//Position - 0x1885
{
	return uParam0;
}

Vector3 func_63(int iParam0, bool bParam1)//Position - 0x188F
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	if (iParam0 == func_64(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar1 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var2, &Var3);
	if (bParam1)
	{
		fVar4 = (Var3.f_2 + 0.18f);
	}
	else
	{
		fVar4 = (Var2.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar1, 0f, 0f, fVar4) };
	return Var0;
}

int func_64(var uParam0)//Position - 0x192C
{
	return uParam0;
}

void func_65(struct<3> Param0, int iParam1, int iParam2, char* sParam3)//Position - 0x1936
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_24F57C.f_2D6[iVar0 /*29*/].f_6 == 0 || Global_24F57C.f_2D6[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_24F57C.f_2D6[iVar1 /*29*/] = { Param0 };
			Global_24F57C.f_2D6[iVar1 /*29*/].f_6 = 1;
			Global_24F57C.f_2D6[iVar1 /*29*/].f_4 = func_68(Global_24F57C.f_2D6[iVar1 /*29*/], &Global_14063D, &Global_14063E);
			Global_24F57C.f_2D6[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_24F57C.f_2D6[iVar1 /*29*/].f_3 = iParam1;
			Global_24F57C.f_2D6[iVar1 /*29*/].f_8 = iParam2;
			Global_24F57C.f_2D6[iVar1 /*29*/].f_9 = func_67();
			Global_24F57C.f_2D6[iVar1 /*29*/].f_A = func_66();
			StringCopy(&(Global_24F57C.f_2D6[iVar1 /*29*/].f_16), sParam3, 16);
		}
	}
}

int func_66()//Position - 0x1A36
{
	if (Global_24F57C.f_51B)
	{
		Global_24F57C.f_51B = 0;
		return 1;
	}
	Global_24F57C.f_51B = 0;
	return 0;
}

var func_67()//Position - 0x1A60
{
	var uVar0;
	
	uVar0 = Global_24F57C.f_51D;
	Global_24F57C.f_51D = 1;
	return uVar0;
}

float func_68(struct<3> Param0, var uParam1, var uParam2)//Position - 0x1A7B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_69(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1B14
{
	var uVar0;
	
	uVar0 = func_70(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1B37
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(PLAYER::PLAYER_ID()) || func_105(PLAYER::PLAYER_ID()))
	{
		if (Global_40001.f_1C6E > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_40001.f_1C6E;
		}
	}
	else if (Global_40001.f_136C > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_40001.f_136C;
	}
	if (func_104(uParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_91(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				func_81((func_90(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_2 != -1)
				{
					func_91(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_75(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_71((func_73(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_71((func_73(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_71(int iParam0)//Position - 0x1CF2
{
	if (func_103())
	{
		Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_5 = iParam0;
		func_72(joaat("mpply_globalxp"), iParam0);
	}
}

void func_72(int iParam0, int iParam1)//Position - 0x1D1D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_73(int iParam0)//Position - 0x1D39
{
	if (iParam0 > -1)
	{
		if (func_146(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_74(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_182604[iParam0 /*324*/].f_B4.f_5;
			}
		}
		else
		{
			return func_74(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x1D8A
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_75(int iParam0)//Position - 0x1DA8
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_80(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_78(func_79(&Var0));
			if (iVar1 == 0)
			{
				func_77(&Global_1460C2, iParam0);
				func_76(joaat("mpply_crew_local_xp_0"), Global_1460C2);
			}
			else if (iVar1 == 1)
			{
				func_77(&Global_1460C3, iParam0);
				func_76(joaat("mpply_crew_local_xp_1"), Global_1460C3);
			}
			else if (iVar1 == 2)
			{
				func_77(&Global_1460C4, iParam0);
				func_76(joaat("mpply_crew_local_xp_2"), Global_1460C4);
			}
			else if (iVar1 == 3)
			{
				func_77(&Global_1460C5, iParam0);
				func_76(joaat("mpply_crew_local_xp_3"), Global_1460C5);
			}
			else if (iVar1 == 4)
			{
				func_77(&Global_1460C6, iParam0);
				func_76(joaat("mpply_crew_local_xp_4"), Global_1460C6);
			}
		}
	}
}

void func_76(int iParam0, int iParam1)//Position - 0x1E7C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1460BD = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1460BF = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1460BF = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1460C0 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1460C1 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1460C2 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1460C3 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1460C4 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1460C5 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1460C6 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1460C7 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1460C8 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1460C9 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1460CA = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1460CB = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1460CC = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1460CD = iParam1;
			break;
		
		default:
			break;
	}
}

void func_77(var uParam0, int iParam1)//Position - 0x1FA1
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_78(int iParam0)//Position - 0x1FB2
{
	if (iParam0 == Global_1460BD)
	{
		return 0;
	}
	else if (iParam0 == Global_1460BE)
	{
		return 1;
	}
	else if (iParam0 == Global_1460BF)
	{
		return 2;
	}
	else if (iParam0 == Global_1460C0)
	{
		return 3;
	}
	else if (iParam0 == Global_1460C1)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_79(var uParam0)//Position - 0x200F
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_252863;
		}
	}
	return Global_252863;
}

struct<13> func_80(int iParam0)//Position - 0x2032
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_81(int iParam0, int iParam1, int iParam2)//Position - 0x2049
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_1C55 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_146135[func_44(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_146135[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_1C54 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_1C54 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_89(PLAYER::PLAYER_ID()))
		{
			Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_1 = iParam0;
			Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_6 = func_87(iParam0, 1);
		}
		func_86(627, iParam0, -1, 1);
		func_85(628, func_87(iParam0, 1), -1, 1);
		Global_146135[func_44(-1)] = iParam0;
		func_82(7, 0);
	}
}

void func_82(int iParam0, int iParam1)//Position - 0x2169
{
	int iVar0;
	
	if (func_84(iParam0, iParam1))
	{
		iVar0 = func_83();
		Global_25284D[iVar0] = iParam0;
	}
}

int func_83()//Position - 0x218C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_25284D[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_84(int iParam0, var uParam1)//Position - 0x21C1
{
	if (Global_141430)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_14143C) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2247
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2272
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1460FF[func_44(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_146105[func_44(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14610B[func_44(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_146111[func_44(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1460E7[func_44(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1460ED[func_44(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1460F3[func_44(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1460F9[func_44(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1460CF[func_44(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1460D5[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1460DB[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1460E1[func_44(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_146117[func_44(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_14611D[func_44(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_146123[func_44(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_146129[func_44(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_14612F[func_44(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_146135[func_44(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_14613B[func_44(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_25C7E2[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_25C7E2[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_146141[func_44(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_146147[func_44(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_14614D[func_44(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_146153[func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_87(int iParam0, bool bParam1)//Position - 0x24EC
{
	if (bParam1)
	{
	}
	return func_88(iParam0, 0);
}

int func_88(int iParam0, int iParam1)//Position - 0x2500
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_42099[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_42099[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_89(int iParam0)//Position - 0x25BF
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

int func_90(int iParam0)//Position - 0x25E4
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_146135[func_44(-1)];
			}
			else if (func_89(iParam0))
			{
				return Global_182604[iParam0 /*324*/].f_B4.f_1;
			}
		}
	}
	else
	{
		return Global_146135[func_44(-1)];
	}
	return 0;
}

void func_91(int iParam0, int iParam1, int iParam2)//Position - 0x2641
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam2, 1);
	}
}

int func_92(int iParam0)//Position - 0x2682
{
	if (Global_1460BC)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

void func_93(int iParam0)//Position - 0x2736
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_96(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_95(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam0, 100) * (10f * Global_40001.f_105B)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_94(*iParam0, 100) * (20f * Global_40001.f_1054)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)//Position - 0x2820
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)//Position - 0x2841
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_25510E = { func_80(iParam0) };
		Global_25511B = { func_80(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_25510E))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_25511B))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2550C8, 35, &Global_25510E);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2550EB, 35, &Global_25511B);
				if (Global_2550C8 == Global_2550EB)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)//Position - 0x28AE
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)//Position - 0x2A64
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_146(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_146(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_98(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_94(*iParam1, 100) * (10f * Global_40001.f_105B)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam1, 100) * (20f * Global_40001.f_1054)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)//Position - 0x2B7C
{
	return SYSTEM::VDIST(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(var uParam0)//Position - 0x2B98
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_100(int iParam0)//Position - 0x2BAB
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)//Position - 0x2BE2
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_90(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_90(PLAYER::PLAYER_ID());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_90(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_90(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)//Position - 0x2C46
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_42099[iParam0];
}

int func_103()//Position - 0x2C6E
{
	return 1;
}

int func_104(var uParam0)//Position - 0x2C77
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)//Position - 0x2CAF
{
	return Global_24D5B9[iParam0 /*254*/].f_72 == 2;
}

bool func_106(int iParam0)//Position - 0x2CC3
{
	return Global_24D5B9[iParam0 /*254*/].f_72 == 7;
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0x2CD7
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_44(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1)//Position - 0x2D09
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam1, 1);
	}
}

void func_109()//Position - 0x2D49
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_60))
		{
			uLocal_60 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_55.f_2));
			if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
			{
				HUD::SET_BLIP_SPRITE(uLocal_60, 307);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_60, "PTD_BLIPN");
			}
			else
			{
				HUD::SET_BLIP_SPRITE(uLocal_60, 64);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_60, "PTD_BLIPH");
			}
			HUD::SET_BLIP_COLOUR(uLocal_60, 1);
			HUD::SET_BLIP_FLASH_TIMER(uLocal_60, 7000);
			HUD::SET_BLIP_PRIORITY(uLocal_60, 6);
		}
		else if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
		{
			HUD::SET_BLIP_ROTATION(uLocal_60, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_55.f_2))));
		}
	}
}

void func_110(char* sParam0, int iParam1)//Position - 0x2DF6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_111(int iParam0)//Position - 0x2E0D
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_24C03C, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_112()//Position - 0x2E28
{
	return Local_55;
}

int func_113(int iParam0)//Position - 0x2E32
{
	return Local_57[iParam0 /*3*/];
}

bool func_114(int iParam0)//Position - 0x2E40
{
	return !func_115(iParam0);
}

int func_115(int iParam0)//Position - 0x2E4F
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_1384)
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_1385)
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_1386)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_1387)
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 0) || MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_EB.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_116(int iParam0)//Position - 0x30E9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_146(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_24D5B9[iVar0 /*254*/].f_CD, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)//Position - 0x312E
{
	return MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_CD, iParam1);
}

int func_118()//Position - 0x3146
{
	bool bVar0;
	
	func_125(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_141422 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_122(157))
	{
		if (!func_121())
		{
			return 1;
		}
	}
	if (func_122(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_119() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_119()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x31D9
{
	switch (func_120())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_120()//Position - 0x320D
{
	return Global_5F7C;
}

bool func_121()//Position - 0x3218
{
	return Global_250CE3.f_23C;
}

int func_122(int iParam0)//Position - 0x3227
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_123()//Position - 0x323E
{
	return Global_2528A6;
}

bool func_124()//Position - 0x324A
{
	return Global_250CE3.f_237;
}

void func_125(var uParam0)//Position - 0x3259
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_126(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 3);
					if (Var3.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_126(int iParam0)//Position - 0x32C9
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_146(Var0.f_1, 1, 1))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_127(uVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, var uParam1)//Position - 0x334A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_128()//Position - 0x3398
{
	SYSTEM::WAIT(0);
}

void func_129()//Position - 0x33A5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_60))
	{
		HUD::REMOVE_BLIP(&uLocal_60);
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_132();
	if (func_112() == 4 && Local_55.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_55.f_4, 0);
	}
	func_131(15, 0);
	func_130();
}

void func_130()//Position - 0x3401
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_131(int iParam0, bool bParam1)//Position - 0x340D
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CD, iParam0))
		{
			MISC::SET_BIT(&(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CD), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CD, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CD), iParam0);
	}
}

void func_132()//Position - 0x346C
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_58);
}

void func_133(struct<20> Param0)//Position - 0x347A
{
	int iVar0;
	
	func_144(func_145(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_142(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 28);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_57, 97);
	if (!func_141())
	{
		func_129();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_55.f_4 = joaat("cuban800");
					Local_55.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_55.f_4 = joaat("stunt");
					Local_55.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_55.f_4 = joaat("duster");
					Local_55.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_55.f_4 = joaat("mammatus");
					Local_55.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_55.f_4 = joaat("maverick");
					Local_55.f_5 = joaat("a_m_m_eastsa_02");
					MISC::SET_BIT(&(Local_55.f_1), 0);
					break;
				
				case 5:
					Local_55.f_4 = joaat("swift");
					Local_55.f_5 = joaat("a_m_y_busicas_01");
					MISC::SET_BIT(&(Local_55.f_1), 0);
					break;
			}
			if (Local_55.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_55.f_4, 1);
			}
			func_140();
			func_134();
		}
		func_131(15, 1);
		Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_129();
	}
}

void func_134()//Position - 0x35C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1) };
		if (iVar0 > 0)
		{
			if (func_135(Local_55.f_9[iVar0 /*3*/], Local_55.f_9[(iVar0 - 1) /*3*/], 250f))
			{
				Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_135(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3631
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param1.x)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_136(int iParam0)//Position - 0x367D
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_139();
		
		case 1:
			return func_138();
		
		case 2:
			return func_137();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_137()//Position - 0x36D3
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_138()//Position - 0x382E
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_139()//Position - 0x3989
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_140()//Position - 0x3AE0
{
	Local_55.f_6 = { func_136(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_55.f_6 = { Local_55.f_6 + Vector(120f, 0f, 0f) };
}

int func_141()//Position - 0x3B0C
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_122(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x3B65
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
		if (!func_143())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_124())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_122(155))
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_130();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1406F8 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_130();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()//Position - 0x3C7A
{
	return Global_141422;
}

void func_144(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x3C86
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_130();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_10);
}

int func_145(int iParam0)//Position - 0x3CA5
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

int func_146(int iParam0, bool bParam1, bool bParam2)//Position - 0x3F5E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_24F57C.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

