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
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50[16];
	float fLocal_51[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96[2] = { 0, 0 };
	int iLocal_97[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101[4] = { 0, 0, 0, 0 };
	int iLocal_102[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_103 = 0;
	var uLocal_104[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_131 = 8;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 4;
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
	var uLocal_150 = 4;
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
	var uLocal_165 = 4;
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
	var uLocal_180 = 4;
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
	var uLocal_195 = 4;
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
	var uLocal_210 = 4;
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
	var uLocal_225 = 4;
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
	var uLocal_240 = 4;
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
	int iLocal_259 = 0;
	char[] cLocal_260[8] = 0;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	var uLocal_269 = 0;
	var uLocal_270 = 16;
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
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
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
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	int iLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 5;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 5;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	fLocal_45 = -1f;
	Local_52 = { -1109.213f, 4914.744f, 216.101f };
	Local_53 = { -1034.6f, 4918.6f, 205.9f };
	Local_54 = { -1066.963f, 4873.13f, 207.3281f };
	Local_55 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_56 = 72.3125f;
	Local_57 = { -1138.386f, 4872.04f, 207.5488f };
	Local_58 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_59 = 57.8125f;
	Local_60 = { -1171.648f, 4888.658f, 211.0756f };
	Local_61 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_62 = 17.9375f;
	Local_63 = { -1177.981f, 4903.231f, 212.477f };
	Local_64 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_65 = 17.9375f;
	Local_66 = { -1175.693f, 4904.839f, 207.5207f };
	Local_67 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_68 = 36.375f;
	Local_69 = { -1106.212f, 4860.086f, 206.1207f };
	Local_70 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_71 = 11.5625f;
	Local_72 = { -1044.268f, 4916.587f, 209.8365f };
	Local_73 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_74 = 12.875f;
	iLocal_95 = 4;
	cLocal_260 = "REPLAY_TMG";
	sLocal_261 = "CMN_TDIED";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_172();
	}
	if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_76)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_49)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_17C49.f_6E20.f_5 >= iLocal_95 && !func_171())
						{
							iLocal_49 = 2;
						}
						func_168();
						func_165();
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_90 == 1)
							{
								func_164();
							}
							else if (iLocal_90 == 2)
							{
								func_143();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_92 < 3)
							{
								func_142();
							}
							else
							{
								func_141();
							}
						}
						if (iLocal_77)
						{
							func_131(26, 1);
							iLocal_77 = 0;
							iLocal_49 = 0;
						}
					}
					break;
				
				case 2:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_107();
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[9 /*31*/], 0, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						iLocal_49 = 3;
						break;
					}
					bLocal_78 = false;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_97)
					{
						if (PED::IS_PED_INJURED(iLocal_97[iVar0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_104[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_104[iVar0]));
							}
						}
						else
						{
							if (TASK::IS_PED_IN_WRITHE(iLocal_97[iVar0]))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_104[iVar0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_104[iVar0]));
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_97[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_106())
								{
									if (iLocal_94 < MISC::GET_GAME_TIMER())
									{
										iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											func_96(&uLocal_270, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_95(&uLocal_270, 1, iLocal_97[iVar0], "ACULTMember1", 0, 1);
											func_96(&uLocal_270, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_95(&uLocal_270, 2, iLocal_97[iVar0], "ACULTMember2", 0, 1);
											func_96(&uLocal_270, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_94 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6000));
									}
								}
							}
							bLocal_78 = true;
						}
						iVar0++;
					}
					if (!bLocal_78)
					{
						func_59();
					}
					break;
				
				case 3:
					if (!iLocal_76)
					{
						uLocal_108 = func_58();
						if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_108))
						{
							break;
						}
						func_57(&uLocal_113, 0);
						iLocal_76 = 1;
					}
					if (func_28(&uLocal_113, &uLocal_119, &uLocal_108, cLocal_260, sLocal_261, &bLocal_75, 78))
					{
						iLocal_93 = 0;
						PED::REMOVE_RELATIONSHIP_GROUP(uLocal_269);
						TASK::REMOVE_COVER_POINT(uLocal_107);
						iVar0 = 0;
						while (iVar0 < iLocal_97)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[iVar0]))
							{
								PED::DELETE_PED(&(iLocal_97[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_102)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_102[iVar0]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_102[iVar0]));
							}
							iVar0++;
						}
						if (CAM::DOES_CAM_EXIST(uLocal_105))
						{
							CAM::SET_CAM_ACTIVE(uLocal_105, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_100))
						{
							OBJECT::DELETE_OBJECT(&uLocal_100);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_100))
						{
							OBJECT::DELETE_OBJECT(&uLocal_100);
						}
						if (bLocal_75)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_76 = 0;
							iLocal_49 = 2;
						}
						else
						{
							iLocal_76 = 0;
							func_172();
						}
					}
					break;
			}
		}
		else if (bLocal_80)
		{
		}
		else
		{
			func_172();
		}
	}
}

void func_1(bool bParam0)//Position - 0x55B
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::PAUSE_DEATH_ARREST_RESTART(1);
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		func_2(1);
		Global_14E79 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		func_2(0);
		Global_14E79 = 0;
	}
}

void func_2(bool bParam0)//Position - 0x59D
{
	if ((Global_8861 == 9 || Global_8861 == 10) || Global_8861 == 5)
	{
		Global_17705 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_17705 = 0;
	}
}

void func_3(bool bParam0)//Position - 0x5E3
{
	if (bParam0)
	{
		func_8();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)//Position - 0x646
{
	if (Global_38D7)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_3839.f_1 = 3;
	}
}

int func_5()//Position - 0x6B6
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6DD
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x751
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

void func_8()//Position - 0x7AB
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_9()//Position - 0x7D4
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)//Position - 0x7EC
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_47, 1);
		func_11(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_11(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_47, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)//Position - 0x84B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_47, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_47, 2);
	}
}

void func_12(int iParam0, int iParam1)//Position - 0x8AC
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_47, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_47, 0);
			func_11(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_11(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_47, 0);
	}
}

int func_13()//Position - 0x949
{
	func_14();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_14()//Position - 0x962
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_18(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER::PLAYER_PED_ID());
			if (func_16(iVar0) && (!func_15(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_16(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_15(int iParam0)//Position - 0xA5F
{
	return Global_8861 == iParam0;
}

bool func_16(int iParam0)//Position - 0xA6D
{
	return iParam0 < 3;
}

int func_17(int iParam0)//Position - 0xA79
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)//Position - 0xAB6
{
	if (func_16(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()//Position - 0xAE0
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xAFB
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_27(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_5())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_26(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_27(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_26(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_21(int iParam0)//Position - 0xBCC
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()//Position - 0xC0D
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_23(int iParam0, int iParam1)//Position - 0xC1E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)//Position - 0xC69
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()//Position - 0xCAA
{
	return Global_1407E1;
}

int func_26(int iParam0, var uParam1, var uParam2)//Position - 0xCB6
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

void func_27(int iParam0)//Position - 0xCE7
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

int func_28(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xD0A
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_56(&(uParam0->f_1));
			func_19();
			func_55(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_53() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_52(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_52(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 2);
				}
				func_29(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_29(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					MISC::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				MISC::PAUSE_DEATH_ARREST_RESTART(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_12(0, 1);
				func_10(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xEC1
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_49(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			func_48(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_86);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_88 = 1;
				}
			}
			if (!func_49(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_47(&(uParam1->f_A), 0, 1, 1, 1);
			func_46(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_46(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_49(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_49(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_45(&(uParam1->f_1)))
			{
				func_44(&(uParam1->f_1));
			}
			if (func_49(iParam5, 2))
			{
				if (!func_45(&(uParam1->f_4)))
				{
					func_44(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_86);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_88 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_42(uParam0, 0, 0);
			if (!func_49(iParam5, 16) && (func_40(&(uParam1->f_1)) >= uParam1->f_87 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_34(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_8A = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_33(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_8A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_33(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_49(iParam5, 2))
			{
				if (func_40(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_33(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_42(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_8A || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_49(iParam5, 64) && uParam1->f_8A)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_30(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_40(&(uParam1->f_4)) <= 0.1f)
			{
				func_42(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_30(var uParam0)//Position - 0x129C
{
	func_31(uParam0, 0f);
}

void func_31(var uParam0, float fParam1)//Position - 0x12AB
{
	uParam0->f_1 = (func_32(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)//Position - 0x12D9
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

void func_33(var uParam0)//Position - 0x1321
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
}

void func_34(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x1344
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_39(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(uParam2);
	if (!func_49(uParam0->f_1, 256) || (func_49(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_49(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_38(uVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_48(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_49(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_37(bParam4, func_37(func_49(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_36(&(uParam0->f_1), 256);
		func_35(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_35(var uParam0, int iParam1)//Position - 0x1604
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_36(var uParam0, int iParam1)//Position - 0x1619
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_37(bool bParam0, float fParam1, float fParam2)//Position - 0x162A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_38(var uParam0)//Position - 0x1641
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_39(var uParam0)//Position - 0x164F
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_36(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_40(var uParam0)//Position - 0x1676
{
	if (func_45(uParam0))
	{
		if (func_41(uParam0))
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

bool func_41(var uParam0)//Position - 0x16B5
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_42(var uParam0, bool bParam1, bool bParam2)//Position - 0x16C5
{
	if (!func_45(&(uParam0->f_2)))
	{
		func_30(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_40(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_43(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_43(var uParam0)//Position - 0x1757
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(var uParam0)//Position - 0x176D
{
	if (!func_45(uParam0))
	{
		func_30(uParam0);
	}
}

bool func_45(var uParam0)//Position - 0x1785
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_46(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1795
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x185E
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_36(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_36(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_36(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_36(&(uParam0->f_1), 8192);
	}
}

void func_48(char* sParam0)//Position - 0x18D8
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_49(var uParam0, int iParam1)//Position - 0x18EA
{
	return (uParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)//Position - 0x18F9
{
	func_51(uParam0, iParam1);
}

void func_51(var uParam0, var uParam1)//Position - 0x1909
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_52(var uParam0, int iParam1)//Position - 0x191A
{
	return (uParam0 && iParam1) != 0;
}

int func_53()//Position - 0x1929
{
	if (!MISC::IS_BIT_SET(iLocal_47, 0) && !MISC::IS_BIT_SET(iLocal_47, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_12(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!MISC::IS_BIT_SET(iLocal_47, 1))
		{
			func_10(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_48 == 0)
			{
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_12(0, 0);
				func_54(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_48)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x1A6D
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(iLocal_47, 3))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&iLocal_47, 3);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_47, 3))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&iLocal_47, 3);
		}
	}
}

void func_55(var uParam0, float fParam1, float fParam2)//Position - 0x1AB4
{
	if (func_45(&(uParam0->f_1)))
	{
		func_43(&(uParam0->f_1));
	}
	if (func_45(&(uParam0->f_4)))
	{
		func_43(&(uParam0->f_4));
	}
	func_33(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_56(var uParam0)//Position - 0x1B04
{
	if (!func_45(uParam0))
	{
		func_44(uParam0);
	}
	else
	{
		func_30(uParam0);
	}
}

void func_57(var uParam0, int iParam1)//Position - 0x1B25
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0);
}

var func_58()//Position - 0x1B45
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_59()//Position - 0x1B55
{
	if (!iLocal_79)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_17C49.f_6E20.f_5 = 1000;
		AUDIO::UNLOCK_MISSION_NEWS_STORY(64);
		Global_17C49.f_5CED.f_1D8 = 54;
		uLocal_258 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		func_94(1);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_258))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_258, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_48("CULT_PASS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!func_93())
		{
			SYSTEM::WAIT(0);
		}
		func_92();
		SYSTEM::SETTIMERA(0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_79 = 1;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_258, 255, 255, 255, 255, 0);
	if (!iLocal_81)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_258, "SHARD_ANIM_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_81 = 1;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_258))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_258);
			func_94(0);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_91(PLAYER::PLAYER_ID()), Local_52, 1) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_60(18);
		func_172();
	}
}

void func_60(int iParam0)//Position - 0x1C89
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_88())
	{
		func_66(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_65(30000);
		StringCopy(&cVar0, func_64(Global_17C3E, 1), 64);
		if (func_63(Global_17C3E) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_17C3D, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_17C3B, (MISC::GET_GAME_TIMER() - Global_17C3C), 0);
	}
	else if (MISC::IS_BIT_SET(Global_17C45, 0) && Global_17C49.f_6E20.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_17C45, 0);
	}
	func_62(&Global_5FB7);
	Global_17C3F = 0;
	func_61(-1);
}

void func_61(int iParam0)//Position - 0x1D3E
{
	Global_17C3E = iParam0;
}

void func_62(var uParam0)//Position - 0x1D4C
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_883B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_883A = 0;
	Global_883C = 0;
	Global_8861 = 15;
	Global_D5DB = 0;
	Global_D5DC = 0;
}

int func_63(int iParam0)//Position - 0x1D89
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_64(int iParam0, bool bParam1)//Position - 0x1E3A
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_65(int iParam0)//Position - 0x2083
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_66(int iParam0)//Position - 0x2095
{
	func_67(iParam0, 0, func_87(iParam0));
}

void func_67(int iParam0, int iParam1, int iParam2)//Position - 0x20AA
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_86();
	func_77(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_76(iParam0, &uVar0);
	Var1 = { func_68(&uVar0) };
}

struct<16> func_68(var uParam0)//Position - 0x20D9
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_74(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_73(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_72(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_71(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_69(*uParam0), 64);
	return Var0;
}

int func_69(int iParam0)//Position - 0x21AA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_70(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_70(bool bParam0, int iParam1, int iParam2)//Position - 0x21CF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_71(var uParam0)//Position - 0x21E6
{
	return uParam0 & 15;
}

int func_72(int iParam0)//Position - 0x21F3
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 4) & 31;
}

int func_73(int iParam0)//Position - 0x2205
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 20) & 63;
}

int func_74(int iParam0)//Position - 0x2218
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 14) & 63;
}

int func_75(int iParam0)//Position - 0x222B
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 9) & 31;
}

void func_76(int iParam0, var uParam1)//Position - 0x223E
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2256
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_69(*uParam0);
	iVar1 = func_71(*uParam0);
	iVar2 = func_72(*uParam0);
	iVar3 = func_75(*uParam0);
	iVar4 = func_74(*uParam0);
	iVar5 = func_73(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_78(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23D8
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam5);
	func_79(uParam0, iParam6);
}

void func_79(var uParam0, int iParam1)//Position - 0x2410
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

void func_80(var uParam0, int iParam1)//Position - 0x2496
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)//Position - 0x24C9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_69(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_82(var uParam0, int iParam1)//Position - 0x251A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_83(var uParam0, int iParam1)//Position - 0x2554
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_84(var uParam0, int iParam1)//Position - 0x258F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_85(int iParam0, int iParam1)//Position - 0x25CB
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

var func_86()//Position - 0x266D
{
	var uVar0;
	
	func_84(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_83(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_82(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_81(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_80(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_79(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_87(int iParam0)//Position - 0x26B3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_88()//Position - 0x2856
{
	if ((Global_17C3E == func_89() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

int func_89()//Position - 0x2881
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_90(Var0);
	return uVar1;
}

int func_90(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x289E
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

Vector3 func_91(int iParam0)//Position - 0x2A78
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_92()//Position - 0x2A8B
{
	Global_6066 = 0;
	Global_6067 = 0;
	Global_6069 = 0;
	Global_606A = 0;
	Global_606B = 0;
}

int func_93()//Position - 0x2AA7
{
	return 1;
}

void func_94(int iParam0)//Position - 0x2AB0
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2AC4
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

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2B5F
{
	func_105(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_97(sParam2, iParam3, 0);
}

int func_97(char* sParam0, int iParam1, bool bParam2)//Position - 0x2BAD
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
					func_104();
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
		if (func_103(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_102();
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
				func_101();
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
				if (func_100())
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
			if (func_5())
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
			func_99();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_98();
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
		func_104();
	}
	return 0;
}

void func_98()//Position - 0x2E79
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

void func_99()//Position - 0x2EAB
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

int func_100()//Position - 0x2F40
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

void func_101()//Position - 0x2FD9
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
		Global_3839 = func_13();
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

void func_102()//Position - 0x307A
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

bool func_103(int iParam0, int iParam1)//Position - 0x30D2
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

void func_104()//Position - 0x310D
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

void func_105(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3164
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

int func_106()//Position - 0x31BA
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_107()//Position - 0x31DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_93)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 20f);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!func_130() || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood03a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood04a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0);
			}
			uLocal_435 = func_127(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_435))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_435, "Trevors_weapon", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
			if (func_130() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_97[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_97[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_97[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_97[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_97[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				CUTSCENE::START_CUTSCENE(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_75 && Global_17C49.f_6E20.f_5 != 1000)
			{
				func_126();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
			{
				PED::DELETE_PED(&(iLocal_97[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[1]))
			{
				PED::DELETE_PED(&(iLocal_97[1]));
			}
			if (CAM::DOES_CAM_EXIST(uLocal_105))
			{
				CAM::SET_CAM_ACTIVE(uLocal_105, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_100))
			{
				OBJECT::DELETE_OBJECT(&iLocal_100);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
			{
				OBJECT::DELETE_OBJECT(&iLocal_100);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (HUD::DOES_BLIP_EXIST(uLocal_103))
			{
				HUD::REMOVE_BLIP(&uLocal_103);
			}
			func_20(1, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			HUD::CLEAR_HELP(1);
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			}
			MISC::CLEAR_AREA(Local_52, 100f, 1, 0, 0, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_52 - Vector(100f, 60f, 80f), Local_52 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			uLocal_107 = TASK::ADD_COVER_POINT(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_93 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97[11]))
					{
						iLocal_97[11] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97[12]))
					{
						iLocal_97[12] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97[13]))
					{
						iLocal_97[13] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97[14]))
					{
						iLocal_97[14] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97[15]))
					{
						iLocal_97[15] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 188.9369f);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_107, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_435, PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				Local_50[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_51[0] = 254.8275f;
				Local_50[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_51[1] = 270.2025f;
				Local_50[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_51[2] = 299.8404f;
				Local_50[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_51[3] = 298.4257f;
				Local_50[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_51[4] = 283.5311f;
				Local_50[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_51[5] = 87.5233f;
				Local_50[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_51[6] = 109.6546f;
				Local_50[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_51[7] = 210.2433f;
				Local_50[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_51[8] = 203.732f;
				Local_50[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_51[9] = 39.1109f;
				Local_50[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_51[10] = 25.8472f;
				PED::ADD_RELATIONSHIP_GROUP("rghCult", &uLocal_269);
				iVar1 = 0;
				while (iVar1 < iLocal_97)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_97[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_01"), Local_50[iVar1 /*3*/], fLocal_51[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_97[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_97[iVar1], 0);
						PED::SET_PED_COMBAT_ABILITY(iLocal_97[iVar1], 2);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_97[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_97[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_97[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_97[iVar1], 100f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_97[iVar1], 150);
						PED::SET_PED_SHOOT_RATE(iLocal_97[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_97[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_97[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_51[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_97[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_97[iVar1], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_97[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_97[iVar1], 1);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_97[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_97[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_97[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_97[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_97[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_97[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!PED::IS_PED_INJURED(iLocal_97[iVar1]) && !PED::IS_PED_INJURED(iLocal_97[11])) && !PED::IS_PED_INJURED(iLocal_97[12])) && !PED::IS_PED_INJURED(iLocal_97[13])) && !PED::IS_PED_INJURED(iLocal_97[14])) && !PED::IS_PED_INJURED(iLocal_97[15]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[11], joaat("weapon_pistol"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_97[iVar1], 0, 1);
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_97[iVar1], 3);
							PED::SET_PED_COMBAT_ABILITY(iLocal_97[iVar1], 0);
							PED::SET_PED_ACCURACY(iLocal_97[iVar1], 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_97[iVar1], 1f, 1f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.33f, 4924.412f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6000, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_97[15], uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.279f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_97[14], uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2500, 0);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.175f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_97[13], uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.962f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_97[12], uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 10000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.475f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_97[11], uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							PED::SET_PED_KEEP_TASK(iLocal_97[iVar1], 1);
							PED::SET_PED_RESET_FLAG(iLocal_97[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_97[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_51[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_97[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_97[iVar1], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_97[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_97[iVar1], 0);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_97[iVar1], 50f, 20);
						PED::SET_PED_COMBAT_RANGE(iLocal_97[iVar1], 1);
						PED::SET_PED_ACCURACY(iLocal_97[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_97[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_97[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_97[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_97[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_97[iVar1], uLocal_269);
					ENTITY::SET_ENTITY_HEADING(iLocal_97[iVar1], func_125(ENTITY::GET_ENTITY_COORDS(iLocal_97[iVar1], 1), func_91(PLAYER::PLAYER_ID())));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_97[iVar1], 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_97[iVar1], 42, 1);
					uLocal_104[iVar1] = func_123(iLocal_97[iVar1], 1, 145);
					iVar1++;
				}
				func_95(&uLocal_270, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				func_95(&uLocal_270, 3, iLocal_97[11], "ACULTMaster", 0, 1);
				func_95(&uLocal_270, 4, 0, "ACULTGroup", 0, 1);
				MISC::SET_BIT(&iVar0, 1);
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				if (!bLocal_75)
				{
					uLocal_101[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_101[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_101[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_101[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_101[0] = uLocal_101[0];
				uLocal_101[1] = uLocal_101[1];
				uLocal_101[2] = uLocal_101[2];
				uLocal_101[3] = uLocal_101[3];
				iLocal_102[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_102[1] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_102[2] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_102[3] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_102[4] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_102[5] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_102[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_122() < 50)
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1);
				}
				if (func_121() != 18)
				{
					func_119(18);
				}
				if (!func_88())
				{
					func_108(0);
				}
				func_1(1);
				bLocal_75 = false;
				iLocal_49 = 4;
			}
			break;
	}
}

int func_108(int iParam0)//Position - 0x4192
{
	if (func_113())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_112(Global_17C3E))
		{
			func_109(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_112(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_109(int iParam0)//Position - 0x41E5
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_110(func_111(iParam0), -1);
					Global_17C49.f_6E20.f_2++;
					MISC::SET_BIT(&Global_17C45, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_17C45, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_110(func_111(iParam0), -1);
					Global_17C49.f_6E20.f_3++;
					MISC::SET_BIT(&Global_17C45, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_17C45, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_110(func_111(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

void func_110(var uParam0, int iParam1)//Position - 0x42C6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_111(int iParam0)//Position - 0x42DD
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_112(int iParam0)//Position - 0x4321
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_113()//Position - 0x4350
{
	switch (func_114(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_114(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4386
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
		if (func_118(0))
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
		if (!func_116(iParam2))
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
			func_115(uParam0, iParam4);
		}
	}
	return 2;
}

void func_115(var uParam0, int iParam1)//Position - 0x44BD
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

bool func_116(int iParam0)//Position - 0x450C
{
	return func_117(iParam0, Global_8861);
}

int func_117(int iParam0, int iParam1)//Position - 0x451D
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

int func_118(int iParam0)//Position - 0x46FE
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_119(int iParam0)//Position - 0x4720
{
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_61(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_120();
}

void func_120()//Position - 0x4756
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

int func_121()//Position - 0x4793
{
	return Global_17C3E;
}

int func_122()//Position - 0x479F
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_123(var uParam0, bool bParam1, int iParam2)//Position - 0x47F4
{
	var uVar0;
	
	uVar0 = func_124(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)//Position - 0x4846
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_37(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_37(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_37(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_125(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x48EA
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_126()//Position - 0x4904
{
	Global_6067 = 1;
}

int func_127(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4910
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	uVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (func_128(iVar2, iVar6) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_128(iVar2, iVar6)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uVar1, func_128(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, 0))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(uVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return uVar1;
}

int func_128(int iParam0, int iParam1)//Position - 0x4A1E
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
				iVar1 = func_129(iParam0, &uVar2);
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

int func_129(int iParam0, var uParam1)//Position - 0x523A
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

bool func_130()//Position - 0x5275
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_10A94)
	{
		if (!bVar0)
		{
			Global_10A94 = 1;
		}
	}
	return bVar0;
}

int func_131(int iParam0, int iParam1)//Position - 0x5298
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_132(iParam0, iParam1);
}

int func_132(int iParam0, int iParam1)//Position - 0x52B3
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_140(&Global_26D4DB))
	{
		if (func_138(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_133(&Global_26D4DB, iParam0))
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

int func_133(var uParam0, int iParam1)//Position - 0x5337
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	func_136(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_134(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_134(var uParam0, int iParam1)//Position - 0x53BD
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_135(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)//Position - 0x540D
{
	return (*uParam0)[iParam1] == 61;
}

void func_136(var uParam0)//Position - 0x541E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_137(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_3E), (8f - 0.5f));
}

void func_137(var uParam0, int iParam1)//Position - 0x5455
{
	(*uParam0)[iParam1] = 61;
}

bool func_138(var uParam0, int iParam1)//Position - 0x5465
{
	return func_139(uParam0, iParam1) != -1;
}

int func_139(var uParam0, int iParam1)//Position - 0x5477
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

bool func_140(var uParam0)//Position - 0x54A4
{
	return uParam0->f_44 == 1;
}

void func_141()//Position - 0x54B2
{
	if (fLocal_86 > 0f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 >= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_84F4[10 /*31*/], fLocal_86, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_85 < 0f)
	{
		fLocal_85 = (fLocal_85 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_85 = 0f;
	}
	if (fLocal_85 <= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_84F4[9 /*31*/], fLocal_85, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[9 /*31*/], 4, 0, 1);
	}
}

void func_142()//Position - 0x553E
{
	if (fLocal_86 < 1f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = 1f;
	}
	if (fLocal_86 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_84F4[10 /*31*/], fLocal_86, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_85 > -1f)
	{
		fLocal_85 = (fLocal_85 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_85 = -1f;
	}
	if (fLocal_85 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_84F4[9 /*31*/], fLocal_85, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_84F4[9 /*31*/], 4, 0, 1);
	}
}

void func_143()//Position - 0x55CA
{
	switch (iLocal_92)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_17C49.f_6E20.f_5 < 2)
				{
					if (Global_17C49.f_6E20.f_5 == 0)
					{
						sLocal_268 = "ACULT_HI";
					}
					else
					{
						sLocal_268 = "ACULT_LEAVE5";
					}
					sLocal_262 = "cult_p5_guard";
					sLocal_264 = "cult_p5_trv";
					sLocal_265 = "cult_p5_victim_01";
					sLocal_266 = "cult_p5_victim_02";
					sLocal_267 = "cult_p5_cam";
					fLocal_88 = 0.75f;
					fLocal_87 = 0.999f;
				}
				else if (Global_17C49.f_6E20.f_5 >= 2)
				{
					sLocal_268 = "ACULT_CAPT";
					sLocal_262 = "cult_p7_guard_01";
					sLocal_263 = "cult_p7_guard_02";
					sLocal_264 = "cult_p7_trv";
					sLocal_265 = "cult_p7_victim_01";
					sLocal_266 = "cult_p7_victim_02";
					sLocal_267 = "cult_p7_cam";
					fLocal_88 = 0.98f;
					fLocal_87 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_103))
				{
					HUD::REMOVE_BLIP(&uLocal_103);
				}
				func_20(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_163())
				{
					func_162(0);
				}
				func_160();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_98, 0))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(uLocal_98))
						{
							iLocal_92++;
						}
					}
				}
				else
				{
					uLocal_98 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(uLocal_96[0]) && !PED::IS_PED_INJURED(uLocal_96[1]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_96[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_96[0]);
						TASK::CLEAR_PED_TASKS(uLocal_96[1]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_96[1]);
					}
					iLocal_92++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_98))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_98))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_98, 1, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_98, Local_53, 13f, 13f, 13f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_98, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_98))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_98, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_98);
					}
				}
			}
			MISC::CLEAR_AREA(Local_53, 12f, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_96[0]) && !PED::IS_PED_INJURED(uLocal_96[1]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_96[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_96[0], 128.2065f);
				ENTITY::SET_ENTITY_COORDS(uLocal_96[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_96[1], 128.2065f);
			}
			iLocal_97[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_270, 1, iLocal_97[0], "ACULTMember1", 0, 1);
			if (Global_17C49.f_6E20.f_5 >= 2)
			{
				iLocal_97[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_270, 2, iLocal_97[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_270, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_95(&uLocal_270, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_270, 4, 0, "ACULTGroup", 0, 1);
			func_96(&uLocal_270, "ACULTAU", sLocal_268, 4, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_97[0], 1);
			iLocal_100 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_97[0], 1), 1, 1065353216, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, iLocal_97[0], PED::GET_PED_BONE_INDEX(iLocal_97[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_17C49.f_6E20.f_5 < 2)
			{
				uLocal_99 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_52, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_99, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_17C49.f_6E20.f_5 >= 2)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_105 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_91 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_91, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[0], uLocal_91, "random@altruist_cult", sLocal_262, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_17C49.f_6E20.f_5 >= 2)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[1], uLocal_91, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_105, uLocal_91, sLocal_267, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_96[0]) && !PED::IS_PED_INJURED(uLocal_96[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_96[0], uLocal_91, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_96[1], uLocal_91, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_92++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				if (PED::IS_PED_MALE(uLocal_96[0]))
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_96[1]))
			{
				if (PED::IS_PED_MALE(uLocal_96[1]))
				{
					func_158(uLocal_96[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_91) > fLocal_88)
			{
				iLocal_92++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				if (PED::IS_PED_MALE(uLocal_96[0]))
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_96[1]))
			{
				if (PED::IS_PED_MALE(uLocal_96[1]))
				{
					func_158(uLocal_96[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_91) > fLocal_87)
			{
				iLocal_92++;
			}
			break;
		
		case 4:
			if (Global_17C49.f_6E20.f_5 < 2)
			{
				func_126();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
				{
					PED::DELETE_PED(&(iLocal_97[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[1]))
				{
					PED::DELETE_PED(&(iLocal_97[1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
				{
					OBJECT::DELETE_OBJECT(&iLocal_99);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
				{
					OBJECT::DELETE_OBJECT(&iLocal_100);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				CAM::SET_CAM_ACTIVE(uLocal_105, 0);
				func_20(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				func_144(func_13(), 1, 2000, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_17C49.f_6E20.f_5 += 2;
			iLocal_77 = 1;
			break;
	}
}

void func_144(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5DF4
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
	func_145(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5EDB
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_157();
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
					func_156(99, 1);
					func_155(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_153(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_152(5))
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
							func_155(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_152(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_155(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_property"), iParam3);
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
									func_155(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_152(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_151(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_156(95, iParam3);
					break;
				
				case 1:
					func_156(97, iParam3);
					break;
				
				case 2:
					func_156(96, iParam3);
					break;
			}
			func_156(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_148(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_148(iVar1);
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
					func_155(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_total_cash_earned"), iParam3);
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
	func_147(iParam0);
	if (Global_8861 == 15)
	{
		func_146(0);
	}
	return 1;
}

void func_146(bool bParam0)//Position - 0x64DA
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

void func_147(int iParam0)//Position - 0x675C
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

void func_148(int iParam0)//Position - 0x67B6
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_150() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_150() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_149(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_149(int iParam0)//Position - 0x6879
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

int func_150()//Position - 0x68F4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_151(int iParam0)//Position - 0x6901
{
	func_156(93, iParam0);
	func_156(29, iParam0);
	func_156(30, iParam0);
}

bool func_152(int iParam0)//Position - 0x6921
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_150() /*8053*/].f_167C.f_A, iParam0);
}

int func_153(bool bParam0)//Position - 0x695D
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
		func_154(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_131(27, 1);
	return 1;
}

int func_154(int iParam0, int iParam1)//Position - 0x6A14
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

void func_155(int iParam0, int iParam1)//Position - 0x6A65
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_156(int iParam0, int iParam1)//Position - 0x6A88
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

void func_157()//Position - 0x6AE5
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

void func_158(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x6B5A
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_159(iParam3), 0);
}

int func_159(int iParam0)//Position - 0x6B73
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

void func_160()//Position - 0x6D68
{
	Global_38DE = 0;
	func_161();
}

void func_161()//Position - 0x6D78
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_162(int iParam0)//Position - 0x6D99
{
	Global_413F = iParam0;
}

int func_163()//Position - 0x6DA6
{
	if (Global_413F == 1)
	{
		return 1;
	}
	return 0;
}

void func_164()//Position - 0x6DBD
{
	switch (iLocal_92)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_17C49.f_6E20.f_5 == 0)
				{
					sLocal_268 = "ACULT_HI";
					sLocal_262 = "cult_p2_guard";
					sLocal_264 = "cult_p2_trv";
					sLocal_265 = "cult_p2_victim";
					sLocal_267 = "cult_p2_cam";
					fLocal_88 = 0.8f;
					fLocal_87 = 0.968f;
				}
				else if (Global_17C49.f_6E20.f_5 == 1)
				{
					sLocal_268 = "ACULT_LEAVE3";
					sLocal_262 = "cult_p4_guard";
					sLocal_264 = "cult_p4_trv";
					sLocal_265 = "cult_p4_victim";
					sLocal_267 = "cult_p4_cam";
					fLocal_88 = 0.77f;
					fLocal_87 = 0.999f;
				}
				else if (Global_17C49.f_6E20.f_5 == 2)
				{
					sLocal_268 = "ACULT_LEAVE3";
					sLocal_262 = "cult_p4_guard";
					sLocal_264 = "cult_p4_trv";
					sLocal_265 = "cult_p4_victim";
					sLocal_267 = "cult_p4_cam";
					fLocal_88 = 0.77f;
					fLocal_87 = 0.999f;
				}
				else if (Global_17C49.f_6E20.f_5 >= 3)
				{
					sLocal_268 = "ACULT_CAPT";
					sLocal_262 = "cult_p7_guard_01";
					sLocal_263 = "cult_p7_guard_02";
					sLocal_264 = "cult_p7_trv";
					sLocal_265 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_cam";
					fLocal_88 = 0.98f;
					fLocal_87 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_103))
				{
					HUD::REMOVE_BLIP(&uLocal_103);
				}
				func_20(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_163())
				{
					func_162(0);
				}
				func_160();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_98))
						{
							iLocal_92++;
						}
					}
				}
				else
				{
					iLocal_98 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(uLocal_96[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_96[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_96[0]);
					}
					iLocal_92++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_98))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_98, 1, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_98, Local_53, 13f, 13f, 13f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_98, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_98))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_98, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_98);
					}
				}
			}
			MISC::CLEAR_AREA(Local_53, 12f, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_96[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_96[0], 128.2065f);
			}
			iLocal_97[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_270, 1, iLocal_97[0], "ACULTMember1", 0, 1);
			if (Global_17C49.f_6E20.f_5 >= 3)
			{
				iLocal_97[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_270, 2, iLocal_97[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_270, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_95(&uLocal_270, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_270, 4, 0, "ACULTGroup", 0, 1);
			if (Global_17C49.f_6E20.f_5 != 1 && Global_17C49.f_6E20.f_5 != 2)
			{
				func_96(&uLocal_270, "ACULTAU", sLocal_268, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_97[0], 1);
			iLocal_99 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_52, 1, 1, 0);
			iLocal_100 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_97[0], 1), 1, 1065353216, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, iLocal_97[0], PED::GET_PED_BONE_INDEX(iLocal_97[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_17C49.f_6E20.f_5 < 3)
			{
				if (Global_17C49.f_6E20.f_5 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_17C49.f_6E20.f_5 >= 3)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_97[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_105 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_91 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_91, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[0], uLocal_91, "random@altruist_cult", sLocal_262, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_17C49.f_6E20.f_5 >= 3)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[1], uLocal_91, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_105, uLocal_91, sLocal_267, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_96[0], uLocal_91, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_92++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				if (PED::IS_PED_MALE(uLocal_96[0]))
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_17C49.f_6E20.f_5 == 1 || Global_17C49.f_6E20.f_5 == 2)
				{
					if (!func_106())
					{
						func_96(&uLocal_270, "ACULTAU", sLocal_268, 4, 0, 0, 0);
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_91) > fLocal_88)
			{
				iLocal_92++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_96[0]))
			{
				if (PED::IS_PED_MALE(uLocal_96[0]))
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_96[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_17C49.f_6E20.f_5 == 1 || Global_17C49.f_6E20.f_5 == 2)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_91) > 0.9742857f && !iLocal_84) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_84 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_91) > fLocal_87)
			{
				iLocal_92++;
			}
			break;
		
		case 4:
			if (Global_17C49.f_6E20.f_5 < 3)
			{
				if (Global_17C49.f_6E20.f_5 != 1 && Global_17C49.f_6E20.f_5 != 2)
				{
					func_126();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
					{
						PED::DELETE_PED(&(iLocal_97[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[1]))
					{
						PED::DELETE_PED(&(iLocal_97[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_97[0], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[1]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_97[1], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_96[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uLocal_96[0], 0);
					}
					iLocal_92++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
				{
					OBJECT::DELETE_OBJECT(&iLocal_99);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
				{
					OBJECT::DELETE_OBJECT(&iLocal_100);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_17C49.f_6E20.f_5 == 0)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, 0, 1, 0);
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_267, "cult_p4_cam"))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				}
				CAM::SET_CAM_ACTIVE(uLocal_105, 0);
				func_20(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				func_144(func_13(), 1, 1000, 0, 0);
			}
			if (Global_17C49.f_6E20.f_5 != 1 && Global_17C49.f_6E20.f_5 != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_17C49.f_6E20.f_5++;
				iLocal_77 = 1;
			}
			break;
		
		case 5:
			if (!func_106() || SYSTEM::TIMERB() > 7000)
			{
				func_126();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
				{
					PED::DELETE_PED(&(iLocal_97[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[1]))
				{
					PED::DELETE_PED(&(iLocal_97[1]));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_17C49.f_6E20.f_5++;
				iLocal_77 = 1;
			}
			break;
	}
}

void func_165()//Position - 0x7778
{
	if (func_167())
	{
		if (func_13() == 2)
		{
			if (PED::DOES_GROUP_EXIST(func_166()))
			{
				PED::GET_GROUP_SIZE(func_166(), &uLocal_89, &iLocal_90);
				if (iLocal_90 == 1)
				{
					uLocal_96[0] = PED::GET_PED_AS_GROUP_MEMBER(func_166(), 0);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_96[0], Local_53, 5f, 5f, 5f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_49 = 1;
					}
				}
				else if (iLocal_90 == 2)
				{
					uLocal_96[0] = PED::GET_PED_AS_GROUP_MEMBER(func_166(), 0);
					uLocal_96[1] = PED::GET_PED_AS_GROUP_MEMBER(func_166(), 1);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_96[0], Local_53, 5f, 5f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_96[1], Local_53, 5f, 5f, 5f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_49 = 1;
					}
				}
			}
		}
	}
}

var func_166()//Position - 0x7881
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_167()//Position - 0x7891
{
	return Global_6066;
}

void func_168()//Position - 0x789C
{
	if (func_171())
	{
		if (iLocal_259 == 0)
		{
			iLocal_259 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_52 - Vector(100f, 60f, 80f), Local_52 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_91(PLAYER::PLAYER_ID()), Local_52, 1) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_170())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (func_169())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_13() == 2)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_170())
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
				}
			}
			else if (func_169())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_170())
	{
		if (iLocal_82)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_START");
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_84F4[9 /*31*/].f_2, 6f, Global_84F4[9 /*31*/].f_5, 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_84F4[9 /*31*/].f_5, Global_84F4[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_84F4[10 /*31*/].f_2, 6f, Global_84F4[10 /*31*/].f_5, 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_84F4[10 /*31*/].f_5, Global_84F4[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_83 = true;
			iLocal_82 = 0;
		}
	}
	else if (!iLocal_82)
	{
		if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_END");
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_83)
		{
			func_141();
		}
		iLocal_82 = 1;
	}
}

int func_169()//Position - 0x7ACD
{
	if ((((((MISC::IS_BULLET_IN_ANGLED_AREA(Local_54, Local_55, fLocal_56, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_57, Local_58, fLocal_59, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_60, Local_61, fLocal_62, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_63, Local_64, fLocal_65, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_66, Local_67, fLocal_68, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_69, Local_70, fLocal_71, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_72, Local_73, fLocal_74, 1))
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x7B6A
{
	if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54, Local_55, fLocal_56, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_57, Local_58, fLocal_59, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_60, Local_61, fLocal_62, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_63, Local_64, fLocal_65, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_66, Local_67, fLocal_68, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_69, Local_70, fLocal_71, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_72, Local_73, fLocal_74, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x7C31
{
	if (Global_17C49.f_6E20.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_172()//Position - 0x7C4D
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, 1862763509);
	if (Global_17C49.f_6E20.f_5 >= iLocal_95 && Global_17C49.f_6E20.f_5 != 1000)
	{
		if (bLocal_75)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_49 = 3;
		}
		else
		{
			func_173(&uLocal_108);
			Global_14E78 = 0;
			Global_14E79 = 0;
			Global_14E7A = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			MISC::SET_FADE_OUT_AFTER_DEATH(1);
			MISC::PAUSE_DEATH_ARREST_RESTART(0);
			MISC::IGNORE_NEXT_RESTART(0);
			func_3(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_82 = 0;
			func_92();
			Global_17C49.f_6E20.f_5 = (iLocal_95 - 1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_173(&uLocal_108);
		Global_14E78 = 0;
		Global_14E79 = 0;
		Global_14E7A = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
		MISC::IGNORE_NEXT_RESTART(0);
		func_3(0);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_258))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_258);
			func_94(0);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_82 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_173(var uParam0)//Position - 0x7D79
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

