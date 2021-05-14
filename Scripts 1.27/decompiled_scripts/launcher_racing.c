#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
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
	struct<4> Local_39[10];
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	struct<6> Local_42 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	var uLocal_55[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63[3];
	float fLocal_64[3] = { 0f, 0f, 0f };
	struct<3> Local_65[7];
	float fLocal_66[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	char[] cLocal_72[8] = 0;
	char* sLocal_73[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 8;
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
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 1;
	struct<2> Local_237 = { 0, 5 } ;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_45 = 1;
	bLocal_54 = true;
	iLocal_71 = joaat("feltzer2");
	iLocal_74 = 1;
	Local_82 = { 0f, 0f, 0f };
	Local_83 = { 1f, 1f, 1f };
	Local_84 = { 0f, 0f, 0f };
	Local_85 = { 0f, 0f, 0f };
	fLocal_86 = 0f;
	MISC::_0x6F2135B6129620C1(1);
	Local_43 = { ScriptParam_237.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_197(0);
	}
	func_194();
	switch (Local_42.f_1)
	{
		case 1:
		case 2:
			if (!func_193(0, 8))
			{
				func_197(0);
			}
			if (!func_192(Local_42))
			{
				func_197(0);
			}
			break;
		
		case 3:
			if (!func_193(0, 7))
			{
				func_197(0);
			}
			break;
		
		case 0:
			func_197(0);
			break;
	}
	func_186();
	if (!func_162())
	{
		func_197(0);
	}
	func_156();
	while (true)
	{
		func_153(&uLocal_89);
		if (func_162())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_41)
				{
					case 0:
						iLocal_41 = 1;
						break;
					
					case 1:
						func_144();
						func_115();
						break;
					
					case 2:
						func_54();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_197(0);
			}
		}
		else
		{
			func_197(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19C
{
	if (!bLocal_52)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B5
{
	func_8(-1);
	func_7(0);
	func_6(Local_43);
	func_5();
	Global_140658 = 1;
	Global_140658.f_1 = Local_42;
	StringCopy(&(Global_140658.f_2), func_4(), 24);
	StringCopy(&(Global_140658.f_8), func_3(Local_42), 32);
	Global_140658.f_10 = { Local_43 };
	Global_14143F = 1;
	func_197(1);
}

char* func_3(int iParam0)//Position - 0x210
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()//Position - 0x4EC
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()//Position - 0x54C
{
	MISC::SET_BIT(&Global_1406A9, 0);
}

void func_6(struct<3> Param0)//Position - 0x55D
{
	Global_1406A9.f_6 = { Param0 };
}

void func_7(int iParam0)//Position - 0x571
{
	Global_1406A9.f_2 = iParam0;
}

void func_8(int iParam0)//Position - 0x581
{
	Global_1406A9.f_1 = iParam0;
}

void func_9()//Position - 0x591
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_42.f_2 = -1;
	if (func_53(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	while (!func_47())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_42.f_1 != 3)
	{
		func_15(func_41(), 1, Local_42.f_3);
		iVar0 = MISC::GET_GAME_TIMER() + 1500;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1) || MISC::GET_GAME_TIMER() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		uVar2 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(uVar2))
		{
			PLAYER::SET_PLAYER_CONTROL(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()//Position - 0x63F
{
	if (!func_11(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_42, 6, 17000);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_197(1);
}

bool func_11(bool bParam0)//Position - 0x693
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x6BE
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

int func_13(int iParam0)//Position - 0x840
{
	if (func_14(iParam0))
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

int func_14(int iParam0)//Position - 0x86A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x88A
{
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_16(Global_17C49.f_744E[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8D3
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_40();
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
					func_39(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_23(5))
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
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
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
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
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
	func_18(iParam0);
	if (Global_8861 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)//Position - 0xED2
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

void func_18(int iParam0)//Position - 0x1154
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

void func_19(int iParam0)//Position - 0x11AE
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_21() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_21() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)//Position - 0x1271
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

int func_21()//Position - 0x12EC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)//Position - 0x12F9
{
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

bool func_23(int iParam0)//Position - 0x1319
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_21() /*8053*/].f_167C.f_A, iParam0);
}

int func_24(bool bParam0)//Position - 0x1355
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
		func_37(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)//Position - 0x140C
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)//Position - 0x1427
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_36(&Global_26D4DB))
	{
		if (func_34(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_26D4DB, iParam0))
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

int func_27(var uParam0, int iParam1)//Position - 0x14AB
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)//Position - 0x1531
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)//Position - 0x1581
{
	return (*uParam0)[iParam1] == 61;
}

void func_30(var uParam0)//Position - 0x1592
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_3E), (8f - 0.5f));
}

void func_31(var uParam0, float fParam1)//Position - 0x15C9
{
	uParam0->f_1 = (func_32(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)//Position - 0x15F7
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

void func_33(var uParam0, int iParam1)//Position - 0x163F
{
	(*uParam0)[iParam1] = 61;
}

bool func_34(var uParam0, int iParam1)//Position - 0x164F
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)//Position - 0x1661
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

bool func_36(var uParam0)//Position - 0x168E
{
	return uParam0->f_44 == 1;
}

int func_37(int iParam0, int iParam1)//Position - 0x169C
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

void func_38(int iParam0, int iParam1)//Position - 0x16ED
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_39(int iParam0, int iParam1)//Position - 0x1710
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

void func_40()//Position - 0x176D
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

int func_41()//Position - 0x17E2
{
	func_42();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_42()//Position - 0x17FB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_46(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_45(PLAYER::PLAYER_PED_ID());
			if (func_44(iVar0) && (!func_43(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_44(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_43(int iParam0)//Position - 0x18F8
{
	return Global_8861 == iParam0;
}

bool func_44(int iParam0)//Position - 0x1906
{
	return iParam0 < 3;
}

int func_45(int iParam0)//Position - 0x1912
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x194F
{
	if (func_44(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_47()//Position - 0x1979
{
	int iVar0;
	
	iVar0 = func_48(&(Local_42.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_48(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x199D
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_15725.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_52(0))
		{
			return 0;
		}
		Global_883D++;
		*uParam0 = Global_883D;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_42CA.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8861 = iParam2;
		Global_883B = *uParam0;
		Global_883C = iParam4;
		Global_883A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_883A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_883A)
			{
				if (Global_8840[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_883B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_50(iParam2))
		{
			return 0;
		}
		if (Global_883A == 8)
		{
			return 0;
		}
		Global_883D++;
		*uParam0 = Global_883D;
		Global_8840[Global_883A /*4*/] = Global_883D;
		Global_8840[Global_883A /*4*/].f_1 = iParam1;
		Global_8840[Global_883A /*4*/].f_2 = iParam2;
		Global_8840[Global_883A /*4*/].f_3 = 0;
		Global_883A++;
		if (iParam4 != 0)
		{
			func_49(uParam0, iParam4);
		}
	}
	return 2;
}

void func_49(var uParam0, int iParam1)//Position - 0x1AD4
{
	int iVar0;
	
	if (Global_883A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_883A)
	{
		if (Global_8840[iVar0 /*4*/] == *uParam0)
		{
			Global_8840[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_50(int iParam0)//Position - 0x1B23
{
	return func_51(iParam0, Global_8861);
}

int func_51(int iParam0, int iParam1)//Position - 0x1B34
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

int func_52(int iParam0)//Position - 0x1D15
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_50(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)//Position - 0x1D37
{
	if (func_14(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_54()//Position - 0x1D57
{
	var uVar0;
	
	switch (iLocal_48)
	{
		case 0:
			if (func_113(0, -1))
			{
				HUD::CLEAR_HELP(1);
				func_102();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				iLocal_53 = 1;
				bLocal_51 = false;
				bLocal_52 = false;
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			if (func_67())
			{
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			uVar0 = PLAYER::GET_PLAYER_INDEX();
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
			PLAYER::SET_PLAYER_CONTROL(uVar0, 1, 0);
			func_58(0, 1, 1, 0);
			func_55(1, -1);
			iLocal_48 = 0;
			if (bLocal_51)
			{
				iLocal_41 = 3;
			}
			else
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
				iLocal_41 = 1;
			}
			break;
	}
}

void func_55(bool bParam0, int iParam1)//Position - 0x1DE7
{
	int iVar0;
	
	if (!func_57(&iVar0, 0, iParam1))
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
		func_56(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

void func_56(var uParam0)//Position - 0x1E85
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

int func_57(var uParam0, bool bParam1, int iParam2)//Position - 0x1EAE
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

void func_58(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1F4B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_66(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_65())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_64(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_66(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_64(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_59(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_59(int iParam0)//Position - 0x201C
{
	if (func_61(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
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

bool func_60()//Position - 0x205D
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_61(int iParam0, int iParam1)//Position - 0x206E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_62(-1, 0) == 8;
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

int func_62(int iParam0, bool bParam1)//Position - 0x20B9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_63();
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

int func_63()//Position - 0x20FA
{
	return Global_1407E1;
}

int func_64(int iParam0, var uParam1, var uParam2)//Position - 0x2106
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

int func_65()//Position - 0x2137
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0)//Position - 0x215E
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

int func_67()//Position - 0x2181
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_101(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	if (iLocal_50 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_50 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	bVar5 = (iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_49 == 1)
		{
			bLocal_52 = true;
		}
		else
		{
			bLocal_52 = false;
		}
		bLocal_51 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_75 = 0;
		bLocal_51 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_49 == 0)
			{
				iLocal_49 = 1;
			}
			else if (iLocal_49 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_49 == 1)
			{
				iLocal_49 = 0;
			}
			else if (iLocal_49 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_50 = 1;
			}
			func_100(iLocal_49, 1, 1);
		}
	}
	func_68(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_68(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x22DC
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
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_97(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_95(29, 1, 1, &fVar35, &fVar36, bParam7))
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
		if (func_94())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_94())
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
					GRAPHICS::DRAW_SPRITE(func_93(29), func_91(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
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
				func_90(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_89();
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
						func_89();
						func_87((((Global_4351 + fParam5) - 0.00390625f) - func_88("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
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
				func_90(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_95(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar39);
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
				func_90(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_86(fVar39);
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
					func_95(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_FCD), func_91(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
					func_95(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar39);
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
				func_90(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_86(fVar39);
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
					func_95(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_93(Global_26CEC9.f_43), func_91(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
			func_80(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_78(bVar31, 1, 0, 0, 0, 0);
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
												func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
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
													if (func_95(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(26), func_91(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(27), func_91(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_77(bVar31);
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
													if (func_95(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_95(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_85(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[(iVar22 + iVar28)]), func_91(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[(iVar22 + iVar28)]), func_91(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
													if (func_95(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_95(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_85(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[(iVar22 + iVar14)]), func_91(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[(iVar22 + iVar14)]), func_91(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[(iVar22 + iVar14)]), func_91(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_77(bVar31);
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
											if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(26), func_91(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(27), func_91(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_76((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_77(bVar31);
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
											if (func_95(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(26), func_91(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_93(27), func_91(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_78(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_75((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_95(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_85(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_93(26), func_91(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_85(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_93(27), func_91(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_95(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_85(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_93(Global_4354.f_F03[iVar22]), func_91(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_74(Global_4354.f_F03[iVar22])), (fVar36 * func_74(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
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
									if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
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
		func_70();
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
		func_69(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_69(int iParam0)//Position - 0x4BF0
{
	Global_1446E8.f_2F4 = iParam0;
}

void func_70()//Position - 0x4C01
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_71(int iParam0)//Position - 0x4C29
{
	if (Global_38D7)
	{
		func_72(0, 0);
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
	if (!func_65())
	{
		Global_3839.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)//Position - 0x4C99
{
	if (bParam0)
	{
		if (func_73(0))
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

int func_73(int iParam0)//Position - 0x4D0D
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

float func_74(int iParam0)//Position - 0x4D67
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

void func_75(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x4DD0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x4DEF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_77(bool bParam0)//Position - 0x4E0D
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

void func_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x4E53
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_79(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_79(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x4FEA
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

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x5274
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_97(bParam4, bParam8))
	{
		return;
	}
	if (func_83())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(PLAYER::PLAYER_ID(), 0))
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
					func_82(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_82(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_81(&(Global_4354.f_1091[iVar1 /*4*/]));
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
				func_82(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_81(&(Global_26CEC9.f_10));
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

void func_81(var uParam0)//Position - 0x5750
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_82(var uParam0)//Position - 0x5762
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_83()//Position - 0x5770
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_84())
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

int func_84()//Position - 0x57DE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x57F8
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

void func_86(float fParam0)//Position - 0x58AC
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

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x590B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_88(char* sParam0, int iParam1, int iParam2)//Position - 0x592E
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
	func_89();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_89()//Position - 0x5970
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

void func_90(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x59FA
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_91(int iParam0, bool bParam1)//Position - 0x5A29
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_92(&(Global_4354.f_17A0[iParam0 /*16*/]));
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

var func_92(var uParam0)//Position - 0x5E0B
{
	return uParam0;
}

char* func_93(int iParam0)//Position - 0x5E15
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_92(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_94()//Position - 0x5E44
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

int func_95(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x5E76
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_93(iParam0);
	uVar1 = func_91(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_94())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_94())
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
		Var7.x = (Var7.x * (func_96(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_96(iParam0) / fVar4));
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

float func_96(int iParam0)//Position - 0x5FDD
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

int func_97(bool bParam0, bool bParam1)//Position - 0x6076
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_99(8, -1) && func_98() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_98()//Position - 0x6113
{
	return Global_1413F8;
}

bool func_99(int iParam0, int iParam1)//Position - 0x611F
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

void func_100(int iParam0, bool bParam1, int iParam2)//Position - 0x615A
{
	int iVar0;
	int iVar1;
	
	Global_4354.f_1382 = iParam0;
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

void func_101(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x62AC
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_102()//Position - 0x6381
{
	func_112(0);
	func_111(1, 0, 0, 0, 0);
	func_110(1, 1, 1, 1, 1);
	if (Local_42.f_1 == 3)
	{
		func_109("SEA_MENU");
	}
	else
	{
		func_109("STREET_MENU");
	}
	func_106(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_106(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_105(201, "ITEM_SELECT", -1);
	func_105(202, "ITEM_EXIT", -1);
	func_104(11, "ITEM_SCROLL", -1);
	func_103(0);
	func_100(0, 1, 1);
	iLocal_49 = 0;
}

void func_103(int iParam0)//Position - 0x6405
{
	Global_4354.f_1381 = iParam0;
}

void func_104(int iParam0, char* sParam1, int iParam2)//Position - 0x6415
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_4354.f_FCE >= 12)
	{
		StringCopy(&Global_26CEC9, sVar0, 64);
		StringCopy(&(Global_26CEC9.f_10), sParam1, 16);
		Global_26CEC9.f_14 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = 332;
	Global_4354.f_10DC[Global_4354.f_FCE] = iParam0;
	Global_4354.f_FCE++;
}

void func_105(int iParam0, char* sParam1, int iParam2)//Position - 0x64C5
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
	MISC::CLEAR_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = iParam0;
	Global_4354.f_10DC[Global_4354.f_FCE] = 31;
	Global_4354.f_FCE++;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x6574
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
		fVar1 = func_108(sParam1);
		if (Global_4354.f_1100[Global_4354.f_118D])
		{
			func_95(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_107(sParam1);
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

float func_107(char* sParam0)//Position - 0x6734
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_108(char* sParam0)//Position - 0x6750
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
	func_78(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_109(char* sParam0)//Position - 0x678C
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

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x67D7
{
	Global_4354.f_1108[0] = iParam0;
	Global_4354.f_1108[1] = iParam1;
	Global_4354.f_1108[2] = iParam2;
	Global_4354.f_1108[3] = iParam3;
	Global_4354.f_1108[4] = iParam4;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6816
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

void func_112(bool bParam0)//Position - 0x68C0
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

bool func_113(char* sParam0, int iParam1)//Position - 0x6D5A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_57(&iVar0, 1, iParam1))
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
	bVar2 = func_114(&(Global_4354.f_1336[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_114(var uParam0)//Position - 0x6E28
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

void func_115()//Position - 0x6ECA
{
	int iVar0;
	
	if (func_143())
	{
		if (func_126())
		{
			iVar0 = 6;
			if (Local_42.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_124(iVar0);
			if (func_53(uLocal_55[iVar0]))
			{
				if (bLocal_54)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_55[iVar0], cLocal_72, sLocal_73[iVar0], 3))
					{
						TASK::STOP_ANIM_TASK(uLocal_55[iVar0], cLocal_72, sLocal_73[iVar0], -1056964608);
					}
					func_117(iVar0);
				}
			}
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (PAD::IS_CONTROL_JUST_RELEASED(0, 51))
			{
				iLocal_75 = 1;
				HUD::CLEAR_HELP(1);
				iLocal_41 = 3;
			}
		}
		else if (!iLocal_45)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_45 = 1;
		}
	}
	else
	{
		func_116();
		if (!iLocal_45)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_45 = 1;
		}
	}
}

void func_116()//Position - 0x6F7B
{
	if (iLocal_44 && MISC::GET_GAME_TIMER() > iLocal_47)
	{
		HUD::CLEAR_HELP(1);
		iLocal_44 = 0;
	}
}

void func_117(int iParam0)//Position - 0x6F9C
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_55[iParam0]) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_76)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f)
				{
					iLocal_77 = 0;
					iLocal_78 = 0;
					iLocal_76 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_55[iParam0], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				iLocal_76 = 2;
				break;
			
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_55[iParam0], 242628503) != 1 || PED::IS_PED_FACING_PED(uLocal_55[iParam0], PLAYER::PLAYER_PED_ID(), 20f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_55[iParam0], PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_78)
					{
						func_122(uLocal_55[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_122(uLocal_55[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_55[iParam0]))
				{
					func_121(&uLocal_79);
					TASK::TASK_PLAY_ANIM(uLocal_55[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_76 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f)
				{
					iLocal_76 = 0;
				}
				if (func_118(&uLocal_79) >= 5f && !iLocal_77)
				{
					iLocal_77 = 1;
					iLocal_76 = 1;
				}
				else if (func_118(&uLocal_79) >= 10f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_76 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_118(var uParam0)//Position - 0x7161
{
	if (func_120(uParam0))
	{
		if (func_119(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_119(var uParam0)//Position - 0x71A0
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_120(var uParam0)//Position - 0x71B0
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_121(var uParam0)//Position - 0x71C0
{
	func_31(uParam0, 0f);
}

void func_122(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x71CF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_123(iParam3), 0);
}

int func_123(int iParam0)//Position - 0x71E8
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

void func_124(int iParam0)//Position - 0x73DD
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !func_125())
	{
		if (func_53(uLocal_55[iParam0]))
		{
			if (iLocal_45 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_55[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_45 = 0;
			}
		}
	}
}

int func_125()//Position - 0x743A
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0x7453
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_142())
		{
			return 0;
		}
		if (func_141(func_41()) < Local_42.f_3)
		{
			if (Local_42.f_1 == 3)
			{
				func_138("SEA_NA_CASH", Local_42.f_3);
			}
			else
			{
				func_138("STREET_NA_CASH", Local_42.f_3);
			}
			iLocal_44 = 1;
			iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_137(&iLocal_0);
			iLocal_0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (!func_132())
			{
				iLocal_44 = 1;
				iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if ((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <= 200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_131())
			{
				func_130("RACE_VehDmg");
				iLocal_44 = 1;
				iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, -1) != PLAYER::PLAYER_PED_ID())
			{
				func_127();
				return 0;
			}
			else
			{
				if (func_73(0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
				{
					func_116();
					return 0;
				}
				switch (Local_42.f_1)
				{
					case 1:
						func_138("STREET_PLAY_B", Local_42.f_3);
						break;
					
					case 2:
						func_138("STREET_PLAY_C", Local_42.f_3);
						break;
					
					case 3:
						func_130("SEA_PLAY");
						break;
				}
				iLocal_44 = 1;
				iLocal_47 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else
		{
			func_137(&iLocal_0);
			func_127();
			return 0;
		}
	}
	return 0;
}

void func_127()//Position - 0x75C4
{
	char* sVar0;
	
	if (Local_42.f_1 == 3)
	{
		if (func_13(iLocal_56))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_129(sVar0))
		{
			func_128(sVar0);
			iLocal_44 = 1;
			iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_42.f_1 == 1)
	{
		if (!func_129("STREET_NA_BIKE"))
		{
			func_128("STREET_NA_BIKE");
			iLocal_44 = 1;
			iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!func_129("STREET_NA_CAR"))
	{
		func_128("STREET_NA_CAR");
		iLocal_44 = 1;
		iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_128(char* sParam0)//Position - 0x7656
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_129(char* sParam0)//Position - 0x766C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_130(char* sParam0)//Position - 0x767F
{
	if (!func_129(sParam0))
	{
		func_128(sParam0);
	}
}

int func_131()//Position - 0x7697
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()//Position - 0x7713
{
	int iVar0;
	char* sVar1;
	
	switch (Local_42.f_1)
	{
		case 1:
			iVar0 = func_136();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_134();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_133())
			{
				if (func_13(iLocal_56))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_130(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_133()//Position - 0x77C4
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134()//Position - 0x7806
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (func_135(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x7CA9
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_136()//Position - 0x7D02
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_137(int iParam0)//Position - 0x7D4E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_138(char* sParam0, var uParam1)//Position - 0x7D85
{
	if (!func_140(sParam0, uParam1))
	{
		func_139(sParam0, uParam1);
	}
}

void func_139(char* sParam0, int iParam1)//Position - 0x7DA1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_140(char* sParam0, int iParam1)//Position - 0x7DBD
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_141(int iParam0)//Position - 0x7DD6
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

int func_142()//Position - 0x7E2E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_14(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					if (Local_42.f_1 == 3 && ENTITY::IS_ENTITY_IN_WATER(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_143()//Position - 0x7E8D
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = 20;
		if (Local_42.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43, 1) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_144()//Position - 0x7EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_149(&uLocal_89))
	{
		if (Local_42.f_1 == 2)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_70) && STREAMING::HAS_MODEL_LOADED(iLocal_70))
					{
						iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_58, fLocal_59, 1, 1);
						if (PED::CAN_CREATE_RANDOM_PED(1) && PED::CAN_CREATE_RANDOM_DRIVER())
						{
							iLocal_57 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_56, 1);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_57, iLocal_56, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_56);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_56, 1, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_56, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_56, 1);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_56, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_56, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_60 = VEHICLE::CREATE_VEHICLE(iLocal_71, Local_61, fLocal_62, 1, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_60, 0, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_60, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_60, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_60);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_60, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_60, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
						SYSTEM::WAIT(0);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_72))
				{
					if (iLocal_74)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_69 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_55[iVar0]) && !func_145(uLocal_55[iVar0], -2017877118))
								{
									TASK::TASK_PLAY_ANIM(uLocal_55[iVar0], cLocal_72, sLocal_73[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									PED::SET_PED_KEEP_TASK(uLocal_55[iVar0], 1);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_69[iVar0]))
							{
								uLocal_55[iVar0] = PED::CREATE_PED(25, iLocal_69[iVar0], Local_65[iVar0 /*3*/], fLocal_66[iVar0], 1, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_55[iVar0], Local_65[iVar0 /*3*/], 0, 0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_55[iVar0], 1);
								TASK::TASK_PLAY_ANIM(uLocal_55[iVar0], cLocal_72, sLocal_73[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								PED::SET_PED_KEEP_TASK(uLocal_55[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_53(uLocal_55[0]) && func_53(uLocal_55[1])) && func_53(uLocal_55[2])) && func_53(uLocal_55[3])) && func_53(uLocal_55[4])) && func_53(uLocal_55[5])) && func_53(uLocal_55[6])) && func_13(iLocal_56)) && func_13(iLocal_60))
						{
							bLocal_54 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_69 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69[iVar0]);
								iVar0++;
							}
							iLocal_74 = 0;
						}
					}
				}
			}
		}
		else if (Local_42.f_1 == 1)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_70))
					{
						iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_58, fLocal_59, 1, 1);
						if (PED::CAN_CREATE_RANDOM_PED(0) && PED::CAN_CREATE_RANDOM_BIKE_RIDER())
						{
							iLocal_57 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_56, 1);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_57, iLocal_56, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_56, 1, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_56, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_56, 1);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_56, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_56, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_72))
				{
					if (iLocal_74)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_69 - 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_55[iVar1]) && !func_145(uLocal_55[iVar1], -2017877118))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_55[iVar1], Local_65[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										TASK::TASK_PLAY_ANIM(uLocal_55[iVar1], cLocal_72, sLocal_73[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(uLocal_55[iVar1], cLocal_72, sLocal_73[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uLocal_55[iVar1], 1);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_69[iVar1]))
							{
								uLocal_55[iVar1] = PED::CREATE_PED(25, iLocal_69[iVar1], Local_65[iVar1 /*3*/], fLocal_66[iVar1], 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_55[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_53(uLocal_55[0]) && func_53(uLocal_55[1])) && func_53(uLocal_55[2])) && func_53(uLocal_55[3])) && func_53(uLocal_55[4]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_55[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_69 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69[iVar1]);
								iVar1++;
							}
							iLocal_74 = 0;
						}
					}
				}
			}
		}
		else if (Local_42.f_1 == 3)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_70))
					{
						iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_58, fLocal_59, 1, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_56);
						VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iLocal_56, 0f);
						VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iLocal_56, 0);
						VEHICLE::_0xB28B1FE5BFADD7F5(iLocal_56, 0);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_56))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_56, 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_56, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_68[iVar2]) && func_13(iLocal_67[iVar2]))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_67[iVar2], -1))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_68[iVar2], iLocal_67[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_67[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_jetski_01")))
						{
							iLocal_68[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_67[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							PED::SET_PED_DIES_IN_WATER(iLocal_68[iVar2], 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar2], 1);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_70))
					{
						iLocal_67[iVar2] = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_63[iVar2 /*3*/], fLocal_64[iVar2], 1, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67[iVar2]);
						VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iLocal_67[iVar2], 0f);
						VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iLocal_67[iVar2], 1);
						VEHICLE::_0xB28B1FE5BFADD7F5(iLocal_67[iVar2], 1);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_67[iVar2]))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_67[iVar2], 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_67[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_68[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			}
		}
	}
}

int func_145(int iParam0, int iParam1)//Position - 0x85E3
{
	if (func_53(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_146()//Position - 0x8616
{
	if (!func_148())
	{
		return 0;
	}
	if (func_53(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_147(PLAYER::PLAYER_PED_ID(), Local_58, 100f) || CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

bool func_147(int iParam0, struct<3> Param1, float fParam2)//Position - 0x8659
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

int func_148()//Position - 0x8676
{
	if (Local_42.f_1 == 3)
	{
		return 1;
	}
	else if (Local_42.f_1 == 1 || Local_42.f_1 == 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
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

int func_149(var uParam0)//Position - 0x86C4
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_150(var uParam0)//Position - 0x8726
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(var uParam0, char[4] cParam1, int iParam2)//Position - 0x873D
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (func_152(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(cParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(cParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, cParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cParam1, MISC::IS_BIT_SET(uParam0, 27));
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

int func_152(var uParam0)//Position - 0x8830
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

void func_153(var uParam0)//Position - 0x885C
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_92 + uParam0->f_93) || MISC::IS_BIT_SET(Global_15F6A.f_14, 2)) || MISC::IS_BIT_SET(Global_15F6A.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_154(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_154(var uParam0)//Position - 0x88E6
{
	func_155(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_155(var uParam0, char* sParam1, int iParam2)//Position - 0x88FC
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_152(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
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

void func_156()//Position - 0x89D5
{
	int iVar0;
	
	if (Local_42.f_1 == 1 || Local_42.f_1 == 2)
	{
		switch (Local_42)
		{
			case 0:
				Local_58 = { -158.67f, -1555.16f, 34.63f };
				fLocal_59 = 187.71f;
				Local_61 = { -155.15f, -1550.83f, 34.53f };
				fLocal_62 = 213.13f;
				Local_82 = { -68.87878f, -1818.903f, 24.55311f };
				Local_83 = { -56.0098f, -1807.029f, 27.85417f };
				Local_65[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_65[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_65[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_65[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_65[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_65[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_65[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_66[0] = 101.91f;
				fLocal_66[1] = 38.48f;
				fLocal_66[2] = -36.7f;
				fLocal_66[3] = -52.93f;
				fLocal_66[4] = -75.07f;
				fLocal_66[5] = 33.13f;
				fLocal_66[6] = -170.02f;
				break;
			
			case 1:
				Local_58 = { 368.72f, 294.06f, 102.96f };
				fLocal_59 = 25.17f;
				Local_61 = { 373.71f, 290.72f, 102.89f };
				fLocal_62 = 33.24f;
				Local_82 = { -523.5497f, 262.2986f, 80.01991f };
				Local_83 = { -509.1013f, 272.478f, 86.17713f };
				Local_65[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_65[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_65[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_65[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_65[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_65[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_65[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_66[0] = -64.83f;
				fLocal_66[1] = -163.04f;
				fLocal_66[2] = -118.77f;
				fLocal_66[3] = 127.18f;
				fLocal_66[4] = 105.04f;
				fLocal_66[5] = -146.75f;
				fLocal_66[6] = 10.11f;
				break;
			
			case 2:
				Local_58 = { -807.98f, -2555.14f, 13.34f };
				fLocal_59 = 3.35f;
				Local_61 = { -810.1f, -2560.85f, 13.38f };
				fLocal_62 = 43.57f;
				Local_82 = { -1000.759f, -2436.092f, 17.16946f };
				Local_83 = { -986.7399f, -2424.87f, 22.16946f };
				Local_65[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_65[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_65[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_65[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_65[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_65[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_65[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_66[0] = -86.65f;
				fLocal_66[1] = -130.05f;
				fLocal_66[2] = 150.04f;
				fLocal_66[3] = 137.51f;
				fLocal_66[4] = 115.37f;
				fLocal_66[5] = -136.43f;
				fLocal_66[6] = 20.43f;
				break;
			
			case 3:
				Local_58 = { 778.59f, -1160.2f, 28.35f };
				fLocal_59 = 302.47f;
				Local_61 = { 778.47f, -1164.01f, 28.25f };
				fLocal_62 = 287.97f;
				Local_82 = { -1000.759f, -2436.092f, 17.16946f };
				Local_83 = { -986.7399f, -2424.87f, 22.16946f };
				Local_65[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_65[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_65[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_65[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_65[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_65[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_65[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_66[0] = -147.53f;
				fLocal_66[1] = 171.51f;
				fLocal_66[2] = 104.94f;
				fLocal_66[3] = 21.91f;
				fLocal_66[4] = -0.22f;
				fLocal_66[5] = 107.91f;
				fLocal_66[6] = -95.23f;
				break;
			
			case 4:
				Local_58 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_59 = 258.32f;
				Local_65[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_65[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_65[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_65[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_65[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_66[0] = 75.06f;
				fLocal_66[1] = 134.25f;
				fLocal_66[2] = -52.71f;
				fLocal_66[3] = -93.39f;
				fLocal_66[4] = -141.52f;
				Local_82 = { -1265.744f, -1057.199f, 5.410841f };
				Local_83 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_161(Local_42, &Local_84, &Local_85, &fLocal_86);
		iLocal_69[0] = joaat("a_f_y_hipster_02");
		iLocal_69[1] = joaat("a_m_y_hipster_02");
		iLocal_69[2] = joaat("a_m_y_hipster_02");
		iLocal_69[3] = joaat("a_f_y_hipster_02");
		iLocal_69[4] = joaat("a_m_y_hipster_02");
		iLocal_69[5] = joaat("a_m_y_hipster_02");
		iLocal_69[6] = joaat("a_m_y_hipster_02");
		if (Local_42.f_1 == 1)
		{
			cLocal_72 = "random@street_race";
			sLocal_73[0] = "_car_b_chatting_female";
			sLocal_73[1] = "_car_b_chatting_male";
			sLocal_73[2] = "_car_b_chatting_male";
			sLocal_73[3] = "_car_b_chatting_female";
			sLocal_73[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_72 = "random@street_race";
			sLocal_73[0] = "_car_a_flirt_girl";
			sLocal_73[1] = "_car_a_gawker_male_a";
			sLocal_73[2] = "_car_a_gawker_male_b";
			sLocal_73[3] = "_car_b_chatting_female";
			sLocal_73[4] = "_car_b_chatting_male";
			sLocal_73[5] = "_car_b_driver";
			sLocal_73[6] = "_car_b_lookout";
			func_160(&uLocal_89, iLocal_71);
		}
		iLocal_70 = func_159(Local_42.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			func_160(&uLocal_89, iLocal_69[iVar0]);
			iVar0++;
		}
		func_160(&uLocal_89, iLocal_70);
		func_157(&uLocal_89, cLocal_72);
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_82, Local_83, 0, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_84, Local_85, fLocal_86, 0, 0, 1);
		iLocal_46 = 1;
	}
	else if (Local_42.f_1 == 3)
	{
		switch (Local_42)
		{
			case 5:
				Local_58 = { 3066.63f, 650.9f, 0.17f };
				fLocal_59 = 351.81f;
				Local_63[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_64[0] = 5.72f;
				Local_63[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_64[1] = 351.33f;
				Local_63[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_64[2] = 348.18f;
				break;
			
			case 6:
				Local_58 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_59 = 222.9f;
				Local_63[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_64[0] = 211.54f;
				Local_63[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_64[1] = 201.55f;
				Local_63[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_64[2] = 221.55f;
				break;
			
			case 7:
				Local_58 = { 194.64f, 3621.27f, 29.91f };
				fLocal_59 = 163.95f;
				Local_63[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_64[0] = 175.4f;
				Local_63[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_64[1] = 163.69f;
				Local_63[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_64[2] = 175.31f;
				break;
			
			case 8:
				Local_58 = { 627.58f, -2138.06f, -0.07f };
				fLocal_59 = 180.09f;
				Local_63[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_64[0] = 143.89f;
				Local_63[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_64[1] = 172.41f;
				Local_63[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_64[2] = 191.97f;
				break;
		}
		iLocal_70 = joaat("seashark");
		func_160(&uLocal_89, iLocal_70);
		func_160(&uLocal_89, joaat("a_m_y_jetski_01"));
	}
}

void func_157(var uParam0, char* sParam1)//Position - 0x9360
{
	func_158(uParam0, 1, -1, sParam1, 0);
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x9373
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
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
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_159(int iParam0)//Position - 0x945B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_160(var uParam0, int iParam1)//Position - 0x949C
{
	func_158(uParam0, 0, iParam1, "NULL", 0);
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x94B0
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_162()//Position - 0x95D2
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_52(9))
	{
		return 0;
	}
	if (func_43(6) || func_43(7))
	{
		return 0;
	}
	if (Global_D5D8)
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (Local_42.f_1 != 3 && func_41() != 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (func_53(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((func_13(uVar0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0)) && !func_184(PLAYER::PLAYER_PED_ID(), uVar0, -1)) && ENTITY::GET_ENTITY_MODEL(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_42)
	{
		case 0:
			if (Global_17C2F[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_17C2F[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_17C2F[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_17C2F[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_17C2F[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_17C25[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_17C25[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_17C25[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_17C25[3])
			{
				return 0;
			}
			break;
	}
	if (!func_148())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_53(uLocal_55[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_PAUSE(0, iVar1 * 100);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_55[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_68 - 1))
		{
			if (func_53(iLocal_68[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_PAUSE(0, iVar1 * 110);
				if (func_13(iLocal_67[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_68[iVar1], iLocal_67[iVar1], 0))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67[iVar1], 30f, 786597);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_53(iLocal_57))
		{
			if (func_13(iLocal_56) && PED::IS_PED_IN_VEHICLE(iLocal_57, iLocal_56, 0))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_57, iLocal_56, 30f, 786597);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_57, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_164())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_53(uLocal_55[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_PAUSE(0, iVar4 * 50);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(uLocal_55[iVar4], 1);
				}
				TASK::TASK_PERFORM_SEQUENCE(uLocal_55[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_68 - 1))
		{
			if (func_13(iLocal_67[iVar4]) && Local_42.f_1 == 3)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_67[iVar4], 0);
			}
			if (func_53(iLocal_68[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_PAUSE(0, iVar4 * 60);
				if (func_13(iLocal_67[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_68[iVar4], iLocal_67[iVar4], 0))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67[iVar4], 50f, 786468);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(iLocal_68[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_56) && Local_42.f_1 == 3)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_56, 0);
		}
		if (func_53(iLocal_57))
		{
			if (func_13(iLocal_56) && PED::IS_PED_IN_VEHICLE(iLocal_57, iLocal_56, 0))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_57, iLocal_56, 50f, 786468);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
		}
		switch (Local_42)
		{
			case 0:
				Global_17C2F[0] = 1;
				Global_17C35[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 1:
				Global_17C2F[1] = 1;
				Global_17C35[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 2:
				Global_17C2F[2] = 1;
				Global_17C35[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 3:
				Global_17C2F[3] = 1;
				Global_17C35[3] = MISC::GET_GAME_TIMER();
				break;
			
			case 4:
				Global_17C2F[4] = 1;
				Global_17C35[4] = MISC::GET_GAME_TIMER();
				break;
			
			case 5:
				Global_17C25[0] = 1;
				Global_17C2A[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				Global_17C25[1] = 1;
				Global_17C2A[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 7:
				Global_17C25[2] = 1;
				Global_17C2A[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				Global_17C25[3] = 1;
				Global_17C2A[3] = MISC::GET_GAME_TIMER();
				break;
		}
		return 0;
	}
	return 1;
}

void func_163(var uParam0, bool bParam1)//Position - 0x9B26
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_53(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(uParam0))
		{
			func_122(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_122(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_164()//Position - 0x9B97
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_42.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_68 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					return 1;
				}
				else if (func_165(iLocal_68[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_68[iVar0]))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_67[iVar0]))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_67[iVar0], PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_67[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_56))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_56) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_147(PLAYER::PLAYER_PED_ID(), Local_43, 50f) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (PED::IS_PED_INJURED(iLocal_57))
		{
			return 1;
		}
		else if (func_165(iLocal_57, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_57))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_56))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_56, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_60))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_60, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_69 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[iVar0]))
		{
			if (PED::IS_PED_INJURED(uLocal_55[iVar0]))
			{
				return 1;
			}
			else if (func_165(uLocal_55[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x9DE5
{
	struct<3> Var0;
	
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_179(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_178(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_166(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0, float fParam1)//Position - 0x9EA0
{
	float fVar0;
	
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		if (func_177(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_167(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167(int iParam0, float fParam1)//Position - 0x9F16
{
	return func_168(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_168(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9F2E
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_176(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar2 != -1)
		{
			func_175(&(Local_39[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_172(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_171();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_39[iVar2 /*4*/].f_1 = iParam0;
		Local_39[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_169(&(Local_39[iVar2 /*4*/]), Var1, iParam1, &(Local_39[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_39[iVar2 /*4*/].f_3) < iParam4);
}

int func_169(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x9FEF
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_14(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_170(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		func_14(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_40)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_14(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, 0))
			{
				if (bLocal_40)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_170(int iParam0, int iParam1)//Position - 0xA11B
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_171()//Position - 0xA1E0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if ((Local_39[iVar0 /*4*/] == 0 && Local_39[iVar0 /*4*/].f_1 == 0) && Local_39[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_172(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xA22A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_174(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { func_174(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_173(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_173(struct<3> Param0, struct<3> Param1)//Position - 0xA2BB
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_174(struct<3> Param0)//Position - 0xA2DC
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

void func_175(var uParam0)//Position - 0xA31B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_176(int iParam0, int iParam1)//Position - 0xA336
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if (Local_39[iVar0 /*4*/].f_1 == iParam0 && Local_39[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0)//Position - 0xA375
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_178(int iParam0, int iParam1, float fParam2)//Position - 0xA39D
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / SYSTEM::VDIST(Var1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_179(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA3E4
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_183(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_180(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_183(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_180(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_180(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA4DF
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_181(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_181(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(var uParam0, float fParam1)//Position - 0xA5EB
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_182(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xA680
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_174(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { func_174(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_173(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xA70E
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0xA756
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185()//Position - 0xA791
{
	switch (Local_42)
	{
		case 5:
			return MISC::IS_BIT_SET(Global_17C49.f_6E0D.f_2, 0);
			break;
		
		case 6:
			return MISC::IS_BIT_SET(Global_17C49.f_6E0D.f_2, 1);
			break;
		
		case 7:
			return MISC::IS_BIT_SET(Global_17C49.f_6E0D.f_2, 2);
			break;
		
		case 8:
			return MISC::IS_BIT_SET(Global_17C49.f_6E0D.f_2, 3);
			break;
		
		case 0:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, 0);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, 1);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, 2);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, 3);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_3, 4);
			break;
	}
	return 0;
}

void func_186()//Position - 0xA88B
{
	iLocal_41 = 0;
	iLocal_44 = 0;
	bLocal_51 = false;
	bLocal_52 = false;
	iLocal_48 = 0;
	iLocal_49 = 0;
	iLocal_50 = 0;
	func_188(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_42 == 1)
	{
		uLocal_88 = func_187(374.0083f, 279.5919f, 102.3306f, 40f);
		MISC::CLEAR_AREA_OF_VEHICLES(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_42.f_1 == 1 || Local_42.f_1 == 2)
	{
		uLocal_87 = func_187(Local_43, 60f);
	}
}

var func_187(struct<3> Param0, float fParam1)//Position - 0xA920
{
	struct<3> Var0;
	
	Var0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_188(bool bParam0)//Position - 0xA952
{
	if (bParam0)
	{
		switch (Local_42)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_160(&uLocal_89, joaat("banshee"));
				func_160(&uLocal_89, joaat("feltzer2"));
				func_160(&uLocal_89, joaat("sentinel"));
				break;
			
			case 4:
				func_160(&uLocal_89, joaat("bati"));
				func_160(&uLocal_89, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_160(&uLocal_89, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_189(&uLocal_89);
	}
}

void func_189(var uParam0)//Position - 0xA9F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_190(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_190(var uParam0)//Position - 0xAA29
{
	func_191(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_191(var uParam0, char* sParam1, int iParam2)//Position - 0xAA40
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_152(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
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
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_192(int iParam0)//Position - 0xAB00
{
	switch (iParam0)
	{
		case 0:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, 0);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, 1);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, 2);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, 3);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_17C49.f_6E10.f_1, 4);
			break;
	}
	return 0;
}

bool func_193(int iParam0, int iParam1)//Position - 0xAB92
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iParam0], iParam1);
	return bVar0;
}

void func_194()//Position - 0xABDF
{
	if (func_195(func_196(85, 0), Local_43, 1f))
	{
		Local_42 = 0;
		Local_42.f_1 = 2;
		Local_42.f_3 = 100;
		Local_42.f_4 = 20;
	}
	else if (func_195(func_196(86, 0), Local_43, 1f))
	{
		Local_42 = 1;
		Local_42.f_1 = 2;
		Local_42.f_3 = 500;
		Local_42.f_4 = 18;
	}
	else if (func_195(func_196(87, 0), Local_43, 1f))
	{
		Local_42 = 2;
		Local_42.f_1 = 2;
		Local_42.f_3 = 1000;
		Local_42.f_4 = 2;
	}
	else if (func_195(func_196(88, 0), Local_43, 1f))
	{
		Local_42 = 3;
		Local_42.f_1 = 2;
		Local_42.f_3 = 1250;
		Local_42.f_4 = 4;
	}
	else if (func_195(func_196(89, 0), Local_43, 1f))
	{
		Local_42 = 4;
		Local_42.f_1 = 1;
		Local_42.f_3 = 1500;
		Local_42.f_4 = 5;
	}
	else if (func_195(func_196(81, 0), Local_43, 1f))
	{
		Local_42 = 5;
		Local_42.f_1 = 3;
		Local_42.f_3 = 0;
		Local_42.f_4 = 16;
	}
	else if (func_195(func_196(82, 0), Local_43, 1f))
	{
		Local_42 = 6;
		Local_42.f_1 = 3;
		Local_42.f_3 = 0;
		Local_42.f_4 = 13;
	}
	else if (func_195(func_196(83, 0), Local_43, 1f))
	{
		Local_42 = 7;
		Local_42.f_1 = 3;
		Local_42.f_3 = 0;
		Local_42.f_4 = 15;
		Local_42.f_5 = 1;
	}
	else if (func_195(func_196(84, 0), Local_43, 1f))
	{
		Local_42 = 8;
		Local_42.f_1 = 3;
		Local_42.f_4 = 24;
		Local_42.f_3 = 0;
		Local_42.f_5 = 1;
	}
	else
	{
		func_197(0);
	}
}

int func_195(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xAD6E
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

Vector3 func_196(int iParam0, int iParam1)//Position - 0xADBA
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0f, 0f, 0f;
	}
	return Global_60AC[iVar0 /*23*/][iParam1 /*3*/];
}

void func_197(bool bParam0)//Position - 0xADF8
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_45)
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		iLocal_45 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_55[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_55[iVar0]);
			TASK::TASK_WANDER_STANDARD(uLocal_55[iVar0], 1193033728, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_55[iVar0], 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_55[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_68[iVar0]))
		{
			if (func_14(iLocal_67[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_68[iVar0]);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_67[iVar0])))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_67[iVar0], 0);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_68[iVar0], iLocal_67[iVar0], 20f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_68[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_67[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_57))
	{
		if (func_14(iLocal_56))
		{
			TASK::CLEAR_PED_TASKS(iLocal_57);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_57, 1, 1);
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_57, iLocal_56, 15f, 786599);
			PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_57);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
	}
	if (func_14(iLocal_60))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	switch (Local_42)
	{
		case 5:
			func_200(81, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E0D.f_2), 0);
			break;
		
		case 6:
			func_200(82, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E0D.f_2), 1);
			break;
		
		case 7:
			func_200(83, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E0D.f_2), 2);
			break;
		
		case 8:
			func_200(84, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E0D.f_2), 3);
			break;
		
		case 0:
			func_200(85, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E10.f_3), 0);
			break;
		
		case 1:
			func_200(86, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E10.f_3), 1);
			break;
		
		case 2:
			func_200(87, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E10.f_3), 2);
			break;
		
		case 3:
			func_200(88, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E10.f_3), 3);
			break;
		
		case 4:
			func_200(89, 0, 0);
			MISC::SET_BIT(&(Global_17C49.f_6E10.f_3), 4);
			break;
	}
	if (iLocal_44)
	{
		HUD::CLEAR_HELP(1);
	}
	AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 0);
	if (iLocal_53)
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	}
	if (iLocal_75 && !bParam0)
	{
		uVar1 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(uVar1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(iVar1))
			{
				PLAYER::SET_PLAYER_CONTROL(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_188(0);
	}
	if (iLocal_46)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_82, Local_83, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_84, Local_85, fLocal_86, 1);
		iLocal_46 = 0;
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_42 == 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_88, 0);
	}
	if (Local_42.f_1 == 1 || Local_42.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_87, 0);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	func_198(&uLocal_89, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_198(var uParam0, bool bParam1)//Position - 0xB13F
{
	int iVar0;
	
	if (!bParam1)
	{
		func_189(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_199(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = -1;
}

void func_199(var uParam0)//Position - 0xB17A
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_200(int iParam0, bool bParam1, bool bParam2)//Position - 0xB193
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
		if (Global_60A9 == 1)
		{
			Global_60AA = 1;
		}
		Global_60A9 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_60AC[iVar0 /*23*/].f_13));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

