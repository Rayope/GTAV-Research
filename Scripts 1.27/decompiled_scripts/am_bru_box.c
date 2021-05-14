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
	struct<10> Local_55 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_56 = 0;
	struct<3> Local_57[32];
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	struct<20> Local_63 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ScriptParam_63.f_10 >= 32)
		{
			if (func_185(PLAYER::PLAYER_ID()) != 1)
			{
				func_180();
			}
		}
		if (!func_173(ScriptParam_63))
		{
			func_180();
		}
	}
	while (true)
	{
		func_172();
		if (func_162())
		{
			func_180();
		}
		if (ScriptParam_63.f_10 >= 32)
		{
			if (func_185(PLAYER::PLAYER_ID()) != 1)
			{
				func_180();
			}
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != iLocal_62)
		{
			func_180();
		}
		NETWORK::_0x2302C0264EA58D31();
		switch (func_161(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_160())
				{
					if (func_159() == 1)
					{
						Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_159() == 4)
					{
						Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_159() == 1)
				{
					func_129();
				}
				else if (func_159() == 4)
				{
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_185(PLAYER::PLAYER_ID()) != 1)
					{
						Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_127(&(Local_55.f_9));
				if (func_126(&(Local_55.f_9)))
				{
					Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_180();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_159())
			{
				case 0:
					if (func_6())
					{
						Local_55 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
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

int func_1()//Position - 0x21C
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x230
{
	if (Local_55.f_7 >= 32)
	{
		if (func_3(Global_2554DA.f_30A.f_1))
		{
			return 1;
		}
	}
	if (Local_55.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(struct<3> Param0)//Position - 0x264
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x28E
{
	switch (Local_55.f_8)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) || Local_55.f_6 != -1)
			{
				Local_55.f_8 = 1;
			}
			break;
		
		case 1:
			Local_55.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()//Position - 0x2DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (MISC::IS_BIT_SET(Local_57[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!MISC::IS_BIT_SET(Local_55.f_1, 7))
			{
				if (MISC::IS_BIT_SET(Local_57[iVar0 /*3*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_55.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()//Position - 0x34A
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<18> Var7;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (func_160())
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				fVar3 = 250f;
				Var4 = { Local_55.f_3 };
				if (MISC::IS_BIT_SET(Local_55.f_1, 8))
				{
					Var0 = { Global_2554DA.f_30A.f_1 };
					uVar1 = Global_2554DA.f_30A.f_4;
				}
				if (func_185(PLAYER::PLAYER_ID()) == 7)
				{
					iVar6 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
					if (Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_A > 0f)
					{
						Var4 = { Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_3 };
						Var5 = { Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_6 };
						fVar3 = Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_A;
						iVar2 = 1;
					}
					else if (Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_9 > 0f)
					{
						Var4 = { Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/] };
						fVar3 = Global_187385.f_48[iVar6 /*5346*/].f_199[0 /*23*/].f_9;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_A = 1;
				if (iVar2 == 0)
				{
					if (MISC::IS_BIT_SET(Local_55.f_1, 8) || func_125(Var4, fVar3, &Var0, &uVar1, Var7))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_55.f_2), uVar1);
					}
				}
				else if (MISC::IS_BIT_SET(Local_55.f_1, 8) || func_7(Var4, Var5, fVar3, &Var0, &uVar1, Var7))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_55.f_2), uVar1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3, var uParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x58D
{
	struct<11> Var0;
	struct<23> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_A = 3;
	Var0.f_E = 3;
	Var1.f_16 = 1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 1;
	Var1.f_8 = { Param0 };
	Var1.f_B = { Param1 };
	Var1.f_E = fParam2;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	Param5.f_7 = 0;
	if (func_8(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*uParam4 = Var0.f_A[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)//Position - 0x62B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	struct<46> Var11;
	bool bVar12;
	
	bVar10 = false;
	if (!uParam0->f_7)
	{
		if (((!Global_24B0C4.f_4A8 == *uParam0 || !Global_24B0C4.f_4A8.f_1 == uParam0->f_1) || !Global_24B0C4.f_4A8.f_2 == uParam0->f_2) || !Global_24B0C4.f_4AB == uParam0->f_4)
		{
			bVar10 = true;
		}
	}
	else if ((((((!Global_24B0C4.f_4B6 == uParam0->f_8 || !Global_24B0C4.f_4B6.f_1 == uParam0->f_8.f_1) || !Global_24B0C4.f_4B6.f_2 == uParam0->f_8.f_2) || !Global_24B0C4.f_4B9 == uParam0->f_B) || !Global_24B0C4.f_4B9.f_1 == uParam0->f_B.f_1) || !Global_24B0C4.f_4B9.f_2 == uParam0->f_B.f_2) || !Global_24B0C4.f_4BC == uParam0->f_E)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (Global_24B0C4.f_4A6 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B0C4.f_4AF))
			{
				if (Global_24B0C4.f_4AF == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) < func_124())
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) < func_124())
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_123();
		}
		Global_24B0C4.f_4A6 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) > func_124())
	{
		Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
	}
	if (!uParam0->f_7)
	{
		fVar2 = (*uParam0 - uParam0->f_4);
		fVar3 = (uParam0->f_1 - uParam0->f_4);
		fVar4 = (*uParam0 + uParam0->f_4);
		fVar5 = (uParam0->f_1 + uParam0->f_4);
	}
	else
	{
		if (uParam0->f_8 < uParam0->f_B)
		{
			fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
			fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
		}
		else
		{
			fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
			fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
		}
		if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
		{
			fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
			fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
		}
		else
		{
			fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
			fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fVar2, fVar3, fVar4, fVar5);
	if (!uParam0->f_7)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B0C4.f_4A6)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		func_123();
		if (uParam1->f_7 && !uParam0->f_7)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_122(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_11, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_A[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!uParam0->f_7)
			{
				Global_24B0C4.f_4A8 = { *uParam0 };
				Global_24B0C4.f_4AB = uParam0->f_4;
				Global_24B0C4.f_4BD = 0;
			}
			else
			{
				Global_24B0C4.f_4B6 = { uParam0->f_8 };
				Global_24B0C4.f_4B9 = { uParam0->f_B };
				Global_24B0C4.f_4BC = uParam0->f_E;
				Global_24B0C4.f_4A8 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
				Global_24B0C4.f_4BD = 1;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_121(Var6.x, Var6.f_1);
			}
			Global_24B0C4.f_4A7 = 1;
			Global_24B0C4.f_4A6 = 1;
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4AC = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4AF = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B0C4.f_4A6)
	{
		if (Global_24B0C4.f_4A7 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 5000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var11.f_6 = 1082130432;
					Var11.f_7 = 1176255488;
					Var11.f_8 = 1;
					Var11.f_A = 1;
					Var11.f_D = 1;
					Var11.f_F = 1;
					Var11.f_10 = 1;
					Var11.f_1F = 1;
					Var11.f_22 = joaat("tailgater");
					Var11.f_2B = 1123024896;
					Var11 = { *uParam1 };
					Var11.f_3 = uParam1->f_5;
					Var11.f_B = uParam1->f_9;
					Var11.f_12 = 1;
					if (uParam0->f_7)
					{
						Var11.f_1A = 1;
						Var11.f_13 = { uParam0->f_8 };
						Var11.f_16 = { uParam0->f_B };
						Var11.f_19 = uParam0->f_E;
					}
					else
					{
						Var11.f_1A = 0;
						Var11.f_13 = { *uParam0 };
						Var11.f_19 = uParam0->f_4;
					}
					Var11.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var11.f_1E = 1;
						Var11.f_20 = 1;
					}
					Var11.f_26 = { uParam1->f_D };
					Var11.f_29 = uParam1->f_10;
					Var11.f_2D = uParam1->f_11;
					func_108(uParam2[0 /*3*/], &(uParam2->f_A[0]), &Var11);
					if ((uParam1->f_7 && uParam1->f_9) && !uParam0->f_7)
					{
						if (!func_107(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_A[0] = uParam0->f_3;
						}
					}
					Global_24B0C4.f_4A7 = 9;
				}
				else
				{
					Global_24B0C4.f_4A7 = 2;
				}
			}
		}
		if (Global_24B0C4.f_4A7 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(Var7, Var8) == 0)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_104(PLAYER::PLAYER_ID(), 0))
				{
					Global_24B0C4.f_4A7 = 3;
				}
				else
				{
					Global_24B0C4.f_4A7 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4B1) > 7000)
			{
				func_103(Var6.x, Var6.f_1);
			}
		}
		if (Global_24B0C4.f_4A7 == 3)
		{
			if (func_102() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 10000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 4;
			}
		}
		if (Global_24B0C4.f_4A7 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				func_97();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					if (!uParam0->f_7)
					{
						if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
						{
							Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
							Global_24B0C4.f_4A7 = 5;
						}
					}
					else if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
					{
						Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
						Global_24B0C4.f_4A7 = 5;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					Global_24B0C4.f_4A7 = 5;
					if (!uParam0->f_7)
					{
						PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					}
					else
					{
						PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					}
				}
			}
		}
		if (Global_24B0C4.f_4A7 == 5)
		{
			if (func_39(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B0C4.f_4C1.f_4)
				{
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					Global_24B0C4.f_4A7 = 6;
				}
				else
				{
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_A[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						}
					}
					Global_24B0C4.f_4A7 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 8;
			}
		}
		if (Global_24B0C4.f_4A7 == 6)
		{
			iVar0 = 0;
			Global_24B0C4.f_4C1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (!uParam0->f_7)
			{
				if (!func_38(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_37(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4A7 = 7;
			if (!uParam0->f_7)
			{
				PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
			}
			else
			{
				PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
			}
		}
		if (Global_24B0C4.f_4A7 == 7)
		{
			if (func_39(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B0C4.f_52C[iVar9 /*3*/]) == 0f)
							{
								if (!uParam0->f_7)
								{
									if (SYSTEM::VDIST(Global_24B0C4.f_52C[iVar9 /*3*/], *uParam0) < uParam0->f_4)
									{
									}
								}
								else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B0C4.f_52C[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
								{
									*(uParam2[0 /*3*/]) = { Global_24B0C4.f_52C[iVar9 /*3*/] };
								}
							}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						if (!uParam0->f_7)
						{
							Var1 = { *uParam0 };
						}
						else
						{
							Var1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
						}
						func_11(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_A[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_24B0C4.f_4A7 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 20000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 8;
			}
		}
		if (Global_24B0C4.f_4A7 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_24B0C4.f_194))
				{
				}
			}
			else if (Global_24B0C4.f_4C1.f_1)
			{
				func_9(uParam2, &(Global_24B0C4.f_4C1.f_5));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar12 = false;
				}
				else
				{
					bVar12 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B0C4.f_4A8 };
				func_11(uParam2[0 /*3*/], 0, bVar12, 0, 0, uParam0, uParam1);
			}
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4A7 = 9;
		}
		if (Global_24B0C4.f_4A7 == 9)
		{
			Global_24B0C4.f_4A6 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_123();
			return 1;
		}
		Global_24B0C4.f_4AC = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)//Position - 0x1258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*8*/])->f_4 };
		uParam0->f_A[iVar0] = (uParam1[iVar0 /*8*/])->f_7;
		uParam0->f_E[iVar0] = (*uParam1)[iVar0 /*8*/];
		iVar0++;
	}
}

int func_10(int iParam0)//Position - 0x12A2
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x12C1
{
	struct<3> Var0;
	var uVar1;
	struct<46> Var2;
	var uVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("tailgater");
	Var2.f_2B = 1123024896;
	if (bParam1)
	{
		iVar5 = 0;
	}
	else
	{
		iVar5 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar5 += 4;
			}
			else if (!uParam5->f_7)
			{
				Var6 = { *uParam5 };
				if (func_38(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar5 += 4;
				}
			}
			else
			{
				Var6 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
				if (func_37(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar5 += 4;
				}
			}
		}
		else
		{
			iVar5 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar5, iParam3, 1))
	{
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (bParam4)
		{
			Var2.f_12 = 1;
			if (uParam5->f_7)
			{
				Var2.f_1A = 1;
				Var2.f_13 = { uParam5->f_8 };
				Var2.f_16 = { uParam5->f_B };
				Var2.f_19 = uParam5->f_E;
			}
			else
			{
				Var2.f_1A = 0;
				Var2.f_13 = { *uParam5 };
				Var2.f_19 = uParam5->f_4;
			}
		}
		Var2.f_26 = { uParam6->f_D };
		Var2.f_29 = uParam6->f_10;
		Var2.f_2D = uParam6->f_11;
		func_108(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		if (uParam5->f_7)
		{
			Var7 = { uParam5->f_8 };
			Var8 = { uParam5->f_B };
			fVar9 = uParam5->f_E;
		}
		else
		{
			Var7 = { *uParam5 };
			fVar9 = uParam5->f_4;
		}
		if (!func_12(Var0, uParam5->f_7, Var7, Var8, fVar9))
		{
			if (func_13(*uParam0, &Var0, iVar5, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var7, Var8, fVar9))
				{
					if (uParam5->f_7)
					{
						Var0 = { Var7 + Var8 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var7 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7)
				{
					Var0 = { Var7 + Var8 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var7 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_24B0C4.f_206 = 1;
}

int func_12(struct<3> Param0, bool bParam1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x15AA
{
	if (bParam1)
	{
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param2, Param3, fParam4, 0, 1);
	}
	else if (SYSTEM::VDIST(Param0, Param2) <= fParam4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x15EF
{
	float fVar0;
	
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam1, iParam2))
	{
		fVar0 = SYSTEM::VDIST(Param0, *uParam1);
		if (fVar0 < 40f)
		{
			if ((iParam3 == 1 && !func_14(Global_24B0C4.f_1A1, &Param0, 0f, 0f, 0f, 0f, bParam4, 1)) || iParam3 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x165B
{
	if (func_27(Param0))
	{
		if (func_26(uParam1, bParam4, 0, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_17(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_16(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	if (SYSTEM::VDIST(*uParam1, Param2) < fParam3)
	{
		if (bParam4)
		{
			func_15(uParam1, Param2, fParam3, 1036831949, 0);
		}
		return 1;
	}
	return 0;
}

void func_15(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4)//Position - 0x16E6
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_16(struct<3> Param0, float fParam1)//Position - 0x1768
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SYSTEM::VDIST(Param0, Global_24B0C4.f_58A[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(var uParam0, bool bParam1, bool bParam2)//Position - 0x17A2
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_24B0C4.f_11A.f_79)
	{
		if (Global_24B0C4.f_11A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_18(&Var1, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_17(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_18(&Var1, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1036831949, 1, bParam2);
					}
					*uParam0 = { Var1 };
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_18(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1851
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_23(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_22(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_19(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_19(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)//Position - 0x195A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_21(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_20(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_20(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_21(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_21(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_20(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_20(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_20(struct<3> Param0, struct<3> Param1)//Position - 0x1C29
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_21(struct<3> Param0, struct<3> Param1)//Position - 0x1C4A
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_22(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x1C83
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

Vector3 func_23(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x1D82
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_15(&Param0, Param1, fParam3, fParam5, bParam6);
			break;
		
		case 1:
			func_22(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_19(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_107(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_24(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_24(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x1E84
{
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_25(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1F27
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_107(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_24(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2088
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_24B8BC[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24B8BC[iVar0 /*17*/].f_10))
			{
				if (func_25(*uParam0, &(Global_24B8BC[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_24B8BC[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24B8BC[iVar0 /*17*/].f_D };
						}
						else
						{
							Var1 = { *uParam0 };
							func_18(&Var1, &(Global_24B8BC[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_26(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_18(&Var1, &(Global_24B8BC[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(struct<3> Param0)//Position - 0x2161
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_31(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (!Global_24B0C4.f_1A4)
	{
		if (!func_30(Param0, 1008981770))
		{
			if (!func_26(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_26(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_29(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_28(&(Global_24B0C4.f_25[iVar0 /*12*/])) };
				if (!func_26(&Var1, 0, 0, 0))
				{
					if (!func_26(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(var uParam0)//Position - 0x2203
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_29(struct<3> Param0, float fParam1)//Position - 0x224C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_24B0C4.f_25[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_24B0C4.f_25[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_30(struct<3> Param0, float fParam1)//Position - 0x2294
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_24B0C4.f_25[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_24B0C4.f_25[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1)//Position - 0x22DB
{
	if (Global_1406C1 != 0)
	{
		return func_35(iParam0) != 0;
	}
	return func_32(iParam0, bParam1);
}

int func_32(int iParam0, bool bParam1)//Position - 0x2301
{
	if (bParam1)
	{
		if (func_33(iParam0))
		{
			return 1;
		}
	}
	if (Global_182604[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_33(int iParam0)//Position - 0x232D
{
	return func_34(iParam0);
}

bool func_34(int iParam0)//Position - 0x233B
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

int func_35(int iParam0)//Position - 0x2355
{
	if (func_36(iParam0, 0, 1))
	{
		return Global_24D5B9[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_36(int iParam0, bool bParam1, bool bParam2)//Position - 0x2376
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

int func_37(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x23BA
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_38(float fParam0)//Position - 0x2465
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x247D
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B0C4.f_4C1 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_24B0C4.f_4C1)))
			{
				case 0:
					if (uParam2->f_7 && !Global_24B0C4.f_1B8.f_7)
					{
						*(uParam0[0 /*3*/]) = { *uParam1 };
						uParam0->f_A[0] = uParam1->f_3;
						return 1;
					}
					else
					{
						if (uParam1->f_15)
						{
							*(uParam0[0 /*3*/]) = { uParam1->f_12 };
						}
						else
						{
							*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
						}
						if (uParam1->f_5 && func_10(Global_24B0C4.f_194))
						{
							if (!Global_24B0C4.f_4C1.f_4)
							{
								Global_24B0C4.f_4C1.f_4 = 1;
							}
							else
							{
								func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
							}
						}
						else
						{
							func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
						}
						uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					Global_24B0C4.f_4C1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_24B0C4.f_4C1.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_94(Global_24B0C4.f_1B8, &(Global_24B0C4.f_4C1.f_1E), &(Global_24B0C4.f_4C1.f_3F));
	}
	if (uParam2->f_7 && !Global_24B0C4.f_4C1.f_3)
	{
		Global_24B0C4.f_4C1.f_3 = 1;
		func_44(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 43;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B0C4.f_4C1 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B0C4.f_4C1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B0C4.f_4C1.f_2)
					{
						iVar2 = Global_24B0C4.f_4C1.f_2 + 1;
					}
					if (iVar2 > (Global_24B0C4.f_4C1 - 1))
					{
						iVar2 = (Global_24B0C4.f_4C1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_44(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B0C4.f_4C1.f_2 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B0C4.f_4C1;
		}
		if (Global_24B0C4.f_4C1 == iVar2)
		{
			if (uParam1->f_5 && func_10(Global_24B0C4.f_194))
			{
				if (Global_24B0C4.f_4C1.f_1)
				{
					func_9(uParam0, &(Global_24B0C4.f_4C1.f_5));
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B0C4.f_4C1.f_1)
			{
				func_9(uParam0, &(Global_24B0C4.f_4C1.f_5));
				func_43(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B0C4.f_4C1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_A[0]));
				if (!func_40(uParam0[0 /*3*/], 0))
				{
					uParam0->f_A[0] = (uParam0->f_A[0] * 57.29578f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_43(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
		if (uParam1->f_5 && func_10(Global_24B0C4.f_194))
		{
			if (!Global_24B0C4.f_4C1.f_4)
			{
				Global_24B0C4.f_4C1.f_4 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_43(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_40(var uParam0, bool bParam1)//Position - 0x2995
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_42(Var1);
	iVar0 = 0;
	while (iVar0 < Global_24BC43[iVar2])
	{
		if (func_41(Var1, &(Global_24B945[iVar2 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_24B945[iVar2 /*85*/][iVar0 /*7*/], Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_3, Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24BC43[8])
	{
		if (func_41(Var1, &(Global_24B945[8 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_24B945[iVar2 /*85*/][iVar0 /*7*/], Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_3, Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_41(struct<3> Param0, var uParam1)//Position - 0x2AA2
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_42(struct<2> Param0, var uParam1)//Position - 0x2AC2
{
	if (Param0 < 0f)
	{
		if (Param0.f_1 > 4000f)
		{
			return 0;
		}
		else if (Param0.f_1 > 0f)
		{
			return 2;
		}
		else if (Param0.f_1 > -2000f)
		{
			return 4;
		}
		else
		{
			return 6;
		}
	}
	else if (Param0.f_1 > 4000f)
	{
		return 1;
	}
	else if (Param0.f_1 > 0f)
	{
		return 3;
	}
	else if (Param0.f_1 > -2000f)
	{
		return 5;
	}
	else
	{
		return 7;
	}
	return 8;
}

void func_43(struct<3> Param0)//Position - 0x2B4E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B0C4.f_52C[(3 - iVar0) /*3*/] = { Global_24B0C4.f_52C[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B0C4.f_52C[0 /*3*/] = { Param0 };
}

void func_44(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x2B9E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<8> Var11;
	bool bVar12;
	bool bVar13;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_24B0C4.f_194 == 1)
		{
			if (MISC::ABSF((Global_24B0C4.f_1A1.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_31(PLAYER::PLAYER_ID(), 1))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_93(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_92(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	if (SYSTEM::VMAG(uParam3->f_D) > 0f)
	{
		if (SYSTEM::VDIST(Param0, uParam3->f_D) > uParam3->f_10)
		{
			iVar7 += 64;
		}
	}
	else
	{
		iVar7 += 64;
	}
	if (uParam2->f_5)
	{
		if (!Global_24B0C4.f_219)
		{
			if (func_27(Global_24B0C4.f_1A1))
			{
				if ((!func_26(&Param0, 0, 0, 0) && !func_17(&Param0, 0, 0)) && !func_91(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_17(&Param0, 0, 0) && !func_91(&Param0, 0)) && !func_16(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_90(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam2->f_5)
	{
		if (func_83(Param0, fParam1, uParam2->f_F, func_89(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_24B0C4.f_1;
		}
	}
	else if (!func_77(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_76(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_76(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam2->f_5)
	{
		if (!(func_75(PLAYER::PLAYER_ID()) && func_73(PLAYER::PLAYER_ID())))
		{
			if (!func_72(&Param0, &(Global_24B0C4.f_4C1.f_3F), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_73(PLAYER::PLAYER_ID()))
		{
			if (!func_71(Param0, &(Global_24B0C4.f_4C1.f_1E), &(Global_24B0C4.f_4C1.f_3F), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_70(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_70(Param0))
			{
				if (func_10(Global_24B0C4.f_194))
				{
					if (func_30(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_69(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_24B0C4.f_25.f_1F)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_40(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_68(Param0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar12 = false;
	bVar13 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_24B0C4.f_4C1.f_5[iVar10 /*8*/])
		{
			if (uParam2->f_5)
			{
				if (!bVar12)
				{
					if (bParam4)
					{
						uParam3->f_4 = 0;
						bVar4 = false;
					}
					else
					{
						bVar4 = true;
					}
					if (uParam2->f_15)
					{
						fVar0 = func_60(Param0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_60(Param0, Global_24B0C4.f_4A8, uParam3->f_6, uParam3->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar12 = true;
				}
				if ((func_10(Global_24B0C4.f_194) && iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar13)
					{
						fVar2 = func_58(Param0);
						bVar13 = true;
					}
					if (fVar2 < Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam1;
						Var11 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						func_57(Var11, iVar10);
						Global_24B0C4.f_4C1.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] || (iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] && fVar0 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam1;
					Var11 = iVar7;
					Var11.f_1 = fVar0;
					func_57(Var11, iVar10);
					Global_24B0C4.f_4C1.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar12)
				{
					if (uParam2->f_F)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_56(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_46(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_45(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_45(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar12 = true;
				}
				if (iVar7 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] || (iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] && fVar3 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam1;
					Var11 = iVar7;
					Var11.f_3 = fVar3;
					func_57(Var11, iVar10);
					Global_24B0C4.f_4C1.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}

float func_45(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x331A
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_46(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x33B8
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	
	fVar2 = 999999.9f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_36(iVar5, 1, 1))
		{
			if (!iVar5 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar3 = false;
				if (bParam1)
				{
					if (func_49(iVar5))
					{
						bVar3 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar5) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar5) == -1 || !func_31(PLAYER::PLAYER_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar5) || !bParam4)
					{
						if (func_48(iVar5))
						{
							Var4 = { func_47(iVar5) };
							if (!bParam4)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4, 1);
							if (fVar1 < fVar2)
							{
								fVar2 = fVar1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar2;
}

Vector3 func_47(int iParam0)//Position - 0x34B0
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_48(int iParam0)//Position - 0x34C3
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24D5B9[iParam0 /*254*/].f_EF)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x34ED
{
	if (func_36(iParam0, 0, 1))
	{
		if (!func_54(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_32(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_53(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_32(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_50(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x3597
{
	if (func_52(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_25510E = { func_51(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_25510E))
	{
		return 1;
	}
	return 0;
}

struct<13> func_51(var uParam0)//Position - 0x35CD
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_52(int iParam0, var uParam1)//Position - 0x35E4
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_25510E = { func_51(iParam0) };
		Global_25511B = { func_51(uParam1) };
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

int func_53(int iParam0, int iParam1)//Position - 0x3651
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

int func_54(int iParam0)//Position - 0x3807
{
	if (func_104(iParam0, 0))
	{
		return 1;
	}
	if (func_55())
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

bool func_55()//Position - 0x3848
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

float func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3859
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_36(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_36(iVar1, 1, 1))
		{
			if (!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_48(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_57(struct<8> Param0, int iParam1)//Position - 0x39F0
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B0C4.f_4C1.f_5[iParam1 /*8*/] };
	Global_24B0C4.f_4C1.f_5[iParam1 /*8*/] = { Param0 };
	if (iParam1 < 2)
	{
		func_57(Var0, iParam1 + 1);
	}
}

float func_58(struct<3> Param0)//Position - 0x3A42
{
	var uVar0;
	
	return func_59(Param0, &(Global_24B0C4.f_25), &uVar0);
}

float func_59(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3A5A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B0C4.f_589) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_60(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3BD6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_45(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_45(func_46(Param0, 1, 0, 0, 1), 0f, func_67(), func_65(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_45(func_63(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_31(PLAYER::PLAYER_ID(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_45(func_62(Param0, PLAYER::PLAYER_ID(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam3)
	{
		if (func_61(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_45(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_45(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_45(SYSTEM::VDIST(Global_24B0C4.f_1A1, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_61(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3D81
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar1, &Var0);
		*uParam1 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_62(struct<3> Param0, int iParam1, int iParam2)//Position - 0x3DDA
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam1 == iVar2 || iParam2 == 1)
		{
			iVar3 = iVar2;
			if (func_36(iVar3, 0, 1))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1))
				{
					if (Global_24C9BC.f_104[iVar2])
					{
						fVar1 = SYSTEM::VDIST(Global_24C9BC.f_82[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_63(struct<3> Param0)//Position - 0x3E7B
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2]))
			{
				if (func_64(uVar4[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_64(var uParam0)//Position - 0x3F07
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_180484[PLAYER::PLAYER_ID()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_182604[PLAYER::PLAYER_ID() /*324*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_180363[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_65()//Position - 0x3FB2
{
	if (func_66())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B0C4.f_25.f_2B) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B0C4.f_25.f_2B)) || Global_24B0C4.f_25.f_2B == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_66()//Position - 0x4010
{
	if (Global_24B0C4.f_25.f_29 && !Global_24B0C4.f_25.f_F0)
	{
		if (!func_54(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_67()//Position - 0x4045
{
	if (func_66())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B0C4.f_25.f_2B) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B0C4.f_25.f_2B)) || Global_24B0C4.f_25.f_2B == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_68(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x40A1
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_69(struct<3> Param0)//Position - 0x4130
{
	var uVar0;
	int iVar1;
	
	if (Global_24B0C4.f_25.f_1F)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B0C4.f_25.f_20))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_24B0C4.f_25.f_21)
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
	}
	return 1;
}

int func_70(struct<3> Param0)//Position - 0x419B
{
	float fVar0;
	
	if (!Global_24B0C4.f_4BD)
	{
		fVar0 = MISC::ABSF((Param0.f_2 - Global_24B0C4.f_4A8.f_2));
		if (fVar0 < Global_24B0C4.f_4AB)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_24B0C4.f_4B6, Global_24B0C4.f_4B9, Global_24B0C4.f_4BC, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, var uParam1, var uParam2, float fParam3)//Position - 0x4201
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x42AF
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_15(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x4321
{
	switch (Global_1406C1)
	{
		case 0:
			if (!func_74(iParam0))
			{
				if (Global_182604[iParam0 /*324*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)//Position - 0x4357
{
	return Global_182604[iParam0 /*324*/].f_A5 != 0;
}

int func_75(int iParam0)//Position - 0x436C
{
	if (func_32(iParam0, 1))
	{
		if (Global_182604[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x4390
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_36(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_36(iVar1, 1, 1))
		{
			if (!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_48(iVar1) || !bParam8) && !Global_24D5B9[iVar1 /*254*/].f_FD)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4546
{
	if (func_82(Param0, fParam1, iParam2, iParam3) || func_78(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_78(struct<3> Param0, int iParam1, int iParam2)//Position - 0x4576
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar1 = iVar0;
			if (func_79(Param0, Global_24C9BC.f_125[iVar0 /*3*/], Global_24C9BC.f_186[iVar0], Global_24C9BC.f_1A7[iVar0], 1036831949))
			{
				if (func_36(iVar1, 0, 1) && func_36(iParam1, 0, 1))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, float fParam4)//Position - 0x45FF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	
	if (SYSTEM::VDIST(Param0, Param1) < func_81(iParam3, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_80(&Var0, 0f, 0f, uParam2);
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
		MISC::GET_MODEL_DIMENSIONS(iParam3, &Var1, &Var2);
		fVar3 = MISC::ABSF((Var2.f_1 - Var1.f_1));
		fVar4 = MISC::ABSF((Var2.x - Var1.x));
		fVar5 = MISC::ABSF((Var2.f_2 - Var1.f_2));
		Var6 = { Param1 + Var0 * FtoV(((0.5f * fVar3) + fParam4)) };
		Var6.f_2 = (Var6.f_2 - ((0.5f * fVar5) + fParam4));
		Var7 = { Param1 - Var0 * FtoV(((0.5f * fVar3) + fParam4)) };
		Var7.f_2 = (Var7.f_2 + ((0.5f * fVar5) + fParam4));
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var6, Var7, fVar4, 0, 1);
	}
	return 0;
}

void func_80(var uParam0, struct<3> Param1)//Position - 0x46EC
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_81(int iParam0, float fParam1)//Position - 0x47C3
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	Var2 = { Var1 - Var0 };
	return (SYSTEM::SQRT((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f)))) + fParam1);
}

int func_82(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x481A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam2, 0, 1))
			{
				if (Global_24C9BC.f_104[iVar0])
				{
					if (SYSTEM::VDIST(Global_24C9BC.f_82[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (SYSTEM::VDIST(func_47(iVar1), Param0) < fParam1)
				{
					return 1;
				}
			}
			else if (Global_24C9BC.f_104[iVar0])
			{
				if (SYSTEM::VDIST(Global_24C9BC.f_82[iVar0 /*3*/], Param0) < fParam1)
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (SYSTEM::VDIST(func_47(iVar1), Param0) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12)//Position - 0x4901
{
	Global_24B0C4.f_1 = 0;
	if (!func_77(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_24B0C4.f_1++;
		if (bParam3)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
				if (!func_88(Param0, fParam10))
				{
					Global_24B0C4.f_1++;
					if (!func_87(Param0))
					{
						Global_24B0C4.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			}
		}
		else if (!bParam2)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
				if (!func_88(Param0, fParam10))
				{
					Global_24B0C4.f_1++;
					if (!func_84(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B0C4.f_1++;
						if (!func_87(Param0))
						{
							Global_24B0C4.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			}
		}
		else if (func_122(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
		{
			Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			if (!func_88(Param0, fParam10))
			{
				Global_24B0C4.f_1++;
				if (!func_84(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B0C4.f_1++;
					if (!func_87(Param0))
					{
						Global_24B0C4.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
		}
	}
	return 0;
}

int func_84(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x4B20
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_36(iVar1, 1, 1) && func_48(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_86(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_85(func_47(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_85(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4B9F
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = SYSTEM::SIN(fParam2);
	Var0.f_1 = SYSTEM::COS(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C2B
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_87(struct<3> Param0)//Position - 0x4CA3
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (func_32(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_187385.f_6F19 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_187385.f_6F19)
			{
				if (Global_187385.f_6F1A[iVar0 /*31*/].f_7 != 0)
				{
					MISC::GET_MODEL_DIMENSIONS(Global_187385.f_6F1A[iVar0 /*31*/].f_7, &Var1, &Var2);
					fVar3 = (MISC::ABSF((Var1.f_1 - Var2.f_1)) * 0.5f);
					fVar4 = (MISC::ABSF((Var1.x - Var2.x)) * 0.5f);
					fVar5 = (MISC::ABSF((Var1.f_2 - Var2.f_2)) * 0.5f);
					fVar6 = ((fVar3 * fVar3) + (fVar4 * fVar4));
					fVar6 = (fVar6 + fVar5);
					if (SYSTEM::VDIST2(Global_187385.f_6F1A[iVar0 /*31*/], Param0) < fVar6)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_88(struct<3> Param0, float fParam1)//Position - 0x4D6F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_36(iVar1, 1, 1) && func_48(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_31(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_86(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_47(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x4E2B
{
	if ((Global_24B0C4.f_194 == 9 || Global_24B0C4.f_194 == 9) || (Global_24B0C4.f_194 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_90(struct<3> Param0, float fParam1, int iParam2)//Position - 0x4E6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B0C4.f_52C[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)//Position - 0x4EAC
{
	struct<3> Var0;
	float fVar1;
	
	if (Global_24B0C4.f_1D9 > 0f)
	{
		fVar1 = SYSTEM::VDIST(*uParam0, Global_24B0C4.f_1D6);
		if (fVar1 < Global_24B0C4.f_1D9)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_24B0C4.f_1D6, Global_24B0C4.f_1D9, 1036831949, 0);
				if (func_91(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_24B0C4.f_1D6, Global_24B0C4.f_1D9, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_92(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x4F44
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_36(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_48(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && func_50(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_93(struct<3> Param0, float fParam1, int iParam2, float fParam3)//Position - 0x5040
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 1, 1))
			{
				if ((!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_94(struct<3> Param0, var uParam1, var uParam2)//Position - 0x5105
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!MISC::IS_BIT_SET(Global_2401A6[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A6[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2401A6[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2401A6[iVar1 /*26*/].f_6.f_2;
					func_96(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var4 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var4, Param0) < SYSTEM::VDIST(Var5, Param0))
			{
				Var3 = { Global_140131[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_240062[iVar1 /*3*/] };
				func_95(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_95(var uParam0, var uParam1, int iParam2)//Position - 0x52ED
{
	Global_24BF7F = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_95(&Global_24BF7F, uParam1, iParam2 + 1);
	}
}

void func_96(var uParam0, var uParam1, int iParam2)//Position - 0x532B
{
	Global_24BF7B = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_96(&Global_24BF7B, uParam1, iParam2 + 1);
	}
}

void func_97()//Position - 0x5365
{
	func_101();
	func_100();
	func_99();
	func_98();
}

void func_98()//Position - 0x537D
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B0C4.f_4C1.f_3F[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_99()//Position - 0x53AC
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B0C4.f_4C1.f_1E[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_100()//Position - 0x53DA
{
	struct<8> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_24B0C4.f_4C1.f_5[iVar1 /*8*/] = { Var0 };
		iVar1++;
	}
}

void func_101()//Position - 0x5416
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_24B0C4.f_4C1 = { Var0 };
}

var func_102()//Position - 0x5434
{
	return Global_14010B.f_4;
}

void func_103(var uParam0, var uParam1)//Position - 0x5442
{
	func_123();
	func_121(uParam0, uParam1);
}

bool func_104(int iParam0, int iParam1)//Position - 0x5456
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_105(-1, 0) == 8;
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

int func_105(int iParam0, bool bParam1)//Position - 0x54A1
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_106();
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

int func_106()//Position - 0x54E2
{
	return Global_1407E1;
}

bool func_107(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x54EE
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

void func_108(var uParam0, var uParam1, var uParam2)//Position - 0x55A1
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	struct<3> Var21;
	var uVar22;
	struct<3> Var23;
	var uVar24;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_14(uParam2->f_23, uParam0, uParam2->f_26, uParam2->f_29, 1, 1))
		{
			uParam2->f_6 = 9999.9f;
		}
	}
	if (uParam2->f_2D)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_2A)
	{
		if (func_120(uParam0, 1))
		{
		}
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24BF89.f_A2 = 0;
	Global_24BF89.f_A3 = 0;
	Global_24BF89.f_A4 = -99;
	Global_24BF89.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24BF89[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24BF89.f_79[iVar14] = 0f;
		iVar14++;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, iVar0, &uVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_24BF89.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24BF89.f_A5 = { Var1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_91(&Var1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_119(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
											{
												if (func_118(Var1, uParam2) || uParam2->f_21 >= 2)
												{
													if ((uParam2->f_2A && !func_120(&Var1, 0)) || uParam2->f_2A == 0)
													{
														Var1 = { func_116(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_2D) };
														if (!bVar10)
														{
															if (bVar9)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (SYSTEM::VMAG(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
															{
																if ((uParam2->f_C && !func_114(Var1, uVar2, uParam2->f_22, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_C)
																{
																	if (!uParam2->f_F || !func_14(uParam2->f_23, &Var1, uParam2->f_26, uParam2->f_29, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar15 = uParam2->f_1F;
																			bVar16 = true;
																			iVar17 = 1;
																			fVar18 = uParam2->f_2B;
																			if (uParam2->f_11)
																			{
																				iVar15 = 0;
																				bVar16 = false;
																				iVar17 = 0;
																				if (uParam2->f_21 == 1)
																				{
																					fVar18 = (fVar18 * 0.375f);
																				}
																			}
																			else
																			{
																				bVar16 = true;
																				iVar17 = 1;
																				if (uParam2->f_1C)
																				{
																					if (uParam2->f_21 == 1)
																					{
																						fVar18 = (fVar18 * 0.375f);
																					}
																				}
																			}
																			iVar19 = 0;
																			if (uParam2->f_3 > 7f)
																			{
																				if (func_122(Var1, 6f, 1f, 1f, 5f, iVar15, bVar16, iVar17, fVar18, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar19 = 1;
																				}
																			}
																			else if (func_122(Var1, 6f, 1f, 1f, 5f, iVar15, bVar16, iVar17, fVar18, 0, -1, 1, 0f, 0, 0, 0) && !func_113(Var1, uVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																			{
																				iVar19 = 1;
																			}
																			if (iVar19 || uParam2->f_21 >= 2)
																			{
																				if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2)
																				{
																					if (uParam2->f_1E)
																					{
																						if (Global_24BF89.f_A2 == 0)
																						{
																							Global_24BF89[0 /*3*/] = { Var1 };
																							Global_24BF89.f_79[0] = uVar2;
																						}
																						else
																						{
																							iVar14 = 0;
																							while (iVar14 < Global_24BF89.f_A2 + 1)
																							{
																								if (iVar14 < 40)
																								{
																									if (SYSTEM::VDIST2(Var1, *uParam0) < SYSTEM::VDIST2(Global_24BF89[iVar14 /*3*/], *uParam0))
																									{
																										func_112(Var1, uVar2, iVar14);
																										iVar14 = Global_24BF89.f_A2 + 1;
																									}
																								}
																								iVar14++;
																							}
																						}
																						Global_24BF89.f_A2++;
																						if (Global_24BF89.f_A2 >= 5)
																						{
																							iVar0 = 100;
																						}
																					}
																					else
																					{
																						Global_24BF89[Global_24BF89.f_A2 /*3*/] = { Var1 };
																						Global_24BF89.f_79[Global_24BF89.f_A2] = uVar2;
																						Global_24BF89.f_A2++;
																						if (func_118(Var1, uParam2))
																						{
																							Global_24BF89.f_A3++;
																						}
																						if (Global_24BF89.f_A2 >= 10)
																						{
																							iVar0 = 100;
																						}
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = uVar2;
																					return;
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																		}
																		else
																		{
																			*uParam0 = { Var1 };
																			*uParam1 = uVar2;
																			return;
																		}
																	}
																}
																else
																{
																	iVar13++;
																}
															}
															else
															{
																iVar0 = 100;
															}
														}
													}
													else
													{
														iVar0++;
													}
												}
												else if (!uParam2->f_20)
												{
													iVar0 = 100;
												}
											}
											else
											{
												iVar0++;
											}
										}
										else
										{
											iVar0++;
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24BF89.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24BF89[0 /*3*/] };
						*uParam1 = Global_24BF89.f_79[0];
						return;
					}
					else
					{
						if (Global_24BF89.f_A3 > 0 && !Global_24BF89.f_A3 == Global_24BF89.f_A2)
						{
							func_110(0, uParam2);
						}
						iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24BF89.f_A2);
						Var21 = { Global_24BF89[0 /*3*/] };
						uVar22 = Global_24BF89.f_79[0];
						Global_24BF89[0 /*3*/] = { Global_24BF89[iVar20 /*3*/] };
						Global_24BF89.f_79[0] = Global_24BF89.f_79[iVar20];
						Global_24BF89[iVar20 /*3*/] = { Var21 };
						Global_24BF89.f_79[iVar20] = uVar22;
						*uParam0 = { Global_24BF89[0 /*3*/] };
						*uParam1 = Global_24BF89.f_79[0];
						return;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						func_108(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iVar13), (40 + iVar13));
						PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var1, &uVar2, &iVar7, iVar3, fVar11, fVar12);
						Var1 = { func_116(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, 0, 0, uParam2->f_2D) };
						Var23 = { Var1 };
						uVar24 = uVar2;
						if (func_14(uParam2->f_23, &Var23, uParam2->f_26, uParam2->f_29, 1, 1) || func_120(&Var23, 1))
						{
							if (!uParam2->f_2C)
							{
								uParam2->f_21 = 0;
								uParam2->f_2C = 1;
								*uParam0 = { Var23 };
								*uParam1 = uVar24;
								func_108(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var23 };
								*uParam1 = uVar24;
								return;
							}
						}
						else
						{
							*uParam0 = { Var23 };
							*uParam1 = uVar24;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				func_108(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_109(&Global_14053D, uParam0, uParam1, PLAYER::PLAYER_ID());
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return;
			}
		}
		Global_24BF89.f_A4 = iVar6;
	}
}

void func_109(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x5E36
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), func_47(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_77(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_110(int iParam0, var uParam1)//Position - 0x5EBA
{
	if (!func_118(Global_24BF89[iParam0 /*3*/], uParam1))
	{
		Global_24BF89.f_A2 = (Global_24BF89.f_A2 - 1);
		func_111(iParam0);
		if (Global_24BF89.f_A2 > Global_24BF89.f_A3)
		{
			func_110(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_110(iParam0 + 1, uParam1);
	}
}

void func_111(int iParam0)//Position - 0x5F15
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24BF89[iParam0 /*3*/] = { Global_24BF89[iParam0 + 1 /*3*/] };
			Global_24BF89.f_79[iParam0] = Global_24BF89.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_112(struct<3> Param0, var uParam1, int iParam2)//Position - 0x5F60
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_24BF89[iParam2 /*3*/] };
	uVar1 = Global_24BF89.f_79[iParam2];
	Global_24BF89[iParam2 /*3*/] = { Param0 };
	Global_24BF89.f_79[iParam2] = uParam1;
	if (iParam2 <= Global_24BF89.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_112(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_113(struct<3> Param0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x5FCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_36(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_48(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_50(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (func_79(func_47(iVar1), Param0, uParam1, iParam2, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x60CE
{
	if (func_115(Param0, uParam1, iParam2, iParam3, iParam4) || func_78(Param0, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6100
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam3, 0, 1))
			{
				if (Global_24C9BC.f_104[iVar0])
				{
					if (func_79(Global_24C9BC.f_82[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_79(func_47(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24C9BC.f_104[iVar0])
			{
				if (func_79(Global_24C9BC.f_82[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (func_79(func_47(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_116(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x61FF
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(Param4) > 0f)
		{
			if (!func_117(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar4, &iVar5, &iVar6, &fVar7, iParam5);
		if (iVar5 == iVar6)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar5 + iVar6) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		bVar10 = false;
		if (bVar9)
		{
			if (iVar5 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar5)
			{
				bVar10 = true;
			}
		}
		else if (iVar6 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar6)
		{
			bVar10 = true;
		}
		if (fVar7 < 0f)
		{
			fVar8 = 0f;
		}
		else
		{
			if (bVar9)
			{
				if (bVar10)
				{
					fVar8 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar8 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar10)
				{
					if (iVar5 > 2)
					{
						fVar8 = (fVar8 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar8 = (fVar8 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar10)
				{
					fVar8 = (4.2f * (SYSTEM::TO_FLOAT(iVar6) * 0.5f));
				}
				else
				{
					fVar8 = (4.2f * SYSTEM::TO_FLOAT(iVar6));
				}
				if (bVar10)
				{
					if (iVar6 > 2)
					{
						fVar8 = (fVar8 + (IntToFloat((iVar6 - 2)) * 1f));
					}
				}
				else if (iVar6 > 1)
				{
					fVar8 = (fVar8 + (IntToFloat((iVar6 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar8 = (fVar8 + (0.95f * fVar7));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				MISC::GET_MODEL_DIMENSIONS(iParam7, &fVar11, &fVar12);
				fVar13 = (fVar12 - fVar11);
				if (fVar13 > 1.8f)
				{
					fVar8 = (fVar8 + ((fVar13 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param4) > 0f)
	{
		if (!func_117(Param0, *uParam1, Param4))
		{
			if (bParam3)
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *uParam1, fVar8, 0f, 0f) };
	return Var0;
}

int func_117(struct<3> Param0, var uParam1, struct<3> Param2)//Position - 0x6547
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_80(&Var0, 0f, 0f, uParam1);
	Var1 = { Param2 - Param0 };
	if (func_20(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, var uParam1)//Position - 0x6583
{
	if (uParam1->f_12)
	{
		if (!uParam1->f_1A)
		{
			if (SYSTEM::VDIST(Param0, uParam1->f_13) <= uParam1->f_19)
			{
				return 1;
			}
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_119(struct<3> Param0)//Position - 0x65DD
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_42(Param0);
	iVar0 = 0;
	while (iVar0 < Global_24BF0C[iVar1])
	{
		if (func_41(Param0, &(Global_24BC4D[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24BF0C[8])
	{
		if (func_41(Param0, &(Global_24BC4D[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(var uParam0, bool bParam1)//Position - 0x6658
{
	if (Global_24B0C4.f_16.f_E)
	{
		if (((((*uParam0 > Global_24B0C4.f_16.f_8 && *uParam0 < Global_24B0C4.f_16.f_B) && uParam0->f_1 > Global_24B0C4.f_16.f_8.f_1) && uParam0->f_1 < Global_24B0C4.f_16.f_B.f_1) && uParam0->f_2 > Global_24B0C4.f_16.f_8.f_2) && uParam0->f_2 < Global_24B0C4.f_16.f_B.f_2)
		{
			if (bParam1)
			{
				*uParam0 = { func_23(*uParam0, Global_24B0C4.f_16.f_8, Global_24B0C4.f_16.f_B, 0f, 1, 1036831949, 0) };
			}
			return 1;
		}
	}
	return 0;
}

void func_121(var uParam0, var uParam1)//Position - 0x670D
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_24B0C4.f_4B0 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B0C4.f_4AE = 1;
	Global_24B0C4.f_4B1 = NETWORK::GET_NETWORK_TIME();
}

int func_122(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15)//Position - 0x6740
{
	Global_24B0C4 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, 0))
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (fParam12 > 0f)
	{
		if (func_92(Param0, fParam12, 1, 1, bParam13, bParam15, 0, bParam13))
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_76(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B0C4++;
	return 1;
}

void func_123()//Position - 0x683D
{
	if (Global_24B0C4.f_4AE)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B0C4.f_4B0)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B0C4.f_4AE = 0;
	}
}

int func_124()//Position - 0x6870
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	return 1000;
}

int func_125(struct<3> Param0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x6888
{
	struct<11> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 3;
	Var0.f_A = 3;
	Var0.f_E = 3;
	Var1.f_16 = 1;
	Var1 = { Param0 };
	Var1.f_3 = Param4.f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_8(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_C > 0f && Param4.f_7) && Param4.f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > Param4.f_C)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_A[0] = Param4.f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_A[0];
		return 1;
	}
	return 0;
}

int func_126(var uParam0)//Position - 0x6970
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

void func_127(var uParam0)//Position - 0x6999
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_128(uParam0, 0, 0);
		}
	}
}

void func_128(var uParam0, bool bParam1, bool bParam2)//Position - 0x69B8
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

void func_129()//Position - 0x69FD
{
	switch (Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_158();
			func_157();
			if (func_147())
			{
				func_145();
				func_144();
				func_130(35);
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_144();
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_130(int iParam0)//Position - 0x6A84
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40001.f_1AAC)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_200000[func_143() /*8053*/].f_167C.f_703[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_200000[func_143() /*8053*/].f_167C.f_703[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_200000[func_143() /*8053*/].f_167C.f_703[iVar2 /*3*/].f_1)
			{
				Global_200000[func_143() /*8053*/].f_167C.f_703[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_255134, (8 + iVar2));
				func_138(2094, -1);
				func_134(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					func_131(15, 0);
				}
			}
		}
	}
}

void func_131(int iParam0, int iParam1)//Position - 0x6B66
{
	int iVar0;
	
	if (func_133(iParam0, iParam1))
	{
		iVar0 = func_132();
		Global_25284D[iVar0] = iParam0;
	}
}

int func_132()//Position - 0x6B89
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

int func_133(int iParam0, var uParam1)//Position - 0x6BBE
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

void func_134(int iParam0, int iParam1)//Position - 0x6C44
{
	int iVar0;
	
	iVar0 = func_136(iParam0, func_137(iParam1));
	iVar0++;
	func_135(iParam0, iVar0, iParam1);
}

void func_135(int iParam0, int iParam1, var uParam2)//Position - 0x6C6A
{
	int iVar0;
	
	iVar0 = Global_25C4E1[iParam0 /*6*/][func_137(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_136(int iParam0, int iParam1)//Position - 0x6C8E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25C4E1[iParam0 /*6*/][func_137(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_137(var uParam0)//Position - 0x6CBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_106();
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

void func_138(int iParam0, int iParam1)//Position - 0x6CEE
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_137(iParam1), 0);
	iVar0++;
	if (!func_141(iParam0))
	{
		func_140(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_139(iParam0, iVar0, iParam1, 1);
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D2E
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1460FF[func_137(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_146105[func_137(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14610B[func_137(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_146111[func_137(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1460E7[func_137(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1460ED[func_137(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1460F3[func_137(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1460F9[func_137(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1460CF[func_137(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1460D5[func_137(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1460DB[func_137(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1460E1[func_137(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_146117[func_137(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_14611D[func_137(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_146123[func_137(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_146129[func_137(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_14612F[func_137(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_146135[func_137(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_14613B[func_137(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_25C7E2[0 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_25C7E2[1 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_146141[func_137(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_146147[func_137(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_14614D[func_137(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_146153[func_137(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FA8
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_141(int iParam0)//Position - 0x6FD3
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

int func_142(int iParam0, int iParam1, int iParam2)//Position - 0x7087
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_137(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143()//Position - 0x70B9
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_144()//Position - 0x70C6
{
	if (HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		HUD::REMOVE_BLIP(&uLocal_59);
	}
}

void func_145()//Position - 0x70DD
{
	if (!MISC::IS_BIT_SET(Global_24F57C.f_C6D, 0))
	{
		MISC::SET_BIT(&(Global_24F57C.f_C6D), 0);
		func_146();
	}
	else
	{
		MISC::SET_BIT(&(Global_24F57C.f_C6D), 1);
	}
}

void func_146()//Position - 0x7114
{
	func_138(1176, -1);
}

int func_147()//Position - 0x7124
{
	struct<14> Var0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_55.f_2), PLAYER::PLAYER_PED_ID()) && func_156(Local_55.f_2))
		{
			func_155(&(Local_55.f_2));
			if (HUD::DOES_BLIP_EXIST(uLocal_59))
			{
				HUD::REMOVE_BLIP(&uLocal_59);
			}
			func_150("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_A = PLAYER::PLAYER_ID();
			func_148(Var0, func_149(0));
			MISC::SET_BIT(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_148(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x71A6
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_149(int iParam0)//Position - 0x71CF
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
			if (func_36(iVar2, 0, 0))
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

int func_150(char* sParam0, int iParam1)//Position - 0x722C
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_151(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_151(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x7258
{
	int iVar0;
	
	if ((!func_154() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_104(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_152(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_19D2F5.f_5[iVar0 /*53*/] = iParam0;
		Global_19D2F5.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_19D2F5.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_19D2F5.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_152(int iParam0)//Position - 0x7360
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_19D2F5 - 1))
	{
		if (iParam0 > Global_19D2F5.f_5[iVar0 /*53*/].f_1)
		{
			func_153(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_19D2F5++;
	if (Global_19D2F5 > 5)
	{
		Global_19D2F5 = 5;
		return Global_19D2F5;
	}
	return (Global_19D2F5 - 1);
}

void func_153(int iParam0)//Position - 0x73C2
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_19D2F5.f_5[iVar0 /*53*/] = { Global_19D2F5.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_154()//Position - 0x73FB
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_155(var uParam0)//Position - 0x740C
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

int func_156(var uParam0)//Position - 0x7445
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_157()//Position - 0x7467
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
		{
			uLocal_59 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_55.f_2));
			HUD::SET_BLIP_SCALE(uLocal_59, 1.2f);
			HUD::SET_BLIP_SPRITE(uLocal_59, 403);
			HUD::SET_BLIP_COLOUR(uLocal_59, 2);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_59, "ABB_BLIPN");
		}
	}
}

void func_158()//Position - 0x74B6
{
	var uVar0;
	
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		uVar0 = func_142(1178, -1, 0);
		if (!MISC::IS_BIT_SET(uVar0, 14))
		{
			MISC::SET_BIT(&uVar0, 14);
			func_140(1178, uVar0, -1, 1);
		}
	}
}

int func_159()//Position - 0x74F0
{
	return Local_55;
}

int func_160()//Position - 0x74FA
{
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x751C
{
	return Local_57[iParam0 /*3*/];
}

int func_162()//Position - 0x752A
{
	bool bVar0;
	
	func_169(&bVar0);
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
	if (func_168())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_167())
	{
		return 1;
	}
	if (func_166(157))
	{
		if (!func_165())
		{
			return 1;
		}
	}
	if (func_166(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_163() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_163()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()//Position - 0x75BD
{
	switch (func_164())
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

int func_164()//Position - 0x75F1
{
	return Global_5F7C;
}

bool func_165()//Position - 0x75FC
{
	return Global_250CE3.f_23C;
}

int func_166(int iParam0)//Position - 0x760B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_167()//Position - 0x7622
{
	return Global_2528A6;
}

bool func_168()//Position - 0x762E
{
	return Global_250CE3.f_237;
}

void func_169(var uParam0)//Position - 0x763D
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
					func_170(iVar0);
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

void func_170(int iParam0)//Position - 0x76AD
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_36(Var0.f_1, 1, 1))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_IN(uVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_171(uVar2, &bVar3))
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

int func_171(var uParam0, var uParam1)//Position - 0x772E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_172()//Position - 0x777C
{
	SYSTEM::WAIT(0);
}

int func_173(struct<20> Param0)//Position - 0x7789
{
	func_178(func_179(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_175(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_57, 97);
	if (!func_174())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_55.f_7 = Param0.f_10;
		Local_55.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!func_3(Global_2554DA.f_30A.f_1))
		{
			MISC::SET_BIT(&(Local_55.f_1), 8);
		}
	}
	iLocal_62 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_174()//Position - 0x7819
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
		if (func_168())
		{
			return 0;
		}
		if (func_166(155))
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

int func_175(int iParam0, int iParam1, bool bParam2)//Position - 0x7872
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_176())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_168())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_166(155))
				{
					if (!bParam2)
					{
						func_177();
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
					func_177();
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
				func_177();
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
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_176()//Position - 0x7987
{
	return Global_141422;
}

void func_177()//Position - 0x7993
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_178(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x799F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_177();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_10);
}

int func_179(int iParam0)//Position - 0x79BE
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

void func_180()//Position - 0x7C77
{
	if (HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		HUD::REMOVE_BLIP(&uLocal_59);
	}
	func_182();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_2))
			{
				func_155(&(Local_55.f_2));
			}
			Local_55 = 4;
		}
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 8))
	{
		func_181();
	}
	func_177();
}

void func_181()//Position - 0x7CD8
{
	Global_2554DA.f_30A = 0;
	Global_2554DA.f_30A.f_1 = { 0f, 0f, 0f };
	Global_2554DA.f_30A.f_4 = 0f;
}

void func_182()//Position - 0x7D00
{
	if (MISC::IS_BIT_SET(uLocal_58, 4))
	{
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 0.72f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		func_183(1);
		MISC::CLEAR_BIT(&uLocal_58, 5);
		MISC::CLEAR_BIT(&uLocal_58, 7);
		MISC::CLEAR_BIT(&uLocal_58, 4);
	}
}

void func_183(int iParam0)//Position - 0x7D54
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0);
	GRAPHICS::ANIMPOSTFX_STOP(uVar0);
}

char* func_184(int iParam0, bool bParam1)//Position - 0x7D6B
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
	}
	return "";
}

int func_185(int iParam0)//Position - 0x7DF1
{
	return Global_182604[iParam0 /*324*/];
}

