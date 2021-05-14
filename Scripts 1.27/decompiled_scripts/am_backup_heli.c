#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60[3] = { 0f, 0f, 0f };
	var uLocal_61 = 16;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
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
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	struct<2> Local_226 = { 0, 0 } ;
	var uLocal_227 = 745926877;
	var uLocal_228 = 0;
	var uLocal_229 = 3;
	var uLocal_230 = 0;
	var uLocal_231 = -839953400;
	var uLocal_232 = 0;
	var uLocal_233 = -839953400;
	var uLocal_234 = 0;
	var uLocal_235 = -839953400;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	int iLocal_247[2] = { 0, 0 };
	struct<20> Local_248 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_57 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_112(ScriptParam_248);
	}
	while (true)
	{
		func_111();
		if (func_101())
		{
			func_96();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_95();
			func_93();
			switch (func_92(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_247[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					func_50();
					if (func_91() == 3)
					{
						iLocal_247[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_96();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_91())
				{
					case 0:
						Local_226 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x12A
{
	func_7();
	if (Local_226.f_1.f_2 == 5)
	{
		Local_226 = 3;
	}
	if (func_6(&(Local_226.f_1.f_13)))
	{
		if (func_4(&(Local_226.f_1.f_13), 20000, 0))
		{
			Local_226 = 3;
		}
	}
	if (func_3())
	{
		Local_226 = 3;
	}
	if (bLocal_47)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_226 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_226 = 3;
	}
	if (func_2())
	{
		Local_226 = 3;
	}
}

bool func_2()//Position - 0x195
{
	return Global_199088.f_3;
}

bool func_3()//Position - 0x1A3
{
	return Global_1406A2;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x1AF
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x20D
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

bool func_6(var uParam0)//Position - 0x252
{
	return uParam0->f_1;
}

void func_7()//Position - 0x25E
{
	switch (Local_226.f_1.f_2)
	{
		case 0:
			func_49(1);
			break;
		
		case 1:
			if (func_34())
			{
				if (func_23())
				{
					func_5(&(Local_226.f_1.f_11), 0, 0);
					func_49(2);
				}
			}
			break;
		
		case 2:
			func_14();
			func_12();
			if (!func_10(Local_226.f_1))
			{
				if ((func_9(Local_226.f_1.f_3[0 /*2*/]) && func_9(Local_226.f_1.f_3[1 /*2*/])) && func_9(Local_226.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_226.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_226.f_1.f_3[1 /*2*/]) && func_9(Local_226.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_226.f_1.f_3[1 /*2*/]) && func_9(Local_226.f_1.f_3[2 /*2*/]))
			{
				func_49(3);
			}
			else
			{
				if (func_6(&(Local_226.f_1.f_11)))
				{
					if (func_4(&(Local_226.f_1.f_11), 120000, 0))
					{
						func_49(3);
					}
				}
				if (func_8(PLAYER::PLAYER_ID(), 0))
				{
					func_49(3);
				}
				if (bLocal_51)
				{
					func_49(3);
				}
			}
			break;
		
		case 3:
			func_14();
			if (!func_10(Local_226.f_1))
			{
				if ((func_9(Local_226.f_1.f_3[0 /*2*/]) && func_9(Local_226.f_1.f_3[1 /*2*/])) && func_9(Local_226.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_226.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_226.f_1.f_3[1 /*2*/]) && func_9(Local_226.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

bool func_8(int iParam0, int iParam1)//Position - 0x43E
{
	return MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_CD, iParam1);
}

int func_9(var uParam0)//Position - 0x456
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_10(var uParam0)//Position - 0x475
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_11(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_11(var uParam0)//Position - 0x495
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
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

void func_12()//Position - 0x4CD
{
	if (Global_24F57C.f_CDB)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
	if (Global_24F57C.f_CDA >= 250f)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
}

void func_13(int iParam0, int iParam1)//Position - 0x507
{
	if (Global_24F57C.f_C69[iParam0] < iParam1)
	{
		Global_24F57C.f_C69[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_24F57C.f_C68), iParam0);
}

void func_14()//Position - 0x539
{
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (func_10(Local_226.f_1))
	{
		iLocal_55++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_226.f_1)))
	{
		func_22(&(Local_226.f_1));
		iLocal_55++;
	}
	if (func_9(Local_226.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_226.f_1.f_3[0 /*2*/]))
		{
			func_22(&(Local_226.f_1.f_3[0 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_226.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_226.f_1.f_3[1 /*2*/]))
		{
			func_22(&(Local_226.f_1.f_3[1 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_226.f_1.f_3[2 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_226.f_1.f_3[2 /*2*/]))
		{
			func_22(&(Local_226.f_1.f_3[2 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) != iLocal_55)
	{
		if (func_21(iLocal_55, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_55);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != iLocal_56)
	{
		if (func_15(iLocal_56, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_56);
		}
	}
}

bool func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x662
{
	return func_16(0, iParam0, 1, bParam1, bParam2);
}

int func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x676
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_146527, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_20(iParam0) - func_19(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_18(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_19(iParam0, 1));
		}
		if (!bParam4 && Global_182604[PLAYER::PLAYER_ID() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_17(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x73F
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

int func_18(int iParam0)//Position - 0x779
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

int func_19(int iParam0, bool bParam1)//Position - 0x7BF
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

int func_20(int iParam0)//Position - 0x856
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

bool func_21(int iParam0, bool bParam1, bool bParam2)//Position - 0x896
{
	return func_16(1, iParam0, 1, bParam1, bParam2);
}

void func_22(var uParam0)//Position - 0x8AA
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_23()//Position - 0x8CE
{
	if (func_33(Local_226.f_1.f_1))
	{
		if (func_33(Local_226.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_10(Local_226.f_1))
			{
				if (func_32(&(Local_226.f_1), Local_226.f_1.f_1, Local_226.f_1.f_A, 0f, 1, 1, 1, 0, 0, 1))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_226.f_1));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_226.f_1), 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_226.f_1));
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_226.f_1), 1);
					func_31(NETWORK::NET_TO_VEH(Local_226.f_1), 4);
					Global_24F57C.f_CD5 = NETWORK::NET_TO_VEH(Local_226.f_1);
					if (func_30(&(Local_226.f_1.f_3[0 /*2*/]), Local_226.f_1, 4, Local_226.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_25(Local_226.f_1.f_3[0 /*2*/]);
						func_24(NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]), 0, 0, 1);
						NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]), PLAYER::PLAYER_ID());
						func_31(NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]), 4);
						Global_24F57C.f_CD6[0] = NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]);
						if (func_30(&(Local_226.f_1.f_3[1 /*2*/]), Local_226.f_1, 4, Local_226.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_25(Local_226.f_1.f_3[1 /*2*/]);
							func_24(NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							func_31(NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]), 4);
							Global_24F57C.f_CD6[1] = NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]);
							if (func_30(&(Local_226.f_1.f_3[2 /*2*/]), Local_226.f_1, 4, Local_226.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_25(Local_226.f_1.f_3[2 /*2*/]);
								func_24(NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]), 2, 1, 1);
								NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]), PLAYER::PLAYER_ID());
								func_31(NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]), 4);
								Global_24F57C.f_CD6[2] = NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_24(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB01
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 5, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 3, 0);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
	PED::SET_PED_COMBAT_RANGE(uParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(uParam0, 1);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0, 1);
	PED::SET_PED_SEEING_RANGE(uParam0, (fLocal_60[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(uParam0, 400f);
	PED::SET_COMBAT_FLOAT(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(uParam0, 250);
			PED::SET_PED_ARMOUR(uParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0, 1);
	}
}

void func_25(var uParam0)//Position - 0xBA9
{
	var uVar0;
	
	if (!func_27(PLAYER::PLAYER_ID(), 0) && !func_26())
	{
		uVar0 = Global_1804AC[5];
	}
	else
	{
		uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam0), uVar0);
}

bool func_26()//Position - 0xBEA
{
	return MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_12, 0);
}

int func_27(int iParam0, bool bParam1)//Position - 0xC06
{
	if (bParam1)
	{
		if (func_28(iParam0))
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

bool func_28(int iParam0)//Position - 0xC32
{
	return func_29(iParam0);
}

bool func_29(int iParam0)//Position - 0xC40
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

int func_30(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xC5A
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

void func_31(var uParam0, int iParam1)//Position - 0xCE2
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(uParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(uParam0, "AttributeDamage", iVar0);
}

int func_32(var uParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xD15
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
	uVar0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam3, iParam5, iParam4);
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

int func_33(int iParam0)//Position - 0xD98
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_34()//Position - 0xDB6
{
	struct<3> Var0;
	
	if (func_48(Local_226.f_1.f_A))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { func_46(func_47(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_226.f_1.f_F) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_226.f_1.f_F) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_POSITION(Var0.x, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_35(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0))
				{
					Local_226.f_1.f_A = { Var0 };
					return 1;
				}
				else
				{
					Local_226.f_1.f_F++;
					if (Local_226.f_1.f_F >= 12)
					{
						Local_226.f_1.f_F = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_35(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15)//Position - 0xEA7
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
		if (func_42(Param0, fParam12, 1, 1, bParam13, bParam15, 0, bParam13))
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_36(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B0C4++;
	return 1;
}

int func_36(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0xFA4
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_41(PLAYER::PLAYER_ID(), 1, 1))
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
		if (func_41(iVar1, 1, 1))
		{
			if (!func_38(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_37(iVar1) || !bParam8) && !Global_24D5B9[iVar1 /*254*/].f_FD)
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

int func_37(int iParam0)//Position - 0x115A
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24D5B9[iParam0 /*254*/].f_EF)
	{
		return 1;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)//Position - 0x1184
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_39(-1, 0) == 8;
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

int func_39(int iParam0, bool bParam1)//Position - 0x11CF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
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

int func_40()//Position - 0x1210
{
	return Global_1407E1;
}

int func_41(int iParam0, bool bParam1, bool bParam2)//Position - 0x121C
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

int func_42(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x1260
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_41(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_37(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_43(iVar1))
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

int func_43(int iParam0)//Position - 0x135C
{
	if (func_45(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_25510E = { func_44(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_25510E))
	{
		return 1;
	}
	return 0;
}

struct<13> func_44(var uParam0)//Position - 0x1392
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_45(int iParam0, var uParam1)//Position - 0x13A9
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_25510E = { func_44(iParam0) };
		Global_25511B = { func_44(uParam1) };
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

Vector3 func_46(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1416
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

Vector3 func_47(int iParam0)//Position - 0x1463
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_48(struct<3> Param0)//Position - 0x1476
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0)//Position - 0x14A0
{
	Local_226.f_1.f_2 = iParam0;
}

void func_50()//Position - 0x14B0
{
	func_89();
	func_51();
}

void func_51()//Position - 0x14C0
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_226.f_1.f_2)
	{
		case 0:
			func_88();
			break;
		
		case 1:
			func_88();
			break;
		
		case 2:
			if (func_10(Local_226.f_1))
			{
				uVar1 = NETWORK::NET_TO_VEH(Local_226.f_1);
				if (!HUD::DOES_BLIP_EXIST(uLocal_46))
				{
					uLocal_46 = HUD::ADD_BLIP_FOR_ENTITY(uVar1);
					HUD::SET_BLIP_SPRITE(uLocal_46, 353);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_46, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_46, "MPCT_MERRY3");
					if (func_41(PLAYER::PLAYER_ID(), 0, 1))
					{
						func_72(&uLocal_46, func_74(PLAYER::PLAYER_ID(), -2, 0, 0));
					}
				}
				if (func_71(Local_226.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1))
					{
						if (func_70())
						{
							if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 1, 0);
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1))
						{
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 0, 0);
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_226.f_1.f_3[0 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(uVar1);
						if (iVar2 != 23 || fLocal_60[0] != fLocal_57)
						{
							if (func_71(Local_226.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[0 /*2*/]))
								{
									fLocal_60[0] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
									func_24(uVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(uVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(uVar1, 1, 1);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 23, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_60[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_49)
						{
							if (SYSTEM::VDIST(func_47(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_226.f_1), 1)) <= 50f)
							{
								func_53(&uLocal_61, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_49 = 1;
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_226.f_1.f_3[1 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_60[1] != fLocal_57)
						{
							if (func_71(Local_226.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[1 /*2*/]))
								{
									fLocal_60[1] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
									func_24(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_226.f_1.f_3[2 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_60[2] != fLocal_57)
						{
							if (func_71(Local_226.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[2 /*2*/]))
								{
									fLocal_60[2] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
									func_24(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_10(Local_226.f_1) || func_9(Local_226.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 3:
			func_88();
			if (!func_6(&(Local_226.f_1.f_13)))
			{
				func_5(&(Local_226.f_1.f_13), 0, 0);
			}
			if (func_10(Local_226.f_1))
			{
				uVar1 = NETWORK::NET_TO_VEH(Local_226.f_1);
				if (!func_9(Local_226.f_1.f_3[0 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]);
					if (iLocal_52 == 0)
					{
						if (func_71(Local_226.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uVar0, Global_1804A5);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										PED::SET_PED_KEEP_TASK(uVar0, 1);
										iLocal_52 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_9(Local_226.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_53 == 0)
					{
						uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]);
						if (func_71(Local_226.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
								PED::SET_PED_KEEP_TASK(uVar0, 1);
								iLocal_53 = 1;
							}
						}
					}
					if (!iLocal_50)
					{
						if (SYSTEM::VDIST(func_47(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_226.f_1), 1)) <= 50f)
						{
							func_53(&uLocal_61, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_50 = 1;
						}
					}
				}
				if (!func_9(Local_226.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]);
						if (func_71(Local_226.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[2 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
								PED::SET_PED_KEEP_TASK(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
				}
			}
			if (!func_10(Local_226.f_1) || func_9(Local_226.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 5:
			func_88();
			break;
	}
}

void func_52()//Position - 0x19B7
{
	var uVar0;
	
	if (!func_9(Local_226.f_1.f_3[0 /*2*/]))
	{
		if (func_71(Local_226.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[0 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_226.f_1.f_3[1 /*2*/]))
	{
		if (func_71(Local_226.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[1 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_226.f_1.f_3[2 /*2*/]))
	{
		if (func_71(Local_226.f_1.f_3[2 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_226.f_1.f_3[2 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_226.f_1.f_3[2 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
}

int func_53(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A94
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_54(sParam2, iParam3, 0);
}

int func_54(char* sParam0, int iParam1, bool bParam2)//Position - 0x1AE2
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
					func_68();
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
		if (func_67(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_66();
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
				func_59();
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
				if (func_58())
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
			if (func_57())
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
			func_56();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_55();
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
		func_68();
	}
	return 0;
}

void func_55()//Position - 0x1DAE
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

void func_56()//Position - 0x1DDF
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

int func_57()//Position - 0x1E74
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()//Position - 0x1E9B
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

void func_59()//Position - 0x1F34
{
	if (func_65(14))
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
		Global_3839 = func_60();
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

var func_60()//Position - 0x1FD5
{
	func_61();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_61()//Position - 0x1FEE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_64(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_63(PLAYER::PLAYER_PED_ID());
			if (func_62(iVar0) && (!func_65(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_62(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_62(int iParam0)//Position - 0x20EB
{
	return iParam0 < 3;
}

int func_63(var uParam0)//Position - 0x20F7
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)//Position - 0x2134
{
	if (func_62(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_65(int iParam0)//Position - 0x215E
{
	return Global_8861 == iParam0;
}

void func_66()//Position - 0x216C
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

bool func_67(int iParam0, int iParam1)//Position - 0x21C3
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

void func_68()//Position - 0x21FE
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

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2255
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

int func_70()//Position - 0x22AB
{
	if (CLOCK::GET_CLOCK_HOURS() >= 22)
	{
		return 1;
	}
	if (CLOCK::GET_CLOCK_HOURS() <= 6 && CLOCK::GET_CLOCK_HOURS() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0)//Position - 0x22D9
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_72(var uParam0, int iParam1)//Position - 0x22FD
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_COLOUR(*uParam0, func_73(iParam1));
	}
}

int func_73(int iParam0)//Position - 0x231F
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x255D
{
	var uVar0;
	
	if (func_86(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_86(PLAYER::PLAYER_ID()) || (func_85() && func_84()))
	{
		uVar0 = func_83();
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (PED::IS_PED_A_PLAYER(uVar0))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0) != -1)
				{
					if (func_41(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0), 0, 1))
					{
						return func_81(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_75(0, -1, 0);
			}
		}
	}
	return func_81(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_75(bool bParam0, int iParam1, bool bParam2)//Position - 0x25FF
{
	return func_76(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_76(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2615
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_80(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_79(1);
				}
				else
				{
					return func_79(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_77(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_79(1);
	}
	return func_79(0);
}

int func_77(int iParam0, int iParam1)//Position - 0x2697
{
	int iVar0;
	
	iVar0 = func_78(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_78(int iParam0, int iParam1)//Position - 0x26D3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_80(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_79(bool bParam0)//Position - 0x2718
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_80(int iParam0, int iParam1)//Position - 0x272F
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

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x28E5
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_82(iParam1, iParam0, iVar0, 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_180337 || Global_18032E)
	{
		if (iParam0 == iParam1 || (Global_180337 == 1 && Global_180341 == 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_180332 && Global_180194.f_B == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_82(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29A4
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

var func_83()//Position - 0x2A1C
{
	return Global_240005.f_2;
}

bool func_84()//Position - 0x2A2A
{
	return MISC::IS_BIT_SET(Global_240005, 4);
}

bool func_85()//Position - 0x2A3B
{
	return MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_12, 14);
}

int func_86(int iParam0)//Position - 0x2A58
{
	if (func_38(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()//Position - 0x2A99
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

void func_88()//Position - 0x2AAA
{
	if (HUD::DOES_BLIP_EXIST(uLocal_46))
	{
		HUD::REMOVE_BLIP(&uLocal_46);
	}
}

void func_89()//Position - 0x2AC1
{
	if (!iLocal_48)
	{
		if (!func_9(Local_226.f_1.f_3[0 /*2*/]))
		{
			func_90(&uLocal_61, 3, NETWORK::NET_TO_PED(Local_226.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_48 = 1;
		}
	}
}

void func_90(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2AFC
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

int func_91()//Position - 0x2B97
{
	return Local_226;
}

int func_92(int iParam0)//Position - 0x2BA1
{
	return iLocal_247[iParam0];
}

void func_93()//Position - 0x2BAF
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_57 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_58))
	{
		func_5(&uLocal_58, 0, 0);
	}
	else if (func_4(&uLocal_58, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_47(PLAYER::PLAYER_ID()) };
		fLocal_57 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_POSITION(Var1.x, Var1.f_1);
		if (fLocal_57 < 85f)
		{
			fLocal_57 = 85f;
		}
		func_94(&uLocal_58);
	}
}

void func_94(var uParam0)//Position - 0x2C1E
{
	uParam0->f_1 = 0;
}

void func_95()//Position - 0x2C2B
{
}

void func_96()//Position - 0x2C33
{
	var uVar0;
	var uVar1;
	
	Global_24F57C.f_CD5 = uVar0;
	Global_24F57C.f_CD6[0] = uVar1;
	Global_24F57C.f_CD6[1] = uVar1;
	Global_24F57C.f_CD6[2] = uVar1;
	Global_24F57C.f_CDA = 0f;
	Global_24F57C.f_CDB = 0;
	func_98(func_100(1, 1), 10, func_99());
	func_97();
}

void func_97()//Position - 0x2C8C
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_98(int iParam0, int iParam1, var uParam2)//Position - 0x2C98
{
	struct<4> Var0;
	
	Var0 = 293;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_99()//Position - 0x2CCE
{
	return -1;
}

int func_100(int iParam0, bool bParam1)//Position - 0x2CD7
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_38(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_101()//Position - 0x2D3C
{
	bool bVar0;
	
	func_108(&bVar0);
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
	if (func_107())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	if (func_105(157))
	{
		if (!func_104())
		{
			return 1;
		}
	}
	if (func_105(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_102() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_102()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_102()//Position - 0x2DCF
{
	switch (func_103())
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

int func_103()//Position - 0x2E03
{
	return Global_5F7C;
}

bool func_104()//Position - 0x2E0E
{
	return Global_250CE3.f_23C;
}

int func_105(int iParam0)//Position - 0x2E1D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106()//Position - 0x2E34
{
	return Global_2528A6;
}

bool func_107()//Position - 0x2E40
{
	return Global_250CE3.f_237;
}

void func_108(var uParam0)//Position - 0x2E4F
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
					func_109(iVar0);
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

void func_109(int iParam0)//Position - 0x2EBF
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_IN(uVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_110(uVar2, &bVar3))
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

int func_110(var uParam0, var uParam1)//Position - 0x2F40
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

void func_111()//Position - 0x2F8E
{
	SYSTEM::WAIT(0);
}

void func_112(struct<20> Param0)//Position - 0x2F9B
{
	func_118(func_119(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_116(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_226, 22);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_247, 3);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_115())
	{
		func_96();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_47 = true;
	}
	func_113(62, 1);
	iLocal_247[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

void func_113(int iParam0, bool bParam1)//Position - 0x2FFE
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_200000[func_114() /*8053*/].f_167C.f_12 = iVar0;
			break;
		
		case 19:
			Global_200000[func_114() /*8053*/].f_167C.f_11 = iVar0;
			break;
		
		case 74:
			Global_200000[func_114() /*8053*/].f_167C.f_B = iVar0;
			break;
		
		case 20:
			Global_200000[func_114() /*8053*/].f_167C.f_C = iVar0;
			break;
		
		case 29:
			Global_200000[func_114() /*8053*/].f_167C.f_D = iVar0;
			break;
		
		case 8:
			Global_200000[func_114() /*8053*/].f_167C.f_E = iVar0;
			break;
		
		case 31:
			Global_200000[func_114() /*8053*/].f_167C.f_F = iVar0;
			break;
		
		case 3:
			Global_200000[func_114() /*8053*/].f_167C.f_13 = iVar0;
			break;
		
		case 6:
			Global_200000[func_114() /*8053*/].f_167C.f_10 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_200000[func_114() /*8053*/].f_167C.f_16 = iVar0;
			break;
		
		case 76:
			Global_200000[func_114() /*8053*/].f_167C.f_17 = iVar0;
			break;
		
		case 93:
			Global_200000[func_114() /*8053*/].f_167C.f_18 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_200000[func_114() /*8053*/].f_167C.f_19 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_200000[func_114() /*8053*/].f_167C.f_1A = iVar0;
			break;
			break;
		
		case 97:
			Global_200000[func_114() /*8053*/].f_167C.f_1C = iVar0;
			break;
		
		case 88:
			Global_200000[func_114() /*8053*/].f_167C.f_1B = iVar0;
			break;
		
		case 100:
			Global_200000[func_114() /*8053*/].f_167C.f_1E = iVar0;
			break;
		
		case 106:
			Global_200000[func_114() /*8053*/].f_167C.f_1F = iVar0;
			break;
		
		case 99:
			Global_200000[func_114() /*8053*/].f_167C.f_1D = iVar0;
			break;
	}
}

int func_114()//Position - 0x3258
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_115()//Position - 0x3265
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
		if (func_107())
		{
			return 0;
		}
		if (func_105(155))
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

int func_116(int iParam0, int iParam1, bool bParam2)//Position - 0x32BE
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
		if (!func_117())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_107())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_105(155))
				{
					if (!bParam2)
					{
						func_97();
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
					func_97();
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
				func_97();
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
			func_97();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_117()//Position - 0x33D3
{
	return Global_141422;
}

void func_118(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x33DF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_97();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_10);
}

int func_119(int iParam0)//Position - 0x33FE
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

