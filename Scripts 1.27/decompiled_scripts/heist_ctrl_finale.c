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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 25;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	var uLocal_84 = 2;
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
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 4;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 4;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 4;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 4;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 4;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
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
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	struct<485> Local_153 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_35 = 202;
	iLocal_36 = 201;
	iLocal_37 = 24;
	iLocal_38 = 202;
	iLocal_39 = 25;
	sLocal_41 = "";
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_47 = -1;
	iLocal_48 = -1;
	iLocal_151 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_364();
	}
	func_363(2);
	func_351(&(Local_153.f_1), func_362(Global_1517C[8 /*19*/], Global_1517C[9 /*19*/]));
	func_350(&Local_153, 4);
	func_349(4, 0, 1);
	func_348(0);
	while (!func_347(3))
	{
		if (!Global_10BA2 && !func_346(14))
		{
			func_332(&Local_153, 10f, 18f);
			func_330(&Local_153);
			func_202();
			func_144();
			if (func_142(0) || MISC::IS_BIT_SET(Local_153.f_1C1, 2))
			{
				func_68(&Local_153);
				func_5(&Local_153);
				func_4(&Local_153);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2a")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2b")) > 0)
		{
			func_3();
		}
		if (func_347(34))
		{
			if (!func_2(0))
			{
				if (!MISC::IS_BIT_SET(Global_17C49.f_1.f_78[4], 9))
				{
					func_349(4, 9, 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_78[4], 9))
			{
				func_349(4, 9, 0);
			}
		}
		else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_78[4], 9))
		{
			func_349(4, 9, 0);
		}
		SYSTEM::WAIT(0);
	}
	func_1(2);
	func_364();
}

int func_1(int iParam0)//Position - 0x1D2
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_2(bool bParam0)//Position - 0x22C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_3()//Position - 0x257
{
	int iVar0;
	
	if (Global_10B99)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_1523B.f_8 = (Global_1523B.f_8 + iVar0);
}

void func_4(var uParam0)//Position - 0x299
{
	if (MISC::IS_BIT_SET(Global_15167, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 15);
			MISC::SET_BIT(&(uParam0->f_1C1), 16);
			MISC::SET_BIT(&(uParam0->f_1C1), 14);
			MISC::CLEAR_BIT(&Global_15167, *uParam0);
		}
	}
}

void func_5(var uParam0)//Position - 0x2E8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 2 && uParam0->f_1D0 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_1D0 == 4))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
		{
			func_6(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x376
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0)
		{
			func_65(uParam0);
			uParam0->f_1D0 = iParam1;
			func_7(uParam0, iParam1, iParam2);
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)//Position - 0x3A8
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			break;
		
		case 1:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C4 = -1;
			break;
		
		case 2:
			func_36(uParam0, uParam0->f_1A1, iParam2);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			func_18(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			MISC::SET_BIT(&(uParam0->f_1C1), 9);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			func_14(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
			func_14(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
			Global_17C49.f_1.f_6[*uParam0] = 1;
			HUD::CLEAR_HELP(0);
			func_12(uParam0, 0);
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
	}
	func_8(uParam0);
}

void func_8(var uParam0)//Position - 0x4D5
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	uVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 13, 1);
	uVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 11, 1);
	uVar2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 32, 1);
	uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	uVar4 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
	uVar5 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 6, 1);
		uVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 7, 1);
		uVar2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 29, 1);
	}
	bVar6 = func_11(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (uParam0->f_1D0)
	{
		case 0:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				if (bVar6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar2);
					func_9("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(uVar2);
					func_9("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar5);
					func_9("PB_H_EXIT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(uVar0);
					func_9("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_10(uVar0);
					func_9("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar5);
					func_9("PB_H_UNDO");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar1);
					func_9("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(uVar1);
					func_9("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_10(uVar2);
				func_9("PB_H_ZOOM");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_10(uVar3);
				func_9("PB_H_LOOK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_10(uVar5);
				func_9("PB_H_UNDO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_10(uVar4);
				func_9("PB_H_CONF");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}
}

void func_9(char* sParam0)//Position - 0x9B1
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10(var uParam0)//Position - 0x9C3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_11(int iParam0, int iParam1)//Position - 0x9D1
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

void func_12(var uParam0, bool bParam1)//Position - 0xA1E
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 18);
		if (((!func_13(&(uParam0->f_1.f_14[0 /*4*/])) && !func_13(&(uParam0->f_1.f_14[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_6C[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_6C[1 /*4*/])))
		{
			HUD::CLEAR_HELP(0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 18);
	}
}

bool func_13(char* sParam0)//Position - 0xA93
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_14(char* sParam0, int iParam1)//Position - 0xAA6
{
	int iVar0;
	int iVar1;
	
	if (Global_176FC && iParam1)
	{
		if (func_13(uParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0, &(Global_17C49.f_5C53[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_17C49.f_5C53.f_91 - 2))
			{
				func_17(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_16((Global_17C49.f_5C53.f_91 - 1));
			Global_17C49.f_5C53.f_91 = (Global_17C49.f_5C53.f_91 - 1);
			func_15();
			return;
		}
		iVar0++;
	}
}

void func_15()//Position - 0xB53
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

void func_16(int iParam0)//Position - 0xC73
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

void func_17(int iParam0, int iParam1)//Position - 0xD0B
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

void func_18(var uParam0)//Position - 0xE1B
{
	int iVar0;
	struct<2> Var1;
	
	func_35(uParam0);
	func_32(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_30(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_26(uParam0, &Var1, uParam0->f_1.f_A);
	func_24(uParam0, 1, 1);
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_19(var uParam0)//Position - 0xEEE
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_1C1, 18))
		{
			switch (uParam0->f_1D0)
			{
				case 3:
					if (!Global_17C49.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[0 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_14[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[1 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_14[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_17C49.f_1[*uParam0] = 1;
					}
					else if (func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_20()) && uParam0->f_1E3 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE");
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_17C49.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[0 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_6C[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[1 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_6C[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_17C49.f_1.f_6[*uParam0] = 1;
					}
					else if (func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1C1, 10))
						{
							if ((!func_13("PB_H_GUNM") && !func_13("PB_H_HACK")) && !func_13("PB_H_DRIV"))
							{
								iVar0 = func_66(func_31(*uParam0));
								if (uParam0->f_1A1 < 5)
								{
									if (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_20()) && uParam0->f_1E3 == 0)
									{
										switch (Global_1517C[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_20()//Position - 0x115F
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0x1181
{
	if (Global_17C49.f_5C53.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

void func_22(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x119E
{
	func_23(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_23(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x11BE
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
		func_15();
	}
}

void func_24(var uParam0, int iParam1, int iParam2)//Position - 0x1390
{
	if (!MISC::IS_BIT_SET(uParam0->f_1.f_12F, iParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_25(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x13E9
{
	if (uParam0->f_1E3 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_26(var uParam0, var uParam1, float fParam2)//Position - 0x1449
{
	struct<3> Var0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = MISC::GET_GAME_TIMER() + 1000;
	Var0 = { func_28(uParam0, &(uParam0->f_19B)) };
	func_27(&(uParam0->f_289), Var0, fParam2);
}

void func_27(var uParam0, struct<3> Param1, float fParam2)//Position - 0x148E
{
	uParam0->f_B = { Param1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_28(var uParam0, var uParam1)//Position - 0x14AD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	Var7 = { uParam0->f_191 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = MISC::ATAN((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (Var7.f_2 - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = MISC::ATAN((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1592
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_30(int iParam0, int iParam1)//Position - 0x15FD
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x16E3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_32(var uParam0)//Position - 0x1734
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_33(*uParam0, uParam0->f_1.f_1D));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (iVar0 == func_30(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_33(int iParam0, int iParam1)//Position - 0x19A1
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_78[iParam0], iParam1);
}

void func_34(var uParam0)//Position - 0x19BB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_LABELS");
	func_9("H_CRW_NAME");
	func_9("H_CRW_TYPE");
	func_9("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_JWL");
			break;
		
		case 1:
			func_9("H_LBL_DOC");
			break;
		
		case 2:
			func_9("H_LBL_RUR");
			break;
		
		case 3:
			func_9("H_LBL_AGN");
			break;
		
		case 4:
			func_9("H_LBL_FA");
			func_9("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_9("H_LBL_CRW");
	}
	func_9("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_9("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_J1");
			func_9("H_LBL_J2");
			func_9("H_LBL_J3");
			func_9("H_LBL_J4");
			func_9("HC_J_IMPACT");
			func_9("HC_J_STEALTH");
			break;
		
		case 1:
			func_9("HC_D_BLOW_UP");
			func_9("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_9("H_LBL_R1");
			func_9("H_LBL_R2");
			func_9("H_LBL_R3");
			func_9("H_LBL_R4");
			func_9("H_LBL_R5");
			func_9("H_LBL_R6");
			func_9("H_LBL_R7");
			func_9("H_LBL_R8");
			func_9("H_LBL_R9");
			func_9("H_LBL_R10");
			func_9("H_LBL_R11");
			func_9("H_LBL_R12");
			break;
		
		case 3:
			func_9("H_LBL_A1");
			func_9("H_LBL_A2");
			func_9("H_LBL_A3");
			func_9("H_LBL_A4");
			func_9("H_LBL_A5");
			func_9("HC_A_FIRETRUCK");
			func_9("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_9("H_LBL_F1");
			func_9("H_LBL_F2");
			func_9("H_LBL_F3");
			func_9("H_LBL_F4");
			func_9("H_LBL_F5");
			func_9("HC_F_TRAFFCONT");
			func_9("HC_F_HELI");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(var uParam0)//Position - 0x1BBD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(var uParam0, int iParam1, int iParam2)//Position - 0x1BDF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_24(uParam0, 2, 1);
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = Global_1517C[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_63(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_63(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_63(uParam0, iVar0, 2);
			break;
	}
	func_62(uParam0, uParam0->f_1A1);
	func_37(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_26(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_37(var uParam0, int iParam1)//Position - 0x1D15
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_31(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_1517C[iVar1 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	iVar3 = 0;
	if (Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1];
		func_42(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_41(iVar6) == iVar2)
			{
				if (func_40(iVar6))
				{
					if (!func_39(iVar6))
					{
						if (!func_38(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_38(var uParam0, int iParam1)//Position - 0x1E9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_17C49.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_39(int iParam0)//Position - 0x1EE4
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_76, iParam0);
}

bool func_40(int iParam0)//Position - 0x1EFA
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_74, iParam0);
}

int func_41(int iParam0)//Position - 0x1F10
{
	return Global_150E2[iParam0 /*5*/];
}

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F20
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_9(func_60(iParam1));
	func_9(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 1:
			func_9(func_58(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 0));
			func_9(func_58(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 1));
			func_9(func_58(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 2));
			func_9(func_58(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 3));
			break;
		
		case 2:
			func_9(func_54(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 0));
			func_9(func_54(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 1));
			func_9(func_54(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 2));
			break;
		
		case 3:
			func_9(func_49(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 0));
			func_9(func_49(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 1));
			func_9(func_49(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 2));
			break;
	}
	func_9("H_CRW_CUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_43(int iParam0)//Position - 0x205C
{
	return Global_150E2[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1)//Position - 0x206E
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_46(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)//Position - 0x2097
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)//Position - 0x20D1
{
	if (func_41(iParam0) != 3)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1)//Position - 0x20EF
{
	return func_48(iParam1, Global_17C49.f_1.f_49[iParam0 /*3*/].f_1, Global_17C49.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, var uParam1, var uParam2)//Position - 0x2119
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(uParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(uParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_49(int iParam0)//Position - 0x216D
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1)//Position - 0x217C
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_51(int iParam0, int iParam1)//Position - 0x225F
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_53(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)//Position - 0x2288
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)//Position - 0x22C2
{
	if (func_41(iParam0) != 2)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0)//Position - 0x22E0
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1)//Position - 0x22EF
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_57(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)//Position - 0x2318
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)//Position - 0x2361
{
	if (func_41(iParam0) != 1)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0)//Position - 0x237F
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0)//Position - 0x238E
{
	switch (Global_150E2[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_60(int iParam0)//Position - 0x23D7
{
	return func_61(iParam0);
}

char* func_61(int iParam0)//Position - 0x23E5
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_62(var uParam0, int iParam1)//Position - 0x24C8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_63(var uParam0, int iParam1, int iParam2)//Position - 0x24E7
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Global_1517C[iParam1 /*19*/].f_12, iParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_114, Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_1517C[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_1517C[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_1517C[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)//Position - 0x2591
{
	func_26(uParam0, &(uParam0->f_1.f_C), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19(uParam0);
}

void func_65(var uParam0)//Position - 0x25C7
{
	switch (uParam0->f_1D0)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	HUD::CLEAR_HELP(0);
}

int func_66(int iParam0)//Position - 0x260A
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_CB[iParam0];
}

int func_67(int iParam0)//Position - 0x2637
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_68(var uParam0)//Position - 0x2688
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)//Position - 0x26A3
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_141(0))
			{
				if (func_132(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_191) < 4f)
					{
						Var1 = { uParam0->f_191 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = MISC::ABSF((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = MISC::ABSF((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == -1)
			{
				func_131(&(uParam0->f_1C3), 3, "PB_H_ENT", 0, 0);
			}
			else if (func_130(uParam0->f_1C3, 1))
			{
				func_128(&(uParam0->f_1C3));
				func_114(uParam0);
			}
		}
		else if (uParam0->f_1C3 != -1)
		{
			func_128(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_11(1, *uParam0);
		func_78(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_1C1, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)//Position - 0x28C0
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_191 };
			Var0 = { Var0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 134);
	}
	HUD::DISPLAY_RADAR(1);
	func_73(0);
	func_72();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(0);
	func_71(&(uParam0->f_289), 0, 1);
	func_14(&(uParam0->f_1.f_14[0 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_14[1 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
	HUD::CLEAR_HELP(1);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		SYSTEM::WAIT(0);
	}
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar1);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_65(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 7);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 2);
	Global_15166 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)//Position - 0x2A42
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, iParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
		}
		CAM::DESTROY_CAM(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_17 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_72()//Position - 0x2ADC
{
	Global_42CA.f_5 = 0;
}

void func_73(bool bParam0)//Position - 0x2AEA
{
	if (bParam0)
	{
		func_77();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_141(0))
		{
			func_74(0);
		}
	}
	else if (Global_3839.f_1 == 1)
	{
		if (!Global_3839.f_1 == 0)
		{
			Global_3839.f_1 = 3;
		}
	}
}

void func_74(int iParam0)//Position - 0x2B4D
{
	if (Global_38D7)
	{
		func_76(0, 0);
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
	if (!func_75())
	{
		Global_3839.f_1 = 3;
	}
}

int func_75()//Position - 0x2BBD
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)//Position - 0x2BE4
{
	if (bParam0)
	{
		if (func_141(0))
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

void func_77()//Position - 0x2C58
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_78(var uParam0)//Position - 0x2C81
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_1D2))
	{
		func_8(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_112();
	func_102(uParam0);
	func_86(uParam0);
	if (uParam0->f_1D0 == 1)
	{
		func_83(uParam0);
	}
	if (func_21())
	{
		func_19(uParam0);
	}
	bVar1 = uParam0->f_1C6 > MISC::GET_GAME_TIMER();
	func_79(&(uParam0->f_289), MISC::IS_BIT_SET(uParam0->f_1C1, 4), (MISC::IS_BIT_SET(uParam0->f_1C1, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_1D0 != 1)
			{
				if (uParam0->f_1D0 == 0 || (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_20()) && uParam0->f_1E3 == 0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1C1, 18) || uParam0->f_1D0 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_19E, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_191 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			MISC::SET_BIT(&(uParam0->f_1C1), 7);
		}
	}
}

void func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)//Position - 0x2ECB
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_82(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::FLOOR(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::FLOOR(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_81((iVar0[2] + uParam0->f_18), -127, 127);
		iVar0[3] = func_81((iVar0[3] + uParam0->f_19), -127, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < MISC::GET_GAME_TIMER())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	Var6 = { uParam0->f_8 + uParam0->f_B };
	if ((PAD::_IS_USING_KEYBOARD(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = Var6.x;
		uParam0->f_E.f_1 = Var6.f_1;
		uParam0->f_E.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_80((((Var6.x - uParam0->f_E) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_80((((Var6.f_1 - uParam0->f_E.f_1) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_80((((Var6.f_2 - uParam0->f_E.f_2) * 0.05f) * fVar5), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_80(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_80(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_80(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (PAD::_IS_USING_KEYBOARD(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_80(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_80(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
}

float func_80(float fParam0, float fParam1, float fParam2)//Position - 0x3374
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

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x339B
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_82(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x33C0
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_83(var uParam0)//Position - 0x34C4
{
	bool bVar0;
	int iVar1;
	
	if (!func_11(3, *uParam0))
	{
		if (uParam0->f_1E3 == 0 && uParam0->f_1C7 > 3)
		{
			if (uParam0->f_1C4 == -1)
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 19))
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_1C4)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_85(uParam0, iVar1);
							if (MISC::IS_BIT_SET(uParam0->f_1.f_172, iVar1))
							{
								MISC::SET_BIT(&(uParam0->f_1C1), 19);
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_1C1), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_84(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)//Position - 0x35A3
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iParam0]), iParam1);
	}
}

void func_85(var uParam0, int iParam1)//Position - 0x3628
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_26(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_24(uParam0, iParam1 + 4, 1);
	uParam0->f_1C4 = -1;
}

void func_86(var uParam0)//Position - 0x366F
{
	int iVar0;
	int iVar1;
	
	if ((!func_20() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_1E3 > 0)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1C1, 13))
			{
				if (func_87(&(uParam0->f_1E4), &(uParam0->f_1D3[0 /*5*/]), &(uParam0->f_1D3[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_1C7 = 0;
					if (uParam0->f_1D3[0 /*5*/].f_4)
					{
						MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1C1), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 13);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 11))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
			}
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 13))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 13);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_87(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3826
{
	func_101(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_88(sParam2, iParam3, 0);
}

int func_88(char* sParam0, int iParam1, bool bParam2)//Position - 0x3874
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
					func_100();
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
		if (func_99(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_98();
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
				func_92();
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
				if (func_91())
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
			if (func_75())
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
			func_90();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_89();
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
		func_100();
	}
	return 0;
}

void func_89()//Position - 0x3B40
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

void func_90()//Position - 0x3B70
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

int func_91()//Position - 0x3C05
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

void func_92()//Position - 0x3C9E
{
	if (func_346(14))
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
		Global_3839 = func_93();
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

int func_93()//Position - 0x3D3F
{
	func_94();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_94()//Position - 0x3D58
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_97(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_96(PLAYER::PLAYER_PED_ID());
			if (func_95(iVar0) && (!func_346(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_95(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_95(int iParam0)//Position - 0x3E55
{
	return iParam0 < 3;
}

int func_96(int iParam0)//Position - 0x3E61
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)//Position - 0x3E9E
{
	if (func_95(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_98()//Position - 0x3EC8
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

bool func_99(int iParam0, int iParam1)//Position - 0x3F1E
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

void func_100()//Position - 0x3F59
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

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3FB0
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

void func_102(var uParam0)//Position - 0x4007
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_1C5++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_8(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)) || (PAD::_IS_USING_KEYBOARD(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39))))
		{
			func_110();
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 12))
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 13);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 12);
		}
	}
	func_82(&(uParam0->f_1CA[0]), &(uParam0->f_1CA[1]), &(uParam0->f_1CA[2]), &(uParam0->f_1CA[3]), 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uParam0->f_1CA[2] = (uParam0->f_1CA[2] / 10);
		uParam0->f_1CA[3] = (uParam0->f_1CA[3] / 10);
		uParam0->f_1CA[2] = func_81((uParam0->f_1CA[2] + uParam0->f_289.f_18), -127, 127);
		uParam0->f_1CA[3] = func_81((uParam0->f_1CA[3] + uParam0->f_289.f_19), -127, 127);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[2];
	uParam0->f_289.f_19 = uParam0->f_1CA[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_1CA[3] = -uParam0->f_1CA[3];
	}
	if (uParam0->f_1C6 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_1CA[2] = 0;
		uParam0->f_1CA[3] = 0;
	}
	if (uParam0->f_1D0 == 0 || uParam0->f_1D0 == 4)
	{
		if (uParam0->f_1C5 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 10))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_1C1, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1C8) > 200)
			{
				if ((uParam0->f_1D0 == 2 || uParam0->f_1D0 == 3) || uParam0->f_1D0 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_1C9) > 25000)
					{
						func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[3 /*2*/], 1);
						uParam0->f_1C9 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_1D0 == 2)
				{
					if ((((uParam0->f_1CA[1] < -85 || uParam0->f_1CA[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[1] > 85 || uParam0->f_1CA[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 3)
				{
					if ((uParam0->f_1CA[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_1A0 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_1A0 = 0;
						if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1C1), 9);
							func_8(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_1A0 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_1A0 = 1;
						if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1C1), 9);
							func_8(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_20() || MISC::IS_BIT_SET(uParam0->f_1C1, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37)))
					{
						switch (uParam0->f_1D0)
						{
							case 3:
								if (!func_20())
								{
									if (!MISC::IS_BIT_SET(uParam0->f_1C1, 9))
									{
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										iVar0 = func_31(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_12(uParam0, 1);
											func_14(&(uParam0->f_1.f_14[0 /*4*/]), 1);
											func_14(&(uParam0->f_1.f_14[1 /*4*/]), 1);
											Global_17C49.f_1[*uParam0] = 1;
											HUD::CLEAR_HELP(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_11(4, *uParam0))
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_1C2 < Global_1517C[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_12(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_84(4, *uParam0, 1);
									if (!func_2(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_84(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_1517C[iVar1 /*19*/])
								{
									if (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2] == 0 || func_41(Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_1517C[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_150E2[iVar3 /*5*/] != Global_1517C[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!MISC::IS_BIT_SET(Global_17C49.f_1.f_74, iVar3))
													{
														bVar4 = false;
													}
													if (MISC::IS_BIT_SET(Global_17C49.f_1.f_76, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_38(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_12(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_1AB = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)))
					{
						switch (uParam0->f_1D0)
						{
							case 2:
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_1C2 > 0)
								{
									func_12(uParam0, 1);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_36(uParam0, uParam0->f_1C2, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_1AB = 0;
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
								}
								else if (!func_347(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_60)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_1E[iVar7] != 13)
											{
												func_349(*uParam0, uParam0->f_1.f_1E[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0;
										func_12(uParam0, 1);
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										uParam0->f_1D1 = 0;
										func_107(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_6(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_1E[iVar9] != 13)
										{
											func_349(*uParam0, uParam0->f_1.f_1E[iVar9], 0);
										}
										iVar9++;
									}
									func_106(8, 0);
									func_84(5, 1, 0);
									uParam0->f_1AB = 0;
									func_12(uParam0, 1);
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
									func_6(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 5)
	{
		iVar0 = func_31(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_1C2 >= Global_1517C[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_1C2 > uParam0->f_19F))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_24(uParam0, 0, 1);
			func_6(uParam0, 4, 0);
		}
		else
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1C1, 17))
			{
				iVar10 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
				uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_36(uParam0, uParam0->f_1C2, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 17);
		}
		uParam0->f_1C9 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!func_13(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_13(&(uParam0->f_1.f_6C[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_14[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_14[1 /*4*/])))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (uParam0->f_2A8 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2A8))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2A8);
			iVar1 = func_30(*uParam0, iVar11);
			iVar0 = func_31(*uParam0);
			func_106(iVar0, iVar1);
			if (!func_2(0))
			{
				func_105(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_1E[iVar11] != 13)
			{
				func_349(*uParam0, uParam0->f_1.f_1E[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_1517C[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_84(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 10);
				uParam0->f_1C2++;
			}
			HUD::CLEAR_HELP(0);
			uParam0->f_2A8 = 0;
		}
	}
	if (uParam0->f_2A9 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2A9))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2A9);
			iVar0 = func_31(*uParam0);
			iVar1 = func_66(iVar0);
			Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1C2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 17);
			func_104(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = MISC::GET_GAME_TIMER();
			uParam0->f_1C9 = uParam0->f_1C8;
			MISC::SET_BIT(&(uParam0->f_1C1), 10);
			if (!func_13(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_13(&(uParam0->f_1.f_6C[1 /*4*/])))
			{
				HUD::CLEAR_HELP(0);
			}
			uParam0->f_2A9 = 0;
		}
	}
	if (uParam0->f_2AA != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2AA))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2AA);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0;
		}
	}
	if (uParam0->f_1AB != 0)
	{
		func_103(uParam0, uParam0->f_1AB);
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x4DD0
{
	if (!func_20())
	{
		if (uParam0->f_1E3 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_25(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_25(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 16);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_25(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_25(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 17);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_104(var uParam0, int iParam1)//Position - 0x4FE8
{
	if (!MISC::IS_BIT_SET(uParam0->f_1CF, iParam1))
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_1.f_77, iParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_25(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 3))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 6))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 4))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 2))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 5))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 15))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 3))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[25 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 2))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 14))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[30 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[28 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 14))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 18))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 6))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[27 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 17))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 12))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 10))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
								{
									if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
									{
										func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 11))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
								{
									if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
									{
										func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 13))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 19))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 4))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 16))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 5))
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 20))
							{
								func_25(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_1CF), iParam1);
	}
}

void func_105(int iParam0)//Position - 0x577E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_106(int iParam0, int iParam1)//Position - 0x5879
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_CB[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_CB[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1)//Position - 0x58BE
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

void func_108(int iParam0)//Position - 0x5903
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[7];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 0);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 1);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 2);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 3);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 4);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 5);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 6);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[9];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 7);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 8);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 11:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 9);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 17);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[10];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 10);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 11);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 5:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 12);
						break;
					
					case 3:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 13);
						break;
					
					case 4:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 17);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 14);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 15);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 19);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 16);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 18);
						break;
					
					case 13:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 20);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 16);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)//Position - 0x5C80
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 0);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 1);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 2);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 3);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 4);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 5);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 6);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 7);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 8);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 9);
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 10);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 11);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 12);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 13);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 14);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 15);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 16);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 17);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 18);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 19);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 20);
			break;
	}
}

void func_110()//Position - 0x5DC8
{
	Global_38DE = 0;
	func_111();
}

void func_111()//Position - 0x5DD8
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_112()//Position - 0x5DF9
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_113();
}

void func_113()//Position - 0x5E09
{
	Global_42CA.f_86 = 1;
}

void func_114(var uParam0)//Position - 0x5E17
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	uParam0->f_1CF = 0;
	MISC::SET_BIT(&(uParam0->f_1C1), 9);
	func_12(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_8C75 == 1)
			{
				func_119(PLAYER::PLAYER_PED_ID());
			}
			Var0 = { uParam0->f_191 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
		}
		MISC::SET_BIT(&(uParam0->f_1C1), 7);
	}
	HUD::DISPLAY_RADAR(0);
	func_73(1);
	func_118();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_191, 5f, 1, 1, 0, 0);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_191, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_117(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
	}
	INTERIOR::_0xAF348AFCB575A441(&(Global_15129[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	}
	func_116(0);
	func_115();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	uParam0->f_1D2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 10, 1);
	MISC::SET_BIT(&(uParam0->f_1C1), 2);
	Global_15166 = 1;
	func_7(uParam0, uParam0->f_1D0, 0);
}

void func_115()//Position - 0x6006
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		func_16(iVar0);
		iVar0++;
	}
	Global_17C49.f_5C53.f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17C49.f_5C53.f_92[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_116(bool bParam0)//Position - 0x6064
{
	if (!bParam0)
	{
		Global_176FE = MISC::GET_GAME_TIMER() + 250;
	}
	Global_176FB = bParam0;
}

void func_117(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x6082
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_118()//Position - 0x617A
{
	Global_42CA.f_5 = 1;
}

void func_119(int iParam0)//Position - 0x6188
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_127(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		func_122(1, iVar1, 1);
		return;
	}
	iVar2 = func_121(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_120(iVar2);
}

void func_120(int iParam0)//Position - 0x61E1
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

int func_121(int iParam0)//Position - 0x6264
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8B96[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0, int iParam1, int iParam2)//Position - 0x6295
{
	func_123(iParam0, iParam1, iParam2, 0, 0);
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x62A9
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_125(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_124();
	if (iVar0 == -1)
	{
		return;
	}
	Global_8C01[iVar0 /*5*/] = iParam0;
	Global_8C01[iVar0 /*5*/].f_1 = iParam1;
	Global_8C01[iVar0 /*5*/].f_2 = iParam2;
	Global_8C01[iVar0 /*5*/].f_3 = iParam3;
	Global_8C01[iVar0 /*5*/].f_4 = iParam4;
}

int func_124()//Position - 0x6320
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8C01[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0, int iParam1, int iParam2)//Position - 0x6351
{
	if (func_126(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x636C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				if (iParam1 == Global_8C01[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)//Position - 0x63B8
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

void func_128(var uParam0)//Position - 0x6401
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_129(*uParam0);
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

int func_129(int iParam0)//Position - 0x6458
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

int func_130(int iParam0, bool bParam1)//Position - 0x6493
{
	int iVar0;
	
	iVar0 = func_129(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_141(0))
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

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x654B
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_128(uParam0);
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

int func_132(int iParam0)//Position - 0x6656
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_93();
				if (!func_95(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_140()) || Global_17890) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_140()) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_140()) || Global_17890) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_140()) || Global_17890) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_140() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_99(8, -1)) || func_135()) || func_134()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_99(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_140()) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_137()) || func_136()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_140()) || func_137()) || Global_17890) || Global_5F7E) || func_139()) || Global_8C75) || func_99(8, -1)) || func_136()) || func_134()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_140()) || Global_17890) || Global_5F7E) || func_139()) || func_99(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_133()//Position - 0x6D73
{
	return Global_15F91.f_1;
}

int func_134()//Position - 0x6D81
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_135()//Position - 0x6DA7
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_136()//Position - 0x6DC1
{
	if (Global_10B99)
	{
		return 1;
	}
	else if (Global_D5D8 && !Global_D5DE)
	{
		return 1;
	}
	return 0;
}

bool func_137()//Position - 0x6DEB
{
	return Global_15F9E.f_123 > 0;
}

bool func_138()//Position - 0x6DFC
{
	return Global_15F9E.f_122 > 0;
}

var func_139()//Position - 0x6E0D
{
	return Global_14143C;
}

int func_140()//Position - 0x6E19
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x6E35
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

bool func_142(int iParam0)//Position - 0x6E8F
{
	return func_143(iParam0, Global_8861);
}

int func_143(int iParam0, int iParam1)//Position - 0x6EA0
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

void func_144()//Position - 0x7081
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_347(25))
	{
		iVar0 = func_66(func_31(4));
		if (iVar0 != iLocal_48)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			switch (iVar0)
			{
				case 8:
					sLocal_41 = "BS_2A_INT";
					break;
				
				case 9:
					sLocal_41 = "BS_2B_INT";
					break;
			}
			iLocal_48 = iVar0;
		}
		if (iLocal_48 != -1)
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_41, 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_347(26))
	{
		if (func_347(25))
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_41))
			{
				if (!func_2(0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_105))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_108))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "Lester", 0, joaat("ig_lestercrest"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_106))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "Franklin", 0, joaat("player_one"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_107))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "Trevor", 0, joaat("player_two"), 0);
				}
				func_73(1);
				func_116(1);
				func_194(1, 1, 1, 0);
				iVar1 = 0;
				while (iVar1 < func_193(4))
				{
					if (func_191(4, iVar1) == 12)
					{
						func_182(-837794877);
					}
					iVar1++;
				}
				if (bLocal_46)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 256;
				}
				CUTSCENE::START_CUTSCENE(iVar2);
				if (func_2(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				func_107(25, 0);
				iLocal_43 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_43 = iLocal_43;
			func_112();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
				{
					PED::DELETE_PED(&iLocal_108);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_105))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_105, -668482597, 0, 1, 0);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					}
				}
				func_181(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
				{
					PED::DELETE_PED(&iLocal_106);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_107))
				{
					PED::DELETE_PED(&iLocal_107);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
		}
		else if (iLocal_44 == -1 && !func_2(0))
		{
			iLocal_44 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_44 || func_2(0))
		{
			if (func_2(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_D5DE = 0;
				Global_15F91 = 0;
				func_180();
			}
			func_73(0);
			func_194(0, 1, 1, 0);
			func_179();
			func_177(&(Global_17C49.f_6C1.f_21B), 77);
			func_152(&(Global_17C49.f_6C1.f_21B), 77);
			func_151(&iLocal_45);
			MISC::CLEAR_BIT(&uLocal_42, 3);
			func_107(26, 0);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_150, 0);
			if (iLocal_151 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_151))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_151);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_153.f_1.f_18A - Local_153.f_1.f_18D, Local_153.f_1.f_18A + Local_153.f_1.f_18D, 1, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_145(4, 0);
		}
	}
	else if (!func_347(25))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_41))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}

void func_145(int iParam0, bool bParam1)//Position - 0x73DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_40(iVar1))
		{
			if (!func_39(iVar1))
			{
				if (!(iVar1 == 11 && iParam0 == 3))
				{
					switch (iVar1)
					{
						case 1:
							func_149(4, 1);
							break;
						
						case 4:
							func_149(8, 1);
							break;
						
						case 6:
							func_149(10, 1);
							break;
						
						case 7:
							func_149(1, 1);
							break;
						
						case 8:
							func_149(3, 1);
							break;
						
						case 9:
							func_149(6, 1);
							break;
						
						case 10:
							func_149(9, 1);
							break;
						
						case 12:
							func_149(11, 1);
							break;
						
						case 13:
							func_149(12, 1);
							break;
						
						case 11:
							if (func_148(91))
							{
								func_149(0, 1);
							}
							break;
						
						case 5:
							if (func_148(91))
							{
								func_149(2, 1);
							}
							break;
						
						case 3:
							if (func_148(67))
							{
								func_149(5, 1);
							}
							break;
						
						case 2:
							if (func_148(77))
							{
								func_149(7, 1);
							}
							break;
						}
					}
				}
		}
		iVar0++;
	}
	if (!bParam1)
	{
		if (!func_147(69))
		{
			func_22("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_146("DI_FEED_HST");
	}
}

void func_146(char* sParam0)//Position - 0x753F
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_147(int iParam0)//Position - 0x7562
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5C53.f_96[iVar1], iVar0);
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x75A5
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_149(int iParam0, bool bParam1)//Position - 0x75D1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_73A7.f_1, iVar0))
		{
			MISC::SET_BIT(&(Global_17C49.f_73A7.f_1), iVar0);
			if (!bParam1)
			{
				func_146(func_150(iParam0));
			}
		}
	}
}

char* func_150(int iParam0)//Position - 0x7623
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

void func_151(int iParam0)//Position - 0x7706
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_883B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_883A = 0;
	Global_883C = 0;
	Global_8861 = 15;
	Global_D5DB = 0;
	Global_D5DC = 0;
}

void func_152(var uParam0, int iParam1)//Position - 0x7743
{
	switch (iParam1)
	{
		case 17:
			func_153(uParam0, 0, 12);
			break;
		
		case 19:
			func_153(uParam0, 1, 13);
			break;
		
		case 29:
			func_153(uParam0, 1, 14);
			break;
		
		case 30:
			func_153(uParam0, 2, 15);
			func_153(uParam0, 1, 29);
			break;
		
		case 32:
			func_153(uParam0, 1, 16);
			func_153(uParam0, 0, 17);
			break;
		
		case 39:
			func_153(uParam0, 0, 21);
			func_153(uParam0, 1, 20);
			break;
		
		case 31:
			func_153(uParam0, 0, 18);
			break;
		
		case 20:
			func_153(uParam0, 2, 22);
			break;
		
		case 66:
			func_153(uParam0, 1, 23);
			break;
		
		case 68:
			func_153(uParam0, 1, 24);
			break;
		
		case 70:
			func_153(uParam0, 1, 67);
			break;
		
		case 8:
			func_153(uParam0, 1, 25);
			func_153(uParam0, 2, 26);
			break;
		
		case 67:
			func_153(uParam0, 1, 27);
			break;
		
		case 9:
			func_153(uParam0, 2, 28);
			break;
		
		case 38:
			func_153(uParam0, 2, 30);
			func_153(uParam0, 1, 19);
			break;
		
		case 83:
			func_153(uParam0, 2, 33);
			break;
		
		case 45:
			func_153(uParam0, 1, 35);
			break;
		
		case 64:
			func_153(uParam0, 0, 36);
			func_153(uParam0, 1, 37);
			break;
		
		case 91:
			func_153(uParam0, 0, 41);
			break;
		
		case 42:
			func_153(uParam0, 0, 58);
			Global_15D9F[0 /*74*/] = 0;
			func_153(uParam0, 2, 59);
			Global_15D9F[2 /*74*/] = 0;
			break;
		
		case 41:
			func_153(uParam0, 1, 42);
			func_153(uParam0, 2, 42);
			break;
		
		case 15:
			func_153(uParam0, 0, 46);
			func_153(uParam0, 1, 47);
			break;
		
		case 16:
			func_153(uParam0, 0, 48);
			break;
		
		case 48:
			func_153(uParam0, 1, 50);
			func_153(uParam0, 2, 51);
			break;
		
		case 74:
			func_153(uParam0, 0, 52);
			func_153(uParam0, 1, 66);
			break;
		
		case 76:
			func_153(uParam0, 1, 53);
			func_153(uParam0, 2, 54);
			func_153(uParam0, 0, 62);
			break;
		
		case 75:
			func_153(uParam0, 0, 61);
			func_153(uParam0, 1, 31);
			break;
		
		case 69:
			func_153(uParam0, 1, 63);
			break;
		
		case 84:
			func_153(uParam0, 0, 68);
			func_153(uParam0, 2, 69);
			break;
		
		case 85:
			func_153(uParam0, 0, 64);
			func_153(uParam0, 2, 65);
			break;
		
		case 93:
			func_153(uParam0, 1, 38);
			func_153(uParam0, 2, 39);
			break;
		
		case 11:
			func_153(uParam0, 2, 55);
			break;
		
		case 77:
			func_153(uParam0, 1, 56);
			func_153(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_153(var uParam0, int iParam1, int iParam2)//Position - 0x7A8C
{
	int iVar0;
	struct<74> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
	{
		iVar0 = Global_17C49.f_4193[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_17C49.f_4193[iParam1] = iParam2;
	uParam0->f_5F4[iParam1] = func_166();
	if (!func_165(iParam2, &(uParam0->f_5F8[iParam1 /*3*/]), &(uParam0->f_602[iParam1])))
	{
		return 0;
	}
	if (!func_164(uParam0->f_5F8[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!func_164(Global_159DA[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_B = 12;
			Var1.f_1F = 25;
			Var1.f_39 = 2;
			if (func_154(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_15D9F[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_606[iParam1] = 0;
	uParam0->f_60A[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_614[iParam1] = 0;
	return 1;
}

int func_154(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7BAA
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_3C = 255;
	uParam2->f_3D = 255;
	uParam2->f_3E = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_15E86[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1))
				{
					if (Global_15E7E[iParam0] == 1)
					{
						*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
						*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_154(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_154(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_156(iParam0, uParam2, 2);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_49 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_49 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_49 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_156(iParam0, uParam2, 2);
			uParam2->f_43 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_49 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_49 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_49 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_49 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_49 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_49 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_49 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_49 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			uParam2->f_41 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_154(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_49 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_154(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_154(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_156(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_154(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_154(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_49 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0] = 0;
			uParam2->f_B[1] = 0;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 0;
			uParam2->f_B[4] = 0;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_154(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_154(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_154(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_156(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_155(iParam0, uParam2, 2);
			uParam2->f_43 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_154(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_154(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_154(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_154(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_43 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_155(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_154(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_154(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_B[0] = 0;
				uParam2->f_B[1] = 0;
				uParam2->f_B[2] = 1;
				uParam2->f_B[3] = 0;
				uParam2->f_B[4] = 0;
				uParam2->f_B[5] = 1;
				uParam2->f_B[6] = 1;
				uParam2->f_B[7] = 1;
				uParam2->f_B[8] = 1;
			}
			else
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_49 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_49 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_49 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_49 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_49 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_155(int iParam0, var uParam1, int iParam2)//Position - 0xB01D
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

int func_156(int iParam0, var uParam1, int iParam2)//Position - 0xB295
{
	if (Global_15D9F[iParam0 /*74*/] == 0)
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("blimp"))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (func_163(iParam0))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_15D9F[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_15D9F[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_15D9F[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_15D9F[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_15D9F[iParam0 /*74*/]))
		{
			func_155(iParam0, uParam1, iParam2);
			uParam1->f_43 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_15D9F[iParam0 /*74*/]))
		{
			func_155(iParam0, uParam1, iParam2);
			uParam1->f_43 = iParam2;
			return 1;
		}
	}
	if (!func_157(Global_15D9F[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		if (Global_15D9F[iParam0 /*74*/] != *uParam1)
		{
			*uParam1 = { Global_15D9F[iParam0 /*74*/] };
			uParam1->f_43 = 0;
			return 0;
		}
	}
	else
	{
		func_155(iParam0, uParam1, 1);
		uParam1->f_43 = 1;
		if (Global_15D9F[iParam0 /*74*/] == *uParam1)
		{
			func_155(iParam0, uParam1, 1);
			uParam1->f_43 = 1;
			return 1;
		}
		func_155(iParam0, uParam1, 2);
		uParam1->f_43 = 2;
		if (Global_15D9F[iParam0 /*74*/] == *uParam1)
		{
			func_155(iParam0, uParam1, 2);
			uParam1->f_43 = 2;
			return 1;
		}
		*uParam1 = { Global_15D9F[iParam0 /*74*/] };
		uParam1->f_43 = 0;
		return 0;
	}
	func_155(iParam0, uParam1, iParam2);
	uParam1->f_43 = iParam2;
	return 1;
}

int func_157(int iParam0)//Position - 0xB4CB
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
		if (!func_162())
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
		if ((((!func_161() && !func_160()) && !func_159()) && !func_158()) && !func_162())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_159())
		{
			return 0;
		}
	}
	return 1;
}

int func_158()//Position - 0xB69A
{
	return 0;
}

int func_159()//Position - 0xB6A3
{
	return 1;
}

int func_160()//Position - 0xB6AC
{
	return 1;
}

int func_161()//Position - 0xB6B5
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0xB6CE
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

int func_163(int iParam0)//Position - 0xB751
{
	if (Global_15D9F[iParam0 /*74*/] == joaat("blimp") || Global_15D9F[iParam0 /*74*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("submersible") || Global_15D9F[iParam0 /*74*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("burrito2") || Global_15D9F[iParam0 /*74*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("entityxf") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("cheetah") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("policeb") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("ztype") && !Global_17C49.f_1CAD.f_148[9 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("polmav") && !Global_17C49.f_1CAD.f_148[9 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("jb700") && !Global_17C49.f_1CAD.f_148[10 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("monroe") && !Global_17C49.f_1CAD.f_148[11 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_15D9F[iParam0 /*74*/] == joaat("gauntlet") && !Global_17C49.f_1CAD.f_148[80 /*6*/]) && !Global_17C49.f_1CAD.f_148[81 /*6*/]) && !Global_17C49.f_1CAD.f_148[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_164(struct<3> Param0, struct<3> Param1)//Position - 0xB9D1
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_165(int iParam0, var uParam1, float fParam2)//Position - 0xB9FA
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
			return func_165(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_165(8, uParam1, fParam2);
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

var func_166()//Position - 0xC36B
{
	var uVar0;
	
	func_176(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_175(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_174(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_169(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_168(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_167(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_167(var uParam0, int iParam1)//Position - 0xC3B1
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

void func_168(var uParam0, int iParam1)//Position - 0xC437
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_169(var uParam0, int iParam1)//Position - 0xC46A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_171(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_170(int iParam0, int iParam1)//Position - 0xC4BB
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

var func_171(var uParam0)//Position - 0xC55D
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_172(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2)//Position - 0xC582
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_173(var uParam0)//Position - 0xC599
{
	return uParam0 & 15;
}

void func_174(var uParam0, int iParam1)//Position - 0xC5A6
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_175(var uParam0, int iParam1)//Position - 0xC5E0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_176(var uParam0, int iParam1)//Position - 0xC61B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_177(var uParam0, int iParam1)//Position - 0xC657
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
			if (!func_165(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_178(&(uParam0->f_5F4[iVar0]));
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

void func_178(var uParam0)//Position - 0xC820
{
	*uParam0 = -15;
}

void func_179()//Position - 0xC82E
{
	Global_17879 = 0;
}

int func_180()//Position - 0xC83B
{
	if (func_2(0))
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

void func_181(int iParam0)//Position - 0xC886
{
	Global_10642.f_8A = iParam0;
}

int func_182(int iParam0)//Position - 0xC896
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (Global_17C49.f_1738[iVar0 /*15*/] == iParam0)
		{
			if (Global_8A84 != iVar0)
			{
				func_190(iVar0);
				func_187(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_C6)
	{
		if (Global_17C49.f_1738.f_89[iVar0 /*15*/] == iParam0)
		{
			func_187(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_28A)
	{
		if (Global_17C49.f_1738.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_186(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_2FC)
	{
		if (Global_17C49.f_1738.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_184(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_362)
	{
		if (Global_17C49.f_1738.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_183(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_183(int iParam0)//Position - 0xC9BD
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_362)
	{
		return;
	}
	if (Global_17C49.f_1738.f_362 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_362 - 2))
		{
			Global_17C49.f_1738.f_2FD[iVar0 /*10*/] = { Global_17C49.f_1738.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_362 > 0)
	{
		Global_17C49.f_1738.f_2FD[(Global_17C49.f_1738.f_362 - 1) /*10*/] = { Var1 };
		Global_17C49.f_1738.f_362 = (Global_17C49.f_1738.f_362 - 1);
	}
}

void func_184(int iParam0)//Position - 0xCA76
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_2FC)
	{
		return;
	}
	if (Global_17C49.f_1738.f_2FC > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_2FC - 2))
		{
			Global_17C49.f_1738.f_28B[iVar0 /*14*/] = { Global_17C49.f_1738.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_2FC > 0)
	{
		Global_17C49.f_1738.f_28B[(Global_17C49.f_1738.f_2FC - 1) /*14*/] = { Var1 };
		Global_17C49.f_1738.f_2FC = (Global_17C49.f_1738.f_2FC - 1);
	}
	func_185(0);
	func_185(1);
	func_185(2);
}

void func_185(int iParam0)//Position - 0xCB3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_95(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_17C49.f_1738[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_17C49.f_1738.f_2FC)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_17C49.f_1738.f_397[iParam0] = iVar1;
}

void func_186(int iParam0)//Position - 0xCC02
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_17C49.f_1738.f_28A)
	{
		if (Global_17C49.f_1738.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_17C49.f_1738.f_28A - 2))
			{
				Global_17C49.f_1738.f_C7[iVar2 /*15*/] = { Global_17C49.f_1738.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_17C49.f_1738.f_C7[(Global_17C49.f_1738.f_28A - 1) /*15*/] = { Var0 };
			Global_17C49.f_1738.f_28A = (Global_17C49.f_1738.f_28A - 1);
			return;
		}
		iVar1++;
	}
}

void func_187(int iParam0)//Position - 0xCCAF
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_17C49.f_1738.f_C6)
	{
		if (Global_17C49.f_1738.f_89[iVar1 /*15*/] == iParam0)
		{
			func_188(Global_17C49.f_1738.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_17C49.f_1738.f_C6 - 2))
			{
				Global_17C49.f_1738.f_89[iVar2 /*15*/] = { Global_17C49.f_1738.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_17C49.f_1738.f_89[(Global_17C49.f_1738.f_C6 - 1) /*15*/] = { Var0 };
			Global_17C49.f_1738.f_C6 = (Global_17C49.f_1738.f_C6 - 1);
			return;
		}
		iVar1++;
	}
}

int func_188(int iParam0)//Position - 0xCD6B
{
	int iVar0;
	
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_17C49.f_744E[iParam0 /*29*/].f_13[Global_3839] == 1)
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_13[Global_3839] = 0;
			if (Global_17C49.f_744E[iParam0 /*29*/].f_18[Global_3839] == 0)
			{
				iVar0 = Global_3839;
				func_189(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_189(int iParam0, int iParam1)//Position - 0xCDDC
{
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_190(int iParam0)//Position - 0xCE1F
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_88)
	{
		return;
	}
	uVar1 = Global_17C49.f_1738[iParam0 /*15*/].f_2;
	if (Global_17C49.f_1738.f_88 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_88 - 2))
		{
			Global_17C49.f_1738[iVar0 /*15*/] = { Global_17C49.f_1738[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_88 > 0)
	{
		Global_17C49.f_1738[(Global_17C49.f_1738.f_88 - 1) /*15*/] = { Var2 };
		Global_17C49.f_1738.f_88 = (Global_17C49.f_1738.f_88 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(uVar1, iVar0))
		{
			func_185(iVar0);
		}
		iVar0++;
	}
}

int func_191(int iParam0, int iParam1)//Position - 0xCEFA
{
	int iVar0;
	
	iVar0 = func_66(func_192(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_17C49.f_1.f_C[iVar0 /*6*/][iParam1];
}

int func_192(int iParam0)//Position - 0xCF3B
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_193(int iParam0)//Position - 0xCF90
{
	int iVar0;
	
	iVar0 = func_66(func_192(iParam0));
	return Global_1517C[iVar0 /*19*/];
}

void func_194(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCFAC
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_201(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_75())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_200(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_201(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_200(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_195(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_195(int iParam0)//Position - 0xD07D
{
	if (func_197(iParam0, 0))
	{
		return 1;
	}
	if (func_196())
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

bool func_196()//Position - 0xD0BE
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_197(int iParam0, int iParam1)//Position - 0xD0CF
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_198(-1, 0) == 8;
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

int func_198(int iParam0, bool bParam1)//Position - 0xD11A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_199();
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

int func_199()//Position - 0xD15B
{
	return Global_1407E1;
}

int func_200(int iParam0, var uParam1, var uParam2)//Position - 0xD167
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

void func_201(int iParam0)//Position - 0xD198
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

void func_202()//Position - 0xD1BB
{
	if (func_347(24))
	{
		if (!func_2(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_42, 3))
			{
				if (func_148(77))
				{
					if (func_142(0))
					{
						if (func_328(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							MISC::SET_BIT(&uLocal_42, 3);
							func_327();
							uLocal_150 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_153.f_1.f_18A - Local_153.f_1.f_18D, Local_153.f_1.f_18A + Local_153.f_1.f_18D, 0, 1, 1, 1);
							iLocal_151 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_153.f_1.f_18A, Local_153.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
							PED::SET_PED_NON_CREATION_AREA(Local_153.f_1.f_18A - Local_153.f_1.f_18D, Local_153.f_1.f_18A + Local_153.f_1.f_18D);
							PATHFIND::SET_PED_PATHS_IN_AREA(Local_153.f_1.f_18A - Local_153.f_1.f_18D, Local_153.f_1.f_18A + Local_153.f_1.f_18D, 0, 0);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_42, 3))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_323();
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
						{
							iLocal_108 = Global_15350.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 0, 1);
							PED::DELETE_PED(&iLocal_108);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_1C[0]))
						{
							uLocal_109 = Global_15350.f_1C[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_109, 0, 1);
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_109))
							{
								ENTITY::DETACH_ENTITY(iLocal_109, 1, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_109, "WALKINGSTICK_LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						switch (func_93())
						{
							case 0:
								iLocal_105 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 0, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								break;
							
							case 1:
								iLocal_106 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 0, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								MISC::SET_BIT(&uLocal_42, 4);
								break;
							
							case 2:
								iLocal_107 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 0, joaat("player_two"), 0);
								MISC::SET_BIT(&uLocal_42, 4);
								break;
						}
						STREAMING::REQUEST_MODEL(joaat("player_zero"));
						func_73(1);
						func_194(1, 1, 1, 0);
						func_322(77);
						ENTITY::CREATE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
						func_321(&(Local_153.f_1E4), 0, 0, "MICHAEL", 1, 1);
						func_321(&(Local_153.f_1E4), 1, 0, "FRANKLIN", 1, 1);
						func_321(&(Local_153.f_1E4), 2, 0, "TREVOR", 1, 1);
						func_321(&(Local_153.f_1E4), 3, 0, "LESTER", 1, 1);
						if (func_93() == 0)
						{
							bLocal_46 = true;
						}
						else
						{
							bLocal_46 = false;
						}
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						func_112();
						if (!MISC::IS_BIT_SET(uLocal_42, 6))
						{
							MISC::CLEAR_AREA(124.0681f, -1294.762f, 28.2695f, 1.5f, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_42, 6);
						}
						switch (iLocal_152)
						{
							case 0:
								func_320(1, 0);
								func_320(2, 0);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_103))
								{
									if (func_319(iLocal_103, 0, 0))
									{
										iLocal_152 = 2;
									}
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
								{
									VEHICLE::DELETE_VEHICLE(&iLocal_103);
								}
								if (iLocal_152 != 2)
								{
									STREAMING::REQUEST_MODEL(joaat("tailgater"));
									iLocal_152 = 1;
								}
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("tailgater")))
								{
									func_320(0, 0);
									func_311(133.9532f, -1311.404f, 28.08922f, 127.847f, -1315.542f, 32.11665f, 3.3f, 124.97f, -1321.87f, 28f, 37.74f, func_318(), 1, 0, 1, 0, 0);
									func_297(&iLocal_104, 0, 130.56f, -1313.66f, 28.74f, 124.66f, 0, 0);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_104);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
									func_271(iLocal_104, 0f, 0f, 0f, 0f, 24, 0);
									iLocal_152 = 2;
								}
								break;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0)))
							{
								iLocal_105 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_105, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_105, 96.46f, -1291.44f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_105, 299.3742f);
								func_321(&(Local_153.f_1E4), 0, iLocal_105, "MICHAEL", 1, 1);
								if (MISC::IS_BIT_SET(uLocal_42, 4))
								{
									iLocal_110[0] = iLocal_105;
									func_266(&iLocal_110, 0);
									func_206(&iLocal_110, 0, 0, 0);
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", joaat("player_one")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0)))
							{
								iLocal_106 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_106, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_106, 97.116f, -1288.588f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_106, 246.1162f);
								func_321(&(Local_153.f_1E4), 1, iLocal_106, "FRANKLIN", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", joaat("player_two")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0)))
							{
								iLocal_107 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_107, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_107, 99.1774f, -1292.069f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_107, 20.8497f);
								func_321(&(Local_153.f_1E4), 2, iLocal_107, "TREVOR", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0)))
							{
								iLocal_108 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_108, 96.2331f, -1289.744f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_108, 223.2882f);
								func_321(&(Local_153.f_1E4), 3, iLocal_108, "LESTER", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!MISC::IS_BIT_SET(uLocal_42, 2))
							{
								func_205();
								MISC::SET_BIT(&uLocal_42, 2);
							}
							if (iLocal_152 == 1)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
							}
							ENTITY::REMOVE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
							func_107(24, 0);
						}
					}
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uLocal_42, 3))
		{
			if (func_142(0))
			{
				if (func_328(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_42, 3);
				}
			}
		}
		else
		{
			func_321(&(Local_153.f_1E4), 0, 0, "MICHAEL", 1, 1);
			func_321(&(Local_153.f_1E4), 1, 0, "FRANKLIN", 1, 1);
			func_321(&(Local_153.f_1E4), 2, 0, "TREVOR", 1, 1);
			func_321(&(Local_153.f_1E4), 3, 0, "LESTER", 1, 1);
			func_205();
			func_107(24, 0);
		}
	}
	else if (func_148(77) || func_2(0))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (iLocal_47 != -1)
		{
			func_203(&iLocal_47);
		}
	}
}

void func_203(int iParam0)//Position - 0xD95F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_10A92 == *iParam0)
	{
		func_204(*iParam0, 0);
	}
	if (Global_10A91 == *iParam0)
	{
		Global_10A91 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_10A8E)
	{
		if (Global_10A83[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_10A8E - 2))
	{
		Global_10A83[iVar2 /*2*/] = Global_10A83[iVar2 + 1 /*2*/];
		Global_10A83[iVar2 /*2*/].f_1 = Global_10A83[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_10A83[(Global_10A8E - 1) /*2*/] = -1;
	Global_10A83[(Global_10A8E - 1) /*2*/].f_1 = 3;
	Global_10A8E = (Global_10A8E - 1);
	Global_10A8F = 1;
	Global_10A90 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_204(int iParam0, bool bParam1)//Position - 0xDA47
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_10A91 == iParam0)
		{
			Global_10A92 = iParam0;
		}
	}
	else if (Global_10A92 == iParam0)
	{
		Global_10A92 = -1;
	}
}

void func_205()//Position - 0xDA83
{
	func_84(1, 4, 1);
	func_84(2, 4, 1);
	func_330(&Local_153);
	func_68(&Local_153);
}

int func_206(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xDAA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!iParam0->f_27)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = func_93();
		if (!iParam0->f_17)
		{
			func_254(iVar0, 0);
		}
		func_252(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = func_251(iParam0->f_7);
		func_254((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_96(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (func_95(func_93()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (func_250(0) || func_250(3))
		{
			if (Global_42CA.f_D)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_13CDF[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_13CDF[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_13D03[Global_10BA2.f_6D[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_42CA.f_D = 0;
		iParam0->f_5 = func_249(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_249(iVar2);
		iParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		func_248(iVar7);
		PED::_0xE861D0B05C7662B8(iVar7, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				func_248(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_15661 = 1;
		func_246(PLAYER::PLAYER_PED_ID());
		func_245();
		func_244(iVar2);
		func_235();
		func_230(iVar2);
		func_213(func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_347(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_347(68));
		}
		func_210(iVar2, &iVar7);
		if (((func_346(0) || func_346(3)) || func_346(2)) || func_346(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, 1);
		}
		if (!func_209())
		{
			func_207();
		}
		Global_154F6 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_207()//Position - 0xDF80
{
	if (Global_1567F)
	{
		func_94();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_208(Global_17C49.f_6C1.f_21B.f_C8D));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

char* func_208(var uParam0)//Position - 0xDFB1
{
	uParam0 = uParam0;
	return "";
}

bool func_209()//Position - 0xDFBF
{
	return Global_42C8;
}

void func_210(int iParam0, int iParam1)//Position - 0xDFCA
{
	switch (iParam0)
	{
		case 0:
			func_211(4, *iParam1);
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			break;
		
		case 1:
			if (Global_17C49.f_1CAD.f_148[2 /*6*/])
			{
				func_211(4, *iParam1);
			}
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			if (Global_17C49.f_1CAD.f_63.f_3A[126])
			{
				func_211(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_17C49.f_1CAD.f_148[20 /*6*/])
			{
				func_211(4, *iParam1);
			}
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			break;
	}
}

void func_211(int iParam0, int iParam1)//Position - 0xE096
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (func_212(iParam0, iParam1))
	{
		return;
	}
	if (Global_84F4[iParam0 /*31*/].f_18 < 5)
	{
		Global_84F4[iParam0 /*31*/].f_19[Global_84F4[iParam0 /*31*/].f_18] = iParam1;
		Global_84F4[iParam0 /*31*/].f_18++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_84F4[iParam0 /*31*/].f_19[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_84F4[iParam0 /*31*/].f_19[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_212(int iParam0, int iParam1)//Position - 0xE148
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_84F4[iParam0 /*31*/].f_18)
	{
		if (iParam1 == Global_84F4[iParam0 /*31*/].f_19[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_213(int iParam0)//Position - 0xE181
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_7843[(38 / 32)]), (38 % 32));
			func_214(38, 0);
			MISC::SET_BIT(&(Global_7843[(41 / 32)]), (41 % 32));
			func_214(41, 0);
			MISC::SET_BIT(&(Global_7843[(43 / 32)]), (43 % 32));
			func_214(43, 0);
			MISC::SET_BIT(&(Global_7843[(42 / 32)]), (42 % 32));
			func_214(42, 0);
			MISC::SET_BIT(&(Global_7843[(44 / 32)]), (44 % 32));
			func_214(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_7843[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_7843[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_7843[(53 / 32)]), (53 % 32));
			func_214(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_7843[(81 / 32)]), (81 % 32));
			func_214(81, 0);
			MISC::SET_BIT(&(Global_7843[(82 / 32)]), (82 % 32));
			func_214(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_7843[(47 / 32)]), (47 % 32));
			func_214(47, 0);
			MISC::SET_BIT(&(Global_7843[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_7843[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
	}
}

void func_214(int iParam0, int iParam1)//Position - 0xE311
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_10A95)
		{
			iVar0 = Global_24F57C.f_49[iParam0];
		}
		else
		{
			iVar0 = Global_17C49.f_158E[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
				Global_7A19[iParam0] = iParam1;
			}
			else if (Global_10A95)
			{
				Global_24F57C.f_49[iParam0] = iParam1;
			}
			else
			{
				Global_17C49.f_158E[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
			func_216(iParam0);
			if (MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_215(iParam0);
			}
		}
	}
}

void func_215(int iParam0)//Position - 0xE40A
{
	if (!MISC::IS_BIT_SET(Global_7BEE.f_E3[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_7BEE.f_E3[(iParam0 / 32)]), (iParam0 % 23));
		Global_7BEE[Global_7BEE.f_E2] = iParam0;
		Global_7BEE.f_E2++;
	}
}

void func_216(int iParam0)//Position - 0xE458
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_225())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_224(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_221(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) && Global_7A19[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
		Global_7855[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_7937[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_15F9E.f_120 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_15F9E.f_120 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_15F9E.f_120;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
					Global_7A19[iParam0] = 3;
					MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_7937[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_7A19[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_17C49.f_1CAD)
		{
			iVar3 = func_218(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_346(14))
		{
			iVar3 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_217())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_17C49.f_158E[iParam0];
	}
	if (Global_7AFB[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) || (Global_7855[iParam0] == 0 && Global_7A19[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_7842)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
			Global_7AFB[iParam0] = iVar3;
		}
	}
	if (MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) && Global_7A19[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
		func_215(iParam0);
		if (Global_7855[iParam0] < 2)
		{
			Global_7855[iParam0]++;
		}
	}
}

int func_217()//Position - 0xE93A
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_93())
	{
		case 0:
			if (Global_17C49.f_1CAD.f_63.f_3A[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_17C49.f_1CAD.f_63.f_3A[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_17C49.f_1CAD.f_63.f_3A[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xE9B9
{
	int iVar0;
	
	iVar0 = func_93();
	if (func_219(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (MISC::IS_BIT_SET(Global_17C49.f_156E[5], 0) || MISC::IS_BIT_SET(Global_17C49.f_156E[6], 0))
			{
				return 0;
			}
		}
		if (func_95(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_14D92[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[0], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[5], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[6], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[2], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_14D92[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[1], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_14D92[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[3], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_219(int iParam0)//Position - 0xEC0E
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_220(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xEC7A
{
	return iParam0;
}

void func_221(int iParam0, var uParam1)//Position - 0xEC84
{
	var uVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	uVar0 = func_166();
	iVar1 = func_223(uVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_222(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_222(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_222(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_17C49.f_1CAD.f_63.f_3A[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_17C49.f_158E[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_17C49.f_1CAD.f_63.f_3A[4])
				{
					Global_17C49.f_158E[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[4])
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_17C49.f_158E[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_17C49.f_158E[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_222(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_222(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_17C49.f_158E[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[70 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_222(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[26 /*34*/].f_6) == 0)
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_222(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[43 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_222(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[93 /*34*/].f_6) > 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_222(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[10 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_222(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[47 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[70 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[48 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[39 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_222(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
	}
}

bool func_222(int iParam0)//Position - 0xF61F
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_224(iParam0) };
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_223(var uParam0)//Position - 0xF653
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 9) & 31;
}

struct<7> func_224(int iParam0)//Position - 0xF666
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_225()//Position - 0x1223A
{
	if ((func_227() == -1 || func_227() == 999) && !func_226() == 0)
	{
		return 1;
	}
	return 0;
}

int func_226()//Position - 0x1226A
{
	return Global_5F7D;
}

int func_227()//Position - 0x12275
{
	return Global_5F7C;
}

int func_228(struct<3> Param0, int iParam1, int iParam2)//Position - 0x12280
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
				if (func_229(iVar0) || iParam2 == 0)
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

bool func_229(int iParam0)//Position - 0x1230F
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

void func_230(int iParam0)//Position - 0x12327
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_231(iParam0, iVar0);
		iVar0++;
	}
}

void func_231(int iParam0, int iParam1)//Position - 0x1234A
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_234(iParam0, iParam1, &uVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_232(iVar3, -1, 0);
	}
	else
	{
		STATS::STAT_GET_INT(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			break;
		
		case 7:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian3")) != 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor3")) != 0)
			{
				Global_15662 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

int func_232(int iParam0, int iParam1, int iParam2)//Position - 0x12436
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_233(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_233(var uParam0)//Position - 0x12468
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_199();
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

void func_234(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1249C
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_235()//Position - 0x126F3
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_95(func_93())) || !func_241())
	{
		return;
	}
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	func_237(PLAYER::PLAYER_PED_ID(), &Var0, 1);
	func_236(1306, Var0[0], -1, 1);
	func_236(1307, Var0[1], -1, 1);
	func_236(1308, Var0[2], -1, 1);
	func_236(1309, Var0[3], -1, 1);
	func_236(1310, Var0[4], -1, 1);
	func_236(1311, Var0[5], -1, 1);
	func_236(1312, Var0[6], -1, 1);
	func_236(1313, Var0[7], -1, 1);
	func_236(1314, Var0[8], -1, 1);
	func_236(1315, Var0[9], -1, 1);
	func_236(1316, Var0[10], -1, 1);
	func_236(1317, Var0[11], -1, 1);
	func_236(1318, Var0.f_D[0], -1, 1);
	func_236(1319, Var0.f_D[1], -1, 1);
	func_236(1320, Var0.f_D[2], -1, 1);
	func_236(1321, Var0.f_D[3], -1, 1);
	func_236(1322, Var0.f_D[4], -1, 1);
	func_236(1323, Var0.f_D[5], -1, 1);
	func_236(1324, Var0.f_D[6], -1, 1);
	func_236(1325, Var0.f_D[7], -1, 1);
	func_236(1326, Var0.f_D[8], -1, 1);
	func_236(1327, Var0.f_D[9], -1, 1);
	func_236(1328, Var0.f_D[10], -1, 1);
	func_236(1329, Var0.f_D[11], -1, 1);
	func_236(1330, Var0.f_1A[0], -1, 1);
	func_236(1331, Var0.f_1A[1], -1, 1);
	func_236(1332, Var0.f_1A[2], -1, 1);
	func_236(1333, Var0.f_1A[3], -1, 1);
	func_236(1334, Var0.f_1A[4], -1, 1);
	func_236(1335, Var0.f_1A[5], -1, 1);
	func_236(1336, Var0.f_1A[6], -1, 1);
	func_236(1337, Var0.f_1A[7], -1, 1);
	func_236(1338, Var0.f_1A[8], -1, 1);
	func_236(1339, Var0.f_1A[9], -1, 1);
	func_236(1340, Var0.f_1A[10], -1, 1);
	func_236(1341, Var0.f_1A[11], -1, 1);
	func_236(1342, Var0.f_27[0], -1, 1);
	func_236(1343, Var0.f_27[1], -1, 1);
	func_236(1344, Var0.f_27[2], -1, 1);
	func_236(1345, Var0.f_27[3], -1, 1);
	func_236(1346, Var0.f_27[4], -1, 1);
	func_236(1347, Var0.f_27[5], -1, 1);
	func_236(1348, Var0.f_27[6], -1, 1);
	func_236(1349, Var0.f_27[7], -1, 1);
	func_236(1350, Var0.f_27[8], -1, 1);
	func_236(1351, Var0.f_31[0], -1, 1);
	func_236(1352, Var0.f_31[1], -1, 1);
	func_236(1353, Var0.f_31[2], -1, 1);
	func_236(1354, Var0.f_31[3], -1, 1);
	func_236(1355, Var0.f_31[4], -1, 1);
	func_236(1356, Var0.f_31[5], -1, 1);
	func_236(1357, Var0.f_31[6], -1, 1);
	func_236(1358, Var0.f_31[7], -1, 1);
	func_236(1359, Var0.f_31[8], -1, 1);
	func_236(1360, func_93(), -1, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
	Global_17C49.f_6C1.f_21B.f_C87 = 1;
}

var func_236(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12B06
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_199();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_237(int iParam0, var uParam1, int iParam2)//Position - 0x12D2D
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_96(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_240(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_239(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_95(iVar0))
		{
			uParam1->f_3B = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_238(161, -1))
			{
				uParam1->f_3B = func_232(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_232(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_232(741, Global_10A08, 0);
			uParam1->f_3D = func_232(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_238(161, -1))
			{
				uParam1->f_3B = func_232(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_232(740, Global_10A08, 0);
			}
		}
	}
}

int func_238(int iParam0, int iParam1)//Position - 0x12ED7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_233(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_239(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x12F03
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x1344B
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_241()//Position - 0x1368C
{
	if (func_243() && func_242(0))
	{
		return 1;
	}
	return 0;
}

var func_242(int iParam0)//Position - 0x136AA
{
	return Global_140671[iParam0];
}

var func_243()//Position - 0x136BA
{
	return func_242(func_199() + 1);
}

void func_244(int iParam0)//Position - 0x136CC
{
	switch (iParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		default:
			break;
	}
}

void func_245()//Position - 0x13880
{
	var uVar0;
	int iVar1;
	
	func_94();
	uVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(uVar0))
	{
		iVar1 = Global_17C49.f_6C1.f_21B.f_C8D;
		if (func_346(14))
		{
			iVar1 = func_96(PLAYER::PLAYER_PED_ID());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_TREV");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_PLAYER");
		}
	}
}

void func_246(int iParam0)//Position - 0x13903
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_247(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
				{
					if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = FILES::GET_NUM_DLC_WEAPONS();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
			{
				if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
				{
					WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_247(int iParam0)//Position - 0x139C5
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_248(int iParam0)//Position - 0x13C39
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_40001.f_5A)));
		}
		if (Global_17C49.f_6C1.f_21B.f_122[iVar0] <= 0f)
		{
			Global_17C49.f_6C1.f_21B.f_122[iVar0] = 100f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_122[iVar0] <= 10f)
		{
			Global_17C49.f_6C1.f_21B.f_122[iVar0] = 10f;
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_17C49.f_6C1.f_21B.f_122[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)));
	}
}

int func_249(int iParam0)//Position - 0x13D25
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

int func_250(int iParam0)//Position - 0x13D60
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_251(int iParam0)//Position - 0x13D82
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
	return 145;
}

void func_252(int iParam0, int iParam1)//Position - 0x13DB0
{
	switch (iParam0)
	{
		case 0:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			break;
		
		case 1:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			if (Global_17C49.f_1CAD.f_63.f_3A[126])
			{
				func_253(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			break;
	}
}

void func_253(int iParam0, int iParam1, bool bParam2)//Position - 0x13E68
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_84F4[iParam0 /*31*/].f_18 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_84F4[iParam0 /*31*/].f_18)
	{
		if (bVar1)
		{
			Global_84F4[iParam0 /*31*/].f_19[(iVar0 - 1)] = Global_84F4[iParam0 /*31*/].f_19[iVar0];
			Global_84F4[iParam0 /*31*/].f_19[iVar0] = 0;
		}
		else if (iParam1 == Global_84F4[iParam0 /*31*/].f_19[iVar0])
		{
			Global_84F4[iParam0 /*31*/].f_19[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_84F4[iParam0 /*31*/].f_18 = (Global_84F4[iParam0 /*31*/].f_18 - 1);
	}
}

void func_254(int iParam0, bool bParam1)//Position - 0x13F24
{
	func_265(iParam0);
	func_260(iParam0, bParam1);
	func_259(iParam0);
	func_258(iParam0);
	func_257(iParam0);
	func_256(iParam0);
	func_255(iParam0);
}

void func_255(int iParam0)//Position - 0x13F58
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			Global_17C49.f_6C1.f_21B.f_614[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
	}
}

void func_256(int iParam0)//Position - 0x13F9F
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_60A[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_257(int iParam0)//Position - 0x13FDD
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Global_17C49.f_6C1.f_21B.f_602[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_17C49.f_6C1.f_21B.f_606[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] >= 8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = 7500f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] <= -8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = -7500f;
		}
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_258(int iParam0)//Position - 0x1416B
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_259(int iParam0)//Position - 0x141A7
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_122[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_260(int iParam0, bool bParam1)//Position - 0x14204
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_261(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_17C49.f_6C1.f_21B.f_4A0 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_261(int iParam0, var uParam1)//Position - 0x142F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_247(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_247(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_263(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_263(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_85[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_262(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4.x = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_85[iVar9 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, Var8.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_85[iVar9 /*3*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_262(int iParam0)//Position - 0x1455B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_263(int iParam0, int iParam1)//Position - 0x14681
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_264(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iParam1, &Var3))
						{
							return Var3.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_264(int iParam0, var uParam1)//Position - 0x14E9D
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_265(int iParam0)//Position - 0x14ED8
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_5F4[iVar0] = func_166();
	}
}

int func_266(int iParam0, int iParam1)//Position - 0x14F12
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_27)
	{
		iParam0->f_7 = 4;
		iParam0->f_27 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_22[iParam1] == 2;
		if (func_249(func_93()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_18[iParam1] != 0) || ((func_270(iParam1) && func_267(iParam1)) && !iParam0->f_12[iParam1]))
			{
				if (!iParam0->f_17)
				{
					if (!PED::IS_PED_INJURED((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_22[iParam1] != 1 && iParam0->f_22[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !MISC::IS_BIT_SET(Global_15725.f_2F, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_2[27 /*3*/], 1) && !Global_3) && !func_2(0)))
			{
				if (iParam0->f_17)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	iParam0->f_27 = 0;
	return 0;
}

int func_267(int iParam0)//Position - 0x1506D
{
	if (Global_17C49.f_1CAD || Global_3)
	{
		if (!Global_10A95 || (Global_10A95 && iParam0 != func_249(func_269())))
		{
			if (!func_268(func_251(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_268(int iParam0)//Position - 0x150BD
{
	if (func_95(iParam0))
	{
		if ((Global_17C49.f_1CAD || Global_3) || func_2(0))
		{
			return Global_17C49.f_6C1.f_21B.f_628[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_269()//Position - 0x1510B
{
	return Global_17C49.f_6C1.f_21B.f_C8F;
}

int func_270(int iParam0)//Position - 0x15120
{
	if ((Global_17C49.f_1CAD || Global_3) || func_2(0))
	{
		if (!Global_10A95 || (Global_10A95 && iParam0 != func_249(func_269())))
		{
			if (((iParam0 == 0 && !func_347(115)) || (iParam0 == 1 && !func_347(116))) || (iParam0 == 2 && !func_347(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_271(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x151AC
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
		func_296(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_292(iParam0, &Var0);
		if (func_164(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_10A06 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_285(iParam3, Var0, Param1, fParam2, func_291(iParam0));
		func_272(iParam3, iParam0, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0x152D7
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_283(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_166();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_282(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_273(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_273(int iParam0, int iParam1)//Position - 0x153F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_274(iParam0))
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
	func_292(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_274(int iParam0)//Position - 0x155F5
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_280(iParam0, 0, 0)) || func_280(iParam0, 1, 0)) || func_280(iParam0, 2, 0)) || func_291(iParam0) != 145) || func_279(iParam0)) || func_278(iParam0)) || func_277(iParam0)) || func_276(iParam0)) || !func_275(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_278(iParam0))
		{
		}
		if (func_278(iParam0))
		{
		}
		if (func_280(iParam0, 0, 0))
		{
		}
		if (func_280(iParam0, 1, 0))
		{
		}
		if (func_280(iParam0, 2, 0))
		{
		}
		if (func_291(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_275(int iParam0)//Position - 0x156D2
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_157(iParam0))
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

int func_276(int iParam0)//Position - 0x15882
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_157(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)//Position - 0x158C7
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

int func_278(int iParam0)//Position - 0x15902
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

int func_279(int iParam0)//Position - 0x1597E
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

int func_280(int iParam0, int iParam1, bool bParam2)//Position - 0x15A66
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_281(iParam1, iVar0, &sVar1, &iVar2))
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

int func_281(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x15AD7
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

int func_282(int iParam0)//Position - 0x15BAE
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

int func_283(var uParam0, int iParam1)//Position - 0x15BCA
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
			uParam0->f_4 = func_284(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_284(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_284(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_284(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_284(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_284(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_284(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_284(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_284(2, 1);
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
			if (func_162())
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
			if (func_162())
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
		if (!func_164(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_164(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_164(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_284(int iParam0, int iParam1)//Position - 0x172BD
{
	struct<58> Var0;
	
	if (func_95(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_155(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_285(int iParam0, struct<54> Param1, struct<3> Param2, var uParam3, int iParam4)//Position - 0x172FF
{
	if (func_283(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_290(iParam0);
			func_289(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
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
			func_286(iParam0, 1);
		}
	}
}

void func_286(int iParam0, bool bParam1)//Position - 0x17401
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_288(iParam0, 0))
		{
			func_287(iParam0, 1, 0);
			func_287(iParam0, 2, 0);
			func_287(iParam0, 3, 0);
			func_287(iParam0, 4, 0);
			func_287(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_287(iParam0, 0, 0);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)//Position - 0x1745E
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

bool func_288(int iParam0, int iParam1)//Position - 0x17499
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_289(struct<54> Param0, var uParam1)//Position - 0x174BC
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

void func_290(int iParam0)//Position - 0x17587
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_283(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_286(iParam0, 0);
		}
	}
}

int func_291(int iParam0)//Position - 0x17601
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

void func_292(int iParam0, var uParam1)//Position - 0x17664
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_295(uParam1);
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
		func_294(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_293(iVar0 + 1));
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

int func_293(int iParam0)//Position - 0x17910
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

int func_294(int iParam0, var uParam1, var uParam2)//Position - 0x179C0
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

void func_295(var uParam0)//Position - 0x17A9A
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

void func_296(int iParam0)//Position - 0x17B49
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_290(iParam0);
	func_286(iParam0, 0);
}

int func_297(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x17B70
{
	var uVar0;
	var uVar1;
	struct<73> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_95(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 25;
		Var2.f_39 = 2;
		func_155(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_17C49.f_6C1.f_21B.f_C88) && Global_17C49.f_1CAD.f_63.f_3A[131])
		{
			Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/], Param2, fParam3, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_5, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_7, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_18);
				}
				if (func_310(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_1B));
					if (Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_1A >= 0 && Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_3C, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_3D, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_3E);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_40);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_3F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_45, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_46, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_47);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_44, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_44, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_44, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_44, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_41 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_41);
				}
				if (Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_42 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_42 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_42);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_42);
						}
					}
				}
				func_308(iParam0, &(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_1F), &(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/].f_39));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_48);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iParam1 /*74*/]);
				}
				func_305(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/], Param2, fParam3, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_5, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_7, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_18);
				}
				if (func_310(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_1B));
					if (Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_1A >= 0 && Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_3C, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_3D, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_3E);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_40);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_3F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_45, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_46, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_47);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_44, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_44, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_44, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_44, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_41 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_41);
				}
				if (Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_42 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_42 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_42);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_42);
						}
					}
				}
				func_308(iParam0, &(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_1F), &(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/].f_39));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_48);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iParam1 /*74*/]);
				}
				func_305(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2);
			if (STREAMING::HAS_MODEL_LOADED(Var2))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2, Param2, fParam3, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_18);
				}
				if (func_310(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0 && Var2.f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_3C, Var2.f_3D, Var2.f_3E);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_40);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_3F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_45, Var2.f_46, Var2.f_47);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var2.f_44, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var2.f_44, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var2.f_44, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var2.f_44, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_41 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_41);
				}
				if (Var2.f_42 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_42 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_42);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_42);
						}
					}
				}
				func_308(iParam0, &(Var2.f_1F), &(Var2.f_39));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_48);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_17C49.f_1CAD.f_63.f_3A[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_17C49.f_6C1.f_21B.f_C88) && Global_17C49.f_1CAD.f_63.f_3A[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_17C49.f_6C1.f_21B.f_C88 = 1;
					func_298(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2);
				}
				if (bVar5)
				{
					func_305(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x18958
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_95(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_17C49.f_6C1.f_21B.f_663)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_273(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_B[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_18 = 1;
			}
			else
			{
				Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_18 = 0;
			}
		}
		else
		{
			Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_18 = 0;
		}
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_19 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1B), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1A = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3C), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3D), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3E));
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_40 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3F = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_41 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_42 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_45), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_46), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_47));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_44), 31);
		}
		Global_17C49.f_6C1.f_21B.f_C89[iParam0] = 10;
		if ((VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) < 255) && func_302(*iParam1, 0, &uVar0))
		{
			func_294(iParam1, &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F), &(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_39));
			if (bParam3)
			{
				Global_17C49.f_5B2F[iParam0 /*43*/].f_28 = 1;
				Global_17C49.f_5B2F[iParam0 /*43*/] = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_3 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3F;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_4 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3C;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_5 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3D;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_6 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_3E;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_A = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_42;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_10 = !Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_40;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_13 = { Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1B };
				Global_17C49.f_5B2F[iParam0 /*43*/].f_17 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1A;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_7 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[11];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_8 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[12];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_9 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[23];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_B = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[4];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_C = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[15];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_D = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[16];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_E = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[14];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_F = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[22];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_12 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[20];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_11 = Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_1F[18];
				Global_17C49.f_5B2F[iParam0 /*43*/].f_18 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_19 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1A = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1B = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1C = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1D = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1E = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_17C49.f_5B2F[iParam0 /*43*/].f_20 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_27 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_1F = func_301(*iParam1);
				Global_17C49.f_5B2F[iParam0 /*43*/].f_21[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_299(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_17C49.f_5B2F[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_299(Global_17C49.f_6C1.f_21B.f_663[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_17C49.f_5B2F[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_299(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x19537
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_300(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_300(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x195AA
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_301(int iParam0)//Position - 0x1AA9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) < 255)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_302(int iParam0, bool bParam1, var uParam2)//Position - 0x1AB5A
{
	int iVar0;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_303(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (VEHICLE::IS_BIG_VEHICLE(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_277(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_303(int iParam0, bool bParam1, var uParam2)//Position - 0x1ABFC
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_304(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_304(int iParam0)//Position - 0x1AF96
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_305(int iParam0, int iParam1)//Position - 0x1AFBF
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

void func_306(var uParam0)//Position - 0x1B041
{
	if (!func_307(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_17C49.f_1CAD.f_63.f_3A[119]);
	}
}

bool func_307(int iParam0)//Position - 0x1B06C
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_308(var uParam0, var uParam1, var uParam2)//Position - 0x1B07B
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_309(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}
	return 1;
}

int func_309(int iParam0)//Position - 0x1B1AD
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

int func_310(var uParam0, var uParam1)//Position - 0x1B289
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_17C49.f_5B2F.f_105)
	{
		*uParam0 = { Global_17C49.f_5B2F.f_10B };
		*uParam1 = Global_17C49.f_5B2F.f_10F;
		return 1;
	}
	return 0;
}

void func_311(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x1B2CA
{
	func_312(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_312(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x1B2F4
{
	int iVar0;
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
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
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
				func_317(iVar0);
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
					if (func_314(iVar0, Param0, Param1, fParam2))
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
				if (func_280(iVar0, func_93(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_313(Param5))
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

int func_313(struct<3> Param0)//Position - 0x1B6DA
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x1B704
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
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_316(Param1 - Param2) };
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
		if (((((((((((((((func_315(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_315(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_315(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_315(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_315(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_315(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_315(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_315(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_315(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_315(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_315(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_315(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_315(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_315(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_315(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_315(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x1B9FA
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

Vector3 func_316(struct<3> Param0)//Position - 0x1BAAE
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

void func_317(int iParam0)//Position - 0x1BAED
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

Vector3 func_318()//Position - 0x1BB52
{
	return 2.55f, 5.59f, 2.55f;
}

int func_319(int iParam0, int iParam1, int iParam2)//Position - 0x1BB69
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_1569C[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_284(iParam1, iParam2))
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

void func_320(int iParam0, int iParam1)//Position - 0x1BBF7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (iParam0 == 145 || Global_1569C[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == func_284(iParam0, iParam1))
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

void func_321(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1BC98
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

void func_322(int iParam0)//Position - 0x1BD33
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

void func_323()//Position - 0x1BD57
{
	int iVar0;
	
	iVar0 = func_96(PLAYER::PLAYER_PED_ID());
	func_324(PLAYER::PLAYER_PED_ID(), &(Global_15D9F[iVar0 /*74*/]), &(Global_15E86[iVar0 /*3*/]), &(Global_15E90[iVar0]), &(Global_15E7E[iVar0]), &(Global_26D4D5[iVar0]));
}

void func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1BD99
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = func_96(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_15E82[iVar2]))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_15E82[iVar2], -1))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(Global_15E82[iVar2], 1) };
						if (ENTITY::GET_ENTITY_MODEL(Global_15E82[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var4) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_15E82[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_325(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_325(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x1BE69
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uParam2->f_49 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = func_96(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_17C49.f_1CAD.f_63.f_3A[45] || Global_17C49.f_1CAD.f_63.f_3A[12]) || Global_17C49.f_1CAD.f_63.f_3A[34])
				{
					*uParam5 = 0;
					Global_15E82[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_15E82[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			*uParam5 = 2;
			Global_15E82[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_10642.f_8B[iVar1])
				{
					*uParam5 = 0;
					Global_15E82[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_15E82[iVar0]))
			{
				if (!func_280(Global_15E82[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_15E82[iVar0], 0))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(Global_15E82[iVar0], 1) };
					if (func_326(iParam0, Global_15E82[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var3) < 22500f)
						{
							*uParam3 = { Var3 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_15E82[iVar0]);
							*uParam5 = 1;
							Global_15E82[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var3) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_15E82[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar5))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar5);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_A = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_A = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_1B), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_1A = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_40 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_3C), &(uParam2->f_3D), &(uParam2->f_3E));
		uParam2->f_3F = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &(uParam2->f_45), &(uParam2->f_46), &(uParam2->f_47));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_44), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_44), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_44), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_44), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_44), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_44), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_44), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_44), 31);
		}
		uParam2->f_41 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_42 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar4 = 0;
		while (iVar4 < 12)
		{
			uParam2->f_B[iVar4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar4 + 1);
			iVar4++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 0))
		{
			iVar6 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar6 == 0 || iVar6 == 5)
			{
				uParam2->f_18 = 1;
			}
			else
			{
				uParam2->f_18 = 0;
			}
		}
		else
		{
			uParam2->f_18 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_19 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		func_294(&iParam1, &(uParam2->f_1F), &(uParam2->f_39));
		uParam2->f_48 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_49 = func_278(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_17C49.f_47C3.f_45[0 /*54*/].f_2A == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_17C49.f_47C3.f_45[1 /*54*/].f_2A == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_17C49.f_47C3.f_45[2 /*54*/].f_2A == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_A = 0;
		iVar4 = 0;
		while (iVar4 < uParam2->f_B)
		{
			uParam2->f_B[iVar4] = 0;
			iVar4++;
		}
		uParam2->f_18 = 0;
		uParam2->f_19 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_48 = 0f;
	}
}

int func_326(int iParam0, int iParam1, int iParam2)//Position - 0x1C372
{
	int iVar0;
	
	if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || (iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || iVar0 == joaat("blimp"))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

void func_327()//Position - 0x1C3FE
{
	Global_15F91 = 1;
}

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1C40B
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
		if (func_250(0))
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_42CA.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8861 = iParam2;
		Global_883B = *iParam0;
		Global_883C = iParam4;
		Global_883A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_883A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_883A)
			{
				if (Global_8840[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_883B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_883A == 8)
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		Global_8840[Global_883A /*4*/] = Global_883D;
		Global_8840[Global_883A /*4*/].f_1 = iParam1;
		Global_8840[Global_883A /*4*/].f_2 = iParam2;
		Global_8840[Global_883A /*4*/].f_3 = 0;
		Global_883A++;
		if (iParam4 != 0)
		{
			func_329(iParam0, iParam4);
		}
	}
	return 2;
}

void func_329(var uParam0, int iParam1)//Position - 0x1C542
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

void func_330(var uParam0)//Position - 0x1C591
{
	if (func_11(2, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				func_70(uParam0, func_331(*uParam0));
				func_84(2, *uParam0, 0);
			}
			else
			{
				func_114(uParam0);
				func_84(2, *uParam0, 0);
			}
		}
	}
}

int func_331(int iParam0)//Position - 0x1C5E6
{
	switch (iParam0)
	{
		case 0:
			return func_347(18);
			break;
		
		case 1:
			return func_347(22);
			break;
		
		case 2:
			return func_347(40);
			break;
		
		case 3:
			return func_347(8);
			break;
		
		case 4:
			return func_347(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_332(var uParam0, float fParam1, float fParam2)//Position - 0x1C653
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			func_343(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || MISC::IS_BIT_SET(Global_15168, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
			{
				if (func_342(uParam0))
				{
					if (MISC::IS_BIT_SET(Global_15168, *uParam0))
					{
						if (MISC::IS_BIT_SET(Global_1516A, *uParam0))
						{
							func_337(uParam0);
						}
					}
					else
					{
						func_337(uParam0);
					}
				}
			}
			else
			{
				func_336(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !MISC::IS_BIT_SET(Global_15168, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
				{
					func_334(uParam0);
				}
				func_333(uParam0);
			}
		}
	}
}

void func_333(var uParam0)//Position - 0x1C73B
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19E));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
	MISC::CLEAR_BIT(&Global_15169, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 0);
}

void func_334(var uParam0)//Position - 0x1C7A5
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_335(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 1);
		MISC::CLEAR_BIT(&Global_15168, *uParam0);
	}
}

void func_335(var uParam0)//Position - 0x1C7F1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_336(var uParam0)//Position - 0x1C82D
{
	if (!AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_110), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_10C));
	uParam0->f_19E = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_15167, *uParam0);
	MISC::SET_BIT(&(uParam0->f_1C1), 0);
}

void func_337(var uParam0)//Position - 0x1C8AA
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_32(uParam0);
		func_341(uParam0);
		func_340(uParam0);
		func_338(uParam0);
		MISC::SET_BIT(&(uParam0->f_1C1), 1);
	}
}

void func_338(var uParam0)//Position - 0x1C907
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_33(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			Var4 = { func_339(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar1, Var4, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 2, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1AC[iVar0], 1);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], 0, 0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], 1);
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&Global_1516A, *uParam0);
}

Vector3 func_339(var uParam0, var uParam1)//Position - 0x1CA3C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	Var7 = { uParam0->f_191 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return Var7;
}

void func_340(var uParam0)//Position - 0x1CABA
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = MISC::IS_BIT_SET(Global_17C49.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar0++;
	}
}

void func_341(var uParam0)//Position - 0x1CB9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_33(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0;
			if (func_33(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			func_9(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (func_33(*uParam0, uParam0->f_1.f_D2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_342(var uParam0)//Position - 0x1CCDA
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19D))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19E))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_15169, *uParam0);
	return 1;
}

void func_343(var uParam0)//Position - 0x1CD74
{
	float fVar0;
	float fVar1;
	
	if (func_33(*uParam0, 0))
	{
		func_344(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_344(var uParam0)//Position - 0x1CDFD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (MISC::IS_BIT_SET(Global_15167, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 16);
		MISC::SET_BIT(&(uParam0->f_1C1), 15);
		MISC::SET_BIT(&(uParam0->f_1C1), 14);
		MISC::CLEAR_BIT(&Global_15167, *uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_33(*uParam0, iVar1);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 16);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_33(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					Var6 = { func_339(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar3, Var6, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 2, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], 1, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1AC[iVar0], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], 0, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 15);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 14))
	{
		func_345(uParam0);
		func_34(uParam0);
		func_341(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 14);
	}
}

void func_345(var uParam0)//Position - 0x1D049
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_346(int iParam0)//Position - 0x1D06D
{
	return Global_8861 == iParam0;
}

int func_347(int iParam0)//Position - 0x1D07B
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_348(bool bParam0)//Position - 0x1D0A8
{
	if (bParam0)
	{
		Global_17877 = 0;
	}
	else
	{
		Global_17877 = 1;
	}
}

void func_349(int iParam0, int iParam1, bool bParam2)//Position - 0x1D0C2
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1.f_78[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_15167, iParam0);
}

void func_350(var uParam0, int iParam1)//Position - 0x1D100
{
	struct<3> Var0;
	float fVar1;
	
	*uParam0 = iParam1;
	Var0 = { Global_15129[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_15129[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { Var0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	MISC::SET_BIT(&(uParam0->f_1C1), 4);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 2);
	uParam0->f_1D0 = 0;
	uParam0->f_1C3 = -1;
}

void func_351(var uParam0, var uParam1)//Position - 0x1D1CC
{
	func_361(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96.47825f, -1292.353f, 29.76875f, 5f, 5.5f, 6f);
	func_360(uParam0, 1500, 540, 3.45f, 1.34f, 3.18f, 1.79f, 2.58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
	func_359(uParam0, 18f, 17f, 19f);
	func_358(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
	func_357(uParam0, 1, "CRW_GM", "");
	func_357(uParam0, 2, "CRW_KA", "");
	func_357(uParam0, 3, "CRW_HW", "");
	func_357(uParam0, 4, "CRW_NR", "");
	func_357(uParam0, 5, "CRW_DJ", "");
	func_357(uParam0, 6, "CRW_PH", "");
	func_357(uParam0, 7, "CRW_CF", "");
	func_357(uParam0, 8, "CRW_ET", "");
	func_357(uParam0, 9, "CRW_KD", "");
	func_357(uParam0, 10, "CRW_PM", "CRM_PM");
	func_357(uParam0, 11, "", "CRM_CH");
	func_357(uParam0, 12, "CRW_RL", "CRM_RL");
	func_357(uParam0, 13, "CRW_TM", "CRM_TM");
	func_356(uParam0, 24, "FHP18");
	func_356(uParam0, 25, "FHP18b");
	func_356(uParam0, 28, "FHP18c");
	func_356(uParam0, 29, "FHP18d");
	func_356(uParam0, 30, "FHP18e");
	func_356(uParam0, 26, "FHP18f");
	func_356(uParam0, 27, "FHP18g");
	func_356(uParam0, 31, "FHP18h");
	func_356(uParam0, 22, "FHP18i");
	func_356(uParam0, 23, "FHP18j");
	func_356(uParam0, 20, "FHP18k");
	func_355(uParam0, 0, 1, 0, 0);
	func_355(uParam0, 1, 1, 0, 0);
	func_355(uParam0, 2, 1, 0, 0);
	func_355(uParam0, 3, 1, 0, 0);
	func_355(uParam0, 4, 1, 0, 0);
	func_355(uParam0, 5, 1, 0, 0);
	func_355(uParam0, 6, 1, 0, 0);
	func_355(uParam0, 7, 1, 0, 0);
	func_355(uParam0, 8, 1, 0, 0);
	func_355(uParam0, 9, 1, 0, 0);
	func_355(uParam0, 10, 1, 0, 0);
	func_355(uParam0, 11, 1, 0, 0);
	func_355(uParam0, 12, 1, 0, 0);
	func_355(uParam0, 13, 1, 0, 0);
	func_355(uParam0, 14, 1, 0, 0);
	func_355(uParam0, 15, 1, 0, 0);
	func_355(uParam0, 16, 1, 0, 0);
	func_355(uParam0, 17, 1, 0, 0);
	func_355(uParam0, 18, 1, 0, 0);
	func_355(uParam0, 19, 1, 0, 0);
	func_355(uParam0, 20, 1, 0, 0);
	func_355(uParam0, 21, 1, 0, 0);
	func_354(uParam0, 0, 0, "H_TD_RES");
	func_354(uParam0, 0, 0, "H_TD_FLY");
	func_354(uParam0, 0, 2, "H_TD_PLAN");
	func_354(uParam0, 0, 10, "H_TD_CREW");
	func_354(uParam0, 3, 5, "H_TD_STNG");
	func_354(uParam0, 3, 6, "H_TD_CARS");
	func_354(uParam0, 4, 7, "H_TD_DRIL");
	func_354(uParam0, 4, 8, "H_TD_TRAI");
	func_354(uParam0, 4, 9, "H_TD_GETA");
	func_353(uParam0, 1, 142, 72);
	func_353(uParam0, 1, 134, 244);
	func_353(uParam0, 1, 262, 54);
	func_353(uParam0, 1, 334, 206);
	func_353(uParam0, 1, 547, 65);
	func_353(uParam0, 1, 550, 200);
	func_353(uParam0, 1, 453, 54);
	func_353(uParam0, 1, 492, 242);
	func_353(uParam0, 1, 731, 179);
	func_353(uParam0, 1, 685, 81);
	func_353(uParam0, 1, 828, 79);
	func_353(uParam0, 1, 982, 167);
	func_353(uParam0, 1, 1155, 70);
	func_353(uParam0, 1, 1293, 60);
	func_353(uParam0, 1, 1254, 191);
	func_353(uParam0, 1, 1433, 84);
	func_353(uParam0, 1, 1469, 172);
	func_353(uParam0, 1, 952, 367);
	func_353(uParam0, 1, 967, 469);
	func_353(uParam0, 1, 1246, 374);
	func_352(uParam0, 1, "FHP9", 777, 165, 1);
	func_352(uParam0, 1, "FHP10", 970, 179, 1);
	func_352(uParam0, 1, "FHP11", 1210, 184, 1);
	func_352(uParam0, 1, "FHP12", 537, 168, 0);
	func_352(uParam0, 1, "FHP13", 579, 229, 1);
	func_352(uParam0, 1, "FHP14", 355, 228, 1);
	func_352(uParam0, 1, "FHP15", 350, 117, 1);
}

void func_352(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1D686
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_353(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D6FF
{
	if (uParam0->f_21 < 20)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_354(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x1D743
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 4);
		uParam0->f_D1++;
	}
}

void func_355(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1D793
{
	if (uParam0->f_75 < 22)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_356(var uParam0, int iParam1, char* sParam2)//Position - 0x1D7E3
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (MISC::ARE_STRINGS_EQUAL(sParam2, ""))
	{
		return;
	}
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
}

void func_357(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x1D80E
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_130[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_130[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_130[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_130[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_358(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x1D8A7
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0 /*4*/] = { Var0 };
	uParam0->f_14[1 /*4*/] = { Var1 };
	uParam0->f_6C[0 /*4*/] = { Var2 };
	uParam0->f_6C[1 /*4*/] = { Var3 };
	uParam0->f_118[1 /*2*/] = { Var4 };
	uParam0->f_118[2 /*2*/] = { Var5 };
	uParam0->f_118[0 /*2*/] = { Var6 };
	uParam0->f_118[3 /*2*/] = { Var7 };
}

void func_359(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x1D94B
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_360(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x1D965
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0 /*2*/] = iParam10;
	uParam0->f_61[0 /*2*/].f_1 = iParam11;
	uParam0->f_61[1 /*2*/] = iParam12;
	uParam0->f_61[1 /*2*/].f_1 = iParam13;
	uParam0->f_61[2 /*2*/] = iParam14;
	uParam0->f_61[2 /*2*/].f_1 = iParam15;
	uParam0->f_61[3 /*2*/] = iParam16;
	uParam0->f_61[3 /*2*/].f_1 = iParam17;
	uParam0->f_61[4 /*2*/] = iParam18;
	uParam0->f_61[4 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_361(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12)//Position - 0x1DA33
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0] = iParam8;
	uParam0->f_1E[1] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { Param11 };
	uParam0->f_18D = { Param12 };
}

int func_362(int iParam0, int iParam1)//Position - 0x1DA9F
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_363(int iParam0)//Position - 0x1DAB5
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
	return 1;
}

void func_364()//Position - 0x1DB0F
{
	while (!func_365(&Local_153))
	{
		SYSTEM::WAIT(0);
	}
	func_107(24, 0);
	func_107(25, 0);
	func_107(26, 0);
	func_84(1, 4, 0);
	func_84(2, 4, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_150, 0);
	if (iLocal_151 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_151))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_151);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_153.f_1.f_18A - Local_153.f_1.f_18D, Local_153.f_1.f_18A + Local_153.f_1.f_18D, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (iLocal_47 != -1)
	{
		func_203(&iLocal_47);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_45 != -1)
	{
		func_151(&iLocal_45);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_365(var uParam0)//Position - 0x1DBBD
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		func_334(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
	{
		func_333(uParam0);
	}
	return 1;
}

