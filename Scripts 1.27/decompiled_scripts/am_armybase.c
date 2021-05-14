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
	struct<4> Local_48 = { 2, 0, 0, 3 } ;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 2;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	struct<8> Local_72[32];
	struct<178> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	struct<20> Local_74 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
		func_102(ScriptParam_74);
	}
	else
	{
		func_99();
	}
	while (true)
	{
		func_98();
		func_90();
		if (func_79() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_99();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_17())
			{
				func_99();
			}
			if (((((!Global_1801D7 && !func_16(2)) && !func_13(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_11(PLAYER::PLAYER_ID()))
			{
				if (func_10(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000))
				{
					if (!MISC::IS_BIT_SET(Global_2554DA.f_1125, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
							{
								if (func_10(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 0, 0) || func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
								else if (!func_8(&(Local_73.f_3)))
								{
									func_5(&(Local_73.f_3));
								}
								else if (func_2(&(Local_73.f_3)) > 20f || Local_73.f_B1)
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
							else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
							}
							else
							{
								PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
							}
						}
						else
						{
							if (func_8(&(Local_73.f_3)))
							{
								func_1(&(Local_73.f_3));
							}
							if (Local_73.f_B1)
							{
								Local_73.f_B1 = 0;
							}
						}
					}
					else if (!Local_73.f_B1)
					{
						Local_73.f_B1 = 1;
					}
				}
				else if (Local_73.f_B1)
				{
					Local_73.f_B1 = 0;
				}
			}
		}
		else
		{
			func_99();
		}
	}
}

void func_1(var uParam0)//Position - 0x2AF
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_2(var uParam0)//Position - 0x2C5
{
	if (func_8(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)//Position - 0x304
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

bool func_4(var uParam0)//Position - 0x34C
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_5(var uParam0)//Position - 0x35C
{
	if (!func_8(uParam0))
	{
		func_6(uParam0);
	}
}

void func_6(var uParam0)//Position - 0x374
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)//Position - 0x383
{
	uParam0->f_1 = (func_3(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)//Position - 0x3B1
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_9(struct<3> Param0, int iParam1)//Position - 0x3C1
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_10(struct<3> Param0, int iParam1, int iParam2, bool bParam3)//Position - 0x71F
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x1473
{
	if (func_13(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
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

bool func_12()//Position - 0x14B4
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_13(int iParam0, int iParam1)//Position - 0x14C5
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_14(-1, 0) == 8;
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

int func_14(int iParam0, bool bParam1)//Position - 0x1510
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

int func_15()//Position - 0x1551
{
	return Global_1407E1;
}

bool func_16(int iParam0)//Position - 0x155D
{
	return MISC::IS_BIT_SET(Global_1801D6, iParam0);
}

int func_17()//Position - 0x156F
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_58())
		{
			iVar0 = 1;
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_18()//Position - 0x1597
{
	int iVar0;
	
	switch (Local_73.f_6)
	{
		case 0:
			func_57();
			if (func_54(PLAYER::PLAYER_ID(), 1) && func_53())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 1);
			}
			func_51(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_73.f_B0 = 1;
			Local_73.f_6 = 1;
			break;
		
		case 1:
			if (func_50())
			{
				func_51(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_73.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_49(Local_48.f_14, 1))
			{
				Local_73.f_6 = 3;
			}
			break;
		
		case 3:
			if (!func_54(PLAYER::PLAYER_ID(), 1) && !func_53())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_26(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_19(iVar0);
				iVar0++;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_73.f_6 = 4;
			}
			break;
		
		case 4:
			if (func_54(PLAYER::PLAYER_ID(), 1) && func_53())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x16D4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/])))
		{
			if (HUD::DOES_BLIP_EXIST(Local_73.f_AC[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_73.f_AC[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_73.f_AC[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_73.f_AC[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_73.f_AC[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_73.f_AC[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_73.f_AC[iParam0]));
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_10(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 500, 0))
							{
								func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_23(iParam0))
				{
					uVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(uVar2))
					{
						if (PED::IS_PED_IN_ANY_PLANE(uVar2))
						{
							uVar3 = PED::GET_VEHICLE_PED_IS_IN(uVar2, 0);
							if ((!ENTITY::IS_ENTITY_DEAD(uVar0) && !ENTITY::IS_ENTITY_DEAD(uVar1)) && !ENTITY::IS_ENTITY_DEAD(uVar3))
							{
								TASK::TASK_PLANE_MISSION(uVar0, uVar1, uVar3, uVar2, ENTITY::GET_ENTITY_COORDS(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uVar0, joaat("vehicle_weapon_space_rocket"));
								PED::SET_PED_CAN_SWITCH_WEAPON(uVar0, 0);
							}
						}
					}
				}
				if (func_22(iParam0))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(uVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, 1));
						}
					}
				}
				if (func_21(iParam0, 6))
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_23(iParam0))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(uVar0) && !ENTITY::IS_ENTITY_DEAD(uVar1))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_21(iParam0, 9))
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_48.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_48.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]), 0), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&uVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
					{
						uVar5 = NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&uVar5);
					}
				}
			}
			else if (func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_20(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_20(var uParam0, int iParam1)//Position - 0x1B56
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_21(int iParam0, int iParam1)//Position - 0x1B6B
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x1BB2
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_23(int iParam0)//Position - 0x1BFC
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_24(var uParam0, int iParam1)//Position - 0x1C42
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_25(var uParam0, int iParam1)//Position - 0x1C53
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)//Position - 0x1C62
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return;
	}
	switch (Local_48.f_15[iParam0])
	{
		case 0:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
					{
						func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
			{
				func_48(&(Local_73.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_31(&(Local_73.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_29(iParam0), -1, 0);
				}
				if (func_28(iParam0, 1630799643))
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_8(&Local_73))
				{
					func_5(&Local_73);
				}
				if (func_2(&Local_73) >= 7f)
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_31(&(Local_73.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_73))
			{
				func_1(&Local_73);
			}
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
				}
			}
			if (func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						func_20(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					func_24(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
				}
			}
			if (func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						func_20(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_28(iParam0, 1630799643))
			{
				if (func_30(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_29(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_25(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_28(iParam0, 1435919172))
				{
					func_20(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_20(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_27(int iParam0)//Position - 0x20CC
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)//Position - 0x2161
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 1;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_29(int iParam0)//Position - 0x21B5
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(uVar2))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					uVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_30(int iParam0)//Position - 0x222E
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2270
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 1;
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)//Position - 0x22BE
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
					func_46();
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
		if (func_45(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_44();
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
				func_37();
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
				if (func_36())
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
			if (func_35())
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
			func_34();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_33();
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
		func_46();
	}
	return 0;
}

void func_33()//Position - 0x258A
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

void func_34()//Position - 0x25BB
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

int func_35()//Position - 0x2650
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x2677
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

void func_37()//Position - 0x2710
{
	if (func_43(14))
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
		Global_3839 = func_38();
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

var func_38()//Position - 0x27B1
{
	func_39();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_39()//Position - 0x27CA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_42(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_41(PLAYER::PLAYER_PED_ID());
			if (func_40(iVar0) && (!func_43(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_40(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_40(int iParam0)//Position - 0x28C7
{
	return iParam0 < 3;
}

int func_41(var uParam0)//Position - 0x28D3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)//Position - 0x2910
{
	if (func_40(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_43(int iParam0)//Position - 0x293A
{
	return Global_8861 == iParam0;
}

void func_44()//Position - 0x2948
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

bool func_45(int iParam0, int iParam1)//Position - 0x299F
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

void func_46()//Position - 0x29DA
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

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2A31
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = uParam5;
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

void func_48(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2A87
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

bool func_49(var uParam0, int iParam1)//Position - 0x2B22
{
	return (uParam0 && iParam1) != 0;
}

int func_50()//Position - 0x2B31
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0, int iParam1)//Position - 0x2B6D
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)//Position - 0x2B7D
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53()//Position - 0x2B8E
{
	return MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_12, 0);
}

int func_54(int iParam0, bool bParam1)//Position - 0x2BAA
{
	if (bParam1)
	{
		if (func_55(iParam0))
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

bool func_55(int iParam0)//Position - 0x2BD6
{
	return func_56(iParam0);
}

bool func_56(int iParam0)//Position - 0x2BE4
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

void func_57()//Position - 0x2BFE
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("lazer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_58()//Position - 0x2C21
{
	int iVar0;
	
	switch (Local_48.f_13)
	{
		case 0:
			if (func_78())
			{
				Local_48.f_13 = 1;
			}
			break;
		
		case 1:
			if (func_77())
			{
				Local_48.f_13 = 2;
			}
			break;
		
		case 2:
			if (func_54(PLAYER::PLAYER_ID(), 1) || func_53())
			{
				func_51(&(Local_48.f_14), 1);
				Local_48.f_13 = 3;
			}
			else if (func_75())
			{
				func_51(&(Local_48.f_14), 1);
				Local_48.f_13 = 3;
			}
			break;
		
		case 3:
			if (!func_54(PLAYER::PLAYER_ID(), 1) && !func_53())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_72(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_61(iVar0);
					iVar0++;
				}
			}
			if (func_60())
			{
				Local_48.f_13 = 4;
			}
			break;
		
		case 4:
			func_59();
			return 1;
			break;
	}
	return 0;
}

void func_59()//Position - 0x2D0F
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iVar0]))
		{
			uVar1 = NETWORK::NET_TO_PED(Local_48[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_48.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iVar0 /*5*/]))
		{
			uVar2 = NETWORK::NET_TO_VEH(Local_48.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar2))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_60()//Position - 0x2DC2
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0)//Position - 0x2E03
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	var uVar4;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1)))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
				Var1 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/])))
						{
							uVar2 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_71(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
				Local_48.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var3 = { func_68(iParam0) };
			if (!func_67(Var3))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var3, 20f) && !CAM::IS_SPHERE_VISIBLE(Var3, 20f))
				{
					if (func_64(Var3, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_48.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_71(iParam0, 2))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar4 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(uVar4))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(uVar4))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar4) || PED::IS_PED_IN_ANY_HELI(iVar4))
			{
				if (func_63(PED::GET_VEHICLE_PED_IS_IN(iVar4, 0)))
				{
					Local_48.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_71(iParam0, 8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 6;
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_62(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_62(int iParam0, int iParam1)//Position - 0x305A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_25(Local_72[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x309E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0))
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

int func_64(struct<3> Param0, var uParam1, int iParam2)//Position - 0x30E0
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam2 /*5*/]))
	{
		if (!func_66(&(Local_48.f_3[iParam2 /*5*/]), joaat("lazer"), Param0, uParam1, 1, 1, 1, 0, 1, 1))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_48.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam2 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_65(&(Local_48.f_3[iParam2 /*5*/].f_1), Local_48.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_48.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_48.f_3[iParam2 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x31C4
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
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

int func_66(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x324C
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
	uVar0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam3, iParam5, iParam4);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam8);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
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
		VEHICLE::SET_VEHICLE_IS_STOLEN(uVar0, iParam7);
		return 1;
	}
	return 0;
}

int func_67(struct<3> Param0)//Position - 0x32CF
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_68(int iParam0)//Position - 0x32F9
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_69(int iParam0)//Position - 0x3361
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_70(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(uVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
						if (func_10(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_48.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x3417
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(uVar2))
		{
			if (iParam0 == Local_48.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)//Position - 0x3481
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_25(Local_72[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_72(int iParam0)//Position - 0x34C6
{
	switch (Local_48.f_15[iParam0])
	{
		case 0:
			if (func_74(iParam0, 64))
			{
				Local_48.f_15[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_73(iParam0, 1))
			{
				Local_48.f_15[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_73(iParam0, 2))
			{
				Local_48.f_15[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_74(iParam0, 4))
			{
				Local_48.f_15[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_73(iParam0, 8))
			{
				Local_48.f_15[iParam0] = 5;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_15[iParam0] = 7;
			}
			if (func_73(iParam0, 16))
			{
				Local_48.f_15[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_73(iParam0, 16))
			{
				Local_48.f_15[iParam0] = 6;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_15[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_73(iParam0, 4))
			{
				Local_48.f_15[iParam0] = 0;
			}
			break;
	}
}

int func_73(int iParam0, int iParam1)//Position - 0x35E8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_25(Local_72[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x362C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_25(Local_72[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_75()//Position - 0x3671
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_76(&(Local_48[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_48[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_76(&(Local_48[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_48[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x3730
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
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

int func_77()//Position - 0x378F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_49(Local_72[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_78()//Position - 0x37D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_49(Local_72[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_79()//Position - 0x3811
{
	bool bVar0;
	
	func_86(&bVar0);
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
	if (func_85())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_84())
	{
		return 1;
	}
	if (func_83(157))
	{
		if (!func_82())
		{
			return 1;
		}
	}
	if (func_83(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_80() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_80()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x38A4
{
	switch (func_81())
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

int func_81()//Position - 0x38D8
{
	return Global_5F7C;
}

bool func_82()//Position - 0x38E3
{
	return Global_250CE3.f_23C;
}

int func_83(int iParam0)//Position - 0x38F2
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_84()//Position - 0x3909
{
	return Global_2528A6;
}

bool func_85()//Position - 0x3915
{
	return Global_250CE3.f_237;
}

void func_86(var uParam0)//Position - 0x3924
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
					func_87(iVar0);
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

void func_87(int iParam0)//Position - 0x3994
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_89(Var0.f_1, 1, 1))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_IN(uVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_88(uVar2, &bVar3))
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

int func_88(int iParam0, var uParam1)//Position - 0x3A15
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

int func_89(int iParam0, bool bParam1, bool bParam2)//Position - 0x3A63
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
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

void func_90()//Position - 0x3AA7
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != 5)
	{
		if (func_97(5, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) != 3)
	{
		if (func_91(3, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_91(int iParam0, bool bParam1, bool bParam2)//Position - 0x3AF1
{
	return func_92(1, iParam0, 1, bParam1, bParam2);
}

int func_92(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3B05
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_146527, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_96(iParam0) - func_95(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_95(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_96(iParam0) - func_94(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_95(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_96(iParam0) - func_95(iParam0, 1));
		}
		if (!bParam4 && Global_182604[PLAYER::PLAYER_ID() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_93(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x3BCE
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x3C08
{
	switch (iParam0)
	{
		case 0:
			return Global_146527.f_1;
			break;
		
		case 1:
			return Global_146527.f_2;
			break;
		
		case 2:
			return Global_146527.f_3;
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)//Position - 0x3C4E
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_CE;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_CF;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_D0;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1);
			}
			break;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x3CE5
{
	switch (iParam0)
	{
		case 0:
			return Global_14652F;
			break;
		
		case 1:
			return Global_146530;
			break;
		
		case 2:
			return Global_146531;
			break;
	}
	return 0;
}

bool func_97(int iParam0, bool bParam1, bool bParam2)//Position - 0x3D25
{
	return func_92(0, iParam0, 1, bParam1, bParam2);
}

void func_98()//Position - 0x3D39
{
	SYSTEM::WAIT(0);
}

void func_99()//Position - 0x3D46
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_60())
			{
				func_59();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_73.f_AC[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_73.f_AC[iVar0]));
		}
		iVar0++;
	}
	func_101();
	func_100();
}

void func_100()//Position - 0x3D9E
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_101()//Position - 0x3DAA
{
	if (!Local_73.f_B0)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_102(struct<20> Param0)//Position - 0x3DFD
{
	func_106(func_107(Param0), Param0);
	func_104(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_48, 27);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_72, 257);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_103())
	{
		func_99();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_99();
	}
}

int func_103()//Position - 0x3E54
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
		if (func_85())
		{
			return 0;
		}
		if (func_83(155))
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

int func_104(int iParam0, int iParam1, bool bParam2)//Position - 0x3EAD
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_100();
			}
			else
			{
				return 0;
			}
		}
		if (!func_105())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_85())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_83(155))
				{
					if (!bParam2)
					{
						func_100();
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
					func_100();
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
				func_100();
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
			func_100();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_105()//Position - 0x3FC2
{
	return Global_141422;
}

void func_106(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x3FCE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_100();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_10);
}

int func_107(int iParam0)//Position - 0x3FED
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

