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
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
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
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	bool bLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 1132396544;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 0;
	var uLocal_95 = -1082130432;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 8;
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
	var uLocal_155 = -1;
	var uLocal_156 = 1092616192;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	struct<21> Local_160 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_161[15];
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	struct<2> Local_164 = { 0, 16 } ;
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
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	int iLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	bool bLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	float fLocal_254 = 0f;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	var uLocal_257[4] = { 0, 0, 0, 0 };
	var uLocal_258[4] = { 0, 0, 0, 0 };
	struct<429> Local_259 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	struct<27> Local_261 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 3;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 3;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 5;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 3;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 3;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 1;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 4;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 4;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 4;
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
	var uLocal_329 = 1;
	var uLocal_330 = 2;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	struct<3> Local_337[1];
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	struct<3> Local_340 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	bool bLocal_346 = 0;
	struct<28> Local_347 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 5;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 1097859072;
	var uLocal_394 = 1500;
	var uLocal_395 = 45;
	var uLocal_396 = 1103626240;
	var uLocal_397 = 5;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
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
	uLocal_70 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_71 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_76 = { 500f, 500f, 500f };
	fLocal_254 = 98f;
	fLocal_255 = 55f;
	fLocal_256 = 60f;
	iLocal_338 = 1;
	Local_340 = { -1284.367f, 295.7437f, 63.83044f };
	Local_341 = { -1286.218f, 292.573f, 63.7927f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_397(2);
		func_393();
	}
	MISC::SET_MISSION_FLAG(1);
	func_380();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_259.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_259);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x112
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x133
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x17E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x1BB
{
	if (func_5(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0x1E5
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x1F1
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x277
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

void func_8()//Position - 0x312
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (func_379(&Local_259))
	{
		func_378(&Local_259);
		if (Local_259.f_19A > 0)
		{
			if (func_377(&Local_259, 0))
			{
				func_375();
			}
		}
		else if (func_374(&Local_259, 31) > 5f)
		{
			func_397(2);
			func_393();
		}
	}
	else
	{
		func_352(&Local_259, &uLocal_391);
		func_351(&Local_259);
		func_350(&Local_259, &uLocal_339, 0);
		if (Local_259.f_19A < 9)
		{
			func_337(&Local_259, &Local_261, &uLocal_391);
		}
		if (Local_259.f_19A > 5 && !iLocal_342)
		{
			iLocal_342 = 1;
			Local_261.f_10[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_261.f_10[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_261.f_10[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_261.f_1A[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_261.f_1A[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_261.f_1A[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_259.f_19A > 2)
		{
			if (!func_336(&Local_259))
			{
				if (!iLocal_344)
				{
					if (func_335())
					{
						func_333(&Local_261);
						iLocal_344 = 1;
					}
				}
				func_303();
			}
			else
			{
				func_284(&Local_259, "Taxi Not Driveable", func_302(&Local_259));
			}
		}
		if (Local_259.f_19A > 3)
		{
			if (!bVar3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_259.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_261.f_4[iVar0]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_261.f_4[iVar0], Local_259.f_4, 1))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_261.f_4[iVar1]))
					{
						if (!PED::IS_PED_INJURED(Local_261.f_4[iVar1]))
						{
							TASK::CLEAR_PED_TASKS(Local_261.f_4[iVar1]);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_SMART_FLEE_PED(0, Local_259.f_2, 1000f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
							TASK::TASK_PERFORM_SEQUENCE(Local_261.f_4[iVar1], uVar2);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_259.f_19A == 9)
		{
			func_260(&Local_259, 0, 1);
			func_259(&Local_259, &Local_261, 1128792064);
		}
		switch (Local_259.f_19A)
		{
			case 0:
				func_258(&(Local_337[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_257(&Local_259, &Local_337);
				func_255();
				func_253();
				func_252();
				func_251(&Local_259, 16, 4f, 0);
				func_248(&Local_259, Local_340, Local_341, &Local_261);
				func_247(&Local_259);
				func_246(&Local_259, 1);
				break;
			
			case 1:
				if (func_243())
				{
					func_242();
					func_222();
					func_221(&Local_259);
					func_219(&(Local_259.f_64), 8);
					func_219(&(Local_259.f_64), 2048);
					func_219(&(Local_259.f_64), 256);
					Local_259.f_E = { Local_340 };
					Local_259.f_31 = 0;
					func_246(&Local_259, 3);
				}
				break;
			
			case 3:
				if (func_211(&Local_259, 3))
				{
					func_210(&Local_259, 1, 0);
					func_209(&uLocal_408, Local_340, 20f, 0);
					func_246(&Local_259, 5);
				}
				break;
			
			case 5:
				func_208();
				if (func_188(&Local_259, &Local_261))
				{
					STATS::STAT_GET_FLOAT(Local_259.f_1AC, &(Local_259.f_2A), -1);
					func_246(&Local_259, 15);
				}
				break;
			
			case 15:
				if (func_186(&Local_259, &Local_261))
				{
					func_182(&Local_259, 8, 1, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_261[0]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_261[0], 26, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_261[1]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_261[1], 26, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_261[2]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_261[2], 26, 1);
					}
					func_181(&Local_259);
					func_179(&Local_259, 0);
					func_178();
					func_176(&Local_259, 11);
					func_251(&Local_259, 10, 0, 0);
					func_251(&Local_259, 6, 0, 0);
					func_175();
					Local_259.f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 10f);
					func_173(&Local_261);
					func_246(&Local_259, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_259.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_259.f_2, Local_259.f_4, 0))
					{
						func_169(&Local_259, &Local_261);
						func_246(&Local_259, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_343)
				{
				}
				func_166(&Local_259);
				if (func_123(&Local_259, &Local_261, &Local_347, &uLocal_350))
				{
					func_122(&Local_347, -1, 1);
					if (func_121(&Local_261))
					{
						func_120(&Local_259, 0);
					}
					func_119(&Local_261);
					func_117(&Local_259);
					func_113(&Local_259);
					func_112(&Local_259);
					func_246(&Local_259, 27);
				}
				break;
			
			case 27:
				if (func_102(&Local_259, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_261.f_1A[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_259.f_1D, 4f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_259.f_1D, 4f, 0);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, 350.8689f, 0);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_259.f_3, uVar2);
					PED::SET_PED_KEEP_TASK(Local_259.f_3, 1);
					func_246(&Local_259, 29);
				}
				break;
			
			case 29:
				if (!PED::IS_PED_INJURED(Local_259.f_3))
				{
					if (func_101(Local_259.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_259.f_3, 60, 1);
					}
				}
				if (func_74(&Local_259, &uLocal_398))
				{
					func_11(1, &Local_259, 0);
					func_251(&Local_259, 31, 0, 0);
					func_246(&Local_259, 30);
				}
				break;
			
			case 30:
				if (!PED::IS_PED_INJURED(Local_259.f_3))
				{
					if (func_101(Local_259.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_259.f_3, 60, 1);
					}
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_259.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || func_9(Local_259.f_3, 1) > 50f) || func_374(&Local_259, 31) > 30f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_259.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (func_9(Local_259.f_3, 1) > 50f)
						{
						}
						if (func_374(&Local_259, 31) > 30f)
						{
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_259.f_3, 0);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_259.f_19D, 1862763509);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_259.f_3));
						func_393();
					}
				}
				else
				{
					func_393();
				}
				break;
			}
	}
}

float func_9(int iParam0, int iParam1)//Position - 0xA21
{
	return func_10(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_10(int iParam0, int iParam1, int iParam2)//Position - 0xA39
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

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0xA95
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0xAD1
{
	func_378(uParam0);
	if (func_50())
	{
		func_48();
	}
	func_46();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	func_43(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 0);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_40(uParam0->f_E, 1);
	func_38(uParam0->f_E, 1, 1114636288);
	func_37(&(uParam0->f_F4), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	if (func_34())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_25(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (func_24(Global_17C49.f_43C7, 4))
	{
		func_22(&(Global_17C49.f_43C7), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_17(uParam0->f_19B);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_13(&uLocal_81) * 1000f)), 12, 0);
}

float func_13(var uParam0)//Position - 0xC22
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)//Position - 0xC5E
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_15(var uParam0)//Position - 0xCA6
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_16(var uParam0)//Position - 0xCB6
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_17(int iParam0)//Position - 0xCC6
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)//Position - 0xCED
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)//Position - 0xDB2
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_33[0]);
}

void func_20(var uParam0)//Position - 0xDC6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_19D, 1862763509);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_21()//Position - 0xEBA
{
	return joaat("taxi");
}

void func_22(var uParam0, int iParam1)//Position - 0xEC7
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)//Position - 0xED7
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)//Position - 0xEEC
{
	return (uParam0 && iParam1) != 0;
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xEFB
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_33(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_32())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_31(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_33(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_31(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_26(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_26(int iParam0)//Position - 0xFCC
{
	if (func_28(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()//Position - 0x100D
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_28(int iParam0, int iParam1)//Position - 0x101E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_29(-1, 0) == 8;
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

int func_29(int iParam0, bool bParam1)//Position - 0x1069
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
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

int func_30()//Position - 0x10AA
{
	return Global_1407E1;
}

int func_31(int iParam0, var uParam1, var uParam2)//Position - 0x10B6
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

int func_32()//Position - 0x10E7
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)//Position - 0x110E
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

int func_34()//Position - 0x1131
{
	if (!func_36() && !func_35())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x115C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x1176
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, int iParam1)//Position - 0x1190
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_38(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x11AD
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_39(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_39(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, 0, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_39(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1222
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	uVar1 = fParam1;
	fVar2 = SYSTEM::COS(uVar1);
	fVar3 = SYSTEM::SIN(uVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

void func_40(struct<3> Param0, int iParam1)//Position - 0x126F
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_41(Param0, func_42()))
	{
		Var0 = { func_39(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_39(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, iParam1, 1);
	}
}

bool func_41(struct<3> Param0, struct<3> Param1)//Position - 0x12CE
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_42()//Position - 0x12F7
{
	struct<3> Var0;
	
	return Var0;
}

void func_43(int iParam0)//Position - 0x1303
{
	if (Global_38D7)
	{
		func_44(0, 0);
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
	if (!func_32())
	{
		Global_3839.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)//Position - 0x1373
{
	if (bParam0)
	{
		if (func_45(0))
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

int func_45(int iParam0)//Position - 0x13E7
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

void func_46()//Position - 0x1441
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15504[iVar0 /*17*/] && !Global_15504[iVar0 /*17*/].f_1)
		{
			if (Global_15504[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15504[iVar0 /*17*/].f_5 != 88 && Global_15504[iVar0 /*17*/].f_5 != 89) && Global_15504[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_15504[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)//Position - 0x14C8
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

void func_48()//Position - 0x1506
{
	Global_38DE = 0;
	func_49();
}

void func_49()//Position - 0x1516
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_50()//Position - 0x1537
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1)//Position - 0x1559
{
	switch (iParam0)
	{
		case 0:
			Global_17C49.f_43C7.f_16[0]++;
			func_52("Fares Completed ++ = ", Global_17C49.f_43C7.f_16[0]);
			break;
		
		case 1:
			Global_17C49.f_43C7.f_16[1]++;
			func_52("Fares Failed ++ = ", Global_17C49.f_43C7.f_16[1]);
			break;
		
		case 2:
			Global_17C49.f_43C7.f_16[2]++;
			func_52("Fares Accepted ++ ", Global_17C49.f_43C7.f_16[2]);
			break;
		
		case 3:
			Global_17C49.f_43C7.f_16[3]++;
			func_52("Fares Expired ++ ", Global_17C49.f_43C7.f_16[3]);
			break;
		
		case 13:
			Global_17C49.f_43C7.f_16[13]++;
			func_52("Passengers run ++ = ", Global_17C49.f_43C7.f_16[13]);
			break;
		
		case 14:
			Global_17C49.f_43C7.f_16[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_17C49.f_43C7.f_16[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_17C49.f_43C7.f_16[4])
				{
					Global_17C49.f_43C7.f_16[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_17C49.f_43C7.f_16[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_17C49.f_43C7.f_16[4]);
				}
			}
			break;
		
		case 5:
			Global_17C49.f_43C7.f_16[5] = (Global_17C49.f_43C7.f_16[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_17C49.f_43C7.f_16[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_17C49.f_43C7.f_16[6]++;
			}
			else
			{
				Global_17C49.f_43C7.f_16[6] = (Global_17C49.f_43C7.f_16[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_17C49.f_43C7.f_16[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_17C49.f_43C7.f_16[7] = (Global_17C49.f_43C7.f_16[7] + iParam1);
			}
			else
			{
				Global_17C49.f_43C7.f_16[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_17C49.f_43C7.f_16[7]);
			break;
		
		case 8:
			Global_17C49.f_43C7.f_16[8]++;
			func_52("Taxis wrecked ++ = ", Global_17C49.f_43C7.f_16[8]);
			break;
		
		case 9:
			Global_17C49.f_43C7.f_16[9]++;
			func_52("Horn Honked ++ = ", Global_17C49.f_43C7.f_16[9]);
			break;
		
		case 10:
			Global_17C49.f_43C7.f_16[10] = (Global_17C49.f_43C7.f_16[10] + iParam1);
			func_52("Total Money Earned = ", Global_17C49.f_43C7.f_16[10]);
			break;
		
		case 11:
			Global_17C49.f_43C7.f_16[11] = (Global_17C49.f_43C7.f_16[11] + iParam1);
			func_52("Total Tips Earned = ", Global_17C49.f_43C7.f_16[11]);
			break;
		
		case 12:
			if (iParam1 > Global_17C49.f_43C7.f_16[12])
			{
				Global_17C49.f_43C7.f_16[12] = iParam1;
				func_52("New Highest Tip = ", Global_17C49.f_43C7.f_16[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_17C49.f_43C7.f_16[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)//Position - 0x194A
{
}

void func_53(var uParam0)//Position - 0x1952
{
	func_51(0, 0);
	if (uParam0->f_19B != 9)
	{
		func_397(1);
		func_63(15, 1);
	}
	func_219(&(Global_17C49.f_43C7), 1024);
	if (!func_24(Global_17C49.f_43C7, 64))
	{
		func_54(func_61(func_62(uParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)//Position - 0x19A6
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
		func_60((891 + iParam0), 1, -1, 1);
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
		func_55();
	}
}

void func_55()//Position - 0x1A8E
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
		func_59(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()//Position - 0x1F4F
{
	if (func_57(0))
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

bool func_57(bool bParam0)//Position - 0x1F9A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_58()//Position - 0x1FC5
{
	return Global_5F7C;
}

int func_59(int iParam0, int iParam1)//Position - 0x1FD0
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

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2021
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
		iParam2 = func_30();
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

int func_61(int iParam0)//Position - 0x227E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(var uParam0)//Position - 0x2314
{
	return uParam0->f_19B;
}

int func_63(int iParam0, int iParam1)//Position - 0x2321
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)//Position - 0x233C
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_73(&Global_26D4DB))
	{
		if (func_71(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_26D4DB, iParam0))
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

int func_65(var uParam0, int iParam1)//Position - 0x23C0
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	func_68(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)//Position - 0x2446
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(var uParam0, int iParam1)//Position - 0x2496
{
	return (*uParam0)[iParam1] == 61;
}

void func_68(var uParam0)//Position - 0x24A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_69(&(uParam0->f_3E), (8f - 0.5f));
}

void func_69(var uParam0, float fParam1)//Position - 0x24DE
{
	uParam0->f_1 = (func_14(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_70(var uParam0, int iParam1)//Position - 0x250C
{
	(*uParam0)[iParam1] = 61;
}

bool func_71(var uParam0, int iParam1)//Position - 0x251C
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)//Position - 0x252E
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

bool func_73(var uParam0)//Position - 0x255B
{
	return uParam0->f_44 == 1;
}

int func_74(var uParam0, var uParam1)//Position - 0x2569
{
	switch (iLocal_159)
	{
		case 0:
			if (!func_50() && func_374(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				func_100(uParam0);
				func_22(&(Global_17C49.f_43C7), 4096);
				func_98(uParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_99(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_97(1);
				iLocal_159 = 6;
			}
			break;
		
		case 6:
			if (!func_92(uParam1, 0))
			{
				func_75(uParam0);
				func_251(uParam0, 0, 0, 0);
				func_97(0);
				iLocal_159 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(var uParam0)//Position - 0x263B
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0)
	{
		func_76(func_89(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2679
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
	func_77(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2760
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_88();
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
					func_87(99, 1);
					func_86(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_85(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_84(5))
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
							func_86(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_84(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_86(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_property"), iParam3);
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
									func_86(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_84(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_83(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				
				case 1:
					func_87(97, iParam3);
					break;
				
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_80(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_80(iVar1);
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
					func_86(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_total_cash_earned"), iParam3);
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
	func_79(iParam0);
	if (Global_8861 == 15)
	{
		func_78(0);
	}
	return 1;
}

void func_78(bool bParam0)//Position - 0x2D5F
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

void func_79(int iParam0)//Position - 0x2FE1
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

void func_80(int iParam0)//Position - 0x303B
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_82() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_82() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_81(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_81(int iParam0)//Position - 0x30FE
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

int func_82()//Position - 0x3179
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0)//Position - 0x3186
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_84(int iParam0)//Position - 0x31A6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_82() /*8053*/].f_167C.f_A, iParam0);
}

int func_85(bool bParam0)//Position - 0x31E2
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
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_86(int iParam0, int iParam1)//Position - 0x3299
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)//Position - 0x32BC
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

void func_88()//Position - 0x3319
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

int func_89()//Position - 0x338E
{
	func_90();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_90()//Position - 0x33A7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_5(iVar0) && (!func_91(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_5(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_91(int iParam0)//Position - 0x34A4
{
	return Global_8861 == iParam0;
}

int func_92(var uParam0, int iParam1)//Position - 0x34B2
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_96(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_96(&(uParam0->f_5));
				func_95(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_94(&(uParam0->f_5)) > 0.33f)
			{
				func_93(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_94(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_96(&(uParam0->f_5));
			func_95(uParam0, 1051260355);
		}
		else if (func_94(&(uParam0->f_5)) > 0.33f)
		{
			func_93(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_93(var uParam0)//Position - 0x35B5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_94(var uParam0)//Position - 0x35CB
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_95(var uParam0, int iParam1)//Position - 0x360A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_96(var uParam0)//Position - 0x3630
{
	func_69(uParam0, 0f);
}

void func_97(int iParam0)//Position - 0x363F
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_98(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x3653
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_96(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_99(var uParam0)//Position - 0x36BE
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_100(var uParam0)//Position - 0x3758
{
	int iVar0;
	
	Local_160.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_160.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_51(11, uParam0->f_38);
	func_51(12, uParam0->f_38);
	iLocal_56[1] = uParam0->f_38;
	iLocal_56[2] = uParam0->f_38;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3C)
	{
		Local_160.f_4[iVar0 /*3*/] = { uParam0->f_3C[iVar0 /*3*/] };
		if (MISC::IS_BIT_SET(Local_160.f_4[iVar0 /*3*/], 2))
		{
			Local_160.f_3 = (Local_160.f_3 + IntToFloat(uParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_160 = uParam0->f_19B;
	Local_160.f_14 = ((Local_160.f_1 + Local_160.f_2) + Local_160.f_3);
}

float func_101(int iParam0, struct<3> Param1, int iParam2)//Position - 0x3807
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam2);
}

int func_102(var uParam0, bool bParam1)//Position - 0x3830
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_111(uParam0) && func_108(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					func_103(uParam0);
				}
			}
			else
			{
				func_103(uParam0);
			}
		}
		else if (!func_111(uParam0))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_103(var uParam0)//Position - 0x38CC
{
	struct<3> Var0;
	
	if (func_106(uParam0->f_1D))
	{
		Var0 = { uParam0->f_11 };
	}
	else
	{
		Var0 = { uParam0->f_1D };
	}
	func_104(uParam0, Var0);
}

void func_104(var uParam0, struct<3> Param1)//Position - 0x3902
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_105(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_105(int iParam0, int iParam1)//Position - 0x3A22
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_106(struct<3> Param0)//Position - 0x3A8E
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)//Position - 0x3AB8
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_51, iParam1) && !func_50());
	}
	return func_50();
}

int func_108(var uParam0, bool bParam1, float fParam2)//Position - 0x3AE5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_110();
				return 1;
			}
			else if (func_109(uParam0->f_4, fParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_109(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x3B65
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
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
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

void func_110()//Position - 0x3CE7
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	}
}

int func_111(var uParam0)//Position - 0x3D02
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_112(var uParam0)//Position - 0x3D37
{
	if (uParam0->f_38 >= uParam0->f_3B)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.4f));
	}
	else if (uParam0->f_38 < uParam0->f_3B && uParam0->f_38 >= uParam0->f_3A)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.15f));
	}
	else
	{
		uParam0->f_38 = 0;
	}
	if (!func_24(uParam0->f_37, 1))
	{
		func_219(&(uParam0->f_37), 1);
	}
}

void func_113(var uParam0)//Position - 0x3DAB
{
	func_115();
	HUD::CLEAR_PRINTS();
	if (uParam0->f_38 < uParam0->f_3A)
	{
		if (uParam0->f_19B == 0)
		{
			func_182(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_182(uParam0, 103, 1, 0, 0);
		}
		func_114(1);
	}
	else if (uParam0->f_38 >= uParam0->f_3B)
	{
		func_182(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_182(uParam0, 102, 1, 0, 0);
	}
	func_251(uParam0, 16, 4f, 0);
}

void func_114(int iParam0)//Position - 0x3E1E
{
	Global_17742.f_DD = iParam0;
}

void func_115()//Position - 0x3E2E
{
	Global_38DE = 0;
	func_116();
}

void func_116()//Position - 0x3E3E
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_413F = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_117(var uParam0)//Position - 0x3E62
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_118(fVar0);
	iLocal_56[4] = SYSTEM::CEIL(fVar0);
	iLocal_56[5] = SYSTEM::CEIL(fVar0);
	func_51(4, SYSTEM::CEIL(fVar0));
	func_51(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_118(float fParam0)//Position - 0x3EB4
{
	return (fParam0 * 0.0006213712f);
}

void func_119(var uParam0)//Position - 0x3EC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_49[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_49[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_244 = 0;
}

void func_120(var uParam0, int iParam1)//Position - 0x3EFE
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

bool func_121(var uParam0)//Position - 0x3F2C
{
	return ((uParam0->f_37[0] && uParam0->f_37[1]) && uParam0->f_37[2]);
}

void func_122(var uParam0, int iParam1, bool bParam2)//Position - 0x3F53
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_123(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3F77
{
	var uVar0;
	
	func_161(uParam0, uParam2, uParam1);
	if (func_160(uParam0) >= 14)
	{
		if (iLocal_249)
		{
			if (((func_374(uParam0, 11) > 20f && !func_50()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !bLocal_247)
			{
				bLocal_247 = true;
			}
		}
	}
	if (uParam1->f_5A < 2)
	{
		if (uParam1->f_41 && !iLocal_249)
		{
			func_154(uParam0, uParam1, 0, uParam1->f_41);
			uParam1->f_41 = 0;
		}
		else
		{
			func_154(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_42 && uParam1->f_5A < 1)
		{
			if (!PED::IS_PED_INJURED((*uParam1)[uParam1->f_5F]) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[uParam1->f_5F], 0))
			{
				if (!iLocal_253)
				{
					if (func_153(uParam1[uParam1->f_5F], &(uParam1->f_5E)))
					{
						func_152(&(uParam1->f_5F));
					}
				}
				else if (!uParam1->f_48)
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[uParam1->f_5F]);
					TASK::TASK_STAND_STILL((*uParam1)[uParam1->f_5F], 500);
					uParam1->f_48 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_3E)
	{
		func_154(uParam0, uParam1, 1, 0);
	}
	if ((((PED::IS_PED_INJURED((*uParam1)[0]) || PED::IS_PED_INJURED((*uParam1)[1])) || PED::IS_PED_INJURED((*uParam1)[2])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[1], uParam0->f_4, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_19F = 14;
		func_284(uParam0, "Passenger injured.", 14);
	}
	if (!func_138(uParam0, uParam1))
	{
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE((*uParam1)[0], 0, 0);
			bLocal_251 = true;
			iLocal_252 = 0;
		}
	}
	else
	{
		if (bLocal_251)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, 0))
			{
				if (!iLocal_252)
				{
					TASK::TASK_ENTER_VEHICLE((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_252 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_284(uParam0, "Passenger left behind.", 8);
				}
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0) == (*uParam1)[0])
			{
				func_173(uParam1);
				bLocal_251 = false;
			}
		}
		func_135(uParam0, 1097859072, 1117782016);
		func_134(uParam0, &(uParam0->f_2B));
		if (!bLocal_251 && !PED::IS_PED_IN_VEHICLE((*uParam1)[0], uParam0->f_4, 0))
		{
			func_284(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_5A)
		{
			case 0:
				if (!uParam1->f_33[2])
				{
					if (func_101(uParam0->f_4, uParam1->f_10[2 /*3*/], 1) < 150f && !iLocal_253)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_253 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_10[2 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[2]))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_24[2]));
								func_115();
								if (uParam1->f_5F == 2)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[2], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								if (func_374(uParam0, 6) < fLocal_254)
								{
									uParam1->f_37[2] = 1;
									func_182(uParam0, 38, 1, 0, 0);
									uParam0->f_38 += 3;
								}
								else
								{
									uParam1->f_37[2] = 0;
									func_182(uParam0, 39, 1, 0, 0);
									uParam0->f_38 = (uParam0->f_38 - 3);
								}
								uParam1->f_5A++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_130((*uParam1)[2], uParam0->f_4) && func_374(uParam0, 20) > 1f) && !uParam1->f_33[2])
				{
					func_119(uParam1);
					uParam1->f_33[2] = 1;
					uParam0->f_1A = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_22 = 250.7f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				}
				else if (!func_127(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					func_125(uParam3);
					func_122(uParam2, -1, 0);
					func_251(uParam0, 6, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_182(uParam0, 40, 1, 0, 0);
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_24[1]))
					{
						func_173(uParam1);
					}
					iLocal_253 = 0;
					uParam1->f_5A++;
				}
				break;
			
			case 2:
				if (!uParam1->f_33[1])
				{
					if (func_101(uParam0->f_4, uParam1->f_10[1 /*3*/], 1) < 175f && !iLocal_253)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_253 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_10[1 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[1]))
							{
								func_115();
								HUD::REMOVE_BLIP(&(uParam1->f_24[1]));
								func_124(&(uParam0->f_4), uParam1[1], uParam1->f_1A[1 /*3*/]);
								if (func_374(uParam0, 6) < fLocal_255)
								{
									uParam1->f_37[1] = 1;
									func_182(uParam0, 41, 1, 0, 0);
									uParam0->f_38 += 2;
								}
								else
								{
									uParam1->f_37[1] = 0;
									func_182(uParam0, 42, 1, 0, 0);
									uParam0->f_38 = (uParam0->f_38 - 2);
								}
								uParam1->f_5A++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_130((*uParam1)[1], uParam0->f_4) && func_374(uParam0, 20) > 1f) && !uParam1->f_33[1])
				{
					uParam1->f_33[1] = 1;
					uParam0->f_1A = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_22 = 216.5f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				}
				else if (!func_127(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					func_125(uParam3);
					func_122(uParam2, -1, 0);
					func_251(uParam0, 6, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_182(uParam0, 43, 1, 0, 0);
					iLocal_253 = 0;
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_24[0]))
					{
						func_173(uParam1);
					}
					uParam1->f_5A++;
				}
				break;
			
			case 4:
				if (!uParam1->f_33[0])
				{
					if (func_101(uParam0->f_4, uParam1->f_10[0 /*3*/], 1) < 100f && !iLocal_253)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_253 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_10[0 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_24[0]));
							uParam1->f_33[0] = 1;
							func_115();
							if (func_374(uParam0, 6) < fLocal_256)
							{
								uParam1->f_37[0] = 1;
								uParam0->f_38 += 2;
							}
							else
							{
								uParam1->f_37[0] = 0;
								uParam0->f_38 = (uParam0->f_38 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_124(var uParam0, var uParam1, struct<3> Param2)//Position - 0x46CA
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, 0) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param2, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar2 = 131072;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, 0) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param2, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam1, *uParam0, 2, 0, 0))
			{
				iVar2 = 262144;
			}
			else
			{
				iVar2 = 16;
			}
			Var4 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar2 == 16)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var4, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, uVar3);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_LEAVE_VEHICLE(0, *uParam0, iVar2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var4, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, uVar3);
			}
		}
	}
}

void func_125(var uParam0)//Position - 0x486C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_48();
}

var func_126()//Position - 0x48AC
{
	var uVar0;
	
	return uVar0;
}

int func_127(var uParam0)//Position - 0x48B6
{
	if (func_50())
	{
		return 1;
	}
	if (func_129(uParam0, 17))
	{
		return 1;
	}
	if (func_129(uParam0, 14))
	{
		return 1;
	}
	if (func_128(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128(var uParam0)//Position - 0x48F5
{
	return uParam0->f_6E;
}

bool func_129(var uParam0, int iParam1)//Position - 0x4901
{
	return func_16(&(uParam0->f_92[iParam1 /*3*/]));
}

int func_130(int iParam0, int iParam1)//Position - 0x4915
{
	if (func_131(iParam0, iParam1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1)//Position - 0x4939
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0, int iParam1)//Position - 0x495A
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_133(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_133(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_133(var uParam0)//Position - 0x49C6
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

void func_134(var uParam0, var uParam1)//Position - 0x4A00
{
	STATS::STAT_GET_FLOAT(uParam0->f_1AC, uParam1, -1);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

void func_135(var uParam0, float fParam1, float fParam2)//Position - 0x4A21
{
	if (func_111(uParam0) && func_24(uParam0->f_2C, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_137(uParam0))
		{
			if (!func_129(uParam0, 2))
			{
				func_176(uParam0, 2);
			}
			else if (func_111(uParam0))
			{
				if (func_374(uParam0, 2) > fParam1 && !func_129(uParam0, 14))
				{
					if (func_36())
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					func_251(uParam0, 2, 0, 0);
					if (func_129(uParam0, 10))
					{
						func_251(uParam0, 10, 0, 0);
					}
				}
				if (!func_129(uParam0, 3))
				{
					func_251(uParam0, 3, 0, 0);
				}
				else if (func_374(uParam0, 3) >= fParam2)
				{
					func_136(uParam0, 3, 0);
					func_284(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_129(uParam0, 2))
			{
				func_136(uParam0, 2, 0);
			}
			if (func_129(uParam0, 3))
			{
				func_136(uParam0, 3, 0);
			}
		}
	}
}

void func_136(var uParam0, int iParam1, bool bParam2)//Position - 0x4B3C
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_93(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_93(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_137(var uParam0)//Position - 0x4B85
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_138(var uParam0, var uParam1)//Position - 0x4BAE
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		func_284(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_151(uParam0, &(uParam1->f_28));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (PED::IS_PED_INJURED((*uParam1)[iVar0]))
			{
				func_284(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_139(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139(var uParam0)//Position - 0x4C1F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
			}
			func_140(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_140(var uParam0, bool bParam1)//Position - 0x4C60
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
				func_146(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
				HUD::CLEAR_PRINTS();
				if (func_111(uParam0))
				{
					func_182(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_146(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_141(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_A));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_19B == 5 && uParam0->f_19A == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
				}
				else if (uParam0->f_19B != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_141(var uParam0, bool bParam1, bool bParam2)//Position - 0x4D7E
{
	if (bParam1)
	{
		func_378(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_A))
	{
		uParam0->f_A = func_144(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_A, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_A, 1);
		func_142(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_182(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_142(var uParam0)//Position - 0x4DD9
{
	func_251(uParam0, 14, 0, 0);
	func_143();
}

void func_143()//Position - 0x4DEF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_144(int iParam0, bool bParam1, bool bParam2)//Position - 0x4E18
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)//Position - 0x4EBC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x4ED3
{
	if (!func_24(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_182(uParam0, iParam3, 1, 0, 0);
		func_219(uParam1, iParam2);
	}
}

void func_147(var uParam0)//Position - 0x4EFF
{
	func_136(uParam0, 14, 0);
	func_136(uParam0, 15, 0);
	func_150();
	if (func_149())
	{
		func_148(0);
	}
}

void func_148(int iParam0)//Position - 0x4F29
{
	Global_413F = iParam0;
}

int func_149()//Position - 0x4F36
{
	if (Global_413F == 1)
	{
		return 1;
	}
	return 0;
}

void func_150()//Position - 0x4F4D
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_151(var uParam0, var uParam1)//Position - 0x4F76
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_129(uParam0, 14))
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) > 0)
				{
					HUD::SET_BLIP_ALPHA(*uParam1, 0);
				}
				func_141(uParam0, 0, 0);
				func_182(uParam0, 2, 1, 1, 0);
			}
			else if (func_374(uParam0, 14) > 20f)
			{
				func_284(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
			}
			if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_A));
			}
			if ((HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) < 255) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
			{
				HUD::SET_BLIP_ALPHA(*uParam1, 255);
				HUD::SET_BLIP_ROUTE(*uParam1, 1);
			}
		}
	}
}

void func_152(var uParam0)//Position - 0x5059
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_153(var uParam0, var uParam1)//Position - 0x507A
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_154(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x517A
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_247)
	{
		if (!uParam1->f_3B)
		{
			if (!func_50())
			{
				func_158(&(uParam1->f_63));
				uParam1->f_3B = 1;
				func_157(uParam0, uParam1);
				uParam1->f_5B = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (bLocal_248)
	{
		if (!uParam1->f_3C)
		{
			if (!func_50())
			{
				uParam1->f_3C = 1;
				func_156(uParam0, uParam1);
				uParam1->f_5B = MISC::GET_GAME_TIMER();
				uParam1->f_5C = MISC::GET_GAME_TIMER();
			}
		}
	}
	uVar0 = func_155(uParam0);
	if (uParam1->f_3B || uParam1->f_3C)
	{
		fVar2 = ENTITY::GET_ENTITY_SPEED(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_3C)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_3B)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_58, "speed", fVar4, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_59, "speed", fVar4, 0);
		}
	}
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) >= 40f && !uParam1->f_3F)
	{
		uParam1->f_5B = MISC::GET_GAME_TIMER();
		uParam1->f_3F = 1;
	}
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 40f && uParam1->f_3F) && !bParam2)
	{
		uParam1->f_5B = MISC::GET_GAME_TIMER();
		uParam1->f_3F = 0;
		uParam1->f_3E = 0;
	}
	if (bParam2 && !uParam1->f_3F)
	{
		uParam1->f_5B = MISC::GET_GAME_TIMER();
		uParam1->f_3F = 1;
	}
	if (((uParam1->f_3B || uParam1->f_3C) && !uParam1->f_3F) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_3D = 1;
			uParam1->f_3F = 0;
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_58, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_5B);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_3D = 1;
				uParam1->f_3F = 0;
			}
			else
			{
				fVar8 = (1f - (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar6)));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_58, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_3B || uParam1->f_3C) && ((uParam1->f_3D && !uParam1->f_3E) || bParam2))
	{
		if (uParam1->f_3F)
		{
			iVar7 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_5B);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_3E = 1;
			}
			else
			{
				fVar8 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar7));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_53[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_53[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_4E[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_4E[iVar1], "smoke", fVar8, 0);
						}
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_49[iVar1]))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_58, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
	}
}

int func_155(var uParam0)//Position - 0x565C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(uLocal_258[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_258[iVar0]), 1);
			}
			if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_249)
				{
					iLocal_249 = 1;
				}
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_258[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_258[iVar0]), 1);
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!MISC::IS_BIT_SET(uLocal_257[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_257[iVar0]), 1);
			}
			if (!iLocal_249)
			{
				iLocal_249 = 1;
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_257[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_257[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_156(var uParam0, var uParam1)//Position - 0x5733
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uParam1->f_49[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_229, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_49[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_231, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_49[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_230, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), 0, 0, 0);
		uParam1->f_49[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_232, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar0], "smoke", 1f, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_49[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_157(var uParam0, var uParam1)//Position - 0x5825
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uParam1->f_58 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_59 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	GRAPHICS::_0x8CDE909A0370BB3A(1);
}

void func_158(var uParam0)//Position - 0x588A
{
	func_159(uParam0, 0f);
}

void func_159(var uParam0, float fParam1)//Position - 0x5899
{
	uParam0->f_1 = (func_14(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_160(var uParam0)//Position - 0x58C7
{
	return uParam0->f_1A0;
}

void func_161(var uParam0, var uParam1, var uParam2)//Position - 0x58D4
{
	if (!func_24(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_374(uParam0, 9) > 1f)
					{
						func_165(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						func_182(uParam0, 50, 1, 0, 0);
						func_251(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam2->f_28))
						{
							HUD::SET_BLIP_ALPHA(uParam2->f_28, 0);
							HUD::SET_BLIP_ROUTE(uParam2->f_28, 0);
						}
						uParam0->f_8C = 1;
						uParam0->f_19C = 1;
					}
				}
				break;
			
			case 1:
				if (!func_50() && func_374(uParam0, 9) > 4f)
				{
					func_182(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_164("TAXI_OBJ_POL", 0, 0))
				{
					func_182(uParam0, 51, 0, 0, 0);
					uParam0->f_19C = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_163(uParam0)))
				{
					func_165(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_51(6, 0);
				}
				if (!func_128(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_374(uParam0, 16) > 10f)
						{
							func_182(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (HUD::DOES_BLIP_EXIST(uParam2->f_28))
					{
						HUD::SET_BLIP_ALPHA(uParam2->f_28, 255);
						HUD::SET_BLIP_ROUTE(uParam2->f_28, 1);
					}
					uParam0->f_8C = 0;
					uParam0->f_19C = 4;
				}
				break;
			
			case 4:
				if (!func_50())
				{
					func_182(uParam0, 53, 1, 0, 1);
					func_51(7, func_163(uParam0));
					func_165(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_50())
				{
					func_162(uParam1, -1, 4);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

void func_162(var uParam0, int iParam1, int iParam2)//Position - 0x5AB4
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_163(var uParam0)//Position - 0x5ACD
{
	return uParam0->f_6A;
}

bool func_164(char* sParam0, int iParam1, int iParam2)//Position - 0x5AD9
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_165(var uParam0, int iParam1)//Position - 0x5AF7
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_166(var uParam0)//Position - 0x5B0E
{
	if (func_168(uParam0))
	{
		func_167(uParam0);
	}
}

void func_167(var uParam0)//Position - 0x5B25
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_136(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_374(uParam0, 20) > 3f)
				{
					func_182(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_24(uParam0->f_51, 262144) || !func_24(uParam0->f_51, 1048576))
				{
					if (func_374(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_182(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_24(uParam0->f_52, 67108864))
				{
					if (func_374(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_182(uParam0, 85, 1, 0, 0);
						func_136(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_374(uParam0, 20) > 8f)
				{
					func_182(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_51, 262144) || func_24(uParam0->f_52, 67108864))
			{
				if (!func_129(uParam0, 22))
				{
					func_176(uParam0, 22);
				}
			}
			if (func_129(uParam0, 22) && func_374(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_24(uParam0->f_51, 1048576))
					{
						func_182(uParam0, 84, 1, 0, 0);
						func_136(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_24(uParam0->f_52, 134217728))
					{
						func_182(uParam0, 85, 1, 0, 0);
						func_136(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_168(var uParam0)//Position - 0x5DA0
{
	return uParam0->f_78;
}

void func_169(var uParam0, var uParam1)//Position - 0x5DAC
{
	func_172(uParam0, 1000);
	if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[1])) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[2]))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
	}
	func_170();
	func_147(uParam0);
}

void func_170()//Position - 0x5E0D
{
	Global_38DE = 0;
	func_171();
}

void func_171()//Position - 0x5E1D
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

void func_172(var uParam0, int iParam1)//Position - 0x5E74
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
}

void func_173(var uParam0)//Position - 0x5EAE
{
	if (!uParam0->f_33[2])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_24[2]))
		{
			uParam0->f_24[2] = func_174(uParam0->f_10[2 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[2];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_24[2]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_24[2], 1);
		}
	}
	else if (!uParam0->f_33[1])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_24[1]))
		{
			uParam0->f_24[1] = func_174(uParam0->f_10[1 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[1];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_24[1]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_24[1], 1);
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_24[0]))
		{
			uParam0->f_24[0] = func_174(uParam0->f_10[0 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[0];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_24[0]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_24[0], 1);
		}
	}
}

var func_174(struct<3> Param0, int iParam1)//Position - 0x5FB0
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_175()//Position - 0x5FDC
{
	func_219(&(Local_259.f_37), 2);
	func_219(&(Local_259.f_37), 4);
	func_219(&(Local_259.f_37), 16);
	func_219(&(Local_259.f_37), 64);
	func_219(&(Local_259.f_37), 256);
	func_219(&(Local_259.f_37), 512);
	func_219(&(Local_259.f_37), 1024);
	func_219(&(Local_259.f_37), 2048);
	func_219(&(Local_259.f_37), 4096);
	func_219(&(Local_259.f_37), 1073741824);
	func_219(&uLocal_391, 2);
}

void func_176(var uParam0, int iParam1)//Position - 0x6060
{
	func_177(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_177(var uParam0)//Position - 0x6074
{
	if (!func_16(uParam0))
	{
		func_96(uParam0);
	}
}

void func_178()//Position - 0x608C
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_2D[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_2D[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_2D[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_2D[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_2D[4]);
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_179(var uParam0, bool bParam1)//Position - 0x60FA
{
	func_180(uParam0);
	if (bParam1)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
		{
			uParam0->f_9 = func_174(uParam0->f_11, 1);
		}
		else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
		{
			HUD::SET_GPS_FLAGS(1, 0);
			HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
			HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
			HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
		}
	}
}

void func_180(var uParam0)//Position - 0x615E
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

void func_181(var uParam0)//Position - 0x6182
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	func_172(uParam0, 1000);
}

void func_182(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x61A5
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_251(uParam0, 16, 4f, 0);
		if (func_183(uParam0))
		{
			func_48();
		}
	}
	func_210(uParam0, iParam2, bParam3);
}

int func_183(var uParam0)//Position - 0x61DA
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_8F, 24);
	if (func_50())
	{
		Var1 = { func_185() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_8F, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_184(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184(char* sParam0)//Position - 0x6240
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_185()//Position - 0x6250
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

bool func_186(var uParam0, var uParam1)//Position - 0x6274
{
	return ((func_187((*uParam1)[0], uParam0) && func_187((*uParam1)[1], uParam0)) && func_187((*uParam1)[2], uParam0));
}

int func_187(int iParam0, var uParam1)//Position - 0x62A7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_284(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_284(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_188(var uParam0, var uParam1)//Position - 0x62F4
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_207(uParam0, (*uParam1)[0]);
	func_207(uParam0, (*uParam1)[1]);
	func_207(uParam0, (*uParam1)[2]);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			func_205(uParam0, 1);
			if (func_34())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				func_169(uParam0, uParam1);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_203(uParam0);
		}
		else
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
				func_202(uParam0, uParam1, 0);
			}
			if (func_129(uParam0, 9))
			{
				func_136(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
				}
			}
			if (!PED::IS_PED_INJURED((*uParam1)[0]))
			{
				if (!uParam0->f_8E)
				{
					fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_8D)
					{
						if (func_201(uParam0, (*uParam1)[iLocal_237]) > 50f || func_13(&uLocal_238) > 5f)
						{
							func_284(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_30)
					{
						case 0:
							if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_237], 713668775) != 1 || ((func_10(PLAYER::PLAYER_PED_ID(), (*uParam1)[iLocal_237], 1) < 20f && func_200((*uParam1)[iLocal_237], uParam0->f_B, 1) <= 28f) && func_200(uParam0->f_4, uParam0->f_B, 1) <= 28f))
							{
								if (func_198(uParam0, uParam1, 40f))
								{
									uParam0->f_30++;
								}
							}
							break;
						
						case 1:
							if (func_197(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_8A = 1;
								if (bLocal_85)
								{
									iVar0 = func_196(uParam0, &uVar1);
									if (!ENTITY::IS_ENTITY_DEAD(iVar0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[iVar3]);
									TASK::CLEAR_SEQUENCE_TASK(&uVar2);
									TASK::OPEN_SEQUENCE_TASK(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1750, 2250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(750, 1250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									TASK::CLOSE_SEQUENCE_TASK(uVar2);
									TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_30++;
							}
							else if (!func_137(uParam0))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], 242628503) != 0) && func_201(uParam0, (*uParam1)[0]) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
								TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_F3);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[0], uParam0->f_F3);
							}
							break;
						
						case 2:
							if (bLocal_85)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_195(uParam0, 1))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
										func_284(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_194(uParam0, uParam1);
							if (func_201(uParam0, (*uParam1)[0]) < fVar4 || func_34())
							{
								if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], 0) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], 0)) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], 0))
									{
										func_180(uParam0);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[1], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[2], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 104, 1);
										func_136(uParam0, 5, 0);
										HUD::CLEAR_GPS_FLAGS();
										return 1;
									}
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 1000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_193(uParam1))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								func_284(uParam0, "Left Passenger", 8);
							}
							if ((func_192(uParam0, uParam1) || func_191(uParam0, uParam1)) || func_190(uParam0, uParam1))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[2], func_39(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_237 = 2;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[1], func_39(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_237 = 1;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[0], uParam0->f_B, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_237 = 0;
								}
								HUD::REMOVE_BLIP(&(uParam0->f_8));
								uParam0->f_8 = func_189((*uParam1)[iLocal_237], 0, 0);
								func_96(&uLocal_238);
								uParam0->f_30 = 0;
								iLocal_78 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_284(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_284(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_189(int iParam0, bool bParam1, bool bParam2)//Position - 0x6921
{
	return func_144(iParam0, !bParam1, bParam2);
}

int func_190(var uParam0, var uParam1)//Position - 0x6934
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (func_201(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(var uParam0, var uParam1)//Position - 0x6987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (func_200(uParam0->f_4, uParam0->f_B, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_192(var uParam0, var uParam1)//Position - 0x69DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (func_200((*uParam1)[iVar0], uParam0->f_B, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_193(var uParam0)//Position - 0x6A35
{
	if ((!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1])) && !PED::IS_PED_INJURED((*uParam0)[2]))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], 0) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], 0)) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], 0))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], 0) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], 0)) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], 0))
			{
				if (!func_16(&uLocal_241))
				{
					func_177(&uLocal_241);
				}
				else if (func_94(&uLocal_241) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_194(var uParam0, var uParam1)//Position - 0x6AEF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iLocal_237]))
		{
			if (func_9((*uParam1)[iLocal_237], 1) > 30f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_237], -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_237], 242628503) == 1)
				{
					func_284(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_195(var uParam0, bool bParam1)//Position - 0x6B60
{
	int iVar0[3];
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1]))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_196(var uParam0, var uParam1)//Position - 0x6C16
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_197(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6C88
{
	if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0]))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_237]) && func_9((*uParam1)[iLocal_237], 1) < fParam3)
		{
			if (!func_129(uParam0, 5))
			{
				func_251(uParam0, 5, 0, 0);
			}
		}
		else if (func_129(uParam0, 5))
		{
			func_136(uParam0, 5, 0);
		}
		if (((func_374(uParam0, 5) > IntToFloat(iParam2) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_237])) || func_9((*uParam1)[iLocal_237], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(var uParam0, var uParam1, float fParam2)//Position - 0x6D32
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	var uVar4;
	
	uVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, uVar4) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var2.f_1 = (Var2.f_1 + 1f);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6A3E157475DBFCD9(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_78)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[1], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[2], 1);
			iLocal_78 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_237], 0) <= fParam2 && !uParam0->f_8E) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				iVar3 = func_199(&(uParam0->f_199), Var0, Var1, 0);
				if (iVar3 == 0)
				{
					iLocal_78 = 2;
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			func_182(uParam0, 4, 1, 0, 1);
			TASK::CLEAR_PED_TASKS((*uParam1)[iLocal_237]);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_F3);
			TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iLocal_237], uParam0->f_F3);
			return 1;
			break;
		
		case 3:
			iLocal_78 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_199(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x6EC9
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

float func_200(int iParam0, struct<3> Param1, int iParam2)//Position - 0x6F43
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}

float func_201(var uParam0, int iParam1)//Position - 0x6F7C
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_137(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_202(var uParam0, var uParam1, bool bParam2)//Position - 0x6FA6
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
				func_146(uParam0, &(uParam0->f_62), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_24[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_24[iVar0], 0);
					}
					iVar0++;
				}
				func_182(uParam0, 2, 1, 1, 0);
			}
			func_141(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_A));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
				func_146(uParam0, &(uParam0->f_62), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_24[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_24[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_203(var uParam0)//Position - 0x709E
{
	func_207(uParam0, uParam0->f_3);
	if (func_137(uParam0))
	{
		if (func_129(uParam0, 14))
		{
			func_147(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_A));
			}
		}
	}
	if (!func_129(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		}
		func_251(uParam0, 9, 0, 0);
		func_204("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_204(char* sParam0, int iParam1, int iParam2)//Position - 0x711C
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_205(var uParam0, bool bParam1)//Position - 0x7135
{
	func_207(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_129(uParam0, 14))
			{
				if (func_50())
				{
					func_148(1);
				}
				func_206(uParam0, 11, 1);
				func_140(uParam0, 1);
				func_251(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_111(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_374(uParam0, 15) > 5f)
						{
							func_251(uParam0, 15, 0f, 1);
						}
					}
					if (func_374(uParam0, 14) > 20f)
					{
						func_284(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_374(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_284(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_284(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_206(var uParam0, int iParam1, bool bParam2)//Position - 0x7240
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_207(var uParam0, int iParam1)//Position - 0x7254
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_284(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_208()//Position - 0x72B9
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_259.f_4, 0))
	{
		if (func_137(&Local_259))
		{
			if (!iLocal_345)
			{
				uVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_259.f_4, "window_lf");
				uVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_259.f_4, "window_lr");
				uVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_259.f_4, "window_rf");
				uVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_259.f_4, "window_rr");
				Local_229 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_259.f_4, uVar0) };
				Local_229 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_259.f_4, Local_229) };
				Local_233 = { Local_229 };
				Local_229.f_2 = (Local_229.f_2 + 0.15f);
				Local_229.f_1 = (Local_229.f_1 - 0.15f);
				Local_230 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_259.f_4, uVar1) };
				Local_230 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_259.f_4, Local_230) };
				Local_234 = { Local_230 };
				Local_230.f_2 = (Local_230.f_2 + 0.15f);
				Local_231 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_259.f_4, uVar2) };
				Local_231 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_259.f_4, Local_231) };
				Local_235 = { Local_231 };
				Local_231.f_2 = (Local_231.f_2 + 0.15f);
				Local_231.f_1 = (Local_231.f_1 - 0.15f);
				Local_232 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_259.f_4, uVar3) };
				Local_232 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_259.f_4, Local_232) };
				Local_236 = { Local_232 };
				Local_232.f_2 = (Local_232.f_2 + 0.15f);
				iLocal_345 = 1;
			}
		}
		else if (iLocal_345)
		{
			iLocal_345 = 0;
		}
	}
}

void func_209(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x7440
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_39(Param1, 1f, -fParam2, -fParam2, -22f) };
	Var1 = { func_39(Param1, 1f, fParam2, fParam2, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam3)
	{
		PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, 0, 1, 1, 1);
		MISC::CLEAR_AREA_OF_PEDS(Param1, fParam2, 0);
	}
	else
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, 0);
	}
}

void func_210(var uParam0, int iParam1, bool bParam2)//Position - 0x74D1
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_48();
		func_251(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_211(var uParam0, int iParam1)//Position - 0x74F6
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_218(12);
	if (func_24(uParam0->f_2C, 8))
	{
		if (!func_24(uParam0->f_2C, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_24(uParam0->f_2C, 256))
			{
				func_219(&(uParam0->f_2C), 256);
			}
			if (func_24(uParam0->f_2C, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_182(uParam0, 135, 1, 0, 1);
				func_219(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_215(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_2C, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_182(uParam0, 133, 1, 0, 1);
				func_219(&(uParam0->f_2C), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_284(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 1);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_213(uParam0);
			func_51(2, 0);
			bLocal_85 = true;
			func_177(&uLocal_81);
			return 1;
		}
		else
		{
			func_284(uParam0, "No Taxi", 21);
			func_212("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_212(char* sParam0, int iParam1)//Position - 0x766E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_213(var uParam0)//Position - 0x7685
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (func_214())
		{
		}
	}
}

int func_214()//Position - 0x76A0
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0, int iParam1)//Position - 0x76C1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_217(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_19B == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_2C, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_212("TX_VIP_DMGD", -1);
							if (func_216("TX_VIP_DMGD"))
							{
								func_219(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_2C, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_212("TX_VIP_CAR", -1);
							if (func_216("TX_VIP_CAR"))
							{
								func_219(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_2C, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_212("TX_VIP_SMALL", -1);
							if (func_216("TX_VIP_SMALL"))
							{
								func_219(&(uParam0->f_2C), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_22(&(uParam0->f_2C), 16);
			func_22(&(uParam0->f_2C), 64);
			func_22(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

bool func_216(char* sParam0)//Position - 0x7CD4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_217(int iParam0)//Position - 0x7CE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_218(int iParam0)//Position - 0x7DA3
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_219(var uParam0, int iParam1)//Position - 0x7DFC
{
	func_220(uParam0, iParam1);
}

void func_220(var uParam0, int iParam1)//Position - 0x7E0C
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_221(var uParam0)//Position - 0x7E1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_222()//Position - 0x7E42
{
	Local_164 = 0;
	func_239(33267/*func_241*/, 33242/*func_240*/, 1);
	func_239(33003/*func_237*/, 32980/*func_236*/, 1);
	func_239(32919/*func_235*/, 32894/*func_234*/, 1);
	func_239(32823/*func_233*/, 32799/*func_232*/, 1);
	func_239(32689/*func_231*/, 32668/*func_230*/, 1);
	func_239(32615/*func_228*/, 32590/*func_227*/, 1);
	func_239(32448/*func_224*/, 32425/*func_223*/, 1);
}

int func_223(var uParam0, var uParam1)//Position - 0x7EA9
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_224(var uParam0)//Position - 0x7EC0
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_226(uParam0->f_4))
		{
			func_225(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_225(var uParam0, int iParam1)//Position - 0x7EEA
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_226(int iParam0)//Position - 0x7EFD
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0, var uParam1)//Position - 0x7F4E
{
	uParam1 = uParam1;
	func_284(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_228(var uParam0)//Position - 0x7F67
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_229(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_229(var uParam0, int iParam1)//Position - 0x7F8D
{
	return (uParam0 && iParam1) != 0;
}

int func_230(var uParam0, var uParam1)//Position - 0x7F9C
{
	uParam1 = uParam1;
	func_225(uParam0, 11);
	return 1;
}

int func_231(var uParam0)//Position - 0x7FB1
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_129(uParam0, 25))
			{
				func_251(uParam0, 25, 0, 0);
			}
			else if (func_374(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_129(uParam0, 25))
		{
			func_136(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_232(var uParam0, var uParam1)//Position - 0x801F
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_233(var uParam0)//Position - 0x8037
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234(var uParam0, var uParam1)//Position - 0x807E
{
	uParam1 = uParam1;
	func_284(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_235(var uParam0)//Position - 0x8097
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_229(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_236(var uParam0, var uParam1)//Position - 0x80D4
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_237(var uParam0)//Position - 0x80EB
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_238(uParam0->f_4))
		{
			func_225(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0)//Position - 0x8115
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_239(int iParam0, int iParam1, bool bParam2)//Position - 0x8170
{
	if (Local_164 >= 16)
	{
		Local_164 = 16;
		return;
	}
	Local_164.f_1[Local_164 /*4*/] = 0;
	func_220(&(Local_164.f_1[Local_164 /*4*/]), 1);
	if (bParam2)
	{
		func_220(&(Local_164.f_1[Local_164 /*4*/]), 2);
	}
	Local_164.f_1[Local_164 /*4*/].f_2 = iParam0;
	Local_164.f_1[Local_164 /*4*/].f_3 = iParam1;
	Local_164++;
}

int func_240(var uParam0, var uParam1)//Position - 0x81DA
{
	uParam1 = uParam1;
	func_284(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_241(var uParam0)//Position - 0x81F3
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_242()//Position - 0x8232
{
	Local_161[5 /*10*/] = 5;
	Local_161[5 /*10*/].f_1 = 0;
	Local_161[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_161[5 /*10*/].f_9 = 78;
	Local_161[0 /*10*/] = 5;
	Local_161[0 /*10*/].f_1 = 0;
	Local_161[0 /*10*/].f_2 = "TX_AIR_N";
	Local_161[0 /*10*/].f_9 = 76;
	Local_161[2 /*10*/] = 5;
	Local_161[2 /*10*/].f_1 = 0;
	Local_161[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_161[2 /*10*/].f_9 = 21;
	Local_161[1 /*10*/] = 10;
	Local_161[1 /*10*/].f_1 = 0;
	Local_161[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_161[1 /*10*/].f_9 = 71;
	Local_161[4 /*10*/] = 10;
	Local_161[4 /*10*/].f_1 = 0;
	Local_161[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_161[4 /*10*/].f_9 = 79;
	Local_161[6 /*10*/] = 10;
	Local_161[6 /*10*/].f_1 = 0;
	Local_161[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_161[6 /*10*/].f_9 = 80;
	Local_161[9 /*10*/] = 15;
	Local_161[9 /*10*/].f_1 = 0;
	Local_161[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_161[9 /*10*/].f_9 = 82;
	Local_161[8 /*10*/] = 15;
	Local_161[8 /*10*/].f_1 = 0;
	Local_161[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_161[8 /*10*/].f_9 = 72;
	Local_161[7 /*10*/] = 15;
	Local_161[7 /*10*/].f_1 = 0;
	Local_161[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_161[7 /*10*/].f_9 = 74;
	Local_161[11 /*10*/] = 5;
	Local_161[11 /*10*/].f_1 = 0;
	Local_161[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_161[11 /*10*/].f_9 = 70;
	Local_161[12 /*10*/] = 5;
	Local_161[12 /*10*/].f_1 = 0;
	Local_161[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_161[12 /*10*/].f_9 = 69;
	Local_161[13 /*10*/] = 10;
	Local_161[13 /*10*/].f_1 = 0;
	Local_161[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_161[13 /*10*/].f_9 = 67;
	Local_161[14 /*10*/] = 10;
	Local_161[14 /*10*/].f_1 = 0;
	Local_161[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_161[14 /*10*/].f_9 = 75;
}

int func_243()//Position - 0x840A
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_29[0]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_29[1]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_29[2]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_338, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_398))
	{
		return 0;
	}
	if (!func_244(&iLocal_338, 1))
	{
		func_245("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_338, 1000);
		return 0;
	}
	return 1;
}

int func_244(int iParam0, bool bParam1)//Position - 0x84A6
{
	if (!STREAMING::HAS_MODEL_LOADED(func_21()))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_245(char* sParam0, int iParam1, int iParam2)//Position - 0x855C
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_246(var uParam0, int iParam1)//Position - 0x857B
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_19A = iParam1;
}

void func_247(var uParam0)//Position - 0x879A
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_189(uParam0->f_3, 0, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		HUD::SET_GPS_FLAGS(1, 0);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
	}
}

int func_248(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3)//Position - 0x87D7
{
	uParam0->f_B = { Param1 };
	uParam0->f_E = { Param2 };
	func_40(uParam0->f_E, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_E, 25f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_17742.f_E1[0]))
	{
		(*uParam3)[0] = Global_17742.f_E1[0];
		(*uParam3)[1] = Global_17742.f_E1[1];
		(*uParam3)[2] = Global_17742.f_E1[2];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[1], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[2], 1, 1);
	}
	else
	{
		(*uParam3)[0] = PED::CREATE_PED(26, uParam3->f_29[0], uParam0->f_B, -178.76f, 1, 1);
		(*uParam3)[1] = PED::CREATE_PED(26, uParam3->f_29[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam3)[2] = PED::CREATE_PED(26, uParam3->f_29[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_250(uParam0, uParam3[0]);
	uParam3->f_33[0] = 0;
	uParam3->f_33[1] = 0;
	uParam3->f_33[2] = 0;
	uParam3->f_C[0] = 0;
	uParam3->f_C[1] = 1;
	uParam3->f_C[2] = 2;
	if ((!PED::IS_PED_INJURED((*uParam3)[0]) && !PED::IS_PED_INJURED((*uParam3)[1])) && !PED::IS_PED_INJURED((*uParam3)[2]))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[1], (*uParam3)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[2], (*uParam3)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[0], (*uParam3)[1], 0);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[2]))
	{
		func_7(&(uParam0->f_F4), 5, (*uParam3)[2], "TaxiPaulie", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[2], "TaxiPaulie");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[2], 317, 1);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[1]))
	{
		func_7(&(uParam0->f_F4), 4, (*uParam3)[1], "TaxiClyde", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[1], "TaxiClyde");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[1], 317, 1);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[0]))
	{
		func_7(&(uParam0->f_F4), 3, (*uParam3)[0], "TaxiDarren", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[0], "TaxiDarren");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[0], 317, 1);
		PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_19D));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_19D, 1862763509);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam3)[0], uParam0->f_19D);
		func_249((*uParam3)[1], uParam0->f_19D);
		func_249((*uParam3)[2], uParam0->f_19D);
		return 1;
	}
	return 0;
}

void func_249(int iParam0, var uParam1)//Position - 0x8A79
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
	}
}

void func_250(var uParam0, var uParam1)//Position - 0x8A93
{
	if (!PED::IS_PED_INJURED(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_251(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x8AB0
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_69(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_96(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_69(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_96(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_252()//Position - 0x8B22
{
	STREAMING::REQUEST_PTFX_ASSET();
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_253()//Position - 0x8B36
{
	STREAMING::REQUEST_MODEL(Local_261.f_2D[0]);
	STREAMING::REQUEST_MODEL(Local_261.f_2D[1]);
	STREAMING::REQUEST_MODEL(Local_261.f_2D[2]);
	STREAMING::REQUEST_MODEL(Local_261.f_2D[3]);
	STREAMING::REQUEST_MODEL(Local_261.f_2D[4]);
	STREAMING::REQUEST_MODEL(joaat("stretch"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_398 = func_254();
}

var func_254()//Position - 0x8BAB
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_255()//Position - 0x8BBB
{
	STREAMING::REQUEST_MODEL(Local_261.f_29[0]);
	STREAMING::REQUEST_MODEL(Local_261.f_29[1]);
	STREAMING::REQUEST_MODEL(Local_261.f_29[2]);
	func_256(1);
}

void func_256(bool bParam0)//Position - 0x8BEC
{
	STREAMING::REQUEST_MODEL(func_21());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_24(Global_17C49.f_43C7, 128))
	{
		func_219(&(Global_17C49.f_43C7), 128);
	}
}

void func_257(var uParam0, var uParam1)//Position - 0x8C45
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_3C[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_3C[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_258(var uParam0, char* sParam1, int iParam2)//Position - 0x8CBC
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_259(var uParam0, var uParam1, float fParam2)//Position - 0x8CD4
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_4[iVar0]))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_A))
	{
		if (func_10(uParam0->f_2, uParam1->f_A, 1) > fParam2)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_A));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_B));
		}
	}
}

void func_260(var uParam0, int iParam1, bool bParam2)//Position - 0x8D5C
{
	if (uParam0->f_19B == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_374(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_182(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_182(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_251(uParam0, 10, 0f, 1);
				}
			}
			else if (func_374(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_182(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_182(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_251(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_374(uParam0, 10) > 30f)
		{
			if (!func_50())
			{
				if (uParam0->f_70)
				{
					func_182(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_182(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_251(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_64, 64))
	{
		if (!func_16(&(Local_161[5 /*10*/].f_6)))
		{
			func_177(&(Local_161[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[5 /*10*/].f_6)) > 6f)
		{
			if (func_283(uParam0))
			{
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[5 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0, 1);
				func_280(5, uParam0);
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 1))
	{
		if (!func_16(&(Local_161[0 /*10*/].f_6)))
		{
			func_177(&(Local_161[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[0 /*10*/].f_6)) > 5f)
		{
			if (func_278(uParam0))
			{
				func_282(uParam0, 1);
				func_280(0, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[0 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 2))
	{
		if (!func_16(&(Local_161[1 /*10*/].f_6)))
		{
			func_177(&(Local_161[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[1 /*10*/].f_6)) > 5f)
		{
			if (func_277(uParam0))
			{
				func_282(uParam0, 1);
				func_280(1, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[1 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 2048))
	{
		if (!func_16(&(Local_161[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_2E = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_177(&(Local_161[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_161[8 /*10*/].f_6)) > 7f || Local_161[8 /*10*/].f_1 == 0)
		{
			if (func_276(uParam0))
			{
				func_282(uParam0, 1);
				func_280(8, uParam0);
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 128))
	{
		if (!func_16(&(Local_161[6 /*10*/].f_6)))
		{
			func_177(&(Local_161[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[6 /*10*/].f_6)) > 5f)
		{
			if (func_275(uParam0))
			{
				func_282(uParam0, 1);
				func_280(6, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[6 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 32))
	{
		if (!func_16(&(Local_161[4 /*10*/].f_6)))
		{
			func_177(&(Local_161[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[4 /*10*/].f_6)) > 4f)
		{
			if (func_274(uParam0))
			{
				func_282(uParam0, 1);
				func_280(4, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[4 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 256))
	{
		if (!func_16(&(Local_161[7 /*10*/].f_6)))
		{
			func_177(&(Local_161[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[7 /*10*/].f_6)) > 5f || Local_161[7 /*10*/].f_1 == 0)
		{
			if (func_273(uParam0))
			{
				func_280(7, uParam0);
				func_282(uParam0, 1);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[7 /*10*/].f_9, 1, 0, 1);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 8))
	{
		if (!func_16(&(Local_161[9 /*10*/].f_6)))
		{
			func_177(&(Local_161[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_94(&(Local_161[9 /*10*/].f_6)) > 7f || Local_161[9 /*10*/].f_1 == 0)
		{
			if (func_272(uParam0))
			{
				func_282(uParam0, 1);
				func_280(9, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[9 /*10*/].f_9, 1, 0, 1);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 16384))
	{
		if (!func_16(&(Local_161[13 /*10*/].f_6)))
		{
			func_177(&(Local_161[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[13 /*10*/].f_6)) > 10f)
		{
			if (func_266(uParam0))
			{
				func_282(uParam0, 1);
				func_280(13, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[13 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 32768))
	{
		if (!func_16(&(Local_161[14 /*10*/].f_6)))
		{
			func_177(&(Local_161[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[14 /*10*/].f_6)) > 7f)
		{
			if (func_265(uParam0))
			{
				func_282(uParam0, 1);
				func_280(14, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[14 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 4096))
	{
		if (!func_16(&(Local_161[11 /*10*/].f_6)))
		{
			func_177(&(Local_161[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[11 /*10*/].f_6)) > 8f)
		{
			if (func_264(uParam0))
			{
				func_282(uParam0, 1);
				func_280(11, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[11 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 8192))
	{
		if (!func_16(&(Local_161[12 /*10*/].f_6)))
		{
			func_177(&(Local_161[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[12 /*10*/].f_6)) > 5f)
		{
			if (func_263(uParam0))
			{
				func_282(uParam0, 1);
				func_280(12, uParam0);
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[12 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 4))
	{
		if (!func_16(&(Local_161[2 /*10*/].f_6)))
		{
			func_262(&(Local_161[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_161[2 /*10*/].f_6)) > 5f)
		{
			if (func_261(uParam0))
			{
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, Local_161[2 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0, 1);
				func_280(2, uParam0);
				func_279(uParam0);
			}
		}
	}
}

int func_261(var uParam0)//Position - 0x9556
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_16(&(Local_161[0 /*10*/].f_3))) && !func_16(&(Local_161[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_161[2 /*10*/].f_3)))
			{
				uParam0->f_25 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_177(&(Local_161[2 /*10*/].f_3));
				}
			}
			else if (func_94(&(Local_161[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_93(&(Local_161[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_93(&(Local_161[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_262(var uParam0, float fParam1)//Position - 0x9639
{
	if (!func_16(uParam0))
	{
		func_69(uParam0, fParam1);
	}
}

int func_263(var uParam0)//Position - 0x9653
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_161[12 /*10*/].f_3)))
			{
				func_177(&(Local_161[12 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[12 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_161[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_264(var uParam0)//Position - 0x96E2
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_161[0 /*10*/].f_3))) && !func_16(&(Local_161[1 /*10*/].f_3))) && !func_16(&(Local_161[5 /*10*/].f_3))) && !func_16(&(Local_161[9 /*10*/].f_3))) && !func_16(&(Local_161[7 /*10*/].f_3))) && !func_16(&(Local_161[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 2.5f && !func_16(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_161[11 /*10*/].f_3)))
			{
				func_177(&(Local_161[11 /*10*/].f_3));
				uLocal_163 = Var0.x;
			}
			else if (func_94(&(Local_161[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(uLocal_163) - MISC::ABSF(Var0.x)) < 0f)
			{
				func_93(&(Local_161[11 /*10*/].f_3));
				return 1;
			}
			else if (func_94(&(Local_161[11 /*10*/].f_3)) >= 1.5f)
			{
				func_93(&(Local_161[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_265(var uParam0)//Position - 0x9812
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_161[0 /*10*/].f_3))) && !func_16(&(Local_161[8 /*10*/].f_3))) && !func_16(&(Local_161[5 /*10*/].f_3))) && !func_16(&(Local_161[9 /*10*/].f_3))) && !func_16(&(Local_161[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_161[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1)))
				{
					func_177(&(Local_161[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_161[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_93(&(Local_161[14 /*10*/].f_3));
			return 1;
		}
		else if (func_94(&(Local_161[14 /*10*/].f_3)) >= 1.5f)
		{
			func_93(&(Local_161[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_93(&(Local_161[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_266(var uParam0)//Position - 0x9995
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_161[9 /*10*/].f_3))) && !func_16(&(Local_161[7 /*10*/].f_3))) && !func_16(&(Local_161[4 /*10*/].f_3)))
	{
		if (!func_267(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_161[13 /*10*/].f_3)))
			{
				func_177(&(Local_161[13 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[13 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_161[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_267(int iParam0)//Position - 0x9A4C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 2, &Var1, 1, 1077936128, 0);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var2);
	fVar9 = SYSTEM::VMAG(Var2 - Var0);
	Var3 = { func_271((Var1.x - Var0.x), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_270(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_268(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var5, Var6, Var7);
}

int func_268(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x9B35
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { func_271(Param2 - Param1) };
	Var1 = { func_271(Param3 - Param1) };
	fVar2 = func_269(Param0, Var0);
	fVar3 = func_269(Param1, Var0);
	fVar4 = func_269(Param2, Var0);
	fVar5 = func_269(Param0, Var1);
	fVar6 = func_269(Param1, Var1);
	fVar7 = func_269(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_269(struct<3> Param0, struct<3> Param1)//Position - 0x9C1E
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_270(struct<3> Param0, int iParam1)//Position - 0x9C3F
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			Var0.x = -Param0.f_1;
			Var0.f_1 = Param0.x;
			break;
		
		case 1:
			Var0.x = -Param0.x;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.x = Param0.f_1;
			Var0.f_1 = -Param0.x;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_271(struct<3> Param0)//Position - 0x9C9D
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

int func_272(var uParam0)//Position - 0x9CDC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_273(var uParam0)//Position - 0x9D10
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_162)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_162 = 1;
					}
				}
			}
			else if (iLocal_162)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_162 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_274(var uParam0)//Position - 0x9DA5
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_161[4 /*10*/].f_3)))
			{
				func_177(&(Local_161[4 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[4 /*10*/].f_3)) > 2f)
			{
				func_93(&(Local_161[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_275(var uParam0)//Position - 0x9E17
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_161[6 /*10*/].f_3)))
			{
				func_177(&(Local_161[6 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[6 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_161[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_276(var uParam0)//Position - 0x9E8D
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_2E - iVar0);
			uParam0->f_2E = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_71)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_182(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_161[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_277(var uParam0)//Position - 0x9F0E
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 3f && !func_16(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_161[1 /*10*/].f_3)))
			{
				func_177(&(Local_161[1 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[1 /*10*/].f_3)) > 1.2f)
			{
				func_93(&(Local_161[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_278(var uParam0)//Position - 0x9F9A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_16(&(Local_161[0 /*10*/].f_3)))
			{
				func_177(&(Local_161[0 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[0 /*10*/].f_3)) > 0.7f)
			{
				func_93(&(Local_161[0 /*10*/].f_3));
				func_96(&(Local_161[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_279(var uParam0)//Position - 0xA024
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_161[iVar0 /*10*/].f_6)))
		{
			func_96(&(Local_161[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_251(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_280(int iParam0, var uParam1)//Position - 0xA06C
{
	Local_161[iParam0 /*10*/].f_1++;
	func_281(uParam1, iParam0);
	func_93(&(Local_161[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_281(var uParam0, int iParam1)//Position - 0xA09F
{
	uParam0->f_4C = (uParam0->f_4C + Local_161[iParam1 /*10*/]);
}

void func_282(var uParam0, int iParam1)//Position - 0xA0B6
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_283(var uParam0)//Position - 0xA0C9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_161[5 /*10*/].f_3)))
			{
				func_177(&(Local_161[5 /*10*/].f_3));
			}
			else if (func_94(&(Local_161[5 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_161[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_161[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_284(var uParam0, char* sParam1, int iParam2)//Position - 0xA140
{
	struct<3> Var0;
	
	func_170();
	func_397(2);
	Var0 = { func_301() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_50()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		StringCopy(&Var0, uParam0->f_8F, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!func_111(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_6D = 1;
		uParam0->f_79 = sParam1;
		uParam0->f_19F = iParam2;
		func_251(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_299(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_73)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 15)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_111(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_295(uParam0, 4096, 0);
				}
				else
				{
					func_295(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_299(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_299(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_299(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_299(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 4);
			}
			func_295(uParam0, 0, 0);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_299(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_299(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_294(&Var0);
			func_285(&(uParam0->f_F4), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_73)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_19B != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_19A > 5)
				{
					func_299(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_251(uParam0, 3, 0f, 1);
	}
}

int func_285(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA6EA
{
	func_293(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_286(sParam2, iParam3, 0);
}

int func_286(char* sParam0, int iParam1, bool bParam2)//Position - 0xA738
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
					func_171();
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
		if (func_292(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_291();
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
				func_290();
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
				if (func_289())
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
			if (func_32())
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
			func_288();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_287();
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
		func_171();
	}
	return 0;
}

void func_287()//Position - 0xAA04
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

void func_288()//Position - 0xAA36
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

int func_289()//Position - 0xAACB
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

void func_290()//Position - 0xAB64
{
	if (func_91(14))
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
		Global_3839 = func_89();
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

void func_291()//Position - 0xAC05
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

bool func_292(int iParam0, int iParam1)//Position - 0xAC5D
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

void func_293(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAC98
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

void func_294(char* sParam0)//Position - 0xACEE
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_295(var uParam0, int iParam1, bool bParam2)//Position - 0xAD41
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_101(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_106(uParam0->f_1D)) && !bParam2)
		{
			func_296(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_19F == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}

void func_296(var uParam0)//Position - 0xAE34
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_41(func_42(), uParam0->f_1D))
		{
			if (uParam0->f_19B == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else if (uParam0->f_19B == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_1D, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_19B == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_19B == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_19B == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 0);
			}
			else if (uParam0->f_19B == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_1D, 15f, 1))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}

void func_297(var uParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xB017
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, uParam2, func_298(iParam3), 0);
}

int func_298(int iParam0)//Position - 0xB030
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

void func_299(var uParam0, char* sParam1)//Position - 0xB225
{
	if (func_300(uParam0))
	{
		func_285(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_300(var uParam0)//Position - 0xB24D
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_10(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_301()//Position - 0xB28A
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_413E);
		if (iVar1 > -1)
		{
			return Global_38E0[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_302(var uParam0)//Position - 0xB2D0
{
	return uParam0->f_76;
}

void func_303()//Position - 0xB2DC
{
	func_332(&Local_259);
	if (func_331(&Local_259, &Local_347))
	{
		switch (Local_347.f_1B)
		{
			case 0:
				if (Local_259.f_19A == 9)
				{
					if (!func_127(&Local_259))
					{
						if (func_330("TAXI_OBJ_CC1") || HUD::DOES_BLIP_EXIST(Local_261.f_24[2]))
						{
							Local_347.f_1B++;
						}
						else if (func_160(&Local_259) != 10)
						{
							func_182(&Local_259, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_160(&Local_259) > 10 && func_160(&Local_259) != 15) && !func_127(&Local_259))
				{
					func_182(&Local_259, 15, 1, 0, 0);
					if (bLocal_346)
					{
					}
					func_176(&Local_259, 7);
				}
				break;
			
			case 2:
				if (!Local_261.f_42)
				{
					Local_261.f_42 = 1;
					bLocal_247 = true;
				}
				if (func_101(Local_259.f_4, Local_261.f_10[2 /*3*/], 1) < 530f)
				{
					Local_347.f_1B++;
				}
				if (func_374(&Local_259, 11) > 17f || func_101(Local_259.f_4, Local_261.f_10[2 /*3*/], 1) < 700f)
				{
					func_182(&Local_259, 95, 1, 0, 0);
					if (bLocal_346)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_160(&Local_259) > 10 && func_160(&Local_259) != 16) && !func_127(&Local_259))
				{
					func_182(&Local_259, 16, 1, 0, 0);
					if (bLocal_346)
					{
					}
				}
				break;
			
			case 4:
				if (func_101(Local_259.f_4, Local_261.f_10[2 /*3*/], 1) < 530f)
				{
					Local_347.f_1B++;
				}
				if (func_374(&Local_259, 11) > 8f || func_101(Local_259.f_4, Local_261.f_10[2 /*3*/], 1) < 700f)
				{
					func_182(&Local_259, 94, 1, 0, 0);
					if (bLocal_346)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_374(&Local_259, 11) > 20f || func_101(Local_259.f_4, Local_261.f_10[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_250)
					{
						iLocal_250 = 1;
					}
					if (!bLocal_248)
					{
						func_182(&Local_259, 96, 1, 0, 0);
						bLocal_248 = true;
						if (bLocal_346)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_374(&Local_259, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 16f))
				{
				}
				break;
			}
	}
	func_304(&Local_259, &uLocal_350, &Local_347, bLocal_346);
}

int func_304(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xB5BC
{
	func_312(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_19A < 29) && !uParam0->f_6D) && !func_129(uParam0, 2))
	{
		if (func_311(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_310(uParam0))
				{
					uParam2->f_7 = { func_309(uParam1) };
					func_285(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_50())
				{
					uParam2->f_D = { func_185() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_220(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_128(uParam0))
				{
					if (func_50())
					{
						func_251(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_306() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_50())
				{
					uParam2->f_13 = { func_301() };
				}
				else
				{
					func_220(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_129(uParam0, 14) && !func_50()) && !func_128(uParam0)) && func_374(uParam0, 18) > 1f)
				{
					func_251(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_50())
				{
					if (func_374(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_305(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_50())
				{
					func_220(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_305(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB85C
{
	func_293(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 1;
	StringCopy(&Global_4138, sParam3, 24);
	Global_280001 = 0;
	return func_286(sParam2, iParam4, 0);
}

struct<6> func_306()//Position - 0xB8B0
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_413E);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar2 /*6*/])))
			{
				return Global_38E0[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar3 /*6*/])))
					{
						return Global_38E0[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_38E0[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_307(var uParam0)//Position - 0xB95C
{
	int iVar0;
	
	iVar0 = func_308(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_219(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
	}
}

int func_308(var uParam0)//Position - 0xB9A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_309(var uParam0)//Position - 0xB9D6
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_219(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_310(var uParam0)//Position - 0xBA1D
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_164("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_164("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_164("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_164("TX_OBJ_GYB_DO", 0, 0) || func_164("TAXI_OBJ_GYB", 0, 0)) || func_164("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_164("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_164("TX_OBJ_CYI_DO", 0, 0) || func_164("TAXI_OBJ_CYI_01", 0, 0)) || func_164("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_164("TX_OBJ_GYN_DO", 0, 0) || func_164("TAXI_OBJ_GYN", 0, 0)) || func_164("TAXI_OBJ_GYN_TG", 0, 0)) || func_164("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_164("TAXI_OBJ_CC1", 0, 0) || func_164("TAXI_OBJ_CC2", 0, 0)) || func_164("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_164("TAXI_OBJ_FTC1", 0, 0) || func_164("TAXI_OBJ_FTC2", 0, 0)) || func_164("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_164("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_164("TAXI_OBJ_GETRUN", 0, 0) || func_164("TAXI_OBJ_DRIVE", 0, 0)) || func_164("TAXI_OBJ_RETURN", 0, 0)) || func_164("TAXI_OBJ_POL", 0, 0)) || func_164("TAXI_OBJ_RUNOUT", 0, 0)) || func_164("TAXI_OBJ_POL", 0, 0));
}

int func_311(var uParam0)//Position - 0xBC3D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_312(var uParam0, var uParam1)//Position - 0xBC6C
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_310(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_129(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_8F, 24);
		switch (func_160(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_327(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_50())
				{
					if (uParam0->f_73)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_19B != 9)
					{
						func_326(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 2));
				}
				if (func_24(uParam0->f_62, 4))
				{
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				func_146(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_374(uParam0, 16) > 1f)
				{
					func_148(1);
					if (uParam0->f_19B == 9)
					{
						func_204("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_204("TAXI_VIP_RETURN", 7500, 1);
					}
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_6B++;
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_297(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_374(uParam0, 16) > func_145(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_50()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&Var0, uParam0->f_8F, 24);
		switch (func_160(uParam0))
		{
			case 142:
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_326(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_327(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_285(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_182(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_251(uParam0, 16, 0, 0);
				func_182(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_24(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_329(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_326(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_251(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_204("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_204("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_174(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 9:
				if ((uParam0->f_65 == 1 || uParam0->f_19B == 2) || uParam0->f_19B == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_184(&Var0);
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_297(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_174(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_322(uParam0, 33554432, Var0, "", 1, 8);
				func_251(uParam0, 16, 0, 0);
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_50())
				{
					func_321(uParam0, 0);
					func_219(&(uParam0->f_2C), 4);
					func_251(uParam0, 16, 0, 0);
					func_182(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_374(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_184(&Var0);
					}
					func_319(Var0, uParam1);
					func_219(&(uParam0->f_51), 67108864);
					func_251(uParam0, 16, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_374(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_19B == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_19B != 6)
						{
							func_184(&Var0);
						}
					}
					func_319(Var0, uParam1);
					func_251(uParam0, 11, 0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_184(&Var0);
				}
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				func_219(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_19B == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_318(&(uParam0->f_5A), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_318(&(uParam0->f_5A), 3, &Var0, &iVar5, 1, 0);
				}
				func_319(Var0, uParam1);
				func_327(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 6, 0f, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_318(&(uParam0->f_59), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_318(&(uParam0->f_59), 3, &Var0, &iVar5, 1, 0);
				}
				func_319(Var0, uParam1);
				func_327(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 6, 0f, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 12:
				func_204("TAXI_OBJ_GYB", 3500, 1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_204("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_204("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_204("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_62, 268435456))
				{
					func_204("TAXI_OBJ_CYI_01", 7500, 1);
					func_219(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 33:
				func_204("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_52, 8192))
				{
					if (func_374(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_184(&Var0);
						if (uParam0->f_19B == 5)
						{
							func_319(Var0, uParam1);
						}
						else
						{
							func_326(uParam0, &Var0, 0, 0, 8);
						}
						func_219(&(uParam0->f_52), 8192);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_52, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_184(&Var0);
					func_326(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_52, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_184(&Var0);
					func_326(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_65 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_210(uParam0, 0, 0);
				break;
			
			case 139:
				func_204("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_182(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_24(uParam0->f_52, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_219(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_24(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_219(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_204("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_210(uParam0, 0, 0);
				func_182(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_50())
				{
					func_204("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_210(uParam0, 0, 0);
					func_182(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_204("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_210(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_51, 1))
				{
					func_317(uParam0, 1, Var0, "_sick1", 8);
					func_22(&(uParam0->f_51), 2);
				}
				else if (!func_24(uParam0->f_51, 2))
				{
					func_317(uParam0, 2, Var0, "_sick2", 8);
					func_22(&(uParam0->f_51), 1);
				}
				func_327(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_24(uParam0->f_52, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_24(uParam0->f_52, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_219(&(uParam0->f_51), 2097152);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_327(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_51, 4))
				{
					func_317(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_51, 8))
				{
					func_317(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_317(uParam0, 8, Var0, "_turns3", 8);
					func_22(&(uParam0->f_51), 4);
					func_22(&(uParam0->f_51), 8);
				}
				func_327(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_297(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_329(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_285(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_19B == 0)
					{
						func_329(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_329(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				func_327(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_53, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 128);
					func_22(&(uParam0->f_53), 256);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 256);
					func_22(&(uParam0->f_53), 512);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 512);
					func_22(&(uParam0->f_53), 128);
					func_251(uParam0, 16, 0, 0);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_53, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_184(&Var0);
					}
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 1);
					func_22(&(uParam0->f_53), 2);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_184(&Var0);
					}
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_22(&(uParam0->f_53), 4);
					}
					else
					{
						func_22(&(uParam0->f_53), 1);
					}
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_184(&Var0);
					}
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 4);
					func_22(&(uParam0->f_53), 1);
					func_251(uParam0, 16, 0, 0);
				}
				func_327(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_51, 4096))
				{
					func_322(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_51, 8192))
				{
					func_322(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_327(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_51, 16384))
				{
					func_322(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_51, 32768))
				{
					func_322(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_327(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_24(uParam0->f_52, 8))
					{
						func_315(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_52, 16))
					{
						func_315(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_52, 32))
					{
						func_315(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_327(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
					func_210(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_329(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					func_327(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_327(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_327(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_51, 65536))
				{
					func_322(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_51, 131072))
				{
					func_322(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_297(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_24(uParam0->f_53, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 8);
					func_22(&(uParam0->f_53), 16);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 16);
					func_22(&(uParam0->f_53), 32);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_22(&(uParam0->f_53), 64);
					}
					else
					{
						func_22(&(uParam0->f_53), 8);
					}
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_53), 64);
					func_22(&(uParam0->f_53), 8);
					func_251(uParam0, 16, 0, 0);
				}
				func_327(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_50())
				{
					if (uParam0->f_73)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 65));
					func_210(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_50())
				{
					if (uParam0->f_19B == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_73)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 66));
					func_210(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_50())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								func_327(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								func_327(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_329(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
								func_327(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_251(uParam0, 16, 0, 0);
								func_210(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_57)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_326(uParam0, &Var0, 0, 0, 8);
									func_251(uParam0, 16, 0, 0);
									func_251(uParam0, 11, 0, 0);
									func_210(uParam0, 0, 0);
									if (!iLocal_59)
									{
										iLocal_57 = 1;
									}
								}
								else
								{
									if (!iLocal_58)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_58 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_59 = 1;
									}
									func_184(&Var0);
									func_326(uParam0, &Var0, 0, 0, 8);
									func_251(uParam0, 16, 0, 0);
									func_251(uParam0, 11, 0, 0);
									func_210(uParam0, 0, 0);
									iLocal_57 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_182(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_327(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_52, 1))
				{
					func_315(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_52, 2))
				{
					func_315(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_52, 4))
				{
					func_315(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				func_329(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_297(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_251(uParam0, 16, 0, 0);
				func_327(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_297(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_314(uParam0, Var0, 8);
				}
				func_327(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_53, 1024))
				{
					func_219(&(uParam0->f_53), 1024);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 2048))
				{
					func_219(&(uParam0->f_53), 2048);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 4096))
				{
					func_219(&(uParam0->f_53), 4096);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_52, 1024))
				{
					func_315(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_52), 2048);
				}
				else if (!func_24(uParam0->f_52, 2048))
				{
					func_315(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_327(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_297(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_316(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_326(uParam0, &Var0, 0, 0, 8);
						func_182(uParam0, 52, 1, 0, 0);
						func_251(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_19B == 5 && uParam0->f_19A > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						func_326(uParam0, &Var0, 0, 0, 8);
						func_251(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_329(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_327(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_204("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_51, 262144))
				{
					func_322(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_322(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_322(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_327(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_313(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_52, 134217728))
				{
					func_313(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_327(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 100:
				func_204("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_210(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&Var0);
				}
				func_219(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&Var0);
				}
				func_219(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_19B == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&Var0);
				}
				func_219(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_52, 65536))
				{
					if (func_374(uParam0, 11) > uParam0->f_24)
					{
						switch (uParam0->f_66)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_184(&Var0);
						func_319(Var0, uParam1);
						func_219(&(uParam0->f_52), 65536);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_52, 131072))
				{
					if (func_374(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_184(&Var0);
						func_319(Var0, uParam1);
						func_219(&(uParam0->f_52), 131072);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_52, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_219(&(uParam0->f_52), 8388608);
				}
				else if (!func_24(uParam0->f_52, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_219(&(uParam0->f_52), 16777216);
				}
				else if (!func_24(uParam0->f_52, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_219(&(uParam0->f_52), 33554432);
				}
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_329(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_184(&Var0);
					func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_329(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_328(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_219(&(uParam0->f_51), 2097152);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_219(&(uParam0->f_51), 67108864);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_322(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_297(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_182(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_51, 268435456))
				{
					func_322(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_182(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_204("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_210(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_322(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_297(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_322(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_182(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_204("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_210(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_285(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_51, 16777216))
				{
					func_322(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 88:
				func_204("TAXI_TIEFLEE", 7500, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_62, 536870912))
				{
					func_204("TAXI_OBJ_CYI_1B", 7500, 1);
					func_219(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_210(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_73)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_74)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_19B == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_326(uParam0, &Var0, 1, 0, 8);
				func_182(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_204("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_182(uParam0, 0, 0, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			}
	}
}

void func_313(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xF074
{
	func_219(&(uParam0->f_52), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_184(&Param2);
	}
	func_285(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam8, 0, 0, 0);
}

void func_314(var uParam0, struct<6> Param1, int iParam2)//Position - 0xF0B5
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_52, 64))
	{
		func_219(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_52, 128))
	{
		func_219(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_328(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_251(uParam0, 16, 0, 0);
}

void func_315(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0xF13C
{
	func_219(&(uParam0->f_52), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_184(&Param2);
		}
	}
	func_285(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam7, 0, 0, 0);
}

int func_316(var uParam0)//Position - 0xF1BC
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_317(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0xF222
{
	func_219(&(uParam0->f_51), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_285(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam7, 0, 0, 0);
}

void func_318(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xF258
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_229(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_184(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_319(char[24] cParam0, var uParam1)//Position - 0xF2D9
{
	int iVar0;
	
	iVar0 = func_320(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_219(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_320(var uParam0)//Position - 0xF308
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_321(var uParam0, bool bParam1)//Position - 0xF335
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_204("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_204("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_204("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_204("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_204("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_204("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_204("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_204("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_204("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_204("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_204("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_204("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_322(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xF4EC
{
	func_219(&(uParam0->f_51), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_184(&Param2);
	}
	func_285(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam8, 0, 0, 0);
}

void func_323(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0xF52D
{
	func_251(uParam0, 16, 0, 0);
	func_251(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_324(uParam0));
	}
}

char* func_324(var uParam0)//Position - 0xF56B
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_325(var uParam0, int iParam1)//Position - 0xF606
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_326(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xF9AF
{
	func_251(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_251(uParam0, 17, 0f, 1);
	}
	func_210(uParam0, iParam2, 0);
	return func_285(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0xF9EC
{
	if (iParam0 == 0)
	{
		if (func_24(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_24(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_24(*uParam2, 4))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_24(*uParam2, 512))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_24(*uParam2, 16))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_24(*uParam2, 64))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_24(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_24(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_24(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_24(*uParam2, 8192))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_24(*uParam2, 16384))
		{
			if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_24(*uParam2, 32768))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_24(*uParam2, 65536))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_24(*uParam2, 131072))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_24(*uParam2, 262144))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_24(*uParam2, 524288))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_24(*uParam2, 1048576))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_24(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_24(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_24(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_24(*uParam2, 67108864))
		{
			if (func_24(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_24(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_24(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_24(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_24(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_328(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFFF6
{
	func_293(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 1;
	Global_412D = 0;
	Global_4131 = 0;
	StringCopy(&Global_4138, sParam3, 24);
	Global_280001 = 0;
	return func_286(sParam2, iParam4, 0);
}

void func_329(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1004B
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_229(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_184(sParam2);
				}
				else
				{
					func_184(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_330(char* sParam0)//Position - 0x100E2
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_164(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_331(var uParam0, var uParam1)//Position - 0x10104
{
	return ((*uParam1 == -1 && uParam0->f_19C == 0) && !func_129(uParam0, 9));
}

void func_332(var uParam0)//Position - 0x1012B
{
	if (func_129(uParam0, 17))
	{
		if (!func_129(uParam0, 14))
		{
			if (!func_128(uParam0))
			{
				if (!func_50())
				{
					func_136(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_333(var uParam0)//Position - 0x10165
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_17742.f_E1[3]))
	{
		uParam0->f_4[0] = Global_17742.f_E1[3];
		uParam0->f_4[1] = Global_17742.f_E1[4];
		uParam0->f_4[2] = Global_17742.f_E1[5];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[1], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = PED::CREATE_PED(26, uParam0->f_2D[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = PED::CREATE_PED(26, uParam0->f_2D[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = PED::CREATE_PED(26, uParam0->f_2D[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_17742.f_E1[6]))
	{
		uParam0->f_4[3] = Global_17742.f_E1[6];
		uParam0->f_4[4] = Global_17742.f_E1[7];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[3], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = PED::CREATE_PED(26, uParam0->f_2D[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = PED::CREATE_PED(26, uParam0->f_2D[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_17742.f_DE[0]))
	{
		uParam0->f_A = Global_17742.f_DE[0];
		uParam0->f_B = Global_17742.f_DE[1];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_A, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_B, 1, 1);
	}
	else
	{
		uParam0->f_A = VEHICLE::CREATE_VEHICLE(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_B = VEHICLE::CREATE_VEHICLE(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var3 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4[iVar1]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_4[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			switch (iVar1)
			{
				case 0:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[1], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[4], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[4], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[3], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[3], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar1]) && (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], 242628503) == 7))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar1], 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			func_334(uParam0, iVar1, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_334(var uParam0, int iParam1, int iParam2)//Position - 0x106BA
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[1], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[1], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_335()//Position - 0x10787
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_2D[0]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_2D[1]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_2D[2]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_2D[3]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_261.f_2D[4]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("stretch")))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("superd")))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@gyn@cc@intro"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_338, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_338, 1000);
		return 0;
	}
	return 1;
}

bool func_336(var uParam0)//Position - 0x108D2
{
	return uParam0->f_75;
}

int func_337(var uParam0, var uParam1, var uParam2)//Position - 0x108DE
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_6D)
	{
		if ((func_343((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_343((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_343((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_341(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (func_343(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_284(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_338(uParam0);
	}
	return 0;
}

void func_338(var uParam0)//Position - 0x1099A
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_340()) && !func_137(uParam0)) || ((uParam0->f_19B != 9 && func_215(uParam0, 1)) && !func_137(uParam0)))
		{
			uVar0 = func_339(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, 1, 0);
			func_147(uParam0);
			func_140(uParam0, 0);
		}
	}
}

var func_339(var uParam0)//Position - 0x10A30
{
	return uParam0;
}

int func_340()//Position - 0x10A3A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_341(var uParam0, var uParam1, var uParam2)//Position - 0x10A8F
{
	switch (*uParam1)
	{
		case 1:
			if (func_342(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_342(uParam0, 0, 4))
			{
				func_284(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_342(uParam0, 0, 8))
			{
				func_284(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_342(uParam0, 1, 1))
			{
				func_284(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_342(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_111(uParam0))
			{
				func_284(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_342(var uParam0, int iParam1, int iParam2)//Position - 0x10B6A
{
	if (((uParam0->f_6B >= 2 && uParam0->f_19A < 29) || uParam0->f_19A <= 5) || (iParam1 && !uParam0->f_72))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_182(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_182(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_343(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x10BE6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_349(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_347(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_346(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_344(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_344(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x10D0E
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_72)
		{
			iLocal_73 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_72 = true;
		}
		iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_75 = (iLocal_73 - iLocal_74);
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_75) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_72)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_75) > 100f)
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
		uVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar1))
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
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, false, 1, 0))
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
	if (func_345(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_9(iParam0, 1) < 1.5f)
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
		if (!ENTITY::IS_ENTITY_DEAD(uParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1)//Position - 0x10ED2
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

int func_346(int iParam0, int iParam1, var uParam2)//Position - 0x10F27
{
	if (WEAPON::IS_PED_ARMED(uParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(uParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x10F75
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
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_348(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
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

int func_348(int iParam0)//Position - 0x110ED
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
						if (func_10(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_349(int iParam0, var uParam1)//Position - 0x111B9
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
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

void func_350(var uParam0, var uParam1, bool bParam2)//Position - 0x1123D
{
	if (!func_24(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7C)) && func_50())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_50())
				{
					StringCopy(&(uParam0->f_7C), func_126(), 24);
					uParam0->f_38 = (uParam0->f_38 + uParam0->f_39);
					if (uParam0->f_38 < 0)
					{
						uParam0->f_38 = 0;
					}
					uParam0->f_39 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_351(var uParam0)//Position - 0x112C3
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_164 > 0 && !func_229(Local_164.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_164 - 1))
				{
					if (func_229(Local_164.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_164.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_229(Local_164.f_1[iVar0 /*4*/], 4))
							{
								func_220(&(Local_164.f_1[iVar0 /*4*/]), 4);
								Local_164.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_23(&(Local_164.f_1[iVar0 /*4*/]), 12);
						}
						if (func_229(Local_164.f_1[iVar0 /*4*/], 4) && !func_229(Local_164.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_164.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_164.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_220(&(Local_164.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_284(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_352(var uParam0, var uParam1)//Position - 0x113D6
{
	var uVar0;
	
	if (!func_129(uParam0, 27))
	{
		func_176(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_374(uParam0, 27) > 5f)
	{
		if (func_343(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_251(uParam0, 27, 0, 0);
			func_251(uParam0, 10, 0, 0);
			func_341(uParam0, &uVar0, uParam1);
		}
		func_338(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_353(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_50())
	{
		if (func_374(uParam0, 26) > 10f)
		{
			func_136(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	else if (func_129(uParam0, 26))
	{
		func_136(uParam0, 26, 0);
	}
	return 0;
}

void func_353(var uParam0)//Position - 0x11500
{
	if (!func_373(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_372();
		func_363(&(uParam0->f_1AD), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_354(uParam0->f_1AD))
	{
		func_284(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_354(int iParam0)//Position - 0x1154D
{
	return func_355(func_372(), iParam0);
}

int func_355(int iParam0, int iParam1)//Position - 0x1155F
{
	int iVar0;
	int iVar1;
	
	if (!func_373(iParam1) || !func_373(iParam0))
	{
		return 1;
	}
	iVar0 = func_361(iParam0);
	iVar1 = func_361(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_360(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_359(iParam0);
	iVar1 = func_359(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_358(iParam0);
	iVar1 = func_358(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_357(iParam0);
	iVar1 = func_357(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_356(iParam0);
	iVar1 = func_356(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x1166B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_357(int iParam0)//Position - 0x1167E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_358(int iParam0)//Position - 0x11691
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_359(int iParam0)//Position - 0x116A4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_360(int iParam0)//Position - 0x116B6
{
	return iParam0 & 15;
}

var func_361(int iParam0)//Position - 0x116C3
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_362(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_362(bool bParam0, int iParam1, int iParam2)//Position - 0x116E8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_363(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x116FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_361(*uParam0);
	iVar1 = func_360(*uParam0);
	iVar2 = func_359(*uParam0);
	iVar3 = func_358(*uParam0);
	iVar4 = func_357(*uParam0);
	iVar5 = func_356(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_371(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_371(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_364(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11881
{
	func_370(uParam0, iParam1);
	func_369(uParam0, iParam2);
	func_368(uParam0, iParam3);
	func_367(uParam0, iParam4);
	func_366(uParam0, iParam5);
	func_365(uParam0, iParam6);
}

void func_365(var uParam0, int iParam1)//Position - 0x118B9
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

void func_366(var uParam0, int iParam1)//Position - 0x1193F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_367(var uParam0, int iParam1)//Position - 0x11972
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_360(*uParam0);
	iVar1 = func_361(*uParam0);
	if (iParam1 < 1 || iParam1 > func_371(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_368(var uParam0, int iParam1)//Position - 0x119C3
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_369(var uParam0, int iParam1)//Position - 0x119FD
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_370(var uParam0, int iParam1)//Position - 0x11A38
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_371(int iParam0, int iParam1)//Position - 0x11A74
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

int func_372()//Position - 0x11B16
{
	var uVar0;
	
	func_370(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_369(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_368(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_367(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_366(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_365(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_373(int iParam0)//Position - 0x11B5C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_356(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_357(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_358(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_361(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_360(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_359(iParam0);
	if (iVar5 < 1 || iVar5 > func_371(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_374(var uParam0, int iParam1)//Position - 0x11C38
{
	if (!func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_177(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_375()//Position - 0x11C68
{
	func_376(&Local_259);
	func_393();
}

void func_376(var uParam0)//Position - 0x11C7B
{
	func_11(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_397(2);
	}
}

int func_377(var uParam0, bool bParam1)//Position - 0x11C9A
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_50() && func_374(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_229(uParam0->f_55, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_295(uParam0, 4160, 0);
						}
						else
						{
							func_295(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_295(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_295(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_295(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_378(var uParam0)//Position - 0x11D98
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_A));
	}
}

int func_379(var uParam0)//Position - 0x11DD9
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_380()//Position - 0x11DFA
{
	func_382(&Local_259, 7);
	Local_259.f_19A = 0;
	Local_259.f_17 = { -1248.422f, 252.6221f, 63.0799f };
	Local_259.f_21 = 34.4f;
	Local_259.f_1A = { -231.2259f, -889.5931f, 28.8903f };
	Local_259.f_22 = 251.9658f;
	Local_261.f_29[0] = joaat("a_m_y_business_02");
	Local_261.f_29[1] = joaat("a_m_y_business_02");
	Local_261.f_29[2] = joaat("a_m_y_business_02");
	Local_261.f_2D[0] = joaat("a_f_y_beach_01");
	Local_261.f_2D[1] = joaat("a_f_y_beach_01");
	Local_261.f_2D[2] = joaat("a_f_y_beach_01");
	Local_261.f_2D[3] = joaat("a_f_y_beach_01");
	Local_261.f_2D[4] = joaat("a_m_y_business_01");
	func_381(&Local_259, 3, 6);
}

void func_381(var uParam0, int iParam1, int iParam2)//Position - 0x11EC2
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_382(var uParam0, int iParam1)//Position - 0x11ED6
{
	func_392(1);
	func_150();
	func_6(&(uParam0->f_F4));
	func_391(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_24(Global_17C49.f_43C7, 4))
	{
		func_219(&(Global_17C49.f_43C7), 4);
	}
	func_386(uParam0);
	func_384(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	uParam0->f_66 = (func_383(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_383(int iParam0)//Position - 0x11F58
{
	return Global_17C49.f_43C7.f_27[iParam0];
}

void func_384(var uParam0)//Position - 0x11F6D
{
	switch (func_62(uParam0))
	{
		case 0:
			func_385(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_385(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_385(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_385(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_385(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_385(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_385(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_385(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_385(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_385(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_385(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x120C0
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_386(var uParam0)//Position - 0x120DA
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_390(uParam0, 3);
			func_389(uParam0, 14);
			break;
		
		case 1:
			func_390(uParam0, 14);
			func_389(uParam0, 8);
			break;
		
		case 2:
			func_390(uParam0, 8);
			func_389(uParam0, 7);
			break;
		
		case 3:
			func_390(uParam0, 15);
			func_389(uParam0, 6);
			break;
		
		case 4:
			func_390(uParam0, 0);
			func_389(uParam0, 3);
			break;
		
		case 5:
			func_390(uParam0, 6);
			func_389(uParam0, 7);
			break;
		
		case 6:
			func_390(uParam0, 8);
			func_389(uParam0, 15);
			break;
		
		case 7:
			func_390(uParam0, 8);
			func_389(uParam0, 14);
			break;
		
		case 8:
			func_390(uParam0, 7);
			func_389(uParam0, 15);
			break;
		
		case 9:
			func_390(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_388((uParam0->f_1A2.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_389(uParam0, iVar0);
			func_387(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_387(var uParam0)//Position - 0x12211
{
	switch (uParam0->f_1A2.f_2)
	{
		case 2:
		case 8:
			uParam0->f_1A2.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_1A2.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_1A2.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_1A2.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_1A2.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_1A2.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_1A2.f_3 = 7;
			break;
	}
}

int func_388(int iParam0, int iParam1, int iParam2)//Position - 0x122D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_389(var uParam0, int iParam1)//Position - 0x12374
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_390(var uParam0, int iParam1)//Position - 0x12385
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_391(var uParam0)//Position - 0x12396
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_42() };
	uParam0->f_11 = { func_42() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_136(uParam0, 32, 0);
}

void func_392(bool bParam0)//Position - 0x123F4
{
	if (bParam0)
	{
		StringCopy(&Global_17899, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_17893 = 1;
	}
	else
	{
		StringCopy(&Global_17899, "NULL", 24);
		Global_17893 = 0;
	}
}

void func_393()//Position - 0x12420
{
	func_396(&Local_261);
	func_178();
	func_395();
	func_394();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_394()//Position - 0x1243F
{
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_395()//Position - 0x12453
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_29[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_29[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_29[2]);
}

void func_396(var uParam0)//Position - 0x1247F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_49[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_49[iVar0], 0);
		}
		iVar0++;
	}
}

void func_397(int iParam0)//Position - 0x124B5
{
	Global_17742.f_16 = iParam0;
}

