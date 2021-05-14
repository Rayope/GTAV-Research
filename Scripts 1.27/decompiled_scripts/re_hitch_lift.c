#region Local Var
	var uLocal_0 = 0;
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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<6> Local_105 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_106 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char[] cLocal_145[8] = 0;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char* sLocal_148 = NULL;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	float fLocal_151 = 0f;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	struct<3> Local_157 = { 0, 0, 0 } ;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 16;
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
	struct<2> Local_325 = { 0, 5 } ;
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
	var uLocal_341 = 5;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_44 = -1f;
	uLocal_52 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_53 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_63 = { -3092.82f, 749.8f, 21.48f };
	Local_64 = { 181.8977f, 4415.152f, 73.463f };
	Local_65 = { 2743.461f, 4385.51f, 47.7521f };
	Local_66 = { -382.1346f, 2817.971f, 44.0671f };
	Local_78 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_105, "", 24);
	Local_60 = { ScriptParam_325.f_1[0 /*3*/] };
	func_261();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
		}
		func_240();
	}
	if (func_211(Local_60, 13, iLocal_67, 0, 0))
	{
		func_208(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_88)
		{
			if (!func_207())
			{
				if (func_206())
				{
					func_240();
				}
			}
			RECORDING::_0x208784099002BC30("RE_HL", 0);
			switch (iLocal_54)
			{
				case 0:
					if (func_194())
					{
						func_240();
					}
					if (!iLocal_59)
					{
						func_193();
					}
					else
					{
						func_192();
					}
					if (bLocal_58)
					{
						iLocal_110 = 1;
						iLocal_54 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_55)
						{
							case 0:
								if ((func_191() && iLocal_56 != 8) && iLocal_56 != 10)
								{
									if (!func_207())
									{
										func_182(1);
									}
									iLocal_55 = 1;
								}
								switch (iLocal_56)
								{
									case 0:
										func_175();
										break;
									
									case 1:
										func_173();
										break;
									
									case 2:
										if (func_172())
										{
										}
										iLocal_125 = MISC::GET_GAME_TIMER();
										if (iLocal_107 < 1 && !iLocal_108)
										{
											func_171();
										}
										if (iLocal_57 == 1)
										{
											func_170();
										}
										else if (iLocal_57 == 2)
										{
											func_169();
										}
										else if (iLocal_57 == 3)
										{
											func_168();
										}
										else if (iLocal_57 == 5)
										{
											func_165();
										}
										break;
									
									case 3:
										func_162();
										break;
									
									case 4:
										if (iLocal_57 == 1)
										{
											func_145();
											func_144();
										}
										else if (iLocal_57 == 3)
										{
											func_139();
											func_138();
										}
										else if (iLocal_57 == 5)
										{
											func_139();
											func_129();
										}
										if (!bLocal_91)
										{
											func_125();
											func_124();
											func_121();
											func_120();
											func_117();
											func_115();
											func_114();
											func_113();
										}
										func_105();
										break;
									
									case 6:
										func_62();
										if (iLocal_57 == 3)
										{
											func_138();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_57 == 3)
										{
											func_138();
										}
										break;
									
									case 8:
										if (iLocal_57 == 3)
										{
											func_57();
											func_138();
										}
										break;
									
									case 9:
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_76, 200f, 200f, 200f, 0, 1, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_70, Local_76, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												TASK::TASK_WANDER_STANDARD(iLocal_70, 1193033728, 0);
											}
											PED::SET_PED_KEEP_TASK(iLocal_70, 1);
											SYSTEM::WAIT(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_56 != 10)
								{
									if (!PED::IS_PED_INJURED(iLocal_70))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_78, 5f, 5f, 5f, 0, 1, 0))
										{
											func_50(0);
											SYSTEM::WAIT(0);
											func_48();
											iLocal_56 = 10;
										}
									}
								}
								if (func_47())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
									{
										PED::DELETE_PED(&iLocal_70);
									}
									func_18();
								}
								break;
							
							case 1:
								func_48();
								SYSTEM::WAIT(0);
								if (iLocal_57 == 1)
								{
									func_1(&uLocal_160, cLocal_145, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_57 == 2)
								{
									func_1(&uLocal_160, cLocal_145, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_57 == 3)
								{
									func_1(&uLocal_160, cLocal_145, "REHH3_AGG", 4, 0, 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_71))
									{
										TASK::CLEAR_PED_TASKS(iLocal_71);
										TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										PED::SET_PED_KEEP_TASK(iLocal_71, 1);
									}
								}
								else if (iLocal_57 == 5)
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									TASK::CLEAR_PED_TASKS(iLocal_70);
									TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_70, 1);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_240();
		}
		if (iLocal_56 > 2)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_56 > 0 && iLocal_56 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(iLocal_70))
				{
					if (!func_207())
					{
						func_182(1);
					}
					func_53();
				}
				else if (!PED::IS_PED_RAGDOLL(iLocal_70))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x583
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)//Position - 0x5D1
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
					func_16();
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
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_14();
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
				func_7();
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
				if (func_6())
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
			func_4();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_3();
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
		func_16();
	}
	return 0;
}

void func_3()//Position - 0x89D
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

void func_4()//Position - 0x8CD
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

int func_5()//Position - 0x962
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x989
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

void func_7()//Position - 0xA22
{
	if (func_13(14))
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
		Global_3839 = func_8();
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

int func_8()//Position - 0xAC3
{
	func_9();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_9()//Position - 0xADC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_13(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_10(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_10(int iParam0)//Position - 0xBD9
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0xBE5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0xC22
{
	if (func_10(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)//Position - 0xC4C
{
	return Global_8861 == iParam0;
}

void func_14()//Position - 0xC5A
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

bool func_15(int iParam0, int iParam1)//Position - 0xCB0
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

void func_16()//Position - 0xCEB
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

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD42
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

void func_18()//Position - 0xD98
{
	while (!func_46())
	{
		SYSTEM::WAIT(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_67);
	func_19();
	func_240();
}

void func_19()//Position - 0xDCA
{
	func_20();
}

int func_20()//Position - 0xDD7
{
	if (func_21(0))
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

bool func_21(bool bParam0)//Position - 0xE22
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_22(int iParam0, int iParam1)//Position - 0xE4D
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_33("RE_REWARD", 1, 0, 4000, 10000, func_36(), 0, 138, 0);
			func_32(51);
		}
		if (func_31(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_23(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_23(7);
			}
			else
			{
				func_23(1);
			}
		}
	}
}

void func_23(int iParam0)//Position - 0xF50
{
	Global_17C3B = iParam0;
}

void func_24(int iParam0, var uParam1, var uParam2)//Position - 0xF5E
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
		func_28((891 + iParam0), 1, -1, 1);
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
		Global_17C49.f_2100[iParam0 /*12*/].f_A = uParam1;
		Global_17C49.f_2100[iParam0 /*12*/].f_B = uParam2;
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
		func_25();
	}
}

void func_25()//Position - 0x1046
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
		func_27(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_26() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()//Position - 0x1507
{
	return Global_5F7C;
}

int func_27(int iParam0, int iParam1)//Position - 0x1512
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

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1563
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
		iParam2 = func_29();
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

int func_29()//Position - 0x17BE
{
	return Global_1407E1;
}

int func_30(int iParam0, int iParam1)//Position - 0x17CA
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_31(int iParam0)//Position - 0x1B3E
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

void func_32(int iParam0)//Position - 0x1B6D
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
		MISC::SET_BIT(&(Global_17C49.f_5C53.f_96[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1BAF
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1BCF
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
		func_35();
	}
}

void func_35()//Position - 0x1DA1
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

int func_36()//Position - 0x1EC1
{
	func_9();
	switch (Global_17C49.f_6C1.f_21B.f_C8D)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x1F07
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

void func_38(int iParam0, int iParam1)//Position - 0x1F4A
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)//Position - 0x1F65
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

int func_40()//Position - 0x2016
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2033
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

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0x220D
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_17C49.f_6C1.f_21B.f_5C3[iParam1 /*4*/][iParam0] = (Global_17C49.f_6C1.f_21B.f_5C3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2903;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 2903)
			{
				iVar0 = func_45(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_43(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22FC
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_44(int iParam0)//Position - 0x2327
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x235B
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

int func_46()//Position - 0x238D
{
	return 1;
}

int func_47()//Position - 0x2396
{
	if (Global_6067)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x23AE
{
	Global_38DE = 0;
	func_49();
}

void func_49()//Position - 0x23BE
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_50(int iParam0)//Position - 0x23DF
{
	Global_413F = iParam0;
}

int func_51()//Position - 0x23EC
{
	if (Global_17C49.f_6E20.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()//Position - 0x2408
{
	return Global_6066;
}

void func_53()//Position - 0x2413
{
	func_55();
	while (func_54())
	{
		SYSTEM::WAIT(0);
	}
	func_240();
}

int func_54()//Position - 0x2432
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_55()//Position - 0x2454
{
	Global_38DE = 0;
	func_56();
}

void func_56()//Position - 0x2464
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

void func_57()//Position - 0x2488
{
	struct<6> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_71) && !PED::IS_PED_INJURED(iLocal_70))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 25f, 25f, 25f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 40f, 40f, 40f, 0, 1, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_71);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_71, Local_76, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_71, PLAYER::PLAYER_PED_ID()))
			{
				iLocal_126 = 4;
			}
		}
	}
	if (!iLocal_90)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					func_48();
					SYSTEM::WAIT(0);
					func_1(&uLocal_160, cLocal_145, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_90 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_70))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
		}
		if (PED::IS_PED_INJURED(iLocal_71) && ENTITY::IS_ENTITY_AT_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(iLocal_71, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_126 = 5;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_71))
	{
		TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_135)
	{
		if (PED::IS_PED_INJURED(iLocal_71))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_99))
			{
				HUD::REMOVE_BLIP(&uLocal_99);
			}
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				iLocal_126 = 3;
			}
		}
	}
	if (!iLocal_137)
	{
		if (!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_INJURED(iLocal_71))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					iLocal_126 = 2;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_71))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_99))
			{
				HUD::REMOVE_BLIP(&uLocal_99);
			}
			func_59(&uLocal_160, 4);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_126 = 2;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, iLocal_71, 1))
			{
				iLocal_126 = 2;
			}
		}
	}
	switch (iLocal_126)
	{
		case 0:
			if (!iLocal_135)
			{
				if (!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_INJURED(iLocal_71))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0) && PED::IS_PED_IN_MELEE_COMBAT(iLocal_71))
					{
						if (!iLocal_136)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_71, -1, 2052, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_71, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
							iLocal_136 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_70, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_126 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_137)
			{
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					func_48();
					SYSTEM::WAIT(0);
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							AUDIO::PLAY_PAIN(iLocal_71, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_137 = 1;
					iLocal_126 = 0;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				func_48();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					AUDIO::PLAY_PAIN(iLocal_70, 7, 0, 0);
				}
				func_1(&uLocal_160, cLocal_145, "REHH3_BAS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_70) && ENTITY::DOES_ENTITY_EXIST(iLocal_71))
				{
					TASK::CLEAR_PED_TASKS(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_71, -1, 2052, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_71, 0), 1f, -1, 3f, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_71, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_70, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, 0);
					SYSTEM::WAIT(10000);
					iLocal_135 = 1;
					iLocal_126 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_126 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (func_1(&uLocal_160, cLocal_145, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_126 = 0;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				func_55();
				SYSTEM::WAIT(0);
				if (func_1(&uLocal_160, cLocal_145, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_126 = 0;
				}
			}
			break;
	}
}

int func_58()//Position - 0x29EF
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)//Position - 0x2A10
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_60()//Position - 0x2A2D
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

void func_61()//Position - 0x2A73
{
	if (iLocal_57 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
			iLocal_56 = 8;
		}
	}
}

void func_62()//Position - 0x2A9E
{
	if (HUD::DOES_BLIP_EXIST(uLocal_68))
	{
		HUD::REMOVE_BLIP(&uLocal_68);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_69))
	{
		HUD::REMOVE_BLIP(&uLocal_69);
	}
	if (iLocal_57 == 1)
	{
		AUDIO::STOP_SOUND(uLocal_144);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (!iLocal_101)
		{
			func_48();
			SYSTEM::WAIT(0);
			func_1(&uLocal_160, cLocal_145, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				func_81(func_8(), 1, 100, 0, 1);
				func_80(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 8000, 2052, 4);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_70, 1);
				SYSTEM::SETTIMERB(0);
				iLocal_101 = 1;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CAM::STOP_GAMEPLAY_HINT(0);
			if (SYSTEM::TIMERB() > 8500 && !iLocal_103)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_103 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70) || SYSTEM::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || SYSTEM::TIMERB() > 15000)
			{
				PED::DELETE_PED(&iLocal_70);
				func_18();
			}
		}
	}
	else if (iLocal_57 == 2)
	{
		if (!iLocal_101)
		{
			func_48();
			SYSTEM::WAIT(0);
			func_1(&uLocal_160, cLocal_145, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_101 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_70))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_70, 1);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				SYSTEM::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (func_8() == 0)
				{
					func_66(9, 1, 0);
				}
				else if (func_8() == 1)
				{
					func_66(9, 1, 1);
				}
				else if (func_8() == 2)
				{
					func_66(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_18();
			}
		}
	}
	else if (iLocal_57 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (func_1(&uLocal_160, cLocal_145, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_71, 1);
					if (!HUD::DOES_BLIP_EXIST(uLocal_98))
					{
						HUD::REMOVE_BLIP(&uLocal_98);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_99))
					{
						uLocal_99 = func_63(iLocal_71, 1, 145);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 1073741824, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &iLocal_159);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_71, iLocal_159);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), iLocal_159);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -183807561, iLocal_159);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_159, -183807561);
					SYSTEM::SETTIMERA(0);
					iLocal_56 = 7;
				}
			}
		}
	}
	else if (iLocal_57 == 5)
	{
		if (!iLocal_101)
		{
			func_48();
			SYSTEM::WAIT(0);
			func_1(&uLocal_160, cLocal_145, "REHH5_THX", 4, 0, 0, 0);
			iLocal_101 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
			PED::SET_PED_KEEP_TASK(iLocal_70, 1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
			PED::REMOVE_PED_FROM_GROUP(iLocal_70);
		}
		SYSTEM::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		SYSTEM::WAIT(3000);
		func_18();
	}
}

var func_63(int iParam0, bool bParam1, int iParam2)//Position - 0x3125
{
	var uVar0;
	
	uVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x3177
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)//Position - 0x321B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(int iParam0, bool bParam1, int iParam2)//Position - 0x3232
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_79();
	}
	if (func_78(iParam2) == 4)
	{
	}
	bVar0 = Global_17C49.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_17C49.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_77(iParam0, 0);
			func_74(func_76(iParam0), func_78(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_200000[func_73() /*8053*/].f_167C.f_28A), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_1785B.f_F[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_67(func_76(iParam0), func_78(iParam2));
	}
}

void func_67(int iParam0, int iParam1)//Position - 0x3323
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

void func_68(int iParam0, int iParam1)//Position - 0x3366
{
	if (iParam1 > -1)
	{
		Global_1785B.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_1785B.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_69(int iParam0)//Position - 0x33A3
{
	if (iParam0 != -1)
	{
		Global_1785B.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_1785B.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)//Position - 0x33DA
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_25284D[iVar0] = iParam0;
	}
}

int func_71()//Position - 0x33FD
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

int func_72(int iParam0, var uParam1)//Position - 0x3432
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

int func_73()//Position - 0x34B8
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x34C5
{
	Global_B85 = iParam0;
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		func_7();
		if (iParam1 == 4)
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_C[0] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_C[1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_C[2] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[0] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] == 1 && Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_10A95)
			{
				if (iParam1 != 4)
				{
					if (Global_3839 != iParam1)
					{
						Global_B6A[iParam1 /*4*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
						Global_B7B[iParam1] = 1;
						Global_B80[iParam1] = iParam0;
					}
					else if (iParam0 == Global_3839)
					{
					}
					else
					{
						Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
						Global_B39[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
					Global_B39[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
				Global_B39[1 /*6*/].f_5 = iParam1;
				func_75();
			}
		}
	}
}

void func_75()//Position - 0x366F
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_17C49.f_744E[Global_B85 /*29*/].f_7)), 64);
	if (Global_B98 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_B39[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_B39[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8D7, 0);
}

int func_76(int iParam0)//Position - 0x36EC
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

void func_77(int iParam0, int iParam1)//Position - 0x3789
{
	Global_17C49.f_F3[func_79() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_78(int iParam0)//Position - 0x37A7
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_79()//Position - 0x3803
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_44(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_80(int iParam0, int iParam1)//Position - 0x3891
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x38CE
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
	func_82(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x39B5
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_104();
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
					func_103(99, 1);
					func_102(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_102(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_102(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_89(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_88(5))
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
							func_102(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_102(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_102(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_102(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_property"), iParam3);
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
									func_102(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_103(95, iParam3);
					break;
				
				case 1:
					func_103(97, iParam3);
					break;
				
				case 2:
					func_103(96, iParam3);
					break;
			}
			func_103(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_85(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_85(iVar1);
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
					func_102(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_102(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_102(joaat("sp2_total_cash_earned"), iParam3);
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
	func_84(iParam0);
	if (Global_8861 == 15)
	{
		func_83(0);
	}
	return 1;
}

void func_83(bool bParam0)//Position - 0x3FB4
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

void func_84(int iParam0)//Position - 0x4238
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

void func_85(int iParam0)//Position - 0x4292
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_73() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_73() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_86(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_86(int iParam0)//Position - 0x4353
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

void func_87(int iParam0)//Position - 0x43CC
{
	func_103(93, iParam0);
	func_103(29, iParam0);
	func_103(30, iParam0);
}

bool func_88(int iParam0)//Position - 0x43EC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_73() /*8053*/].f_167C.f_A, iParam0);
}

int func_89(bool bParam0)//Position - 0x4428
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
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_90(27, 1);
	return 1;
}

int func_90(int iParam0, int iParam1)//Position - 0x44DF
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_91(iParam0, iParam1);
}

int func_91(int iParam0, int iParam1)//Position - 0x44FA
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_101(&Global_26D4DB))
	{
		if (func_99(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_92(&Global_26D4DB, iParam0))
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

int func_92(var uParam0, int iParam1)//Position - 0x457E
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
	}
	func_95(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_93(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_93(var uParam0, int iParam1)//Position - 0x4604
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_94(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_94(var uParam0, int iParam1)//Position - 0x4654
{
	return (*uParam0)[iParam1] == 61;
}

void func_95(var uParam0)//Position - 0x4665
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98(uParam0, iVar0);
		iVar0++;
	}
	func_96(&(uParam0->f_3E), (8f - 0.5f));
}

void func_96(var uParam0, float fParam1)//Position - 0x469C
{
	uParam0->f_1 = (func_97(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_97(bool bParam0)//Position - 0x46CA
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

void func_98(var uParam0, int iParam1)//Position - 0x4712
{
	(*uParam0)[iParam1] = 61;
}

bool func_99(var uParam0, int iParam1)//Position - 0x4722
{
	return func_100(uParam0, iParam1) != -1;
}

int func_100(var uParam0, int iParam1)//Position - 0x4734
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

bool func_101(var uParam0)//Position - 0x4761
{
	return uParam0->f_44 == 1;
}

void func_102(int iParam0, int iParam1)//Position - 0x476F
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_103(int iParam0, int iParam1)//Position - 0x4792
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

void func_104()//Position - 0x47EF
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

void func_105()//Position - 0x4864
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_112())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_70, 0, 0);
				}
				if (!iLocal_109)
				{
					func_107(0);
					func_48();
					SYSTEM::WAIT(0);
					if (!func_54())
					{
						if (iLocal_57 == 1)
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_57 == 2)
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_57 == 3)
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_57 == 5)
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_109 = 1;
					}
				}
			}
			else
			{
				iLocal_109 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_70);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_70))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
		}
	}
}

var func_106()//Position - 0x4A2B
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_107(bool bParam0)//Position - 0x4A3B
{
	if (bParam0)
	{
		if (iLocal_104)
		{
			if (func_111(&uLocal_160, cLocal_145, &Local_106, &Local_105, 8, 0, 0))
			{
				iLocal_104 = 0;
			}
		}
	}
	else if ((!iLocal_104 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_109())
	{
		Local_106 = { func_108() };
		Local_105 = { func_60() };
		func_55();
		iLocal_104 = 1;
	}
}

struct<6> func_108()//Position - 0x4A96
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

int func_109()//Position - 0x4ABA
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_110("REHH1_VEH") || func_110("REHH2_VEH")) || func_110("REHH3_VEH")) || func_110("REHH4_VEH")) || func_110("REHH5_VEH")) || func_110("REHH1_VEH2")) || func_110("REHH2_VEH2")) || func_110("REHH3_VEH2")) || func_110("REHH4_VEH2")) || func_110("REHH5_VEH2")) || func_110("REHH1_WLK")) || func_110("REHH2_WLK")) || func_110("REHH3_WLK")) || func_110("REHH4_WLK")) || func_110("REHH5_WLK")) || func_110("REHH1_SLR")) || func_110("REHH4_SLR")) || func_110("REHH1_SLW")) || func_110("REHH2_SLW")) || func_110("REHH3_SLW")) || func_110("REHH4_SLW")) || func_110("REHH5_SLW")) || func_110("REHH1_OUT")) || func_110("REHH2_GETOUT")) || func_110("REHH3_GETOUT")) || func_110("REHH5_GETOUT")) || func_110("REHH1_JACK")) || func_110("REHH2_JACK")) || func_110("REHH3_JACK")) || func_110("REHH5_JACK")) || func_110("REHH1_GUN")) || func_110("REHH2_SHOOT")) || func_110("REHH3_SHOOT")) || func_110("REHH5_SHOO")) || func_110("REHH1_1HOUR")) || func_110("REHH2_1HOUR")) || func_110("REHH1_HHOUR")) || func_110("REHH2_HHOUR")) || func_110("REHH1_CRASH")) || func_110("REHH1_WAY")) || func_110("REHH2_NEAR")) || func_110("REHH3_NEAR")) || func_110("REHH5_NEAR")) || func_110("REHH2_CULT")) || func_110("REHH3_CULT")) || func_110("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_110(char* sParam0)//Position - 0x4D48
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_108()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_111(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4D70
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_2(sParam2, iParam4, 0);
}

int func_112()//Position - 0x4DC4
{
	if (iLocal_57 == 5)
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_113()//Position - 0x4ED7
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_117)
		{
			iLocal_119 = MISC::GET_GAME_TIMER();
			iLocal_117 = 1;
		}
		else
		{
			iLocal_121 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_121 = 0;
		iLocal_120 = 0;
		iLocal_117 = 0;
		iLocal_118 = 0;
	}
	if ((iLocal_121 - iLocal_119) > 3000 && (iLocal_121 - iLocal_120) > 6000)
	{
		if (!func_54())
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_120 = iLocal_121;
		}
	}
	if ((iLocal_121 - iLocal_119) > 50000 && !iLocal_118)
	{
		func_107(0);
		func_48();
		SYSTEM::WAIT(0);
		if (!func_54())
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_57 == 2)
			{
				func_1(&uLocal_160, cLocal_145, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_57 == 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
					}
				}
				func_1(&uLocal_160, cLocal_145, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_57 == 5)
			{
				func_1(&uLocal_160, cLocal_145, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_118 = 1;
		}
	}
	if ((iLocal_121 - iLocal_119) > 60000 && iLocal_118)
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_70, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_76, 200f, 200f, 200f, 0, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_70, Local_76, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_70, 1193033728, 0);
					}
					if (iLocal_57 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_70, 1);
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					func_53();
				}
			}
		}
	}
}

void func_114()//Position - 0x50A1
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_70))
		{
			if (!iLocal_114)
			{
				iLocal_115 = MISC::GET_GAME_TIMER();
				iLocal_114 = 1;
			}
			else
			{
				iLocal_116 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_114 = 0;
		}
	}
	if ((iLocal_116 - iLocal_115) > 90000)
	{
		func_107(0);
		func_48();
		SYSTEM::WAIT(0);
		if (iLocal_57 == 1)
		{
			func_1(&uLocal_160, cLocal_145, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 2)
		{
			func_1(&uLocal_160, cLocal_145, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 3)
		{
			func_1(&uLocal_160, cLocal_145, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 5)
		{
			func_1(&uLocal_160, cLocal_145, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_70, 1);
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_76, 200f, 200f, 200f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_70, Local_76, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_70, 1193033728, 0);
			}
			if (iLocal_57 == 1)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_70, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
			func_53();
		}
	}
}

void func_115()//Position - 0x51E1
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_98))
				{
					uLocal_98 = func_63(iLocal_70, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_68))
				{
					HUD::REMOVE_BLIP(&uLocal_68);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_68))
				{
					uLocal_68 = func_116(Local_76, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_98))
				{
					HUD::REMOVE_BLIP(&uLocal_98);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_98))
		{
			uLocal_98 = func_63(iLocal_70, 0, 145);
		}
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 50f, 50f, 50f, 0, 1, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_68))
			{
				uLocal_68 = func_116(Local_76, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 50f, 50f, 50f, 0, 1, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_68))
			{
				HUD::REMOVE_BLIP(&uLocal_68);
			}
		}
	}
}

var func_116(struct<3> Param0, int iParam1)//Position - 0x5317
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_117()//Position - 0x5343
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_119())
			{
				func_50(0);
				iLocal_102 = 0;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
		{
			if (func_54() && !iLocal_102)
			{
				func_50(1);
				iLocal_102 = 1;
			}
		}
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_70, 0);
		}
		if (func_118("REHH3_CHT3_7"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_70, 1, 1);
		}
		if (func_118("REHH3_CHT6_5"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_70, 0, 1);
		}
		if (func_118("REHH3_CHT8_3"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_70, 1, 1);
		}
		if ((func_110("REHH3_CHT8M") || func_110("REHH3_CHT8F")) || func_110("REHH3_CHT8T"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_70, 0, 1);
		}
	}
}

int func_118(char* sParam0)//Position - 0x542E
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x5456
{
	if (Global_413F == 1)
	{
		return 1;
	}
	return 0;
}

void func_120()//Position - 0x546D
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (iLocal_57 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!func_110("REHH1_CRASH"))
						{
							func_107(0);
							func_48();
							SYSTEM::WAIT(0);
							func_1(&uLocal_160, cLocal_145, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_111)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_107(0);
					func_48();
					SYSTEM::WAIT(0);
					if (!func_54())
					{
						if (iLocal_57 == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_57 == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_57 == 3)
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
								}
							}
							func_1(&uLocal_160, cLocal_145, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_57 == 5)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_111 = 0;
			}
		}
		if (!iLocal_112)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_107(0);
				func_48();
				SYSTEM::WAIT(0);
				if (!func_54())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 3)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 5)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_112 = 1;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_112 = 0;
		}
		if (!iLocal_113)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_107(0);
				func_48();
				SYSTEM::WAIT(0);
				if (!func_54())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 3)
					{
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
							}
						}
						func_1(&uLocal_160, cLocal_145, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 5)
					{
					}
					iLocal_113 = 1;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_113 = 0;
		}
	}
}

void func_121()//Position - 0x572E
{
	if (func_123(Local_76))
	{
		func_107(0);
		func_48();
		SYSTEM::WAIT(0);
		if (iLocal_57 == 1)
		{
			func_1(&uLocal_160, cLocal_145, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 2)
		{
			func_1(&uLocal_160, cLocal_145, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
				}
			}
			func_1(&uLocal_160, cLocal_145, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 5)
		{
			func_1(&uLocal_160, cLocal_145, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_122())
	{
		func_107(0);
		func_48();
		SYSTEM::WAIT(0);
		if (iLocal_57 == 1)
		{
		}
		else if (iLocal_57 == 2)
		{
			func_1(&uLocal_160, cLocal_145, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_70))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
				}
			}
			func_1(&uLocal_160, cLocal_145, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_57 == 5)
		{
			func_1(&uLocal_160, cLocal_145, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_122()//Position - 0x5851
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_606B)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_606B = 1;
					if (!Global_606A)
					{
						Global_606A = 1;
						return 1;
					}
				}
			}
			else if (Global_606B)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_606B = 0;
			}
		}
	}
	return 0;
}

int func_123(struct<3> Param0)//Position - 0x58CC
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_6069)
		{
			if (fLocal_44 == -1f)
			{
				fLocal_44 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_44 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_6069 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_124()//Position - 0x5959
{
	if (!func_109())
	{
		func_107(1);
	}
	if (!func_54())
	{
		switch (iLocal_85)
		{
			case 0:
				if (iLocal_57 == 1)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_57 == 2)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_57 == 3)
				{
					iLocal_87 = MISC::GET_GAME_TIMER() + 2000;
				}
				else if (iLocal_57 == 5)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				iLocal_85++;
				break;
			
			case 1:
				if (iLocal_87 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 3)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_57 == 5)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_85++;
				}
				break;
			
			case 2:
				if (iLocal_87 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_57 == 1)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_57 == 2)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_57 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_57 == 5)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							if (!bLocal_89)
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_85++;
				}
				break;
			
			case 3:
				if (iLocal_57 == 1)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_57 == 2)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_57 == 3)
				{
					iLocal_87 = MISC::GET_GAME_TIMER() + 500;
				}
				else if (iLocal_57 == 5)
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
				}
				iLocal_85++;
				break;
			
			case 4:
				if (iLocal_87 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_85++;
					}
					else if (iLocal_57 == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_85++;
					}
					else if (iLocal_57 == 3)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_85++;
					}
					else if (iLocal_57 == 5)
					{
						if (bLocal_89 && !bLocal_91)
						{
							if (func_8() == 0)
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_8() == 1)
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_8() == 2)
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_85++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_57 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 6:
				if (iLocal_57 == 1)
				{
					func_1(&uLocal_160, cLocal_145, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 7:
				if (iLocal_57 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 8:
				if (iLocal_57 == 1)
				{
					func_1(&uLocal_160, cLocal_145, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 9:
				if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 10:
				if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 11:
				if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 12:
				if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 13:
				if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 14:
				if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 15:
				if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 5)
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 16:
				if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 17:
				if (iLocal_57 == 3)
				{
					iLocal_87 = MISC::GET_GAME_TIMER() + 700;
				}
				iLocal_85++;
				break;
			
			case 18:
				if (iLocal_57 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_160, cLocal_145, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_85++;
				break;
			
			case 19:
				if (iLocal_57 == 2)
				{
					func_1(&uLocal_160, cLocal_145, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_57 == 3)
				{
					func_1(&uLocal_160, cLocal_145, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_85++;
				break;
			
			case 20:
				if (iLocal_57 == 3)
				{
					iLocal_87 = MISC::GET_GAME_TIMER() + 300;
				}
				iLocal_85++;
				break;
			
			case 21:
				if (iLocal_87 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_57 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_85++;
				}
				break;
			
			case 22:
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					TASK::TASK_PLAY_ANIM(iLocal_70, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_85++;
				break;
			}
	}
}

void func_125()//Position - 0x6814
{
	if (iLocal_57 != 3)
	{
		if (func_128())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 3f, 3f, 2f, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_76, Global_12, 0, 1, 0))
				{
					if (func_127(1, 0, 1))
					{
						func_126();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 3, 0);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
						iLocal_56 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_89)
	{
		if (PED::IS_PED_INJURED(iLocal_71))
		{
			iLocal_56 = 7;
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, 824.8886f, 1275.671f, 359.4312f, Global_12, 1, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				SYSTEM::WAIT(0);
				func_1(&uLocal_160, cLocal_145, "REHH3_CHT10", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_INJURED(iLocal_71))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_71, -1, 2052, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_71, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 2, 0);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_56 = 6;
			}
		}
	}
}

void func_126()//Position - 0x69FA
{
	Global_38DE = 0;
	func_16();
}

int func_127(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6A0A
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_128()//Position - 0x6AEA
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 50f, 50f, 50f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_70))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129()//Position - 0x6B6B
{
	if (bLocal_91)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if ((((PED::IS_PED_INJURED(iLocal_71) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_76) < 250f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_78) < 250f) || iLocal_93)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					HUD::REMOVE_BLIP(&uLocal_99);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_100))
				{
					HUD::REMOVE_BLIP(&uLocal_100);
				}
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					AUDIO::PLAY_PAIN(iLocal_71, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_71);
				}
				func_48();
				SYSTEM::WAIT(0);
				func_1(&uLocal_160, cLocal_145, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_71);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_138);
				}
				bLocal_91 = false;
			}
			else
			{
				if (!iLocal_94)
				{
					if (!func_54())
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_160, cLocal_145, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_94 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					func_137(&iLocal_71, &uLocal_99, &iLocal_138, &uLocal_100);
					func_136(&iLocal_71, &uLocal_99, &iLocal_138, &uLocal_100);
					func_130(iLocal_138, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_152, &uLocal_155, &Local_157, &uLocal_156, &uLocal_158, 0f, 0f, 0f, 1500, 0f);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_86 < MISC::GET_GAME_TIMER())
						{
							if (!func_54())
							{
								if (func_58())
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_86 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_110("REHH5_SHO"))
							{
								func_48();
								SYSTEM::WAIT(0);
								func_1(&uLocal_160, cLocal_145, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_71))
						{
							if ((PED::IS_PED_ON_FOOT(iLocal_71) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								iLocal_93 = 1;
							}
						}
					}
					if (!iLocal_92 && !PED::IS_PED_INJURED(iLocal_71))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_48();
							SYSTEM::WAIT(0);
							func_1(&uLocal_160, cLocal_145, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_92 = 1;
						}
					}
				}
			}
		}
	}
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9)//Position - 0x6E4C
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_135(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				*uParam3 = func_134(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1));
				func_133(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam8)
			{
				if (func_132(iParam0, iParam1, 1) > fParam9 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_131(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_157, uLocal_156, Param7) };
							if (!func_131(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iParam0, uLocal_156);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_131(struct<3> Param0)//Position - 0x7071
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_132(int iParam0, int iParam1, int iParam2)//Position - 0x709B
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

void func_133(int iParam0, var uParam1, var uParam2)//Position - 0x70F7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

var func_134(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)//Position - 0x7126
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_135(int iParam0)//Position - 0x7140
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_136(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x7187
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
				{
					if (HUD::DOES_BLIP_EXIST(*uParam1))
					{
						HUD::REMOVE_BLIP(uParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_116(ENTITY::GET_ENTITY_COORDS(*iParam2, 1), 0);
					HUD::SET_BLIP_COLOUR(*uParam3, 1);
					HUD::SET_BLIP_PRIORITY(*uParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*uParam3) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(*iParam2, 1) };
				Var1.x = (Var1.x + (((Var2.x - Var1.x) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var2.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var2.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*uParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_137(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x72D2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*uParam3))
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
		}
	}
}

void func_138()//Position - 0x73C3
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_71, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_139()//Position - 0x751B
{
	if (!bLocal_89)
	{
		if (iLocal_57 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_83, 200f, 200f, 200f, 0, 1, 0))
			{
				STREAMING::REQUEST_MODEL(iLocal_80);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
				if (STREAMING::HAS_MODEL_LOADED(iLocal_80) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					iLocal_71 = PED::CREATE_PED(26, iLocal_80, Local_83, fLocal_84, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 0, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 3, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_71, 42, 1);
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_71, 1);
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_71, "move_m@brave", 1048576000);
					PED::SET_PED_CONFIG_FLAG(iLocal_71, 137, 1);
					func_143(&uLocal_160, 4, iLocal_71, sLocal_147, 0, 1);
					TASK::TASK_PLAY_ANIM(iLocal_71, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
					bLocal_89 = true;
				}
			}
		}
		else if (iLocal_57 == 5)
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66, 1) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &Local_61, 1, 1077936128, 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_61, 7f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_61) < 110f)
							{
								STREAMING::REQUEST_MODEL(iLocal_80);
								if (STREAMING::HAS_MODEL_LOADED(iLocal_80))
								{
									func_55();
									SYSTEM::WAIT(0);
									if (func_142(&uLocal_160, cLocal_145, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(iLocal_70))
									{
										iLocal_138 = VEHICLE::CREATE_VEHICLE(iLocal_81, Local_61, func_140(Local_61, func_141(PLAYER::PLAYER_ID()), 1), 1, 1);
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_138, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_138, 0f);
										iLocal_71 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_138, 26, iLocal_80, -1, 1, 1);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 2, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(iLocal_71, 42, 1);
										AUDIO::STOP_PED_SPEAKING(iLocal_71, 1);
										func_143(&uLocal_160, 4, iLocal_71, sLocal_147, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_71, iLocal_138, iLocal_70, 6, 60f, 786468, -1f, -1f, 1);
										TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(iLocal_71, 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_81);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_138, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f));
										if (HUD::DOES_BLIP_EXIST(uLocal_68))
										{
											HUD::REMOVE_BLIP(&uLocal_68);
										}
										func_55();
										while (func_54())
										{
											SYSTEM::WAIT(0);
										}
										func_111(&uLocal_160, cLocal_145, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_91 = true;
										bLocal_89 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_140(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x77D5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_141(int iParam0)//Position - 0x783A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_142(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x784D
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_2(sParam2, iParam4, 0);
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x78A1
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

void func_144()//Position - 0x793C
{
	if (!iLocal_143 && !func_54())
	{
		if (iLocal_141 == 6 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 6 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 7 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 7 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 8 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 8 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 9 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 9 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 10 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 10 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 11 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 11 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 12 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 12 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 13 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 13 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 14 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 14 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 15 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 15 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 16 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 16 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 17 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 17 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 18 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 18 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 19 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 19 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 20 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 20 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 21 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 21 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 22 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 22 && iLocal_140 == 30)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
		if (iLocal_141 == 23 && iLocal_140 == 0)
		{
			if (iLocal_57 == 1)
			{
				func_1(&uLocal_160, cLocal_145, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_143 = 1;
		}
	}
}

void func_145()//Position - 0x7F42
{
	iLocal_122 = func_150(func_151()) * 1000;
	iLocal_122 = (iLocal_122 + func_149(func_151()) * 1000 * 60);
	if (!iLocal_131)
	{
		if ((iLocal_141 >= 24 && iLocal_122 < 150000) || (iLocal_141 >= 24 && iLocal_122 < 150000))
		{
			func_146((((iLocal_141 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_140 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_146(((iLocal_141 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_140 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_141 >= 24 && iLocal_122 < 150000) || (iLocal_141 >= 24 && iLocal_122 < 150000))
	{
		func_146((((iLocal_141 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_140 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_146(((iLocal_141 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_140 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	if ((iLocal_141 == func_149(func_151()) + 1 && iLocal_140 == func_150(func_151())) || (((iLocal_141 >= 24 && iLocal_122 < 150000) && iLocal_141 == func_149(func_151()) + 25) && iLocal_140 == func_150(func_151())))
	{
		if (!iLocal_130)
		{
			if (!func_110("REHH1_1HOUR") && !func_110("REHH4_1HOUR"))
			{
				func_107(0);
			}
			func_48();
			SYSTEM::WAIT(0);
			if (!func_54())
			{
				if (iLocal_57 == 1)
				{
					func_1(&uLocal_160, cLocal_145, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_130 = 1;
			}
		}
	}
	if (iLocal_140 == 30)
	{
		if ((iLocal_141 == func_149(func_151()) && iLocal_140 == func_150(func_151()) + 30) || (((iLocal_141 >= 24 && iLocal_122 < 150000) && iLocal_141 == func_149(func_151()) + 24) && iLocal_140 == func_150(func_151()) + 30))
		{
			if (!iLocal_131)
			{
				if (!func_110("REHH1_HHOUR") && !func_110("REHH4_HHOUR"))
				{
					func_107(0);
				}
				func_48();
				SYSTEM::WAIT(0);
				if (!func_54())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_131 = 1;
				}
				if (!iLocal_132)
				{
					uLocal_144 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uLocal_144, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_132 = 1;
				}
			}
		}
		if ((iLocal_141 == func_149(func_151()) && iLocal_140 == func_150(func_151()) + 5) || (((iLocal_141 >= 24 && iLocal_122 < 150000) && iLocal_141 == func_149(func_151()) + 24) && iLocal_140 == func_150(func_151()) + 5))
		{
			if (!iLocal_133)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144, "countdown_fast", 1f);
				iLocal_133 = 1;
			}
		}
	}
	if (iLocal_140 == 0)
	{
		if ((iLocal_141 == func_149(func_151()) + 1 && iLocal_140 == (func_150(func_151()) - 30)) || (((iLocal_141 >= 24 && iLocal_122 < 150000) && iLocal_141 == func_149(func_151()) + 25) && iLocal_140 == (func_150(func_151()) - 30)))
		{
			if (!iLocal_131)
			{
				if (!func_110("REHH1_HHOUR") && !func_110("REHH4_HHOUR"))
				{
					func_107(0);
				}
				func_48();
				SYSTEM::WAIT(0);
				if (!func_54())
				{
					if (iLocal_57 == 1)
					{
						func_1(&uLocal_160, cLocal_145, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_131 = 1;
				}
				if (!iLocal_132)
				{
					iLocal_144 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_144, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_132 = 1;
				}
			}
		}
		if ((iLocal_141 == func_149(func_151()) + 1 && iLocal_140 == (func_150(func_151()) - 55)) || (((iLocal_141 >= 24 && iLocal_122 < 150000) && iLocal_141 == func_149(func_151()) + 25) && iLocal_140 == (func_150(func_151()) - 55)))
		{
			if (!iLocal_133)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144, "countdown_fast", 1f);
				iLocal_133 = 1;
			}
		}
	}
	if (iLocal_141 >= 24 && iLocal_122 < 150000)
	{
		if (iLocal_141 == func_149(func_151()) + 24 && iLocal_140 == func_150(func_151()))
		{
			bLocal_142 = true;
		}
	}
	else if (iLocal_141 == func_149(func_151()) && iLocal_140 == func_150(func_151()))
	{
		bLocal_142 = true;
	}
	if (bLocal_142)
	{
		func_48();
		SYSTEM::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_144);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (iLocal_57 == 1)
		{
			func_1(&uLocal_160, cLocal_145, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, 0), (10.5f + 2f), 2, 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_70, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				if (HUD::DOES_BLIP_EXIST(uLocal_68))
				{
					HUD::REMOVE_BLIP(&uLocal_68);
				}
			}
		}
		iLocal_56 = 9;
	}
}

void func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x84F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_148(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_147(7, iVar0);
		Global_1446E8.f_C3C[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_C3C.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_C3C.f_8A[iVar0] = iParam2;
		Global_1446E8.f_C3C.f_AE[iVar0] = iParam3;
		Global_1446E8.f_C3C.f_93[iVar0] = iParam4;
		Global_1446E8.f_C3C.f_9C[iVar0] = iParam5;
		Global_1446E8.f_C3C.f_C9[iVar0] = iParam6;
		Global_1446E8.f_C3C.f_D2[iVar0] = iParam7;
		Global_1446E8.f_C3C.f_A5[iVar0] = iParam8;
		Global_1446E8.f_C3C.f_FE[iVar0] = iParam9;
		Global_1446E8.f_C3C.f_107[iVar0] = iParam10;
		Global_1446E8.f_C3C.f_121[iVar0] = iParam11;
		Global_1446E8.f_C3C.f_C0[iVar0] = iParam12;
		Global_1446E8.f_C3C.f_DB[iVar0] = iParam13;
	}
}

void func_147(int iParam0, int iParam1)//Position - 0x860B
{
	MISC::SET_BIT(&(Global_1446E8.f_E1D[iParam0]), iParam1);
}

bool func_148(int iParam0, int iParam1)//Position - 0x8624
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E1D[iParam0], iParam1);
}

int func_149(int iParam0)//Position - 0x863D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_150(int iParam0)//Position - 0x8650
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_151()//Position - 0x8663
{
	var uVar0;
	
	func_161(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_160(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_159(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_154(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_153(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_152(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_152(var uParam0, int iParam1)//Position - 0x86A9
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

void func_153(var uParam0, int iParam1)//Position - 0x872F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)//Position - 0x8762
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158(*uParam0);
	iVar1 = func_156(*uParam0);
	if (iParam1 < 1 || iParam1 > func_155(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_155(int iParam0, int iParam1)//Position - 0x87B3
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

int func_156(int iParam0)//Position - 0x8855
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_157(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_157(bool bParam0, int iParam1, int iParam2)//Position - 0x887A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_158(int iParam0)//Position - 0x8891
{
	return iParam0 & 15;
}

void func_159(var uParam0, int iParam1)//Position - 0x889E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_160(var uParam0, int iParam1)//Position - 0x88D8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_161(var uParam0, int iParam1)//Position - 0x8913
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_162()//Position - 0x894F
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_98))
				{
					HUD::REMOVE_BLIP(&uLocal_98);
				}
				if (!PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_68))
				{
					uLocal_68 = func_116(Local_76, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_57 != 1) && iLocal_57 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_69))
					{
						uLocal_69 = func_116(Local_78, 0);
						HUD::SET_BLIP_SPRITE(uLocal_69, 269);
						func_163();
					}
				}
				if (iLocal_57 == 1)
				{
					if (!func_54())
					{
						if (iLocal_57 == 1)
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_141 = func_149(func_151()) + 2;
						if (func_150(func_151()) >= 30)
						{
							iLocal_140 = 0;
							iLocal_141++;
						}
						else
						{
							iLocal_140 = 30;
						}
						iLocal_88 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_56 = 4;
					}
				}
				else if (iLocal_57 == 2)
				{
					if (func_1(&uLocal_160, cLocal_145, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_88 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_56 = 4;
					}
				}
				else if (iLocal_57 == 3)
				{
					if (func_1(&uLocal_160, cLocal_145, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_88 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_56 = 4;
					}
				}
				else if (iLocal_57 == 5)
				{
					if (func_1(&uLocal_160, cLocal_145, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_88 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_56 = 4;
					}
				}
			}
		}
	}
}

void func_163()//Position - 0x8AE8
{
	if (func_8() == 2)
	{
		if (!Global_6068)
		{
			func_164("CULT_BLIP_HELP", -1);
			Global_6068 = 1;
		}
	}
}

void func_164(char* sParam0, int iParam1)//Position - 0x8B0C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_165()//Position - 0x8B23
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (iLocal_87 < MISC::GET_GAME_TIMER())
				{
					func_1(&uLocal_160, cLocal_145, "REHH5_STO", 4, 0, 0, 0);
					iLocal_87 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
				}
				if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 24f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_151 > 5f)
						{
							fLocal_151 = (fLocal_151 - 1f);
						}
						else
						{
							fLocal_151 = (fLocal_151 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_151, 2f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						iLocal_107++;
					}
				}
				else if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
				{
					fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_151 = (fLocal_151 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_151, 2f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_98))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_98, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_72, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_72, -1, 0, 2f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
								iLocal_107++;
							}
						}
					}
				}
				else if (!iLocal_108)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_160, cLocal_145, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_108 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
				{
					if (func_132(iLocal_70, iLocal_72, 1) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								if (func_1(&uLocal_160, cLocal_145, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_160, cLocal_145, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_112())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0);
								func_166();
								iLocal_107++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_55 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_70);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_107++;
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (!func_54())
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (func_112())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_70);
						iLocal_88 = 1;
						iLocal_56 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107 = 4;
				}
			}
			break;
	}
}

void func_166()//Position - 0x9160
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_6066 = 1;
		}
	}
}

float func_167(int iParam0, int iParam1)//Position - 0x917C
{
	return func_132(iParam0, iParam1, 1);
}

void func_168()//Position - 0x918D
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_151 > 5f)
						{
							fLocal_151 = (fLocal_151 - 1f);
						}
						else
						{
							fLocal_151 = (fLocal_151 - 0.5f);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						iLocal_107++;
					}
				}
				else if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
				{
					fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_151 = (fLocal_151 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_151, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_98))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_98, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_72, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_72, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
								iLocal_107++;
							}
						}
					}
				}
				else if (!iLocal_108)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_160, cLocal_145, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_108 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
				{
					if (func_132(iLocal_70, iLocal_72, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								if (func_1(&uLocal_160, cLocal_145, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_70))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_160, cLocal_145, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_160, cLocal_145, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_160, cLocal_145, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_112())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_107++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_55 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_70);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_107++;
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (!func_54())
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_70);
						iLocal_88 = 1;
						iLocal_56 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107 = 4;
				}
			}
			break;
	}
}

void func_169()//Position - 0x97A9
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_151 > 5f)
						{
							fLocal_151 = (fLocal_151 - 1f);
						}
						else
						{
							fLocal_151 = (fLocal_151 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_151, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						iLocal_107++;
					}
				}
				else if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
				{
					fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_151 = (fLocal_151 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_151, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_98))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_98, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_72, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_72, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
								func_48();
								SYSTEM::WAIT(0);
								iLocal_107++;
							}
						}
					}
				}
				else if (!iLocal_108)
				{
					TASK::CLEAR_PED_TASKS(iLocal_70);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_160, cLocal_145, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_108 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
				{
					if (func_132(iLocal_70, iLocal_72, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								if (func_1(&uLocal_160, cLocal_145, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_70))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_160, cLocal_145, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_160, cLocal_145, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_160, cLocal_145, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_107++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_112())
					{
						iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_107++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_55 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_70);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_107++;
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (!func_54())
						{
							if (!func_172())
							{
								func_1(&uLocal_160, cLocal_145, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_160, cLocal_145, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (!iLocal_82)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_54())
						{
							if (func_1(&uLocal_160, cLocal_145, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_82 = 1;
							}
						}
					}
				}
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_70);
						iLocal_88 = 1;
						iLocal_56 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107 = 4;
				}
				if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_170()//Position - 0x9E02
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 30f))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 5000, 2052, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_72, 30000, 2054, 2);
							TASK::TASK_PLAY_ANIM(iLocal_70, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						}
						iLocal_107++;
					}
					else if (!iLocal_108)
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						if (func_1(&uLocal_160, cLocal_145, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_108 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_98))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_98, 1);
			}
			if (func_112())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 10f)
					{
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_151 = func_132(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
								if (fLocal_151 > 5f)
								{
									fLocal_151 = (fLocal_151 - 0.5f);
								}
								else
								{
									fLocal_151 = (fLocal_151 - 0.25f);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_72, 10000, 2054, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_72, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_72, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
								iLocal_107++;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_72, 10000, 2054, 2);
								iLocal_107++;
							}
						}
					}
				}
			}
			else if (!iLocal_108)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					if (!func_54())
					{
						if (!func_172())
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_160, cLocal_145, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_108 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
				{
					func_126();
					iLocal_107++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
				{
					if (func_1(&uLocal_160, cLocal_145, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
						SYSTEM::SETTIMERA(0);
						iLocal_107++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_70))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				}
				if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 2.5f)
							{
								if (!func_54())
								{
									if (func_8() == 0)
									{
										func_1(&uLocal_160, cLocal_145, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_107++;
									}
									else if (func_8() == 1)
									{
										func_1(&uLocal_160, cLocal_145, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_107++;
									}
									else if (func_8() == 2)
									{
										func_1(&uLocal_160, cLocal_145, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_107++;
									}
								}
							}
						}
					}
					else if (!iLocal_108)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_108 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_112())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								iLocal_107++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_55 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_70);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_106());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_107++;
								}
							}
						}
						else if (!iLocal_109)
						{
							if (!func_54())
							{
								if (!func_172())
								{
									func_1(&uLocal_160, cLocal_145, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_160, cLocal_145, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_109 = 1;
							}
						}
					}
					else if (!iLocal_108)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_108 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_70);
						iLocal_88 = 1;
						iLocal_56 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_107 = 5;
				}
				if (func_167(iLocal_70, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_171()//Position - 0xA43E
{
	int iVar0;
	
	if ((iLocal_125 - iLocal_124) > 1000)
	{
		iLocal_139 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_70, 0), 18f, 0, 4);
	}
	if (iLocal_139 != 0)
	{
		iLocal_123++;
		iLocal_124 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_123 > iVar0)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_139, 1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_139, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_139, 0))
				{
					if (iLocal_57 == 1)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_139, 3000, 2052, 2);
							}
						}
						iLocal_149 = MISC::GET_GAME_TIMER();
						iLocal_123 = 0;
					}
					else if (iLocal_57 == 2)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_139, 3000, 2052, 2);
							}
						}
						iLocal_149 = MISC::GET_GAME_TIMER();
						iLocal_123 = 0;
					}
					else if (iLocal_57 == 3)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_139, 3000, 2052, 2);
							}
						}
						iLocal_149 = MISC::GET_GAME_TIMER();
						iLocal_123 = 0;
					}
					else if (iLocal_57 == 5)
					{
						if (func_1(&uLocal_160, cLocal_145, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_139, 3000, 2052, 2);
							}
						}
						iLocal_149 = MISC::GET_GAME_TIMER();
						iLocal_123 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_150 = MISC::GET_GAME_TIMER();
			if ((iLocal_150 - iLocal_149) > 3500)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_139);
			}
			iLocal_139 = 0;
		}
	}
}

int func_172()//Position - 0xA5C6
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()//Position - 0xA631
{
	if (iLocal_57 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_70)) || func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 12f)
				{
					func_174();
					iLocal_56 = 2;
				}
			}
		}
	}
	else if (iLocal_57 == 2)
	{
		if (!iLocal_134)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, 100f, 100f, 100f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				iLocal_134 = 1;
			}
		}
	}
	else if (iLocal_57 == 5)
	{
		if (!iLocal_134)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, 200f, 200f, 200f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_57 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 95f, 95f, 50f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_70)) || func_167(PLAYER::PLAYER_PED_ID(), iLocal_70) < 12f)
				{
					func_174();
					iLocal_56 = 2;
				}
			}
		}
	}
}

void func_174()//Position - 0xA928
{
	if (HUD::DOES_BLIP_EXIST(uLocal_97))
	{
		HUD::REMOVE_BLIP(&uLocal_97);
	}
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_98))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
			{
				uLocal_98 = func_63(iLocal_70, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_98, 0);
			}
		}
		if (!func_207())
		{
			func_182(1);
		}
		func_143(&uLocal_160, 3, iLocal_70, sLocal_146, 0, 1);
	}
	if (func_8() == 0)
	{
		func_143(&uLocal_160, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_143(&uLocal_160, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_143(&uLocal_160, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
}

void func_175()//Position - 0xA9DB
{
	func_177(39, 1);
	func_177(40, 1);
	func_177(41, 1);
	func_177(42, 1);
	func_177(43, 1);
	iLocal_70 = PED::CREATE_PED(26, iLocal_79, Local_75, fLocal_77, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, 0);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_70, sLocal_148);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 137, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 206, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 1024, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 65536, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 2, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_70, 17, 1);
	PED::SET_PED_MAX_TIME_IN_WATER(iLocal_70, 60f);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_70, 5f);
	if (iLocal_57 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_81, 1);
		iLocal_138 = VEHICLE::CREATE_VEHICLE(iLocal_81, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_138, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_138, 4, 0, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_138, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_81);
		TASK::TASK_PLAY_ANIM(iLocal_70, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_57 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 10, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_70, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_76 - Vector(20f, 50f, 50f), Local_76 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_176(1);
	}
	else if (iLocal_57 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_70, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_76 - Vector(20f, 50f, 50f), Local_76 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_57 == 5)
	{
	}
	iLocal_56 = 1;
}

void func_176(bool bParam0)//Position - 0xAC36
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

void func_177(int iParam0, bool bParam1)//Position - 0xAC62
{
	if (bParam1)
	{
		if (!func_181(iParam0, 2, 1))
		{
			func_180(iParam0, 2, 1);
		}
	}
	else if (func_181(iParam0, 2, 1))
	{
		func_178(iParam0, 2, 1);
	}
}

void func_178(int iParam0, int iParam1, bool bParam2)//Position - 0xAC99
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_179(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_43(func_179(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_179(int iParam0)//Position - 0xAD01
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

void func_180(int iParam0, int iParam1, bool bParam2)//Position - 0xAFAA
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_179(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_43(func_179(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_181(int iParam0, int iParam1, bool bParam2)//Position - 0xB012
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_26() == 0)
		{
			return MISC::IS_BIT_SET(func_45(func_179(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_182(int iParam0)//Position - 0xB072
{
	if (func_185())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_31(Global_17C3E))
		{
			func_183(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_31(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_183(int iParam0)//Position - 0xB0C5
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

char* func_184(int iParam0)//Position - 0xB1A6
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

int func_185()//Position - 0xB1E8
{
	switch (func_186(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_186(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB21E
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
		if (func_190(0))
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
		if (!func_188(iParam2))
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
			func_187(uParam0, iParam4);
		}
	}
	return 2;
}

void func_187(var uParam0, int iParam1)//Position - 0xB355
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

bool func_188(int iParam0)//Position - 0xB3A4
{
	return func_189(iParam0, Global_8861);
}

int func_189(int iParam0, int iParam1)//Position - 0xB3B5
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

int func_190(int iParam0)//Position - 0xB596
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_188(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_191()//Position - 0xB5B8
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_91)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, 1), 10f, 1) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, 1) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_70, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_INJURED(iLocal_71) && ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(iLocal_70))
				{
					AUDIO::PLAY_PAIN(iLocal_70, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!PED::IS_PED_IN_GROUP(iLocal_70) && PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_70))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()//Position - 0xB70C
{
	STREAMING::REQUEST_MODEL(iLocal_79);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	if (iLocal_57 == 1 || iLocal_57 == 5)
	{
		STREAMING::REQUEST_MODEL(iLocal_81);
	}
	if (iLocal_57 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", 0);
	}
	else if (iLocal_57 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_79) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_57 == 1 || iLocal_57 == 5)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_81))
			{
				bLocal_58 = true;
			}
		}
		else if (iLocal_57 == 3)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
			{
				bLocal_58 = true;
			}
		}
		else
		{
			bLocal_58 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_79);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
		if (iLocal_57 == 1 || iLocal_57 == 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_81);
		}
		else if (iLocal_57 == 3)
		{
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
		}
	}
}

void func_193()//Position - 0xB7E5
{
	if (iLocal_57 == 1)
	{
		Local_75 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_77 = 17.9234f;
		Local_76 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_79 = joaat("a_m_m_business_01");
		cLocal_145 = "REHH1AU";
		sLocal_146 = "BUSINESSMAN";
		sLocal_148 = "BUSINESSMAN";
		iLocal_81 = joaat("schafter2");
	}
	else if (iLocal_57 == 2)
	{
		Local_75 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_77 = 75.9173f;
		Local_76 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_79 = joaat("a_f_y_hiker_01");
		cLocal_145 = "REHH2AU";
		sLocal_146 = "REHH2Hiker";
		sLocal_148 = "REHH2Hiker";
	}
	else if (iLocal_57 == 3)
	{
		Local_75 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_77 = 19.4143f;
		Local_76 = { 814.455f, 1274.797f, 359.5112f };
		Local_83 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_84 = 340.7372f;
		iLocal_79 = joaat("a_f_y_hipster_03");
		iLocal_80 = joaat("s_m_m_security_01");
		cLocal_145 = "REHH3AU";
		sLocal_146 = "REHH3Hipster";
		sLocal_148 = "REHH3Hipster";
		sLocal_147 = "REHH3Security";
	}
	else if (iLocal_57 == 5)
	{
		Local_75 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_77 = 56.5422f;
		Local_76 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_79 = joaat("ig_bride");
		iLocal_80 = joaat("a_m_y_business_01");
		cLocal_145 = "REHH5AU";
		sLocal_146 = "REHH5Bride";
		sLocal_148 = "REHH5Bride";
		sLocal_147 = "REHH5Groom";
		iLocal_81 = joaat("patriot");
	}
	iLocal_59 = 1;
}

int func_194()//Position - 0xB96B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_205())
		{
			return 0;
		}
	}
	if (func_201())
	{
		return 1;
	}
	if (func_195(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_195(float fParam0, bool bParam1)//Position - 0xB9F1
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_10(func_8()))
		{
			iVar5 = func_36();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_196(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_196(int iParam0, var uParam1)//Position - 0xBAA8
{
	switch (iParam0)
	{
		case 0:
			func_197(uParam1, "Abigail1", func_199(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 1:
			func_197(uParam1, "Abigail2", func_199(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 2:
			func_197(uParam1, "Barry1", func_199(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 3:
			func_197(uParam1, "Barry2", func_199(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 4:
			func_197(uParam1, "Barry3", func_199(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 5:
			func_197(uParam1, "Barry3A", func_199(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 6:
			func_197(uParam1, "Barry3C", func_199(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 7:
			func_197(uParam1, "Barry4", func_199(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_198(iParam0), 0, 0);
			break;
		
		case 8:
			func_197(uParam1, "Dreyfuss1", func_199(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 9:
			func_197(uParam1, "Epsilon1", func_199(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 10:
			func_197(uParam1, "Epsilon2", func_199(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 11:
			func_197(uParam1, "Epsilon3", func_199(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 12:
			func_197(uParam1, "Epsilon4", func_199(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 13:
			func_197(uParam1, "Epsilon5", func_199(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 14:
			func_197(uParam1, "Epsilon6", func_199(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 15:
			func_197(uParam1, "Epsilon7", func_199(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 16:
			func_197(uParam1, "Epsilon8", func_199(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 17:
			func_197(uParam1, "Extreme1", func_199(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 18:
			func_197(uParam1, "Extreme2", func_199(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 19:
			func_197(uParam1, "Extreme3", func_199(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 20:
			func_197(uParam1, "Extreme4", func_199(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 21:
			func_197(uParam1, "Fanatic1", func_199(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_198(iParam0), 1, 0);
			break;
		
		case 22:
			func_197(uParam1, "Fanatic2", func_199(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_198(iParam0), 1, 0);
			break;
		
		case 23:
			func_197(uParam1, "Fanatic3", func_199(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_198(iParam0), 0, 1);
			break;
		
		case 24:
			func_197(uParam1, "Hao1", func_199(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_198(iParam0), 0, 1);
			break;
		
		case 25:
			func_197(uParam1, "Hunting1", func_199(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 26:
			func_197(uParam1, "Hunting2", func_199(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 27:
			func_197(uParam1, "Josh1", func_199(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 28:
			func_197(uParam1, "Josh2", func_199(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 29:
			func_197(uParam1, "Josh3", func_199(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 30:
			func_197(uParam1, "Josh4", func_199(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 31:
			func_197(uParam1, "Maude1", func_199(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 32:
			func_197(uParam1, "Minute1", func_199(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 33:
			func_197(uParam1, "Minute2", func_199(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 34:
			func_197(uParam1, "Minute3", func_199(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 35:
			func_197(uParam1, "MrsPhilips1", func_199(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 36:
			func_197(uParam1, "MrsPhilips2", func_199(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 37:
			func_197(uParam1, "Nigel1", func_199(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 38:
			func_197(uParam1, "Nigel1A", func_199(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 39:
			func_197(uParam1, "Nigel1B", func_199(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 40:
			func_197(uParam1, "Nigel1C", func_199(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 41:
			func_197(uParam1, "Nigel1D", func_199(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 42:
			func_197(uParam1, "Nigel2", func_199(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 43:
			func_197(uParam1, "Nigel3", func_199(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 44:
			func_197(uParam1, "Omega1", func_199(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 45:
			func_197(uParam1, "Omega2", func_199(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 46:
			func_197(uParam1, "Paparazzo1", func_199(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 47:
			func_197(uParam1, "Paparazzo2", func_199(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 48:
			func_197(uParam1, "Paparazzo3", func_199(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 49:
			func_197(uParam1, "Paparazzo3A", func_199(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 50:
			func_197(uParam1, "Paparazzo3B", func_199(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 51:
			func_197(uParam1, "Paparazzo4", func_199(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 52:
			func_197(uParam1, "Rampage1", func_199(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 54:
			func_197(uParam1, "Rampage3", func_199(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 55:
			func_197(uParam1, "Rampage4", func_199(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 56:
			func_197(uParam1, "Rampage5", func_199(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 53:
			func_197(uParam1, "Rampage2", func_199(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 57:
			func_197(uParam1, "TheLastOne", func_199(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 58:
			func_197(uParam1, "Tonya1", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 59:
			func_197(uParam1, "Tonya2", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 60:
			func_197(uParam1, "Tonya3", func_199(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 61:
			func_197(uParam1, "Tonya4", func_199(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 62:
			func_197(uParam1, "Tonya5", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_197(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xCC1E
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_198(int iParam0)//Position - 0xCCAF
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_199(int iParam0)//Position - 0xCFF5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_200(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_200(int iParam0)//Position - 0xD02B
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_201()//Position - 0xD476
{
	if (func_204() && !func_205())
	{
		return 1;
	}
	if (func_203() && func_202())
	{
		return 1;
	}
	return 0;
}

bool func_202()//Position - 0xD4A8
{
	return Global_17B2F > 0;
}

int func_203()//Position - 0xD4B6
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_204()//Position - 0xD4CB
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_205()//Position - 0xD4F1
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

int func_206()//Position - 0xD50E
{
	if (!func_188(5))
	{
		return 1;
	}
	if (func_201())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_205())
		{
			return 0;
		}
	}
	if (func_195(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xD570
{
	if ((Global_17C3E == func_40() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0)//Position - 0xD59B
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_210(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_209();
}

void func_209()//Position - 0xD5D1
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

void func_210(int iParam0)//Position - 0xD60E
{
	Global_17C3E = iParam0;
}

int func_211(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD61C
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_2015C)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_239())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_205())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_201())
		{
			return 0;
		}
		if (func_238())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_195(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_237(iParam1))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_236(func_8()) == 4 || func_236(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_235(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_234(Global_17C49.f_6E20.f_2B[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_17C40) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_233())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_224(4))
		{
			return 0;
		}
		if (!func_188(5))
		{
			return 0;
		}
		if (func_223(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_223(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_237(30) && !func_223(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_8()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_222(iVar4))
				{
					if (func_213(iVar2))
					{
						if (!func_212(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_8() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_212(struct<3> Param0, struct<3> Param1)//Position - 0xD9B5
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_213(int iParam0)//Position - 0xD9DE
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_214(iVar0);
}

int func_214(int iParam0)//Position - 0xD9FF
{
	return func_215(iParam0, 1);
}

int func_215(int iParam0, int iParam1)//Position - 0xDA0E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_222(iParam0))
	{
		return 0;
	}
	func_216(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xDA61
{
	func_217(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xDA7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_221(iParam0, iParam1))
	{
		iVar0 = func_158(iParam1);
		iVar1 = func_156(iParam0);
		iVar2 = (func_156(iParam0) - func_156(iParam1));
		iVar3 = (func_158(iParam0) - func_158(iParam1));
		iVar4 = (func_220(iParam0) - func_220(iParam1));
		iVar5 = (func_149(iParam0) - func_149(iParam1));
		iVar6 = (func_150(iParam0) - func_150(iParam1));
		iVar7 = (func_219(iParam0) - func_219(iParam1));
	}
	else
	{
		iVar0 = func_158(iParam0);
		iVar1 = func_156(iParam1);
		iVar2 = (func_156(iParam1) - func_156(iParam0));
		iVar3 = (func_158(iParam1) - func_158(iParam0));
		iVar4 = (func_220(iParam1) - func_220(iParam0));
		iVar5 = (func_149(iParam1) - func_149(iParam0));
		iVar6 = (func_150(iParam1) - func_150(iParam0));
		iVar7 = (func_219(iParam1) - func_219(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_155(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_218(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_218(float fParam0, float fParam1, float fParam2)//Position - 0xDC80
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_219(int iParam0)//Position - 0xDCC2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_220(int iParam0)//Position - 0xDCD5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_221(int iParam0, int iParam1)//Position - 0xDCE7
{
	int iVar0;
	int iVar1;
	
	if (!func_222(iParam1) || !func_222(iParam0))
	{
		return 1;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_156(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_158(iParam0);
	iVar1 = func_158(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xDDF3
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
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_150(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_149(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_156(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_158(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_220(iParam0);
	if (iVar5 < 1 || iVar5 > func_155(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0, int iParam1)//Position - 0xDECF
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0xDEF2
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_8();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_17890) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_228()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_232()) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_17890) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_17890) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_15(8, -1)) || func_227()) || func_226()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_230()) || func_229()) || func_226()) || func_225())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_229()) || func_228()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_232()) || func_229()) || Global_17890) || Global_5F7E) || func_231()) || Global_8C75) || func_15(8, -1)) || func_228()) || func_226()) || func_227()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_17890) || Global_5F7E) || func_231()) || func_15(8, -1)) || func_228()) || func_226()) || func_230()) || func_229()) || func_227())
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

var func_225()//Position - 0xE60F
{
	return Global_15F91.f_1;
}

int func_226()//Position - 0xE61D
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_227()//Position - 0xE643
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()//Position - 0xE65D
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

bool func_229()//Position - 0xE687
{
	return Global_15F9E.f_123 > 0;
}

bool func_230()//Position - 0xE698
{
	return Global_15F9E.f_122 > 0;
}

var func_231()//Position - 0xE6A9
{
	return Global_14143C;
}

int func_232()//Position - 0xE6B5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_233()//Position - 0xE6D1
{
	func_7();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_234(int iParam0)//Position - 0xE6F9
{
	return func_221(func_151(), iParam0);
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0xE70B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_8();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_236(int iParam0)//Position - 0xE7EF
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_237(int iParam0)//Position - 0xE813
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_239())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_17C49.f_6E20, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_17C49.f_6E20.f_1, iVar0);
	}
	return bVar1;
}

int func_238()//Position - 0xE871
{
	var uVar0;
	
	if (Global_6012)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239()//Position - 0xE8A8
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

void func_240()//Position - 0xE92B
{
	if (iLocal_110)
	{
		func_260(0);
		if (Global_606A)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_259();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_176(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		if (CAM::_0xBF72910D0F26F025())
		{
			CAM::_0x247ACBC4ABBC9D1C(0);
		}
		Global_6085[0 /*7*/].f_6 = 0;
		func_252(0, 1, 1, 0);
		func_55();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_70, 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_70);
				}
				if (iLocal_57 != 2)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 1805844857) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, 0);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, 1);
				if (PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (!PED::IS_PED_FLEEING(iLocal_71))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
				}
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_207())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_241(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_241(int iParam0)//Position - 0xEAC8
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_207())
	{
		func_245(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_17C3E, 1), 64);
		if (func_39(Global_17C3E) > 0)
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
	func_242(&Global_5FB7);
	Global_17C3F = 0;
	func_210(-1);
}

void func_242(var uParam0)//Position - 0xEB7D
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

char* func_243(int iParam0, bool bParam1)//Position - 0xEBBA
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

void func_244(int iParam0)//Position - 0xEE03
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_245(int iParam0)//Position - 0xEE15
{
	func_246(iParam0, 0, func_251(iParam0));
}

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0xEE2A
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_151();
	func_249(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &uVar0);
	Var1 = { func_247(&uVar0) };
}

struct<16> func_247(var uParam0)//Position - 0xEE59
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_150(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_219(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_220(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_158(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_156(*uParam0), 64);
	return Var0;
}

void func_248(int iParam0, var uParam1)//Position - 0xEF28
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEF40
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_156(*uParam0);
	iVar1 = func_158(*uParam0);
	iVar2 = func_220(*uParam0);
	iVar3 = func_149(*uParam0);
	iVar4 = func_150(*uParam0);
	iVar5 = func_219(*uParam0);
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
	iVar6 = func_155(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_155(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_250(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF0C2
{
	func_161(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_154(uParam0, iParam4);
	func_153(uParam0, iParam5);
	func_152(uParam0, iParam6);
}

int func_251(int iParam0)//Position - 0xF0FA
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

void func_252(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xF29D
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_258(1);
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
		func_257(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_258(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_257(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_253(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_253(int iParam0)//Position - 0xF36E
{
	if (func_255(iParam0, 0))
	{
		return 1;
	}
	if (func_254())
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

bool func_254()//Position - 0xF3AF
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_255(int iParam0, int iParam1)//Position - 0xF3C0
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_256(-1, 0) == 8;
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

int func_256(int iParam0, bool bParam1)//Position - 0xF40B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_257(int iParam0, var uParam1, var uParam2)//Position - 0xF44C
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

void func_258(int iParam0)//Position - 0xF47D
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

void func_259()//Position - 0xF4A0
{
	Global_6066 = 0;
	Global_6067 = 0;
	Global_6069 = 0;
	Global_606A = 0;
	Global_606B = 0;
}

void func_260(bool bParam0)//Position - 0xF4BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_177(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_261()//Position - 0xF4DF
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_63, 1);
		iLocal_62 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_64, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_64, 1);
			iLocal_62 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1);
			iLocal_62 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66, 1);
			iLocal_62 = 5;
		}
		if (iLocal_62 == 1)
		{
			iLocal_67 = 1;
			iLocal_57 = 1;
			return Local_63;
		}
		else if (iLocal_62 == 2)
		{
			iLocal_67 = 2;
			iLocal_57 = 2;
			return Local_64;
		}
		else if (iLocal_62 == 3)
		{
			iLocal_67 = 3;
			iLocal_57 = 3;
			return Local_65;
		}
		else if (iLocal_62 == 5)
		{
			iLocal_67 = 4;
			iLocal_57 = 5;
			return Local_66;
		}
	}
	return 0f, 0f, 0f;
}

