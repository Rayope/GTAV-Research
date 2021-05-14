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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_35[2] = { 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79[2] = { 0, 0 };
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94[2];
	struct<3> Local_95 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	char* sLocal_97 = NULL;
	var uLocal_98 = 16;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278 = 0;
	int iLocal_279[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302[2] = { 0, 0 };
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327[2] = { 0, 0 };
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339[2] = { 0, 0 };
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360[2] = { 0, 0 };
	int iLocal_361 = 0;
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
	Local_91 = { 27.7189f, -608.7927f, 30.6293f };
	Local_95 = { 903.1f, -1548.8f, 29.8f };
	fLocal_96 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_187();
		func_186();
	}
	if (func_185(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_263);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_264);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_263, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, iLocal_263);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, iLocal_264);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_264);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_263);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
		}
		func_183();
		if (iLocal_271 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_182(27, 1);
				iLocal_271 = 1;
			}
		}
		if (iLocal_294 == 1)
		{
			func_178();
		}
		func_175();
		func_168();
		func_160();
		func_155();
		func_152();
		switch (iLocal_27)
		{
			case 0:
				func_151();
				break;
			
			case 1:
				func_148();
				break;
			
			case 2:
				func_124();
				break;
			
			case 3:
				func_122();
				break;
			
			case 4:
				func_99();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1E9
{
	switch (iLocal_52)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 4:
					sLocal_97 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_97 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_97 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_97 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_97 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_97 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_97 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_97 = "FPB_FAIL11";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_97);
			}
			iLocal_52 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_186();
			}
			break;
	}
}

int func_2()//Position - 0x2CA
{
	if (Global_15F6A == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x2DF
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_15F6A == 7 || Global_15F6A == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)//Position - 0x30C
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)//Position - 0x31F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_10B7D, sParam0, 16);
			StringCopy(&Global_10B81, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_6(int iParam0)//Position - 0x35E
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_185(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_7(int iParam0)//Position - 0x3A3
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_11(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_8(&(Global_17C49.f_6C1.f_21B), iVar1);
	if (Global_14A3E == Global_15F8F)
	{
		Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_13D03[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_2++;
	Global_14A3E = Global_15F8F;
	if (iParam0 == -1)
	{
		if (Global_17C49.f_1CAD)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)//Position - 0x4BA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_9(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)//Position - 0x683
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)//Position - 0x691
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)//Position - 0x1000
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

void func_12()//Position - 0x103E
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
		MISC::SET_BIT(&(Global_15F6A.f_14), 25);
	}
}

int func_13()//Position - 0x1125
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()//Position - 0x115A
{
	func_15();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_15()//Position - 0x1173
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_17(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_16(int iParam0)//Position - 0x1270
{
	return Global_8861 == iParam0;
}

bool func_17(int iParam0)//Position - 0x127E
{
	return iParam0 < 3;
}

int func_18(int iParam0)//Position - 0x128A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)//Position - 0x12C7
{
	if (func_17(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()//Position - 0x12F1
{
	func_152();
	if (iLocal_52 == 0)
	{
		if (iLocal_265 == 1)
		{
			func_34();
			iLocal_265 = 0;
		}
		iLocal_272 = 0;
		iLocal_273 = 0;
		iLocal_274 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		if (func_33(iLocal_36, 0))
		{
			if (!func_32(iLocal_36))
			{
				while (!func_31(iLocal_36, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_38, 0))
		{
			if (!func_32(iLocal_38))
			{
				while (!func_31(iLocal_38, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_37, 0))
		{
			if (!func_32(iLocal_37))
			{
				while (!func_31(iLocal_37, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_27(iLocal_32, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_294 = 1;
		iLocal_52 = 1;
	}
	if (iLocal_52 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_36, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_36);
							PED::REMOVE_PED_FROM_GROUP(iLocal_36);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_36, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_36, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_36);
							PED::REMOVE_PED_FROM_GROUP(iLocal_36);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_36, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_32, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_52 = 2;
	}
	if (iLocal_52 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (iLocal_274 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_32, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_272 = 1;
						}
						if (func_33(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_32, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_36, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_32, 0))
							{
								if (func_32(iLocal_36))
								{
									if (func_24(iLocal_36))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_272 = 1;
						}
						if (func_33(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_32, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_36, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_32, 0))
							{
								if (func_32(iLocal_36))
								{
									if (func_24(iLocal_36))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_272 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_32, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_274 = 1;
									}
								}
								else
								{
									iLocal_274 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
					}
					if (iLocal_272 == 1 && iLocal_273 == 1)
					{
						iLocal_274 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_52 = 3;
				}
			}
		}
	}
	if (iLocal_52 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_32, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, 1);
			}
		}
		iLocal_52 = 4;
	}
	if (iLocal_52 == 4)
	{
		func_21();
	}
}

void func_21()//Position - 0x177E
{
	func_22(0, 0);
	func_186();
}

void func_22(bool bParam0, int iParam1)//Position - 0x1790
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_D5E0)
	{
		Global_D5E0 = iParam1;
	}
	if (bParam0)
	{
		if ((func_185(0) && Global_10B8B.f_1 == 1) && func_23(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_185(0))
	{
		iVar0 = func_13();
		iVar1 = Global_13CDF[iVar0 /*5*/];
		uVar2 = Global_10BA2.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_17C49.f_1CAD)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_10B8D, 1);
		Global_10B9D = uVar2;
		Global_10B9E = MISC::GET_GAME_TIMER();
	}
}

int func_23(int iParam0)//Position - 0x1866
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x18A4
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_150CD, iVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_150CD, iVar0);
		return 1;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x18FC
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_15725[func_26(iParam0)];
}

int func_26(int iParam0)//Position - 0x192D
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x1968
{
	if (func_29() && func_30())
	{
		while (Global_15F65 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_28(0);
	}
}

void func_28(int iParam0)//Position - 0x1A2C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_15F6A.f_14), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 13);
	}
}

int func_29()//Position - 0x1A55
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()//Position - 0x1A79
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

int func_31(int iParam0, int iParam1)//Position - 0x1A8D
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_150CD, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_150CC, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0);
			MISC::SET_BIT(&Global_150CD, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1B13
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_150CD, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x1B5C
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_150CC, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()//Position - 0x1BB8
{
	iLocal_294 = 0;
	iLocal_336 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_97();
	HUD::CLEAR_PRINTS();
	func_96();
	func_95();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_35()//Position - 0x1C0D
{
	switch (iLocal_27)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
	}
}

void func_36()//Position - 0x1CEA
{
	switch (iLocal_27)
	{
		case 3:
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_314 = 0;
			func_91();
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_85();
				while (!func_84())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_33 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_314 = 0;
			func_91();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_312 = 1;
			iLocal_313 = 1;
			iLocal_314 = 1;
			func_91();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				iLocal_39 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_39, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam1)//Position - 0x1E93
{
	return func_38(&(Global_164D7.f_877), Param0, fParam1, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x1EAD
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_83(uParam0))
	{
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_2A == joaat("monster") || uParam0->f_C.f_2A == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_81(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_80(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_C.f_2A, Param1, fParam2, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_75(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_C.f_2A) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_C.f_2A))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_74(uParam0->f_B, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_74(uParam0->f_B, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_73(iVar0, uParam0->f_B);
				}
				else if ((!func_70(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_69(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_62(iVar4);
					}
				}
				if (((Global_15F6A != 13 && Global_15F6A != 10) && Global_15F6A != 11) && Global_15F6A != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_15F6A.f_3)) == Global_10A06)
					{
						if (uParam0->f_C.f_2A == Global_17C49.f_47C3.f_45[21 /*54*/].f_2A)
						{
							func_59(24, 0);
							func_62(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_B);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_C.f_2A);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)//Position - 0x2157
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_44(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_17C49.f_6C1.f_21B.f_C8D;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A = 0;
						Global_17C49.f_47C3.f_12C0[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
				{
					Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A = 0;
				}
			}
		}
		iVar1++;
	}
	Global_17C49.f_47C3.f_12BE = iParam1;
	Global_109CB = iParam0;
	Global_17C49.f_47C3.f_12BC = 1;
	func_40(iParam0, &(Global_17C49.f_47C3.f_1286));
}

void func_40(int iParam0, var uParam1)//Position - 0x2358
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_2A = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_26), &(uParam1->f_27), &(uParam1->f_28));
		uParam1->f_29 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_2B = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_2D = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_2E = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_32), &(uParam1->f_33), &(uParam1->f_34));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_35), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_35), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_35), 31);
		}
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			uParam1->f_29 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_2C = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::SET_BIT(&(uParam1->f_35), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::CLEAR_BIT(&(uParam1->f_35), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_35), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_35), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_35), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 27);
		}
	}
}

int func_41(int iParam0)//Position - 0x2602
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x26B2
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)//Position - 0x278C
{
	int iVar0;
	
	uParam0->f_2A = 0;
	uParam0->f_35 = 0;
	uParam0->f_29 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2D = 0;
	uParam0->f_2E = 1;
	uParam0->f_2F = 0;
	uParam0->f_30 = 0;
	uParam0->f_31 = 0;
}

int func_44(int iParam0)//Position - 0x283C
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) != 145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_45(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_54(iParam0))
		{
		}
		if (func_54(iParam0))
		{
		}
		if (func_57(iParam0, 0, 0))
		{
		}
		if (func_57(iParam0, 1, 0))
		{
		}
		if (func_57(iParam0, 2, 0))
		{
		}
		if (func_56(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_45(int iParam0)//Position - 0x2919
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_46(int iParam0)//Position - 0x2AC9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_51())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_50() && !func_49()) && !func_48()) && !func_47()) && !func_51())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_48())
		{
			return 0;
		}
	}
	return 1;
}

int func_47()//Position - 0x2C98
{
	return 0;
}

int func_48()//Position - 0x2CA1
{
	return 1;
}

int func_49()//Position - 0x2CAA
{
	return 1;
}

int func_50()//Position - 0x2CB3
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x2CCC
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

int func_52(int iParam0)//Position - 0x2D4F
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x2D94
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_156B0[iVar0]))
		{
			if (Global_156B0[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x2DCF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15692[iVar0], 0))
			{
				if (Global_15692[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x2E4B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[24]))
	{
		if (iParam0 == Global_10642.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_10642.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x2F33
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				return Global_1569C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x2F96
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_58(iParam1, iVar0, &sVar1, &iVar2))
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

int func_58(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3007
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

void func_59(int iParam0, bool bParam1)//Position - 0x30DF
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_61(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x313C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
}

bool func_61(int iParam0, int iParam1)//Position - 0x3177
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_62(int iParam0)//Position - 0x319A
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_10642.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_10642.f_8B[iParam0]));
			}
		}
		Global_10642[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_61(iParam0, 0)) && Global_109CF.f_2A == 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] != 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] > 3) && (!func_64(0, Global_10642.f_22B[0 /*21*/].f_C) || !func_64(1, Global_10642.f_22B[0 /*21*/].f_C)))
			{
				func_63(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/], &Global_109CF);
				Global_10A05 = Global_17C49.f_47C3.f_12BF;
			}
			func_59(iParam0, 0);
		}
	}
}

void func_63(struct<54> Param0, var uParam1)//Position - 0x330F
{
	uParam1->f_2A = Param0.f_2A;
	*uParam1 = Param0;
	uParam1->f_1 = { Param0.f_1 };
	uParam1->f_5 = Param0.f_5;
	uParam1->f_6 = Param0.f_6;
	uParam1->f_7 = Param0.f_7;
	uParam1->f_8 = Param0.f_8;
	uParam1->f_9 = { Param0.f_9 };
	uParam1->f_23 = { Param0.f_23 };
	uParam1->f_26 = Param0.f_26;
	uParam1->f_27 = Param0.f_27;
	uParam1->f_28 = Param0.f_28;
	uParam1->f_29 = Param0.f_29;
	uParam1->f_35 = Param0.f_35;
	uParam1->f_2B = Param0.f_2B;
	uParam1->f_2D = Param0.f_2D;
	uParam1->f_2C = Param0.f_2C;
	uParam1->f_2F = Param0.f_2F;
	uParam1->f_30 = Param0.f_30;
	uParam1->f_31 = Param0.f_31;
	uParam1->f_32 = Param0.f_32;
	uParam1->f_33 = Param0.f_33;
	uParam1->f_34 = Param0.f_34;
}

int func_64(int iParam0, int iParam1)//Position - 0x33DA
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_65(&(Global_17C49.f_47C3.f_113E[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_46(Global_17C49.f_47C3.f_113E[iVar0 /*109*/][iParam0 /*54*/].f_2A);
}

int func_65(var uParam0)//Position - 0x344B
{
	return *uParam0;
}

int func_66(var uParam0, int iParam1)//Position - 0x3456
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_17C49.f_47C3.f_45[uParam0->f_E /*54*/].f_2A;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_82(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/] };
		}
		if (Global_17C49.f_47C3.f_566[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_17C49.f_47C3.f_566[uParam0->f_E];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_82(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_82(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)//Position - 0x4B4C
{
	struct<58> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_68(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_68(int iParam0, var uParam1, int iParam2)//Position - 0x4B8E
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_B = 12;
	Var1.f_1F = 25;
	Var1.f_39 = 2;
	Var1.f_40 = 1;
	Var1.f_3C = 255;
	Var1.f_3D = 255;
	Var1.f_3E = 255;
	Var1.f_49 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_17C49.f_1CAD.f_63.f_3A[128] && !Global_17C49.f_1CAD.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_B[0] = 1;
					StringCopy(&(Var1.f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "BETTY 32", 16);
					if (Global_17C49.f_1CAD.f_63.f_3A[119])
					{
						Var1.f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_A = 1;
					StringCopy(&(Var1.f_1B), "FC1988", 16);
					Var1.f_B[0] = 1;
					Var1.f_B[1] = 1;
					Var1.f_B[2] = 1;
					Var1.f_B[3] = 1;
					Var1.f_B[4] = 1;
					Var1.f_B[5] = 1;
					Var1.f_B[6] = 1;
					Var1.f_B[7] = 1;
					Var1.f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_69(int iParam0)//Position - 0x4E06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_10642.f_1E4[iVar0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_10642.f_1E4[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_70(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x4EC8
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_72(iParam0, Global_10642.f_8B[38], 0))
			{
				func_62(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_72(iParam0, Global_10642.f_8B[43], 1))
			{
				func_62(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_72(iParam0, uVar1[iVar3], 1) && func_71(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam2 || func_82(Param1, 0f, 0f, 0f)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[14]))
				{
					func_62(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[20]))
				{
					func_62(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x50CE
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

int func_72(int iParam0, int iParam1, bool bParam2)//Position - 0x511A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1)//Position - 0x517A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			Global_15692[iVar0] = iParam0;
			Global_1569C[iVar0] = iParam1;
			Global_156A6[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_156A6[iVar0]))
			{
				Global_156C2[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_156C2[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x51FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (iParam0 == 145 || Global_1569C[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == func_67(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_15692[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15692[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_15692[iVar0]));
						Global_1569C[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x529D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_2A == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_35, 15) || func_79(iParam0)) || (((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0) && uParam1->f_9[20] > 0)) && func_78())
		{
			uParam1->f_26 = 0;
			uParam1->f_27 = 0;
			uParam1->f_28 = 0;
		}
		else if ((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0)
		{
			uParam1->f_26 = 255;
			uParam1->f_27 = 255;
			uParam1->f_28 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_26, uParam1->f_27, uParam1->f_28);
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_29);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_35, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_2E);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_32, uParam1->f_33, uParam1->f_34);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_35, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_35, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_35, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_35, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_35, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_2B >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_2B);
		}
		if (uParam1->f_2D > -1 && uParam1->f_2D < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_2D == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_2C == 0 || uParam1->f_2C == 3) || uParam1->f_2C == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_2A) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_2A))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, func_41(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_35, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_76(int iParam0, var uParam1, var uParam2)//Position - 0x5688
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_77(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x57BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_78()//Position - 0x5896
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_79(int iParam0)//Position - 0x58A7
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_80(struct<3> Param0, float fParam1, int iParam2)//Position - 0x58F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_66(&(Global_10642.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_10642.f_22B[0 /*21*/], iParam2) <= fParam1)
			{
				func_62(iVar0);
			}
		}
		iVar0++;
	}
}

int func_81(var uParam0)//Position - 0x5942
{
	if (func_83(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_C.f_2A))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_82(struct<3> Param0, struct<3> Param1)//Position - 0x5977
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_83(var uParam0)//Position - 0x59A0
{
	if (uParam0->f_C.f_2A == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_C.f_2A))
	{
		return 0;
	}
	return 1;
}

bool func_84()//Position - 0x59C9
{
	return func_81(&(Global_164D7.f_877));
}

void func_85()//Position - 0x59DC
{
	func_86(&(Global_164D7.f_877));
}

void func_86(var uParam0)//Position - 0x59EF
{
	if (func_83(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_C.f_2A);
	}
}

int func_87(struct<3> Param0, int iParam1)//Position - 0x5A0D
{
	return func_88(Global_164D7.f_877.f_C.f_2A, Param0, iParam1);
}

int func_88(int iParam0, struct<3> Param1, int iParam2)//Position - 0x5A2A
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_89() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	if ((Var1.x - Var0.x) > Param1.x)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_89()//Position - 0x5A94
{
	return 2.55f, 5.59f, 2.55f;
}

int func_90()//Position - 0x5AAB
{
	return func_83(&(Global_164D7.f_877));
}

void func_91()//Position - 0x5ABE
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("bison2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[1], 1, 1);
			iLocal_31 = Global_15350[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
		else
		{
			iLocal_31 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[2], 1, 1);
			iLocal_32 = Global_15350[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
		else
		{
			iLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_32, iLocal_31, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[0], 1, 1);
			iLocal_34[0] = Global_15350.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_263);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
		}
		else
		{
			iLocal_34[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[1], 1, 1);
			iLocal_34[1] = Global_15350.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_263);
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
		else
		{
			iLocal_34[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[2], 1, 1);
			iLocal_34[2] = Global_15350.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_263);
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
		else
		{
			iLocal_34[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[3], 1, 1);
			iLocal_34[3] = Global_15350.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_263);
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
		else
		{
			iLocal_34[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[4], 1, 1);
			iLocal_34[4] = Global_15350.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_263);
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
		else
		{
			iLocal_34[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[5], 1, 1);
			iLocal_34[5] = Global_15350.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_263);
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
		else
		{
			iLocal_34[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[8], 1, 1);
			iLocal_34[6] = Global_15350.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_263);
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
		else
		{
			iLocal_34[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_263);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[6], 1, 1);
			iLocal_35[0] = Global_15350.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			func_92(iLocal_35[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_35[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_35[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_35[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			func_92(iLocal_35[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_35[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_35[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[7], 1, 1);
			iLocal_35[1] = Global_15350.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			func_92(iLocal_35[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_35[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_35[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_35[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			func_92(iLocal_35[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_35[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_35[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}

void func_92(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)//Position - 0x65AA
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, iParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, iParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, iParam5);
	}
}

void func_93(int iParam0, int iParam1)//Position - 0x65E6
{
	Global_D5E9 = iParam0;
	Global_D5EA = iParam1;
}

void func_94(int iParam0, int iParam1)//Position - 0x65F8
{
	int iVar0;
	
	Global_D5EB = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (iParam1 == -1 || Global_1051E[iVar0 /*9*/] == iParam1)
		{
			if (Global_1051E[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_6 = iParam0;
				Global_1051E[iVar0 /*9*/].f_7 = 1;
				Global_1051E[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_95()//Position - 0x6663
{
	iLocal_53 = 0;
	while (iLocal_53 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_53]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_34[iLocal_53], 1))
		{
			PED::DELETE_PED(&(iLocal_34[iLocal_53]));
		}
		iLocal_53++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[0], 1))
	{
		PED::DELETE_PED(&(iLocal_35[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[1], 1))
	{
		PED::DELETE_PED(&(iLocal_35[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36, 1))
	{
		PED::DELETE_PED(&iLocal_36);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1))
	{
		PED::DELETE_PED(&iLocal_37);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1))
	{
		PED::DELETE_PED(&iLocal_38);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, 1))
	{
		PED::DELETE_PED(&iLocal_39);
	}
	if (!func_30())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_31, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_15350[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[3], 1, 0);
		VEHICLE::DELETE_VEHICLE(&(Global_15350[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_32);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_96()//Position - 0x683B
{
	if (HUD::DOES_BLIP_EXIST(uLocal_48))
	{
		HUD::REMOVE_BLIP(&uLocal_48);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_49))
	{
		HUD::REMOVE_BLIP(&uLocal_49);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_50))
	{
		HUD::REMOVE_BLIP(&uLocal_50);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_51))
	{
		HUD::REMOVE_BLIP(&uLocal_51);
	}
}

void func_97()//Position - 0x687F
{
	Global_38DE = 0;
	func_98();
}

void func_98()//Position - 0x688F
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

void func_99()//Position - 0x68E6
{
	func_116();
	if (iLocal_52 == 0)
	{
		if (iLocal_265 == 1)
		{
			func_34();
			iLocal_265 = 0;
		}
		iLocal_266 = 0;
		iLocal_268 = 0;
		iLocal_345 = 0;
		iLocal_84 = 0;
		iLocal_85 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_294 = 1;
		iLocal_52 = 1;
	}
	if (iLocal_52 == 1)
	{
		func_115(&uLocal_98, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_115(&uLocal_98, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_115(&uLocal_98, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_115(&uLocal_98, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_52 = 2;
	}
	if (iLocal_52 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_105(&uLocal_98, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_52 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_105(&uLocal_98, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_52 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_105(&uLocal_98, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_52 = 3;
				}
			}
		}
	}
	if (iLocal_52 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_49))
		{
			if (!func_104())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					uLocal_49 = func_102(Local_91, 1);
				}
			}
		}
		if (func_104())
		{
			iLocal_52 = 4;
		}
	}
	if (iLocal_52 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_101(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(uLocal_49))
								{
									HUD::REMOVE_BLIP(&uLocal_49);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_100(0, -1);
								iLocal_52 = 0;
								iLocal_27 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_100(bool bParam0, int iParam1)//Position - 0x6B23
{
	int iVar0;
	
	if (Global_D5E6)
	{
	}
	Global_D5E6 = 0;
	if (bParam0)
	{
		Global_D5E7 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_1051E[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] > 0)
			{
				if (Global_1051E[iVar0 /*9*/] == iParam1)
				{
					Global_1051E[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_101(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x6BBD
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

var func_102(struct<3> Param0, int iParam1)//Position - 0x6D3F
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)//Position - 0x6D6B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104()//Position - 0x6D82
{
	if (Global_3D4C == 0)
	{
		return 1;
	}
	return 0;
}

bool func_105(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x6D99
{
	func_114(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3D7C = 0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 0;
	Global_3D82 = 0;
	if (iParam5 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	Global_280001 = 0;
	return func_106(sParam3, iParam4, bParam8);
}

int func_106(char* sParam0, int iParam1, bool bParam2)//Position - 0x6DF8
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
					func_98();
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
		if (func_113(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_112();
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
				func_111();
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
				if (func_110())
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
			if (func_109())
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
			func_108();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_107();
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
		func_98();
	}
	return 0;
}

void func_107()//Position - 0x70C4
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

void func_108()//Position - 0x70F5
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

int func_109()//Position - 0x718A
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_110()//Position - 0x71B1
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

void func_111()//Position - 0x724A
{
	if (func_16(14))
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
		Global_3839 = func_14();
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

void func_112()//Position - 0x72EB
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

bool func_113(int iParam0, int iParam1)//Position - 0x7342
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x737D
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = iParam5;
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

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x73D3
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_116()//Position - 0x746E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
			{
				if (func_121("HELP_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_48))
				{
					HUD::REMOVE_BLIP(&uLocal_48);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_51))
				{
					if (iLocal_293 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_84 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&uLocal_51);
				}
				if (iLocal_27 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_345 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_345 = 1;
						}
						if (iLocal_268 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_85 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_268 = 0;
						}
						if (iLocal_52 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_49))
							{
								uLocal_49 = func_102(Local_91, 1);
							}
							if (iLocal_266 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									func_120("GOD_2", 7500, 1);
									iLocal_266 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_49))
						{
							HUD::REMOVE_BLIP(&uLocal_49);
						}
						if (iLocal_268 == 0)
						{
							HUD::CLEAR_PRINTS();
							func_120("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_85 = MISC::GET_GAME_TIMER();
							iLocal_268 = 1;
							iLocal_345 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_48))
				{
					HUD::REMOVE_BLIP(&uLocal_48);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_49))
				{
					HUD::REMOVE_BLIP(&uLocal_49);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_51))
					{
						uLocal_51 = func_118(iLocal_31, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_51, 1);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_293 == 0)
						{
							func_120("GOD_6", 7500, -1);
							iLocal_84 = MISC::GET_GAME_TIMER();
							iLocal_293 = 1;
						}
						if (!func_121("HELP_1"))
						{
							func_117("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_51))
			{
				HUD::REMOVE_BLIP(&uLocal_51);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_49))
			{
				HUD::REMOVE_BLIP(&uLocal_49);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_48))
				{
					uLocal_48 = func_118(iLocal_32, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_48, 1);
				}
			}
			if (iLocal_269 == 0)
			{
				HUD::CLEAR_PRINTS();
				func_120("GOD_5", 7500, -1);
				iLocal_269 = 1;
			}
		}
	}
}

void func_117(char* sParam0)//Position - 0x7683
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_118(int iParam0, bool bParam1, bool bParam2)//Position - 0x7699
{
	return func_119(iParam0, !bParam1, bParam2);
}

int func_119(int iParam0, bool bParam1, bool bParam2)//Position - 0x76AC
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_120(char* sParam0, int iParam1, int iParam2)//Position - 0x7750
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_121(char* sParam0)//Position - 0x7769
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_122()//Position - 0x777C
{
	if (iLocal_52 > 1)
	{
		func_116();
	}
	if (iLocal_52 == 0)
	{
		if (iLocal_265 == 1)
		{
			func_34();
			iLocal_265 = 0;
		}
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302[0] = 0;
		iLocal_302[1] = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_317 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327[0] = 0;
		iLocal_327[1] = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_335 = 0;
		iLocal_338 = 0;
		iLocal_339[0] = 0;
		iLocal_340[0] = 0;
		iLocal_339[1] = 0;
		iLocal_340[1] = 0;
		iLocal_342 = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_358 = 0;
		iLocal_269 = 0;
		iLocal_270 = 0;
		iLocal_275 = 0;
		iLocal_285 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_311 = 0;
		iLocal_341 = 0;
		iLocal_359 = 0;
		iLocal_361 = 0;
		iLocal_334 = 0;
		iLocal_84 = 0;
		iLocal_85 = 0;
		iLocal_53 = 0;
		while (iLocal_53 <= 6)
		{
			iLocal_267[iLocal_53] = 0;
			iLocal_281[iLocal_53] = 0;
			iLocal_283[iLocal_53] = 0;
			iLocal_284[iLocal_53] = 0;
			iLocal_282[iLocal_53] = 0;
			iLocal_53++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_48))
			{
				uLocal_48 = func_118(iLocal_32, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_48, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				func_27(iLocal_33, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_33);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_294 = 1;
		iLocal_52 = 1;
	}
	if (iLocal_52 == 1)
	{
		if (iLocal_341 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				func_120("GOD_1", 7500, 1);
				iLocal_341 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(uLocal_48))
				{
					HUD::REMOVE_BLIP(&uLocal_48);
				}
				func_123(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_52 = 2;
			}
		}
	}
	if (iLocal_52 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
				{
					if (func_121("HELP_1"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_48))
					{
						HUD::REMOVE_BLIP(&uLocal_48);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_51))
					{
						HUD::REMOVE_BLIP(&uLocal_51);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_92, Local_95, 1) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_270 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_85 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_270 = 0;
								}
							}
							if (iLocal_311 == 0)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
								func_120("GOD_7", 7500, -1);
								iLocal_311 = 1;
							}
						}
						else if (iLocal_270 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_85 = MISC::GET_GAME_TIMER();
							func_120("GOD_4", 7500, -1);
							iLocal_270 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_52 = 0;
						iLocal_27 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_48))
					{
						HUD::REMOVE_BLIP(&uLocal_48);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_51))
						{
							uLocal_51 = func_118(iLocal_31, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(uLocal_51, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_293 == 0)
							{
								func_120("GOD_6", 7500, -1);
								iLocal_293 = 1;
							}
							if (!func_121("HELP_1"))
							{
								func_117("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_51))
				{
					HUD::REMOVE_BLIP(&uLocal_51);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_48))
					{
						uLocal_48 = func_118(iLocal_32, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_48, true);
					}
				}
				if (iLocal_269 == 0)
				{
					HUD::CLEAR_PRINTS();
					func_120("GOD_5", 7500, -1);
					iLocal_269 = 1;
				}
			}
		}
	}
}

void func_123(int iParam0, bool bParam1)//Position - 0x7C18
{
	int iVar0;
	
	Global_D5E8 = iParam0;
	if (!Global_D5E6)
	{
		Global_D5E6 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] == iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_124()//Position - 0x7C62
{
	if (iLocal_52 == 0)
	{
		if (iLocal_265 == 1)
		{
			func_34();
			iLocal_265 = 0;
		}
		func_147();
		func_91();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15350[3], 0))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_15350[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[3], 1, 1);
					func_126(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_15350[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_15350[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_15350[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_15350[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[3], 1, 1);
					func_126(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_125(79);
		iLocal_294 = 1;
		iLocal_52 = 1;
	}
	if (iLocal_52 == 1)
	{
		iLocal_52 = 0;
		iLocal_27 = 3;
	}
}

void func_125(int iParam0)//Position - 0x7D8F
{
	if (Global_154F9 != -1)
	{
		if (iParam0 == Global_154F9)
		{
			Global_154FD = 1;
			return;
		}
	}
}

void func_126(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x7DB3
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_164D7.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_164D7.f_4, 0))
		{
			if (func_146(24) != Global_164D7.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_143(ENTITY::GET_ENTITY_COORDS(Global_164D7.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_127(Global_164D7.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_127(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)//Position - 0x7E2E
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[25], 0))
			{
				if (Global_10642.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_142(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_40(iParam0, &Var0);
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_10A06 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_140(iParam3, Var0, Param1, uParam2, func_56(iParam0));
		func_128(iParam3, iParam0, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x7F59
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_66(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_10642.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_109CD != -1 && Global_109CD != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_17C49.f_47C3.f_1099 = func_129();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_146(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

var func_129()//Position - 0x8079
{
	var uVar0;
	
	func_139(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_138(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_137(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_132(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_131(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_130(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_130(var uParam0, int iParam1)//Position - 0x80BF
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_131(var uParam0, int iParam1)//Position - 0x8145
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_132(var uParam0, int iParam1)//Position - 0x8178
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_133(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_133(int iParam0, int iParam1)//Position - 0x81C9
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_134(var uParam0)//Position - 0x826B
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_135(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)//Position - 0x8290
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(var uParam0)//Position - 0x82A7
{
	return uParam0 & 15;
}

void func_137(var uParam0, int iParam1)//Position - 0x82B4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_138(var uParam0, int iParam1)//Position - 0x82EE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_139(var uParam0, int iParam1)//Position - 0x8329
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_140(int iParam0, struct<54> Param1, struct<3> Param2, var uParam3, int iParam4)//Position - 0x8365
{
	if (func_66(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_141(iParam0);
			func_63(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
			if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 11))
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { Param2 };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = uParam3;
			}
			else
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_141(int iParam0)//Position - 0x8467
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

void func_142(int iParam0)//Position - 0x84E1
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_141(iParam0);
	func_59(iParam0, 0);
}

int func_143(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x8508
{
	int iVar0;
	
	iVar0 = func_144(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_144(struct<3> Param0, int iParam1, int iParam2)//Position - 0x861E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_14D9D[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_14D9D[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_145(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_14D9D[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_145(int iParam0)//Position - 0x86AD
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_146(int iParam0)//Position - 0x86C5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

void func_147()//Position - 0x86E1
{
	Global_14A41 = 1;
}

void func_148()//Position - 0x86EE
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	uLocal_43 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_44 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_45 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_46 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_41 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_42 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_14A40 == 1)
		{
			func_150(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_359 = 1;
			iLocal_265 = 1;
			iLocal_52 = 0;
			iLocal_27 = 5;
		}
		else if (func_149() == 0)
		{
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_150(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_150(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_265 = 1;
			iLocal_359 = 1;
			iLocal_52 = 0;
			iLocal_27 = 3;
		}
	}
	else if (func_185(0))
	{
		iLocal_265 = 1;
		iLocal_359 = 1;
		iLocal_52 = 0;
		iLocal_27 = 3;
	}
	else
	{
		iLocal_52 = 0;
		iLocal_27 = 2;
	}
}

int func_149()//Position - 0x88B5
{
	if (!Global_15F6A == 10 && !Global_15F6A == 9)
	{
		return 0;
	}
	return Global_15F6A.f_2;
}

void func_150(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x88DF
{
	if (func_29())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_15F66 = { Param0 };
		Global_15F69 = fParam1;
		Global_15F65 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 24);
		}
		func_28(1);
	}
}

void func_151()//Position - 0x8974
{
	if (!func_29())
	{
		iLocal_27 = 1;
	}
	else
	{
		iLocal_27 = 1;
	}
}

void func_152()//Position - 0x898D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_39 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_39, 324, 1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		if (!PED::IS_PED_INJURED(iLocal_39))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_336 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_39))
					{
						TASK::CLEAR_PED_TASKS(iLocal_39);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_39);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_39, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_39, 1);
					iLocal_88 = MISC::GET_GAME_TIMER();
					iLocal_336 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_88 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_39))
					{
						iLocal_336 = 0;
					}
				}
			}
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_39, 1) < 20f)
			{
				if (iLocal_315 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_39, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_315 = 1;
				}
			}
			else if (iLocal_315 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_39, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_315 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_337 == 0)
		{
			iLocal_89 = 498972213;
			iLocal_90 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_89, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_337 = 1;
		}
		if (iLocal_337 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (Local_92.x > 35f)
				{
					if (fLocal_96 < 1f)
					{
						fLocal_96 = (fLocal_96 + 0.02f);
					}
					else
					{
						fLocal_96 = 1f;
					}
					if (fLocal_96 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						iLocal_316 = 0;
					}
				}
				if (Local_92.x < 35f)
				{
					if (fLocal_96 > 0f)
					{
						fLocal_96 = (fLocal_96 - 0.02f);
					}
					else
					{
						fLocal_96 = 0f;
					}
					if (fLocal_96 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						iLocal_316 = 0;
					}
				}
			}
			else if (iLocal_316 == 0)
			{
				if (Local_92.x < 35f)
				{
					if (fLocal_96 > 0f)
					{
						fLocal_96 = (fLocal_96 - 0.02f);
					}
					else
					{
						fLocal_96 = 0f;
					}
					if (fLocal_96 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_96, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						iLocal_316 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				if (!PED::IS_PED_INJURED(iLocal_39))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_313 == 0)
						{
							if (iLocal_312 == 0)
							{
								func_115(&uLocal_98, 4, iLocal_39, "FHPBSecGuard", 0, 1);
								if (func_153(&uLocal_98, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_312 = 1;
								}
							}
						}
						else if (iLocal_314 == 0)
						{
							func_115(&uLocal_98, 4, iLocal_39, "FHPBSecGuard", 0, 1);
							if (func_153(&uLocal_98, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_314 = 1;
							}
						}
					}
					else if (iLocal_313 == 0)
					{
						func_115(&uLocal_98, 4, iLocal_39, "FHPBSecGuard", 0, 1);
						if (func_153(&uLocal_98, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_313 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_153(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8D61
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0;
	return func_106(sParam2, iParam3, 0);
}

float func_154(int iParam0, int iParam1, int iParam2)//Position - 0x8DAF
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

void func_155()//Position - 0x8E0B
{
	int iVar0;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_159() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_27 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_30 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_28 == 1)
						{
							if (iLocal_290 == 0)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_87 = MISC::GET_GAME_TIMER();
										iLocal_290 = 1;
									}
								}
							}
						}
						if (iLocal_28 == 1)
						{
							if (iLocal_290 == 1 && MISC::GET_GAME_TIMER() > iLocal_87 + 7000)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_87 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_28 == 2)
					{
						if (iLocal_324 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_78 = MISC::GET_GAME_TIMER();
									iLocal_324 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_30 == 2 && iLocal_28 == 1)
				{
					if (iLocal_335 == 0)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_83 = MISC::GET_GAME_TIMER();
								iLocal_335 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_83 + 8000)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_83 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_289 == 0)
					{
						func_97();
						if (func_157())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_153(&uLocal_98, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_60 = MISC::GET_GAME_TIMER();
									iLocal_285 = 1;
									iLocal_289 = 1;
								}
							}
							else
							{
								iLocal_60 = MISC::GET_GAME_TIMER();
								iLocal_285 = 1;
								iLocal_289 = 1;
							}
						}
					}
					if (iLocal_289 == 1)
					{
						if (iLocal_285 == 0)
						{
							iLocal_60 = MISC::GET_GAME_TIMER();
							iLocal_285 = 1;
						}
						if (iLocal_285 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_60 + 9000)
							{
								if (func_157())
								{
									if (func_153(&uLocal_98, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_285 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (iLocal_321 == 1)
					{
						if (iLocal_287 == 0)
						{
							if (iLocal_288 == 1)
							{
								if (func_157())
								{
									if (func_153(&uLocal_98, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_287 = 1;
									}
								}
							}
						}
					}
					if (iLocal_286 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_98, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_61 = MISC::GET_GAME_TIMER();
											iLocal_287 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_61 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_98, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_61 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_322 == 1)
					{
						if (iLocal_323 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_98, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_323 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_156()//Position - 0x9149
{
	if (func_14() == 0)
	{
		func_115(&uLocal_98, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_115(&uLocal_98, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_115(&uLocal_98, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x91A9
{
	int iVar0;
	
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_56]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_56]))
			{
				iVar0 = func_158(PLAYER::PLAYER_PED_ID(), iLocal_263, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_34[iLocal_56] && func_154(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					func_115(&uLocal_98, 5, iLocal_34[iLocal_56], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_56++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x923B
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_159()//Position - 0x9342
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x9364
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_167();
	if (iLocal_302[0])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_327[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_35[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_327[0] = 1;
			}
			if (iLocal_327[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], 150319005) != 1)
				{
					iLocal_327[0] = 0;
				}
			}
		}
		else if (iLocal_327[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_35[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_327[0] = 0;
		}
	}
	if (iLocal_302[1])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_327[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_35[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_327[1] = 1;
			}
			if (iLocal_327[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], 150319005) != 1)
				{
					iLocal_327[1] = 0;
				}
			}
		}
		else if (iLocal_327[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_35[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_327[1] = 0;
		}
	}
	if (iLocal_302[0] && iLocal_302[1])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1))
		{
			iLocal_297 = 1;
			iLocal_298 = 0;
		}
		else
		{
			iLocal_297 = 0;
			iLocal_298 = 1;
		}
	}
	else
	{
		if (iLocal_302[0] && !iLocal_302[1])
		{
			iLocal_297 = 1;
			iLocal_298 = 0;
		}
		if (iLocal_302[1] && !iLocal_302[0])
		{
			iLocal_297 = 0;
			iLocal_298 = 1;
		}
	}
	switch (iLocal_30)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_35[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_82[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_35[0]))
									{
										if (iLocal_340[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_339[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_82[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_35[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_339[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_340[0] = 0;
											iLocal_339[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_35[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_82[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_35[1]))
									{
										if (iLocal_340[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_339[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_82[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_35[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_339[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_340[1] = 0;
											iLocal_339[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[0]))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
					{
						if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_333[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_81[0] = MISC::GET_GAME_TIMER();
											func_164(iLocal_35[0]);
											iLocal_333[0] = 1;
										}
									}
									if (iLocal_333[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_81[0] + 5000)
										{
											iLocal_333[0] = 0;
										}
									}
									if (iLocal_303[0] == 0 && iLocal_303[1] == 0)
									{
										if (iLocal_301 == 0)
										{
											func_162(iLocal_35[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_65 = MISC::GET_GAME_TIMER();
											iLocal_301 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_65 + 15000)
										{
											func_162(iLocal_35[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_65 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_303[0] == 1)
										{
											if (iLocal_304 == 0)
											{
												func_162(iLocal_35[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_71 = MISC::GET_GAME_TIMER();
												iLocal_304 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_71 + 15000)
											{
												func_162(iLocal_35[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_71 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_303[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_162(iLocal_35[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_162(iLocal_35[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[1]))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 15f)
					{
						if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_333[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_81[1] = MISC::GET_GAME_TIMER();
											func_164(iLocal_35[1]);
											iLocal_333[1] = 1;
										}
									}
									if (iLocal_333[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_81[1] + 5000)
										{
											iLocal_333[1] = 0;
										}
									}
									if (iLocal_303[0] == 0 && iLocal_303[1] == 0)
									{
										if (iLocal_301 == 0)
										{
											func_162(iLocal_35[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_65 = MISC::GET_GAME_TIMER();
											iLocal_301 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_65 + 15000)
										{
											func_162(iLocal_35[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_65 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_303[1] == 1)
										{
											if (iLocal_304 == 0)
											{
												func_162(iLocal_35[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_71 = MISC::GET_GAME_TIMER();
												iLocal_304 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_71 + 15000)
											{
												func_162(iLocal_35[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_71 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_303[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_162(iLocal_35[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_162(iLocal_35[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_359 == 0)
			{
				iLocal_359 = 1;
			}
			if (func_161() || iLocal_296 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_35[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_80[0] = MISC::GET_GAME_TIMER();
							iLocal_331[0] = 1;
							if (iLocal_330[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[0], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_35[0]);
								iLocal_330[0] = 1;
							}
						}
						else if (iLocal_332[0] == 0)
						{
							if (iLocal_331[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_35[0]);
								iLocal_332[0] = 1;
							}
							if (iLocal_331[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_80[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_35[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_35[0]);
									iLocal_332[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_35[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_80[1] = MISC::GET_GAME_TIMER();
							iLocal_331[1] = 1;
							if (iLocal_330[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[1], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_35[1]);
								iLocal_330[1] = 1;
							}
						}
						else if (iLocal_332[1] == 0)
						{
							if (iLocal_331[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_35[1]);
								iLocal_332[1] = 1;
							}
							if (iLocal_331[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_80[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_35[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_35[1]);
									iLocal_332[1] = 1;
								}
							}
						}
					}
				}
				if (func_161())
				{
					if (iLocal_306 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_306 = 1;
						}
					}
					if (iLocal_297 == 1)
					{
						if (iLocal_299 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
								{
									func_162(iLocal_35[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_70 = MISC::GET_GAME_TIMER();
									iLocal_299 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
								{
									func_162(iLocal_35[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_70 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_299 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
								{
									func_162(iLocal_35[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_70 = MISC::GET_GAME_TIMER();
									iLocal_299 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
								{
									func_162(iLocal_35[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_70 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_338 == 0)
					{
						iLocal_40 = func_158(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_40 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
							{
								if (!PED::IS_PED_INJURED(iLocal_40))
								{
									if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_40, 1) < 35f)
									{
										iLocal_338 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_338 == 0)
					{
						if (iLocal_297 == 1)
						{
							if (iLocal_300 == 0)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
									{
										func_162(iLocal_35[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_69 = MISC::GET_GAME_TIMER();
										iLocal_300 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_69 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
									{
										func_162(iLocal_35[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_69 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_298 == 1)
						{
							if (iLocal_300 == 0)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
									{
										func_162(iLocal_35[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_69 = MISC::GET_GAME_TIMER();
										iLocal_300 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_69 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
									{
										func_162(iLocal_35[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_69 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_161())
			{
				if (iLocal_308 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_64 = MISC::GET_GAME_TIMER();
									iLocal_308 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_64 = MISC::GET_GAME_TIMER();
									iLocal_308 = 1;
								}
							}
						}
					}
				}
				if (iLocal_296 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[0]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_328[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_35[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_35[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_35[0]);
										iLocal_328[0] = 1;
									}
									iLocal_79[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_79[0] + 500)
								{
									if (iLocal_329[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_35[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_35[0]);
										iLocal_329[0] = 1;
									}
								}
							}
							else if (iLocal_360[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_47, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_35[0], uLocal_47);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
								func_164(iLocal_35[0]);
								iLocal_360[0] = 1;
							}
							if (iLocal_334 == 0)
							{
								if (iLocal_325 == 0 || iLocal_301 == 1)
								{
									if (iLocal_295 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
											{
												func_162(iLocal_35[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_66 = MISC::GET_GAME_TIMER();
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_64 = MISC::GET_GAME_TIMER();
												iLocal_308 = 1;
												iLocal_295 = 1;
												iLocal_303[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_66 + 7000)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
											{
												func_162(iLocal_35[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_66 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_301 == 0)
								{
									if (iLocal_326 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
											{
												func_162(iLocal_35[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_295 = 1;
												iLocal_326 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_67 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[0]))
									{
										func_162(iLocal_35[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_67 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[1]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_328[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_35[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_35[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_35[1]);
										iLocal_328[1] = 1;
									}
									iLocal_79[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_79[1] + 500)
								{
									if (iLocal_329[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_35[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_35[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_35[1]);
										iLocal_329[1] = 1;
									}
								}
							}
							else if (iLocal_360[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_47, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_35[1], uLocal_47);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
								func_164(iLocal_35[1]);
								iLocal_360[1] = 1;
							}
							if (iLocal_334 == 0)
							{
								if (iLocal_325 == 0 || iLocal_301 == 1)
								{
									if (iLocal_295 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
											{
												func_162(iLocal_35[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_66 = MISC::GET_GAME_TIMER();
												iLocal_68 = MISC::GET_GAME_TIMER();
												iLocal_64 = MISC::GET_GAME_TIMER();
												iLocal_308 = 1;
												iLocal_295 = 1;
												iLocal_303[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_66 + 7000)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
											{
												func_162(iLocal_35[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_66 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_301 == 0)
								{
									if (iLocal_326 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
											{
												func_162(iLocal_35[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_295 = 1;
												iLocal_326 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_68 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_35[1]))
									{
										func_162(iLocal_35[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_68 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_308 == 1)
					{
						if (iLocal_334 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_64 + 22000)
							{
								iLocal_334 = 1;
							}
						}
					}
					if (iLocal_308 == 1)
					{
						if (iLocal_296 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_64 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								iLocal_296 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_296 = 1;
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_296 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_296 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_296 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_161()//Position - 0xAA2C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_63 = 0;
		while (iLocal_63 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_63]))
			{
				if (!PED::IS_PED_INJURED(iLocal_34[iLocal_63]))
				{
					if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_63], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_63++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[0]))
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[1]))
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_162(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xAB32
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_163(iParam3), 0);
}

int func_163(int iParam0)//Position - 0xAB4B
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

void func_164(int iParam0)//Position - 0xAD40
{
	if (iParam0 == iLocal_35[0])
	{
		iLocal_327[0] = 0;
		iLocal_339[0] = 0;
		iLocal_340[0] = 0;
		iLocal_333[0] = 0;
		iLocal_330[0] = 0;
		iLocal_332[0] = 0;
		iLocal_328[0] = 0;
		iLocal_329[0] = 0;
		iLocal_360[0] = 0;
	}
	if (iParam0 == iLocal_35[1])
	{
		iLocal_327[1] = 0;
		iLocal_339[1] = 0;
		iLocal_340[1] = 0;
		iLocal_333[1] = 0;
		iLocal_330[1] = 0;
		iLocal_332[1] = 0;
		iLocal_328[1] = 0;
		iLocal_329[1] = 0;
		iLocal_360[1] = 0;
	}
}

int func_165(int iParam0)//Position - 0xADDA
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

int func_166(int iParam0)//Position - 0xAE34
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_167()//Position - 0xAE48
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_92 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_35[0]))
		{
			Local_94[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_35[0], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_35[1]))
		{
			Local_94[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_35[1], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_35[0]))
		{
			iLocal_302[0] = 1;
		}
		else
		{
			iLocal_302[0] = 0;
		}
	}
	else
	{
		iLocal_302[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_35[1]))
		{
			iLocal_302[1] = 1;
		}
		else
		{
			iLocal_302[1] = 0;
		}
	}
	else
	{
		iLocal_302[1] = 0;
	}
	if (iLocal_30 != 0)
	{
		if (iLocal_30 == 1)
		{
			if (iLocal_302[0] == 1)
			{
				if (iLocal_302[1] == 1)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1))
					{
						if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
						{
							if (((Local_92.x < Local_94[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_30 = 0;
								iLocal_339[0] = 0;
								iLocal_340[0] = 0;
								iLocal_339[1] = 0;
								iLocal_340[1] = 0;
								iLocal_82[0] = MISC::GET_GAME_TIMER();
								iLocal_82[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_92.x < Local_94[0 /*3*/])
						{
							iLocal_30 = 0;
							iLocal_339[0] = 0;
							iLocal_340[0] = 0;
							iLocal_339[1] = 0;
							iLocal_340[1] = 0;
							iLocal_82[0] = MISC::GET_GAME_TIMER();
							iLocal_82[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 15f)
					{
						if ((Local_92.x > Local_94[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_339[0] = 0;
							iLocal_340[0] = 0;
							iLocal_339[1] = 0;
							iLocal_340[1] = 0;
							iLocal_82[0] = MISC::GET_GAME_TIMER();
							iLocal_82[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_92.x > Local_94[1 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_339[0] = 0;
						iLocal_340[0] = 0;
						iLocal_339[1] = 0;
						iLocal_340[1] = 0;
						iLocal_82[0] = MISC::GET_GAME_TIMER();
						iLocal_82[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 15f)
					{
						if ((Local_92.x < Local_94[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_339[0] = 0;
							iLocal_340[0] = 0;
							iLocal_339[1] = 0;
							iLocal_340[1] = 0;
							iLocal_82[0] = MISC::GET_GAME_TIMER();
							iLocal_82[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_92.x < Local_94[0 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_339[0] = 0;
						iLocal_340[0] = 0;
						iLocal_339[1] = 0;
						iLocal_340[1] = 0;
						iLocal_82[0] = MISC::GET_GAME_TIMER();
						iLocal_82[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_302[1] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 15f)
				{
					if ((Local_92.x > Local_94[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_30 = 0;
						iLocal_339[0] = 0;
						iLocal_340[0] = 0;
						iLocal_339[1] = 0;
						iLocal_340[1] = 0;
						iLocal_82[0] = MISC::GET_GAME_TIMER();
						iLocal_82[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (Local_92.x > Local_94[1 /*3*/])
				{
					iLocal_30 = 0;
					iLocal_339[0] = 0;
					iLocal_340[0] = 0;
					iLocal_339[1] = 0;
					iLocal_340[1] = 0;
					iLocal_82[0] = MISC::GET_GAME_TIMER();
					iLocal_82[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_30 == 2)
		{
			if (iLocal_296 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_92.x > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_35[1]))
					{
						if (Local_92.x > Local_94[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 90f))
							{
								iLocal_30 = 0;
								iLocal_339[0] = 0;
								iLocal_340[0] = 0;
								iLocal_339[1] = 0;
								iLocal_340[1] = 0;
								iLocal_82[0] = MISC::GET_GAME_TIMER();
								iLocal_82[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_92.x > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 90f))
						{
							iLocal_30 = 0;
							iLocal_339[0] = 0;
							iLocal_340[0] = 0;
							iLocal_339[1] = 0;
							iLocal_340[1] = 0;
							iLocal_82[0] = MISC::GET_GAME_TIMER();
							iLocal_82[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_92.x < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_35[0]))
					{
						if (Local_92.x < Local_94[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 90f))
							{
								iLocal_30 = 0;
								iLocal_339[0] = 0;
								iLocal_340[0] = 0;
								iLocal_339[1] = 0;
								iLocal_340[1] = 0;
								iLocal_82[0] = MISC::GET_GAME_TIMER();
								iLocal_82[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_92.x < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 90f))
						{
							iLocal_30 = 0;
							iLocal_339[0] = 0;
							iLocal_340[0] = 0;
							iLocal_339[1] = 0;
							iLocal_340[1] = 0;
							iLocal_82[0] = MISC::GET_GAME_TIMER();
							iLocal_82[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 1)
	{
		if (iLocal_30 != 2)
		{
			if (iLocal_302[0] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
				{
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_92.x > Local_94[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 90f))
							{
								iLocal_30 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_30 = 1;
						}
					}
				}
			}
			if (iLocal_302[1] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 15f)
				{
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_92.x < Local_94[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 90f))
							{
								iLocal_30 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_30 = 2;
			iLocal_296 = 1;
		}
		if (iLocal_358 == 1)
		{
			iLocal_30 = 2;
			iLocal_296 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_296 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_296 = 1;
					}
				}
			}
		}
		if (iLocal_325 == 0)
		{
			if (iLocal_324 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_78 + 4000)
				{
					iLocal_77 = 0;
					while (iLocal_77 <= 6)
					{
						if (func_159())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_77]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[iLocal_77]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_34[iLocal_77]))
									{
										iLocal_30 = 2;
										iLocal_325 = 1;
									}
								}
							}
						}
						iLocal_77++;
					}
				}
			}
		}
		if ((iLocal_28 == 4 || iLocal_28 == 3) || iLocal_324 == 1)
		{
			iLocal_30 = 2;
			iLocal_321 = 1;
			iLocal_296 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_302[0] == 1)
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_302[1] == 1)
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_92, Local_95, 1) < 36f)
		{
			if (iLocal_302[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_30 = 2;
				}
				if (func_154(iLocal_35[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_302[1] == 1)
			{
				if (Local_92.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
					if (func_154(iLocal_35[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[1]))
						{
							iLocal_30 = 2;
						}
					}
				}
			}
		}
		if (iLocal_302[0] == 1)
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[0], 1) < 20f)
			{
				if (Local_92.x > Local_94[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (iLocal_302[1] == 1)
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_35[1], 1) < 20f)
			{
				if (Local_92.x < Local_94[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[1]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
	}
}

void func_168()//Position - 0xBA3D
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_54]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_54]))
			{
				if (iLocal_277[iLocal_54] == 0)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_54], 1) > 20f)
					{
						iLocal_277[iLocal_54] = 1;
					}
				}
				if (iLocal_277[iLocal_54] == 1)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_54], 1) < 20f)
					{
						iLocal_277[iLocal_54] = 0;
					}
				}
			}
			else if (iLocal_277[iLocal_54] == 0)
			{
				iLocal_277[iLocal_54] = 1;
			}
		}
		else if (iLocal_277[iLocal_54] == 0)
		{
			iLocal_277[iLocal_54] = 1;
		}
		iLocal_54++;
	}
	if (((((iLocal_277[0] == 1 && iLocal_277[1] == 1) && iLocal_277[2] == 1) && iLocal_277[3] == 1) && iLocal_277[4] == 1) && iLocal_277[5] == 1)
	{
		iLocal_278 = 1;
	}
	else
	{
		iLocal_278 = 0;
	}
	iLocal_53 = 0;
	while (iLocal_53 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_53]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_53]))
			{
				func_173(iLocal_34[iLocal_53]);
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_30 == 2 && iLocal_28 == 0)
					{
						func_172(1);
						if (iLocal_310 == 1)
						{
							func_97();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_34[iLocal_53], 18))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_310 == 1)
							{
								func_170();
							}
							iLocal_358 = 1;
						}
					}
					if (iLocal_28 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_172(4);
							if (iLocal_310 == 1)
							{
								func_170();
							}
						}
					}
					if ((((((((func_169(iLocal_34[iLocal_53], iLocal_34[0]) || func_169(iLocal_34[iLocal_53], iLocal_34[1])) || func_169(iLocal_34[iLocal_53], iLocal_34[2])) || func_169(iLocal_34[iLocal_53], iLocal_34[3])) || func_169(iLocal_34[iLocal_53], iLocal_34[4])) || func_169(iLocal_34[iLocal_53], iLocal_34[5])) || func_169(iLocal_34[iLocal_53], iLocal_34[6])) || func_169(iLocal_34[iLocal_53], iLocal_35[0])) || func_169(iLocal_34[iLocal_53], iLocal_35[1]))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_310 == 1)
							{
								func_170();
							}
							iLocal_358 = 1;
						}
					}
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || func_165(0))
					{
						if (iLocal_296 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) > 20f)
							{
								if (iLocal_276[iLocal_53] == 1)
								{
									iLocal_276[iLocal_53] = 0;
								}
								if (((((iLocal_278 == 1 && iLocal_28 != 0) && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4) && iLocal_30 != 2)
								{
									func_172(0);
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
								{
									if (iLocal_325 == 0 && iLocal_296 == 0)
									{
										func_172(1);
										if (iLocal_310 == 1)
										{
											func_97();
										}
									}
									else
									{
										func_172(3);
										if (iLocal_310 == 1)
										{
											func_170();
										}
									}
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_276[iLocal_53] == 0)
								{
									iLocal_59[iLocal_53] = MISC::GET_GAME_TIMER();
									iLocal_276[iLocal_53] = 1;
								}
								if (iLocal_276[iLocal_53] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_59[iLocal_53] + 24000)
									{
										if ((iLocal_28 != 2 && iLocal_28 != 3) && iLocal_28 != 4)
										{
											func_172(2);
											if (iLocal_310 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (iLocal_296 == 1)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_28 != 3 && iLocal_28 != 4)
								{
									func_172(3);
									if (iLocal_310 == 1)
									{
										func_170();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_307 == 0)
							{
								iLocal_73 = MISC::GET_GAME_TIMER();
								iLocal_307 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_73 + 3000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_28 != 3 && iLocal_28 != 4)
									{
										func_172(3);
										if (iLocal_310 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
						else if (iLocal_307 == 1)
						{
							iLocal_307 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_288 = 1;
											func_172(3);
											if (iLocal_310 == 1)
											{
												func_170();
											}
										}
									}
								}
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_288 = 1;
											func_172(3);
											if (iLocal_310 == 1)
											{
												func_170();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_34[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_28 != 3 && iLocal_28 != 4)
													{
														iLocal_288 = 1;
														func_172(3);
														if (iLocal_310 == 1)
														{
															func_170();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[6]))
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[6], PLAYER::PLAYER_PED_ID()))
										{
											if (Local_92.f_2 > 31f)
											{
												if (iLocal_28 != 3 && iLocal_28 != 4)
												{
													iLocal_322 = 1;
													func_172(3);
													if (iLocal_310 == 1)
													{
														func_170();
													}
												}
											}
											else if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
											{
												func_172(1);
												if (iLocal_310 == 1)
												{
													func_97();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_275 == 0)
						{
							iLocal_58 = MISC::GET_GAME_TIMER();
							iLocal_275 = 1;
						}
						if (iLocal_275 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_58 + 4000 || iLocal_28 == 3)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 4)
										{
											func_172(4);
											if (iLocal_310 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_53], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_53], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[iLocal_53]))
								{
									if (iLocal_28 != 4)
									{
										func_172(4);
										if (iLocal_310 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_53++;
	}
}

int func_169(int iParam0, int iParam1)//Position - 0xC2A1
{
	if (((func_154(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_170()//Position - 0xC2E9
{
	Global_38DE = 0;
	func_171();
}

void func_171()//Position - 0xC2F9
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_172(int iParam0)//Position - 0xC31A
{
	iLocal_28 = iParam0;
	iLocal_57 = 0;
}

void func_173(int iParam0)//Position - 0xC329
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (iParam0 == iLocal_34[iLocal_55])
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_279[iLocal_55] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_279[iLocal_55] = 1;
				}
			}
			else if (iLocal_279[iLocal_55] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_279[iLocal_55] = 0;
			}
		}
		iLocal_55++;
	}
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_57 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				if (iParam0 == iLocal_34[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_57++;
			}
			if (iLocal_57 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_34[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[5]))
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_92.f_1 > -1573f)
									{
										if (iLocal_310 == 0)
										{
											func_115(&uLocal_98, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
											func_115(&uLocal_98, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
											if (!func_159())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_153(&uLocal_98, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_310 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_317 == 0)
									{
										iLocal_75 = MISC::GET_GAME_TIMER();
										iLocal_317 = 1;
									}
									if (iLocal_317 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_75 + 4000)
										{
											if (iLocal_310 == 0)
											{
												func_115(&uLocal_98, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
												func_115(&uLocal_98, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
												if (!func_159())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_153(&uLocal_98, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_310 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_310 == 1 && !func_159())
								{
									if (iLocal_309 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_309 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (iLocal_318 == 0)
					{
						if (iLocal_319 == 0)
						{
							iLocal_76 = MISC::GET_GAME_TIMER();
							iLocal_319 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_76 + 30000)
						{
							if (iLocal_318 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_318 = 1;
									iLocal_319 = 0;
								}
							}
						}
					}
					if (iLocal_318 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 15f && Local_92.f_2 < 40f)
							{
								if (iLocal_320 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_320 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_57 == 0)
			{
				iLocal_55 = 0;
				while (iLocal_55 <= 6)
				{
					if (iLocal_30 == 0)
					{
						if (iParam0 == iLocal_34[iLocal_55])
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_280[iLocal_55] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_47);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
										iLocal_279[iLocal_55] = 0;
										iLocal_280[iLocal_55] = 1;
									}
								}
								if (iLocal_280[iLocal_55] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_280[iLocal_55] = 0;
									}
								}
							}
							else
							{
								if (iLocal_280[iLocal_55] == 1)
								{
									iLocal_280[iLocal_55] = 0;
								}
								if (iParam0 == iLocal_34[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_34[iLocal_55])
					{
						if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_280[iLocal_55] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_47);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_279[iLocal_55] = 0;
									iLocal_280[iLocal_55] = 1;
								}
							}
							if (iLocal_280[iLocal_55] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_280[iLocal_55] = 0;
								}
							}
						}
						else
						{
							if (iLocal_280[iLocal_55] == 1)
							{
								iLocal_280[iLocal_55] = 0;
							}
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_55++;
				}
			}
			break;
		
		case 2:
			if (iLocal_359 == 0)
			{
				iLocal_359 = 1;
			}
			if (iLocal_57 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_263, 1862763509);
				iLocal_57++;
			}
			if (iLocal_57 == 1)
			{
				iLocal_55 = 0;
				while (iLocal_55 <= 6)
				{
					if (iParam0 == iLocal_34[iLocal_55])
					{
						if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_47);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
									iLocal_279[iLocal_55] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_55++;
				}
			}
			break;
		
		case 3:
			if (iLocal_359 == 0)
			{
				iLocal_359 = 1;
			}
			if (iLocal_291 == 0)
			{
				if (iLocal_292 == 0)
				{
					iLocal_62 = MISC::GET_GAME_TIMER();
					iLocal_292 = 1;
				}
				if (iLocal_292 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_62 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_291 = 1;
					}
				}
			}
			if (iLocal_57 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_263, 1862763509);
				iLocal_57++;
			}
			if (iLocal_57 == 1)
			{
				if (iLocal_27 == 3)
				{
					iLocal_55 = 0;
					while (iLocal_55 <= 6)
					{
						if (iParam0 == iLocal_34[iLocal_55])
						{
							if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_281[iLocal_55] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_281[iLocal_55] = 1;
								}
								if (iLocal_282[iLocal_55] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_279[iLocal_55] = 0;
									iLocal_282[iLocal_55] = 1;
								}
							}
						}
						iLocal_55++;
					}
					if (iLocal_344 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) && ENTITY::IS_ENTITY_AT_COORD(iLocal_32, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_34[0], uLocal_47);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_47);
											iLocal_344 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_344 == 1 && iLocal_361 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_115(&uLocal_98, 3, iLocal_34[0], "FHPrepBWorker", 0, 1);
									func_162(iLocal_34[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_361 = 1;
								}
							}
						}
					}
					if (iLocal_343 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_62 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_34[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_86 = MISC::GET_GAME_TIMER();
									iLocal_343 = 1;
								}
							}
						}
					}
					else if (iLocal_342 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_86 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[5]);
									TASK::TASK_COMBAT_PED(iLocal_34[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_342 = 1;
								}
							}
						}
					}
				}
				iLocal_55 = 0;
				while (iLocal_55 <= 6)
				{
					if (iLocal_267[iLocal_55] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_55])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
									{
										if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											iLocal_267[iLocal_55] = 1;
										}
									}
									else if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										iLocal_267[iLocal_55] = 1;
									}
								}
							}
						}
					}
					iLocal_55++;
				}
			}
			if (iLocal_27 == 4)
			{
				iLocal_55 = 0;
				while (iLocal_55 <= 6)
				{
					if (iLocal_267[iLocal_55] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_55])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iParam0, 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_267[iLocal_55] = 1;
								}
							}
						}
					}
					iLocal_55++;
				}
			}
			break;
		
		case 4:
			if (iLocal_359 == 0)
			{
				iLocal_359 = 1;
			}
			if (iLocal_291 == 0)
			{
				if (iLocal_292 == 0)
				{
					iLocal_62 = MISC::GET_GAME_TIMER();
					iLocal_292 = 1;
				}
				if (iLocal_292 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_62 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_291 = 1;
					}
				}
			}
			if (iLocal_57 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_263, 1862763509);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				iLocal_57++;
			}
			if (iLocal_57 == 1)
			{
				iLocal_55 = 0;
				while (iLocal_55 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_55]))
					{
						if (!PED::IS_PED_INJURED(iLocal_34[iLocal_55]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_55], 1) < 15f)
							{
								if (func_174(iLocal_34[iLocal_55], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_55], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_284[iLocal_55] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_55]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_55]);
											}
											TASK::TASK_HANDS_UP(iLocal_34[iLocal_55], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_284[iLocal_55] = 1;
											iLocal_283[iLocal_55] = 0;
											iLocal_279[iLocal_55] = 0;
											iLocal_74 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_74 + 300)
									{
										iLocal_283[iLocal_55] = 0;
									}
								}
								else if (iLocal_283[iLocal_55] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_55]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_55]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_55], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
									iLocal_283[iLocal_55] = 1;
									iLocal_284[iLocal_55] = 0;
								}
							}
							else if (iLocal_283[iLocal_55] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_55]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_55]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_55]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_55], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
								iLocal_283[iLocal_55] = 1;
								iLocal_284[iLocal_55] = 0;
							}
						}
					}
					iLocal_55++;
				}
			}
			break;
	}
}

int func_174(int iParam0, int iParam1)//Position - 0xDD19
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()//Position - 0xDD65
{
	iLocal_36 = func_25(0);
	iLocal_37 = func_25(1);
	iLocal_38 = func_25(2);
	if (func_33(iLocal_36, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_36))
		{
			if (!func_32(iLocal_36))
			{
				if (!func_177())
				{
					if (func_176(iLocal_36))
					{
						if (func_31(iLocal_36, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_36, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
							TASK::CLEAR_PED_TASKS(iLocal_36);
							iLocal_349 = 0;
							iLocal_352 = 0;
							iLocal_355 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_349 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_349 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_36, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_349 = 1;
						}
					}
				}
				if (iLocal_349 == 0)
				{
					if (func_177())
					{
						iLocal_349 = 1;
					}
				}
				if (iLocal_346 == 1)
				{
					if ((func_176(iLocal_36) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36, 1)) && iLocal_349 == 0)
					{
						Local_93 = { ENTITY::GET_ENTITY_COORDS(iLocal_36, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_352 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_355 = 0;
									iLocal_352 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_355 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_352 = 0;
								iLocal_355 = 1;
							}
						}
						else if (iLocal_352 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_355 = 0;
								iLocal_352 = 1;
							}
						}
					}
					else
					{
						iLocal_349 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if (func_24(iLocal_36))
					{
						iLocal_349 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_38, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_38))
		{
			if (!func_32(iLocal_38))
			{
				if (!func_177())
				{
					if (func_176(iLocal_38))
					{
						if (func_31(iLocal_38, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							TASK::CLEAR_PED_TASKS(iLocal_38);
							iLocal_351 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_351 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_38, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_177())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_176(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1)) && iLocal_351 == 0)
					{
						Local_93 = { ENTITY::GET_ENTITY_COORDS(iLocal_38, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_24(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_37, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_37))
		{
			if (!func_32(iLocal_37))
			{
				if (!func_177())
				{
					if (func_176(iLocal_37))
					{
						if (func_31(iLocal_37, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_37, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							TASK::CLEAR_PED_TASKS(iLocal_37);
							iLocal_350 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_350 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_37, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_177())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_176(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1)) && iLocal_350 == 0)
					{
						Local_93 = { ENTITY::GET_ENTITY_COORDS(iLocal_37, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_93, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_93.x, Local_93.f_1, Local_91.x, Local_91.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_91, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_24(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
}

int func_176(int iParam0)//Position - 0xE38E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_32, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_32, -1) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_32, Local_91, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_36)
							{
								iLocal_346 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_37)
							{
								iLocal_348 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_36)
	{
		iLocal_346 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_348 = 0;
	}
	return 0;
}

bool func_177()//Position - 0xE46E
{
	return Global_42C8;
}

void func_178()//Position - 0xE479
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			func_181(3);
			return;
		}
		else
		{
			if (func_180(&iLocal_32))
			{
				func_181(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					func_181(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_31) || func_179(iLocal_31)) || func_180(&iLocal_31))
						{
							func_181(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				if (func_154(iLocal_31, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_181(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		if (PED::IS_PED_INJURED(iLocal_39))
		{
			func_181(6);
			return;
		}
	}
}

int func_179(int iParam0)//Position - 0xE564
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
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

int func_180(var uParam0)//Position - 0xE5A6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_181(int iParam0)//Position - 0xE600
{
	iLocal_29 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_52 = 0;
	}
}

void func_182(int iParam0, int iParam1)//Position - 0xE618
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_3A[iParam0] = iParam1;
}

void func_183()//Position - 0xE65D
{
	if (iLocal_27 == 5)
	{
		if (iLocal_359 == 0)
		{
			func_184(657);
		}
	}
}

void func_184(int iParam0)//Position - 0xE679
{
	bool bVar0;
	int iVar1;
	
	Global_D5DF = 0;
	if (!Global_D6BF[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1051D)
	{
		if (Global_1051E[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_1051E[iVar1 /*9*/].f_1 = 1;
			Global_1051E[iVar1 /*9*/].f_2 = 0f;
			if (Global_1051E[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_185(bool bParam0)//Position - 0xE6EA
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_186()//Position - 0xE715
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), 0);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_41, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_42, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_43, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_44, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_45, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_46, 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_89))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_89);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_90))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_90);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_187()//Position - 0xE7D5
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_185(0))
	{
		if (!func_188())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_188()//Position - 0xE846
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

