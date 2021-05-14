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
	bool bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	struct<27> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<11> Local_44[2];
	struct<25> Local_45[21];
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = -1;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 1000;
	var uLocal_65 = 1000;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	struct<8> Local_72[3];
	var uLocal_73 = 15;
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
	var uLocal_125 = 15;
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
	int iLocal_177 = 0;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	var uLocal_183 = 0;
	struct<3> Local_184 = { 0, 0, 0 } ;
	struct<3> Local_185 = { 0, 0, 0 } ;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	struct<14> Local_196 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_198 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	char[] cLocal_203[8] = 0;
	var uLocal_204 = 16;
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
	char[] cLocal_369[8] = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	int iLocal_373[3] = { 0, 0, 0 };
	int iLocal_374 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 21;
	fLocal_46 = -1f;
	Local_53 = { 0f, 0f, 0f };
	iLocal_54 = -1;
	sLocal_179 = "FBIPRA";
	Local_184 = { 0f, 0f, 0f };
	Local_185 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_203 = "FIBP1AU";
	iLocal_374 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_178 = 0;
		func_367();
		func_355();
	}
	func_338();
	if (func_337())
	{
		func_336(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_322();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TrT", 0);
		if (func_321(PLAYER::PLAYER_PED_ID()))
		{
			func_317();
			func_313();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_67)
			{
				case 0:
					func_256();
					break;
				
				case 1:
					func_232();
					break;
				
				case 2:
					func_214();
					break;
				
				case 3:
					func_101();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_67 != 5)
			{
				if (iLocal_67 >= 0 && !bLocal_27)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x186
{
	int iVar0;
	
	switch (iLocal_68)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_37();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_36(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_178))
			{
				func_33(sLocal_178);
			}
			else
			{
				func_18(0);
			}
			iLocal_68 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 0, 0, 0);
				func_355();
			}
			break;
	}
}

void func_2()//Position - 0x23B
{
	func_9(&Local_198);
	func_9(&uLocal_200);
	func_9(&iLocal_199);
	func_8(&Local_196);
	func_8(&Local_197);
	func_9(&uLocal_201);
	func_3();
}

void func_3()//Position - 0x271
{
	func_7(&(Local_44[0 /*11*/].f_4));
	func_7(&(Local_44[1 /*11*/].f_4));
	func_6(&iLocal_42);
	func_5(&(Local_44[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_44[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_45[iLocal_47 /*25*/].f_11), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_39);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)//Position - 0x2CF
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_6(var uParam0)//Position - 0x359
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_7(int iParam0)//Position - 0x390
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, 0);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x3B0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_9(var uParam0)//Position - 0x3EF
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_10(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

int func_10(int iParam0)//Position - 0x48B
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

void func_11()//Position - 0x4AB
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam1)//Position - 0x4E3
{
	func_13(&(Global_16D94.f_877), Param0, fParam1);
}

void func_13(var uParam0, struct<3> Param1, var uParam2)//Position - 0x4FC
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam2;
}

void func_14(struct<3> Param0, float fParam1)//Position - 0x512
{
	if (func_15(Global_10B85, 0f, 0f, 0f))
	{
		Global_10B85 = { Param0 };
		Global_10B88 = fParam1;
	}
}

bool func_15(struct<3> Param0, struct<3> Param1)//Position - 0x53D
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_16()//Position - 0x566
{
	if (Global_15F6A == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x57B
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

void func_18(int iParam0)//Position - 0x5A8
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x5ED
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_23(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_20(&(Global_17C49.f_6C1.f_21B), iVar1);
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

void func_20(var uParam0, int iParam1)//Position - 0x704
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
			if (!func_22(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_21(&(uParam0->f_5F4[iVar0]));
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

void func_21(var uParam0)//Position - 0x8CD
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x8DB
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
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_23(int iParam0, bool bParam1)//Position - 0x124A
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

void func_24()//Position - 0x1288
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_25())
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
			switch (func_25())
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

int func_25()//Position - 0x136F
{
	func_26();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_26()//Position - 0x1388
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_27(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_28(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_27(int iParam0)//Position - 0x1485
{
	return Global_8861 == iParam0;
}

bool func_28(int iParam0)//Position - 0x1493
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x149F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x14DC
{
	if (func_28(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()//Position - 0x1506
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

bool func_32(bool bParam0)//Position - 0x153B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_33(char* sParam0)//Position - 0x1566
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)//Position - 0x1579
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

void func_35(int iParam0, int iParam1)//Position - 0x15B8
{
	Global_15F6A.f_16[iParam1] = iParam0;
}

int func_36(int iParam0)//Position - 0x15CC
{
	if (func_10(iParam0))
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

void func_37()//Position - 0x15F6
{
	func_7(&iLocal_181);
}

void func_38()//Position - 0x1605
{
	int iVar0;
	
	switch (iLocal_68)
	{
		case 0:
			iLocal_68 = 1;
			break;
		
		case 1:
			if (!func_100(PLAYER::PLAYER_PED_ID(), Local_185, 270f))
			{
				iLocal_68 = 2;
			}
			else if (!func_99("PRA_LEVAREA", 0, 0))
			{
				func_98("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_99("PRA_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (iVar0 == 0)
			{
				if (func_65(&uLocal_71, &cLocal_369, &uLocal_204))
				{
					func_61();
					func_56();
				}
			}
			else
			{
				func_51(func_55(iVar0), -621899663, -621899663, 5, 0, iVar0, func_54(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_61();
				func_56();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_68 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x16E6
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x171A
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1756
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_321(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x17FD
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_50(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_49())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_48(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_50(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_48(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_43(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_43(int iParam0)//Position - 0x18CE
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
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

bool func_44()//Position - 0x190F
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_45(int iParam0, int iParam1)//Position - 0x1920
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)//Position - 0x196B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()//Position - 0x19AC
{
	return Global_1407E1;
}

int func_48(int iParam0, var uParam1, var uParam2)//Position - 0x19B8
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

int func_49()//Position - 0x19E9
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x1A10
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

int func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1A33
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_88 < 9)
	{
		Var0 = uParam0;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_9 = iParam3;
		if (Global_17C49.f_1738.f_38F == Var0)
		{
			Global_17C49.f_1738.f_38F = -1;
		}
		Var0.f_3 = func_53(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_E = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_17C49.f_1738[Global_17C49.f_1738.f_88 /*15*/] = { Var0 };
		Global_17C49.f_1738.f_88++;
		func_52(iParam5);
		return 1;
	}
	return 0;
}

void func_52(int iParam0)//Position - 0x1B90
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
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

int func_53(int iParam0)//Position - 0x1C54
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_54(int iParam0)//Position - 0x1CBE
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_55(int iParam0)//Position - 0x1CD3
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_56()//Position - 0x1CEE
{
	HUD::CLEAR_PRINTS();
	func_59();
	func_57(0, 0);
	func_355();
}

void func_57(bool bParam0, int iParam1)//Position - 0x1D08
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
		if ((func_32(0) && Global_10B8B.f_1 == 1) && func_58(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_32(0))
	{
		iVar0 = func_31();
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

int func_58(int iParam0)//Position - 0x1DDE
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

void func_59()//Position - 0x1E1C
{
	Global_38DE = 0;
	func_60();
}

void func_60()//Position - 0x1E2C
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

void func_61()//Position - 0x1E83
{
	func_64(0, -1);
	func_63(0, 318);
	func_62(1, 320);
}

void func_62(bool bParam0, int iParam1)//Position - 0x1EA1
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

void func_63(int iParam0, int iParam1)//Position - 0x1F3B
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

void func_64(int iParam0, int iParam1)//Position - 0x1FA6
{
	Global_D5E9 = iParam0;
	Global_D5EA = iParam1;
}

int func_65(var uParam0, char* sParam1, var uParam2)//Position - 0x1FB8
{
	switch (*uParam0)
	{
		case 0:
			if (func_96())
			{
				if ((func_95(74) || func_95(75)) && func_94())
				{
					if (func_25() == 0)
					{
						func_93(1);
						func_92(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_79(1) };
							func_92(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_93(0);
					*uParam0 = 4;
				}
				else
				{
					func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_79(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_72();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_71())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					func_70("FBIPRAU", sParam1);
					func_69(1);
					*uParam0 = 3;
				}
			}
			if (func_68())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_71())
			{
				if (!func_67(0))
				{
					if (!func_95(3) && func_96())
					{
						func_66(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_66(int iParam0, int iParam1)//Position - 0x212D
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_67(int iParam0)//Position - 0x216A
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

int func_68()//Position - 0x21C4
{
	if (Global_3D7D == 1 || Global_4144 == 1)
	{
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)//Position - 0x21E7
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_70(char* sParam0, char* sParam1)//Position - 0x21FB
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_3D85 = 1;
		StringCopy(&Global_3D8C, sParam0, 24);
		StringCopy(&Global_3D86, sParam1, 24);
	}
}

int func_71()//Position - 0x221C
{
	if (Global_3D4C == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_72()//Position - 0x2241
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_76(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_73(func_74(), 0, func_25(), func_90(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2298
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_17C49.f_1738.f_38F == Var0)
		{
			Global_17C49.f_1738.f_38F = -1;
		}
		Var0.f_3 = func_53(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = -1;
		Var0.f_B = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_17C49.f_1738[Global_17C49.f_1738.f_88 /*15*/] = { Var0 };
		Global_17C49.f_1738.f_88++;
		func_52(iParam2);
		return 1;
	}
	return 0;
}

int func_74()//Position - 0x23E9
{
	switch (func_75())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_75()//Position - 0x250F
{
	return Global_10B9B;
}

int func_76(int iParam0, int iParam1)//Position - 0x251B
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
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

int func_77(int iParam0)//Position - 0x2577
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_15725[func_78(iParam0)];
}

int func_78(int iParam0)//Position - 0x25A8
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

struct<4> func_79(bool bParam0)//Position - 0x25E3
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_80(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2649
{
	func_88(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_62D = iParam2;
	Global_3D7C = 0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D5A = 0;
	Global_3D51 = 1;
	Global_3D80 = 0;
	Global_3D82 = 0;
	if (iParam6 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	Global_280001 = 0;
	return func_81(sParam4, iParam5, bParam9);
}

int func_81(char* sParam0, int iParam1, bool bParam2)//Position - 0x26B1
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
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
					func_60();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_86();
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
				func_85();
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
				if (func_84())
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
			if (func_49())
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
			func_83();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_82();
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
		func_60();
	}
	return 0;
}

void func_82()//Position - 0x297D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_38E0[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3D4C = 1;
}

void func_83()//Position - 0x29AE
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

int func_84()//Position - 0x2A43
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

void func_85()//Position - 0x2ADC
{
	if (func_27(14))
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
		Global_3839 = func_25();
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

void func_86()//Position - 0x2B7D
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

bool func_87(int iParam0, int iParam1)//Position - 0x2BD4
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2C0F
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

char* func_89()//Position - 0x2C65
{
	char* sVar0;
	
	switch (func_75())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_90()//Position - 0x2D6D
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2DA6
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

void func_92(int iParam0, int iParam1)//Position - 0x2E41
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

void func_93(bool bParam0)//Position - 0x2E86
{
	if (bParam0)
	{
		func_73(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_95(3))
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_94()//Position - 0x2EF7
{
	if ((func_95(41) && func_95(3)) && func_95(21))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x2F22
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

int func_96()//Position - 0x2F4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_95(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_97(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x2F96
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_98(char* sParam0, int iParam1, int iParam2)//Position - 0x2FC3
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_99(char* sParam0, int iParam1, int iParam2)//Position - 0x2FDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_100(int iParam0, struct<3> Param1, float fParam2)//Position - 0x2FFA
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

void func_101()//Position - 0x3017
{
	func_208(&iLocal_199, &uLocal_200, &iLocal_70, &iLocal_182, &iLocal_181, Local_185, Local_198, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_68)
	{
		case 0:
			if (func_115(iLocal_67, bLocal_27))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_36(iLocal_199))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199, 0))
						{
							func_114("PRA_LEVVEH", &iLocal_180);
						}
					}
				}
				iLocal_68 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_181, Local_185, &iLocal_69, iLocal_70, &iLocal_180, &iLocal_194);
			if (func_106(iLocal_199, Local_185, &iLocal_181, iLocal_70, iLocal_69, &iLocal_192, &iLocal_195, &iLocal_191, &iLocal_190, &iLocal_180, 1090519040))
			{
				if (!func_105())
				{
					if (func_65(&uLocal_71, &cLocal_369, &uLocal_204))
					{
						func_61();
						func_56();
					}
				}
				else
				{
					func_92(46, 1);
					func_61();
					func_103(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_198))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, -1);
				}
				else
				{
					func_102(Local_198, Local_185, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_68 = 1;
				}
			}
			break;
	}
}

int func_102(int iParam0, struct<3> Param1, float fParam2, bool bParam3, int iParam4)//Position - 0x316A
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, iParam4);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_103(bool bParam0)//Position - 0x31C4
{
	func_104(iLocal_67);
	iLocal_177 = iLocal_67;
	if (!bParam0)
	{
		iLocal_67 = iLocal_177 + 1;
	}
	else if (iLocal_177 > 0)
	{
		iLocal_67 = (iLocal_177 - 1);
	}
	iLocal_180 = 0;
	iLocal_68 = 0;
}

void func_104(int iParam0)//Position - 0x3201
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_105()//Position - 0x3219
{
	if (func_96())
	{
		if ((func_95(74) || func_95(75)) && func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)//Position - 0x324B
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_36(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					func_114(func_112(func_75()), iParam9);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam10, fParam10, 2f, 0, 1, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam10, fParam10, 2f, 1, 1, 2);
				if (func_99(func_112(func_75()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(func_112(func_75()));
				}
				*iParam5 = 1;
				func_110(iParam2, Param1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_100(PLAYER::PLAYER_PED_ID(), Param1, fVar0))
					{
						*iParam5 = 0;
						func_109(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam10, fParam10, 2f, 0, 1, 2))
	{
		if (*iParam7 == -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_99(func_112(func_75()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*iParam7 = MISC::GET_GAME_TIMER();
			*iParam8 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_108(func_75(), 0));
			}
			if (!func_99(func_107(func_75()), 0, 0))
			{
				func_98(func_107(func_75()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_107(int iParam0)//Position - 0x33F5
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_108(int iParam0, bool bParam1)//Position - 0x344E
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_109(float fParam0, int iParam1)//Position - 0x34B6
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0, struct<3> Param1, int iParam2)//Position - 0x3539
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_111(Param1, 5, iParam2);
	}
}

int func_111(struct<3> Param0, int iParam1, int iParam2)//Position - 0x355A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam1);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, iParam2);
	return iVar0;
}

char* func_112(int iParam0)//Position - 0x3588
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_113(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x35E1
{
	switch (*iParam2)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				HUD::CLEAR_PRINTS();
				func_98("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				HUD::CLEAR_PRINTS();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_114(func_108(func_75(), 0), iParam4);
					func_110(iParam0, Param1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_98(func_107(func_75()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_114(char* sParam0, int iParam1)//Position - 0x36C1
{
	if (!*iParam1)
	{
		func_98(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_115(int iParam0, bool bParam1)//Position - 0x36DE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_27 = false;
				func_39(1, 1, 1);
			}
			else if (func_142(1, Local_184, 0))
			{
				if (func_141())
				{
					func_140(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 1);
					iLocal_67 = 2;
					func_7(&iLocal_181);
					func_138(&uLocal_55, 0, 0);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
					func_135();
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_142(2, Local_198.f_1, Local_198.f_4) && func_142(3, Local_196.f_1, Local_196.f_4)) && func_142(4, Local_197.f_1, Local_197.f_4)) && func_134(0))
				{
					func_135();
					func_140(33);
					if (func_321(Local_196))
					{
						func_133(Local_196);
					}
					if (func_321(Local_197))
					{
						func_132(Local_197);
					}
					func_131(Local_198);
					if (func_321(Local_197) && func_321(Local_196))
					{
						func_120(iLocal_186, 1, 0, 1);
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 1);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_198) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_198);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						func_7(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
					}
					func_118(&iLocal_181, Local_198, 1);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_142(2, Local_198.f_1, Local_198.f_4) && func_142(3, Local_196.f_1, Local_196.f_4)) && func_142(4, Local_197.f_1, Local_197.f_4))
				{
					func_117(PLAYER::PLAYER_PED_ID(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_116();
					bLocal_27 = false;
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_135();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_142(2, Local_198.f_1, Local_198.f_4))
				{
					func_116();
					func_135();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, -1);
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_142(2, Local_185, Local_198.f_4))
				{
					func_116();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, -1);
					func_135();
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116()//Position - 0x39F4
{
	if (iLocal_67 == 1)
	{
		func_133(Local_196);
		func_132(Local_197);
		func_131(Local_198);
		func_120(iLocal_186, 1, 0, 1);
	}
	iLocal_202 = 0;
	iLocal_194 = 0;
	iLocal_195 = 0;
	iLocal_190 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
}

void func_117(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3A3A
{
	if (func_321(uParam0))
	{
		TASK::CLEAR_PED_TASKS(uParam0);
	}
	func_102(iParam0, Param1, fParam2, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x3A60
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_119(iParam1, iParam2, 5);
	}
}

int func_119(int iParam0, var uParam1, int iParam2)//Position - 0x3A7F
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, uParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3AB4
{
	int iVar0;
	
	iLocal_40 = iParam0;
	bLocal_49 = iParam1;
	bLocal_48 = iParam2;
	bLocal_50 = iParam3;
	Local_44[0 /*11*/].f_1 = 0;
	Local_44[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_40 - 1))
	{
		Local_45[iVar0 /*25*/].f_12 = 0;
		iVar0++;
	}
	fLocal_46 = 0f;
	func_122();
	Local_44[1 /*11*/].f_7 = 3;
	Local_44[1 /*11*/].f_5 = 0;
	Local_44[1 /*11*/].f_A = 1;
	Local_44[1 /*11*/].f_2 = 1500;
	Local_44[1 /*11*/].f_3 = 500;
	Local_44[0 /*11*/].f_5 = 0;
	Local_44[0 /*11*/].f_A = 0;
	Local_44[0 /*11*/].f_2 = 1000;
	Local_44[0 /*11*/].f_3 = 100;
	PED::ADD_RELATIONSHIP_GROUP("Enemies", &uLocal_39);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_44[0 /*11*/], uLocal_39);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_44[1 /*11*/], uLocal_39);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_44[0 /*11*/], 1, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_44[1 /*11*/], 1, 0);
	func_121(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_121(struct<3> Param0, struct<3> Param1)//Position - 0x3BA1
{
	Local_41.f_8 = { Param0 };
	Local_41.f_B = { Param1 };
	Local_41.f_1 = 4;
}

void func_122()//Position - 0x3BC2
{
	if (!PED::IS_PED_IN_VEHICLE(Local_44[0 /*11*/], iLocal_42, 0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_44[0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_44[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_123(1);
	}
}

void func_123(bool bParam0)//Position - 0x3C0B
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_42, 0))
	{
		func_124(bParam0);
		if (iLocal_47 != (iLocal_40 - 1))
		{
			if (iLocal_47 == 4)
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_44[0 /*11*/], iLocal_42, Local_45[iLocal_47 /*25*/], 15f, 2883755, Local_45[iLocal_47 /*25*/].f_6);
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_44[0 /*11*/], iLocal_42, Local_45[iLocal_47 /*25*/], 15f, 0, 0, 2883755, Local_45[iLocal_47 /*25*/].f_6, Local_45[iLocal_47 /*25*/].f_7);
			}
			Local_44[0 /*11*/].f_8 = Local_44[0 /*11*/].f_7;
			Local_44[0 /*11*/].f_7 = 4;
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_44[0 /*11*/], iLocal_42, 15f, 786599);
			Local_44[0 /*11*/].f_8 = Local_44[0 /*11*/].f_7;
			Local_44[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_44[0 /*11*/].f_8 = Local_44[0 /*11*/].f_7;
		Local_44[0 /*11*/].f_7 = 7;
	}
}

void func_124(bool bParam0)//Position - 0x3CEC
{
	if (iLocal_47 != -1)
	{
		if (!func_129(Local_45[iLocal_47 /*25*/].f_B) && !func_129(Local_45[iLocal_47 /*25*/].f_E))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_45[iLocal_47 /*25*/].f_B - Local_45[iLocal_47 /*25*/].f_E, Local_45[iLocal_47 /*25*/].f_B + Local_45[iLocal_47 /*25*/].f_E, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_127();
	}
	else
	{
		iLocal_47 = func_125();
	}
	if (iLocal_47 != -1)
	{
		if (!func_129(Local_45[iLocal_47 /*25*/].f_B) && !func_129(Local_45[iLocal_47 /*25*/].f_E))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_45[iLocal_47 /*25*/].f_B - Local_45[iLocal_47 /*25*/].f_E, Local_45[iLocal_47 /*25*/].f_B + Local_45[iLocal_47 /*25*/].f_E, 0, 1);
		}
	}
}

int func_125()//Position - 0x3DCE
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_36(iLocal_42))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_40 - 1))
		{
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_45[iVar2 /*25*/], 1);
			if (!func_129(Local_45[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_40 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_126(Local_45[iVar0 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_42));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) };
			fVar7 = func_126(Local_45[iVar3 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_42));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_40 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_126(struct<3> Param0, struct<3> Param1)//Position - 0x3F07
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_127()//Position - 0x3F28
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_49)
	{
		while (Local_45[iLocal_47 /*25*/].f_12 && iVar0 != -1)
		{
			iLocal_47++;
			if (iLocal_47 >= (iLocal_40 - 1))
			{
				iVar0 = -1;
				iLocal_47 = (iLocal_40 - 1);
			}
		}
		if (iLocal_47 == (iLocal_40 - 1))
		{
			if (bLocal_48)
			{
				iLocal_47 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_40 - 1))
				{
					Local_45[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_47 = (iLocal_40 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_40 - 1))
		{
			if (Local_45[iVar0 /*25*/].f_12)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_40 - 1))
		{
			iLocal_47 = (iLocal_40 - 1);
		}
		else if (iVar1 == iLocal_40)
		{
			if (bLocal_48)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_40 - 1))
				{
					Local_45[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
				iLocal_47 = func_128();
			}
			else
			{
				iLocal_47 = -1;
				return;
			}
		}
		else
		{
			iLocal_47 = func_128();
		}
	}
}

int func_128()//Position - 0x4033
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_40 - 1));
	while (Local_45[iVar0 /*25*/].f_12)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_40 - 1));
	}
	return iVar0;
}

int func_129(struct<3> Param0)//Position - 0x4061
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(bool bParam0)//Position - 0x408B
{
	struct<3> Var0;
	var uVar1;
	
	if (!bParam0)
	{
		uVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_42, "wheel_rf");
	}
	else
	{
		uVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_42, "wheel_lf");
	}
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_42, uVar1) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_42, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_131(int iParam0)//Position - 0x40FB
{
	if (func_36(iParam0))
	{
		iLocal_42 = iParam0;
	}
}

void func_132(var uParam0)//Position - 0x4113
{
	if (func_321(uParam0))
	{
		Local_44[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)//Position - 0x412E
{
	if (func_321(uParam0))
	{
		Local_44[0 /*11*/] = uParam0;
	}
}

int func_134(bool bParam0)//Position - 0x4149
{
	STREAMING::REQUEST_ANIM_DICT("missfbi4prepp1");
	STREAMING::REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_135()//Position - 0x41A6
{
	func_136(&uLocal_204);
}

void func_136(var uParam0)//Position - 0x41B5
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_91(uParam0, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
}

void func_137(int iParam0, struct<3> Param1)//Position - 0x420B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if ((Param1.x == Global_60AC[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_60AC[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_60AC[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
	Global_60AC[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_7837 = 1;
}

void func_138(var uParam0, int iParam1, int iParam2)//Position - 0x429F
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2554DA.f_112D, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_139(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_139(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_139(char* sParam0)//Position - 0x437C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_140(int iParam0)//Position - 0x438F
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

int func_141()//Position - 0x43B3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("trash")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0);
			iLocal_199 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_36(iLocal_199))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0, struct<3> Param1, float fParam2)//Position - 0x4406
{
	switch (iParam0)
	{
		case 0:
			if (func_147(Param1, Local_184, 1056964608) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_179, 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_15350[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[0], 1, 1);
				Local_198 = Global_15350[0];
				if (func_36(Local_198))
				{
					func_35(Local_198, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_198, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_198, 1);
					return 1;
				}
			}
			else if (func_146(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1))
			{
				func_35(Local_198, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_198, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_198, 1);
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_15350.f_9[0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[0], 1, 1);
					Local_196 = Global_15350.f_9[0];
					if (func_321(Local_196))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_196, true);
						PED::SET_PED_CONFIG_FLAG(Local_196, 170, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_196, 65536, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_196, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_196, Local_196.f_5, Local_196.f_1, Local_196.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_198))
				{
					PED::SET_PED_INTO_VEHICLE(Local_196, Local_198, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_196, true);
					PED::SET_PED_CONFIG_FLAG(Local_196, 170, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_196, 65536, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_196, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[1]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_15350.f_9[1], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[1], 1, 1);
					Local_197 = Global_15350.f_9[1];
					if (func_321(Local_197))
					{
						PED::SET_PED_CONFIG_FLAG(Local_197, 170, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_197, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_198))
				{
					PED::SET_PED_INTO_VEHICLE(Local_197, Local_198, 0);
					PED::SET_PED_CONFIG_FLAG(Local_197, 170, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_197, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x46C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, uParam1, Param2, uParam3, 1, 1);
			if (func_321(*uParam0))
			{
				if (bParam5)
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
				}
				if (bParam6)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
				}
				if (!bParam7)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam7);
				}
				if (bParam4)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_321(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_144(var uParam0, bool bParam1)//Position - 0x4753
{
	if (bParam1)
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0);
	}
}

int func_145(var uParam0, char* sParam1, int iParam2)//Position - 0x4778
{
	STREAMING::REQUEST_MODEL(uParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != -1)
	{
	}
	if (STREAMING::HAS_MODEL_LOADED(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x47A7
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_145(iParam1, "Loading", 0))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				if (bParam4)
				{
					func_144(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*uParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_147(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x4854
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

void func_148()//Position - 0x48A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_149(&(Local_44[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_149(var uParam0, int iParam1)//Position - 0x48C8
{
	if (func_321(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_45[iLocal_47 /*25*/].f_11) && ENTITY::IS_ENTITY_ATTACHED(Local_45[iLocal_47 /*25*/].f_11))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
					if (iLocal_47 <= 20 && iLocal_47 != -1)
					{
						Local_45[iLocal_47 /*25*/].f_12 = 1;
						uParam0->f_9 = 0;
					}
					ENTITY::DETACH_ENTITY(Local_45[iLocal_47 /*25*/].f_11, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_45[iLocal_47 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_192();
					func_191(uParam0);
				}
				func_178(uParam0);
				break;
			
			case 1:
				func_151(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_45[iLocal_47 /*25*/].f_11))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_45[iLocal_47 /*25*/].f_11))
			{
				ENTITY::DETACH_ENTITY(Local_45[iLocal_47 /*25*/].f_11, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_45[iLocal_47 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), *uParam0, 150f) && !bLocal_51)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1, float fParam2)//Position - 0x4A45
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_151(var uParam0)//Position - 0x4A65
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_177(*uParam0, 780511057))
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
				}
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 21:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					uParam0->f_4 = func_166(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 10:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					PED::SET_PED_RESET_FLAG(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (!func_177(*uParam0, 474215631))
				{
					if (func_177(*uParam0, 780511057))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
					}
					TASK::TASK_COWER(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 1, 1);
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_165(uParam0);
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 5000)
			{
				if (!func_177(*uParam0, 713668775))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_44[func_164(uParam0->f_A) /*11*/]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_53, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_177(*uParam0, -2017877118))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 19:
			func_165(uParam0);
			if (!func_177(*uParam0, -2017877118))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
			{
				func_161(uParam0);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_1) > 3000)
			{
				func_161(uParam0);
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 8000)
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				if (!iLocal_52)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_52 = 1;
					}
				}
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 8;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			{
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 7:
			if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_159())
					{
						if (func_321(*uParam0))
						{
							TASK::CLEAR_PED_TASKS(*uParam0);
							TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_161(uParam0);
			}
			break;
		
		case 8:
			if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (PED::IS_PED_BEING_JACKED(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_2 || !func_177(*uParam0, 2104565373))
			{
				func_156(uParam0);
			}
			break;
		
		case 12:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_44[func_164(uParam0->f_A) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 15:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_44[func_164(uParam0->f_A) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 16:
			if (PED::IS_PED_BEING_JACKED(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_54) >= 9000)
			{
				if (!func_154(uParam0))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else
				{
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_54) >= 5000 && (MISC::GET_GAME_TIMER() - iLocal_54) <= 5500)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0))
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_44[func_164(uParam0->f_A) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 17:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_44[func_164(uParam0->f_A) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 20:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= 6000)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_156(uParam0);
				}
				else
				{
					func_161(uParam0);
					func_161(&(Local_44[func_164(uParam0->f_A) /*11*/]));
				}
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			func_165(uParam0);
			break;
		
		case 22:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					return;
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 23:
			func_195(uParam0, uParam0->f_A, 1);
			func_165(uParam0);
			if (func_100(*uParam0, Local_53, 2f))
			{
				if (func_152(*uParam0, Local_53, 1126825984, 0))
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_152(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x53A9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_153(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
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
		Var1 = { func_153(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_126(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_153(struct<3> Param0)//Position - 0x5437
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

int func_154(var uParam0)//Position - 0x5476
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, 10f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, 3f, 2f), 5f, 0, 1, 0) && PED::IS_PED_STOPPED(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)//Position - 0x54B8
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_36(iVar0))
		{
			if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_156(var uParam0)//Position - 0x54FE
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_39, 1862763509);
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_122();
			break;
		
		case 3:
			if (!func_177(*uParam0, 242628503))
			{
				if (iLocal_47 <= 20 && iLocal_47 != -1)
				{
					Local_45[iLocal_47 /*25*/].f_12 = 1;
				}
				if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
				{
					if (uParam0->f_A == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
			{
				if (uParam0->f_A == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_45[iLocal_47 /*25*/].f_12)
			{
				if (uParam0->f_9 == 1)
				{
					func_157(uParam0);
				}
				else if (uParam0->f_A == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
			{
				if (uParam0->f_A == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_5 = 0;
}

void func_157(var uParam0)//Position - 0x5729
{
	if (!func_177(*uParam0, -71340211))
	{
		if (Local_45[iLocal_47 /*25*/].f_17 != 0)
		{
			if (func_10(Local_45[iLocal_47 /*25*/].f_11))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_45[iLocal_47 /*25*/].f_11, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_45[iLocal_47 /*25*/].f_13, 1f, 20000, -1f, 0, func_158(Local_45[iLocal_47 /*25*/].f_13, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1));
		}
		if (func_36(iLocal_42))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_42, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_158(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3, int iParam4)//Position - 0x57CF
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

int func_159()//Position - 0x5834
{
	if (func_36(iLocal_42) && func_321(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_42, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_42);
			if (func_160() || ENTITY::GET_ENTITY_HEALTH(iLocal_42) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160()//Position - 0x5882
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_42, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0)//Position - 0x58BC
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_162(uParam0);
		uParam0->f_1 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_162(var uParam0)//Position - 0x58F0
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				TASK::TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_163(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)//Position - 0x5946
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_164(int iParam0)//Position - 0x5960
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0)//Position - 0x5973
{
	if (func_36(iLocal_42) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_42, 0) && !PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0)))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_42) > 0f)
		{
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_166(int iParam0, bool bParam1, int iParam2)//Position - 0x59CD
{
	var uVar0;
	
	uVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)//Position - 0x5A1F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_168(bool bParam0, float fParam1, float fParam2)//Position - 0x5AC3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_169(var uParam0, int iParam1)//Position - 0x5ADA
{
	func_162(uParam0);
	if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_150(PLAYER::PLAYER_PED_ID(), *uParam0, 10f))
		{
			if (!func_177(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_177(*uParam0, 780511057) && !func_177(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_170(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5B95
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_176(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_175(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_174(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_173();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_171(&(Local_37[iVar2 /*4*/]), Var1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_171(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5C56
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_172(iParam2, iParam5) };
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
		func_10(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_38)
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
		func_10(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, 0))
			{
				if (bLocal_38)
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

Vector3 func_172(int iParam0, int iParam1)//Position - 0x5D82
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

int func_173()//Position - 0x5E47
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x5E91
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_153(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
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
		Var1 = { func_153(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_126(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_175(var uParam0)//Position - 0x5F22
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_176(int iParam0, int iParam1)//Position - 0x5F3D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)//Position - 0x5F7C
{
	if (func_321(uParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_178(var uParam0)//Position - 0x5FAF
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_A == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_42, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (uParam0->f_A == 0)
			{
				func_189(uParam0, 1);
			}
			else
			{
				func_189(uParam0, 0);
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_42))
			{
				if (!func_177(*uParam0, -1794415470))
				{
					if (uParam0->f_A == 0)
					{
						func_123(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_42, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_42, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (bLocal_50)
			{
				if (iLocal_47 <= 20 && iLocal_47 != -1)
				{
					if (!Local_45[iLocal_47 /*25*/].f_12)
					{
						if (func_100(*uParam0, Local_45[iLocal_47 /*25*/], 20f))
						{
							if (Local_45[iLocal_47 /*25*/].f_9 && VEHICLE::IS_VEHICLE_STOPPED(iLocal_42))
							{
								func_188();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_100(*uParam0, Local_45[iLocal_47 /*25*/], 25f))
			{
				if (Local_45[iLocal_47 /*25*/].f_9)
				{
					func_187(uParam0);
				}
				else
				{
					Local_45[iLocal_47 /*25*/].f_12 = 1;
					func_123(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_42))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_42, 25f, 10, 0);
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_42);
				if (fVar0 < 8f)
				{
					func_187(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_177(*uParam0, 242628503) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_42))
			{
				if (bLocal_50)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_321(Local_44[1 /*11*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_44[1 /*11*/], iLocal_42, 0) && Local_44[1 /*11*/].f_7 == 3)
				{
					func_123(0);
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
			{
				func_157(uParam0);
			}
			break;
		
		case 9:
			func_179(uParam0);
			break;
	}
}

void func_179(var uParam0)//Position - 0x6218
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_177(*uParam0, -2015108952))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Local_45[iLocal_47 /*25*/].f_13) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_45[iLocal_47 /*25*/].f_13, 0);
				}
				TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_184(Local_45[iLocal_47 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
			{
				func_183(uParam0);
				return;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_177(*uParam0, 242628503))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_45[iLocal_47 /*25*/].f_11) && !ENTITY::IS_ENTITY_ATTACHED(Local_45[iLocal_47 /*25*/].f_11))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_45[iLocal_47 /*25*/].f_11, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_184(Local_45[iLocal_47 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
				{
					func_183(uParam0);
					return;
				}
			}
			else if (!func_177(*uParam0, 713668775))
			{
				if (func_36(iLocal_42))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_42));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_42))
			{
				if (!func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, -5.5f, 0f), iLocal_42, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_177(*uParam0, 713668775))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(iLocal_42, 1)) > 3f)
							{
								TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(iLocal_42), 0);
							}
							TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_177(*uParam0, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_42));
					}
				}
				else
				{
					func_181(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_177(*uParam0, 242628503))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_45[iLocal_47 /*25*/].f_11))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_45[iLocal_47 /*25*/].f_11))
								{
									PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									ENTITY::DETACH_ENTITY(Local_45[iLocal_47 /*25*/].f_11, 1, 0);
									OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_45[iLocal_47 /*25*/].f_11, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_45[iLocal_47 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
								}
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_45[iLocal_47 /*25*/].f_11, iLocal_42))
								{
									func_180(&(Local_45[iLocal_47 /*25*/].f_11));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_42))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_42, 5, 0);
						func_180(&(Local_45[iLocal_47 /*25*/].f_11));
					}
					func_156(uParam0);
				}
			}
			else
			{
				func_181(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_180(var uParam0)//Position - 0x665C
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_181(var uParam0)//Position - 0x6687
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_39, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_182()//Position - 0x6782
{
	Local_41 = 0;
	Local_41.f_1A = 0;
	Local_41.f_12 = 0;
}

void func_183(var uParam0)//Position - 0x6797
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_39, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_184(struct<3> Param0, int iParam1, struct<3> Param2)//Position - 0x6892
{
	Local_41.f_2 = { Param0 };
	Local_41.f_8 = { Param2 };
	func_185(&Local_41, iParam1);
	if (Local_41.f_1A)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_41.f_12))
			{
				if (func_10(Local_41.f_12))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_41.f_12) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(Local_41.f_12))
		{
			if (func_10(Local_41.f_12))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_41.f_12) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_185(var uParam0, var uParam1)//Position - 0x6924
{
	int iVar0;
	int iVar1;
	
	iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_14), &(uParam0->f_17), &(uParam0->f_12));
	uParam0->f_13 = 2 == iVar1;
	if (uParam0->f_13)
	{
		if (0 == iVar0)
		{
			uParam0->f_1A = 0;
		}
		else
		{
			uParam0->f_1A = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_186(uParam0, uParam1);
	}
}

void func_186(var uParam0, int iParam1)//Position - 0x6973
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_11, 511, 4);
			break;
		
		case 3:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_11, 511, 4);
			break;
		
		case 4:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_B, uParam0->f_E, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_F, 511, iParam1, 4);
			break;
	}
	uParam0->f_10 = *uParam0 != 0;
}

void func_187(var uParam0)//Position - 0x6A38
{
	var uVar0;
	
	if (func_36(iLocal_42))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_42, Local_45[iLocal_47 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		TASK::TASK_VEHICLE_PARK(0, iLocal_42, Local_45[iLocal_47 /*25*/].f_3, Local_45[iLocal_47 /*25*/].f_8, Local_45[iLocal_47 /*25*/].f_A, 5f, 1);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_188()//Position - 0x6ABA
{
	func_157(&(Local_44[1 /*11*/]));
}

void func_189(var uParam0, bool bParam1)//Position - 0x6ACB
{
	int iVar0;
	
	if (func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(bParam1)), iLocal_42, 1.9f, 1.9f, 8f))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_190(uParam0);
		}
		else if (!func_177(*uParam0, 1227113341) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_42, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_100(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_42, func_130(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_42, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_190(var uParam0)//Position - 0x6BEC
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_39, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_191(var uParam0)//Position - 0x6CCD
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_42) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_177(*uParam0, 2104565373) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
			{
				if (func_150(PLAYER::PLAYER_PED_ID(), iLocal_42, 10f))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_42, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_192()//Position - 0x6D5C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_40 - 1))
	{
		if (Local_45[iVar0 /*25*/].f_17 != 0)
		{
			if (Local_45[iVar0 /*25*/].f_18)
			{
				if ((iVar0 != iLocal_47 && func_10(Local_45[iVar0 /*25*/].f_11)) && func_194(Local_45[iVar0 /*25*/].f_11, PLAYER::PLAYER_PED_ID(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_45[iVar0 /*25*/].f_11));
					Local_45[iVar0 /*25*/].f_18 = 0;
				}
			}
			else if (Local_45[iVar0 /*25*/].f_17 != 0)
			{
				if (func_100(PLAYER::PLAYER_PED_ID(), Local_45[iVar0 /*25*/], 100f) || func_100(Local_44[0 /*11*/], Local_45[iVar0 /*25*/], 120f))
				{
					Local_45[iVar0 /*25*/].f_18 = func_193(&(Local_45[iVar0 /*25*/].f_11), Local_45[iVar0 /*25*/].f_17, Local_45[iVar0 /*25*/].f_13, Local_45[iVar0 /*25*/].f_16, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x6E4D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam1, Param2, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, uParam3);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam4)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_194(int iParam0, int iParam1, int iParam2)//Position - 0x6EBA
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

void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x6F16
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_321(Local_44[func_164(iParam1) /*11*/]))
		{
			if (!bLocal_51)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_44[func_164(iParam1) /*11*/]))
				{
					if (func_174(*uParam0, Local_44[func_164(iParam1) /*11*/], 140f, 0) || func_150(Local_44[func_164(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_51 = true;
						return;
					}
					else
					{
						Local_53 = { ENTITY::GET_ENTITY_COORDS(Local_44[func_164(iParam1) /*11*/], 1) };
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_169(uParam0, 0);
				}
			}
		}
		else if (Local_44[func_164(iParam1) /*11*/].f_6 == 22)
		{
			if (func_174(*uParam0, Local_44[func_164(iParam1) /*11*/], 140f, 0) && func_150(Local_44[func_164(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_44[func_164(iParam1) /*11*/].f_6 == 5 || Local_44[func_164(iParam1) /*11*/].f_6 == 7)
		{
			if (func_150(Local_44[func_164(iParam1) /*11*/], *uParam0, 10f))
			{
				func_169(uParam0, 0);
			}
		}
		if (func_206(*uParam0))
		{
			func_162(uParam0);
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_A == 0 && uParam0->f_7 == 4)
		{
			if (func_154(uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
				{
					TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					AUDIO::_0x9D3AF56E94C9AE98(iLocal_42, 2000f);
					iLocal_54 = MISC::GET_GAME_TIMER();
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_197(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_196(uParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_36(iLocal_42))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_42, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_42) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, iLocal_42, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								TASK::TASK_COWER(Local_44[func_164(iParam1) /*11*/], -1);
								Local_44[func_164(iParam1) /*11*/].f_6 = 10;
								Local_44[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_44[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::TASK_COWER(*uParam0, -1);
								uParam0->f_6 = 12;
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_44[func_164(iParam1) /*11*/], iLocal_42, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								Local_44[func_164(iParam1) /*11*/].f_6 = 5;
								Local_44[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_44[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_44[func_164(iParam1) /*11*/]))
							{
								if (func_174(Local_44[func_164(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
								{
									func_169(&(Local_44[func_164(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_44[func_164(iParam1) /*11*/]))
						{
							if (func_170(Local_44[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_44[func_164(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
				if (func_170(Local_44[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_44[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_44[func_164(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_44[func_164(iParam1) /*11*/].f_5 = 1;
					Local_44[func_164(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_44[func_164(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (PED::IS_PED_BEING_JACKED(*uParam0))
		{
			func_162(uParam0);
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_RAGDOLL(*uParam0))
		{
			if (func_10(Local_45[iLocal_47 /*25*/].f_11))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_45[iLocal_47 /*25*/].f_11))
				{
					ENTITY::DETACH_ENTITY(Local_45[iLocal_47 /*25*/].f_11, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_45[iLocal_47 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_321(Local_44[func_164(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_44[func_164(iParam1) /*11*/]))
			{
				func_162(uParam0);
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_196(var uParam0)//Position - 0x743B
{
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7483
{
	struct<3> Var0;
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_201(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_198(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, float fParam1)//Position - 0x753E
{
	float fVar0;
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (func_200(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_199(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_199(int iParam0, float fParam1)//Position - 0x75B4
{
	return func_170(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_200(int iParam0)//Position - 0x75CC
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)//Position - 0x75F4
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / SYSTEM::VDIST(Var1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x763B
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
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_205(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
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
				if (func_205(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7736
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
				if (func_204(iParam0, fParam1))
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
			if (func_204(iParam0, fParam1))
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

int func_204(int iParam0, float fParam1)//Position - 0x7842
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_152(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x78D7
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

int func_206(int iParam0)//Position - 0x791F
{
	if (func_150(uParam0, PLAYER::PLAYER_PED_ID(), 6f))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()//Position - 0x7952
{
	if (func_36(Local_198))
	{
		if (func_150(PLAYER::PLAYER_PED_ID(), Local_198, 100f) && !iLocal_193)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_193 = 1;
			}
		}
		else if (!func_150(PLAYER::PLAYER_PED_ID(), Local_198, 120f) && iLocal_193)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_193 = 0;
		}
	}
}

void func_208(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam6, bool bParam7, int iParam8)//Position - 0x79C7
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_107(func_75()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_213(*iParam0) || func_212(*iParam0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_107(func_75()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_99(func_108(func_75(), bParam7), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_108(func_75(), bParam7));
					}
					if (func_75() != 33)
					{
						func_210(iParam0);
					}
					else
					{
						func_209(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0) && !func_213(*iParam0)) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_213(*iParam0) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_75() != 33)
	{
		func_210(iParam0);
	}
	else
	{
		func_209(iParam0, uParam1);
	}
}

void func_209(var uParam0, var uParam1)//Position - 0x7B7B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_27)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						if (func_10(uVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_210(var uParam0)//Position - 0x7C68
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == func_211(func_75()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_211(int iParam0)//Position - 0x7CC5
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_212(int iParam0)//Position - 0x7D1E
{
	int iVar0;
	int iVar1;
	
	if ((func_321(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x7DA1
{
	int iVar0;
	int iVar1;
	
	if ((func_321(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_214()//Position - 0x7E0D
{
	func_208(&iLocal_199, &uLocal_200, &iLocal_70, &iLocal_182, &iLocal_181, Local_185, Local_198, 0, 1090519040);
	func_148();
	func_231();
	func_207();
	switch (iLocal_68)
	{
		case 0:
			if (func_115(iLocal_67, bLocal_27))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !func_230())
				{
					func_110(&iLocal_181, Local_185, 1);
					func_114("PRA_TAKBACK", &iLocal_180);
				}
				iLocal_68 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_181, Local_185, &iLocal_69, iLocal_70, &iLocal_180, &iLocal_194);
			func_220();
			if (func_218(iLocal_199, Local_185, &iLocal_181, iLocal_69, iLocal_70, &iLocal_180, &iLocal_195, 0, 0, 1086324736))
			{
				RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
				iLocal_68 = 2;
			}
			break;
		
		case 2:
			func_215();
			func_7(&iLocal_181);
			func_7(&iLocal_182);
			if (func_109(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_199))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199, -1);
				}
				else
				{
					func_102(iLocal_199, Local_185, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_68 = 1;
				}
			}
			break;
	}
}

void func_215()//Position - 0x7F69
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_217(iVar1))
			{
				func_216(iVar1);
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0)//Position - 0x7FA5
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
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

int func_217(int iParam0)//Position - 0x7FFD
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
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

int func_218(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)//Position - 0x8049
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_110(iParam2, Param1, 1);
			if (!bParam8)
			{
				if (func_36(iParam0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam9, fParam9, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam9, fParam9, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_99(func_107(func_75()), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_107(func_75()));
			}
			if (!func_219())
			{
				func_114(func_108(func_75(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_108(func_75(), 0));
			}
			func_98(func_107(func_75()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_219()//Position - 0x813C
{
	return Global_15F9E.f_122 > 0;
}

void func_220()//Position - 0x814D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (func_76(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_150(PLAYER::PLAYER_PED_ID(), iVar2, 5f))
					{
						if (!func_230())
						{
							func_225(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_373[iVar0])
				{
					if (iVar0 == 0)
					{
						func_91(&uLocal_204, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_91(&uLocal_204, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_91(&uLocal_204, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_373[iVar0] = 1;
				}
			}
			if (!func_217(iVar2))
			{
				if (func_76(iVar2, 0))
				{
					if (func_224(iVar2) || func_222(iVar2))
					{
						if (func_221(iVar2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
							TASK::CLEAR_PED_TASKS(iVar2);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
			{
				if (func_224(iVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), Local_185, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_222(iVar2))
				{
					if (func_36(Local_198))
					{
						if (!func_150(iVar2, Local_198, 17f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
							{
								TASK::TASK_VEHICLE_MISSION(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), Local_198, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_216(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_221(int iParam0, int iParam1)//Position - 0x8358
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
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

int func_222(int iParam0)//Position - 0x83DE
{
	int iVar0;
	
	if (!func_223())
	{
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_36(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam0, iVar0, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_223()//Position - 0x845D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x8479
{
	if (!func_223())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_198) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_198, 0)) && !ENTITY::IS_ENTITY_AT_COORD(Local_198, Local_185, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_198, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_198, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x8506
{
	if (iLocal_67 > 1)
	{
		if (iLocal_69 > 0)
		{
			if (!MISC::IS_BIT_SET(Local_72[iParam0 /*8*/].f_7, 0) && iLocal_70 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_229(&uLocal_204, cLocal_203, Local_72[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_72[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((MISC::IS_BIT_SET(Local_72[iParam0 /*8*/].f_7, 0) && !MISC::IS_BIT_SET(Local_72[iParam0 /*8*/].f_7, 1)) && iLocal_70 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_229(&uLocal_204, cLocal_203, Local_72[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_72[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_72[iParam0 /*8*/].f_7, 5))
			{
				if (func_228(iLocal_199, Local_185, 1) < 15f && iLocal_70 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_229(&uLocal_204, cLocal_203, Local_72[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							MISC::SET_BIT(&(Local_72[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_226(int iParam0, int iParam1)//Position - 0x86E5
{
	if (!MISC::IS_BIT_SET(Local_72[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_374 != -1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_229(&uLocal_204, cLocal_203, Local_72[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					MISC::SET_BIT(&(Local_72[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_230() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_374 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_374 = -1;
		}
	}
}

int func_227(int iParam0)//Position - 0x875D
{
	if ((MISC::IS_BIT_SET(Local_72[0 /*8*/].f_7, iParam0) || MISC::IS_BIT_SET(Local_72[1 /*8*/].f_7, iParam0)) || MISC::IS_BIT_SET(Local_72[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_228(int iParam0, struct<3> Param1, int iParam2)//Position - 0x87A3
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

bool func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x87DC
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_81(sParam2, iParam3, 0);
}

int func_230()//Position - 0x882A
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_231()//Position - 0x884C
{
	if (func_100(PLAYER::PLAYER_PED_ID(), Local_185, 220f))
	{
		if (!iLocal_202 && !func_100(PLAYER::PLAYER_PED_ID(), Local_185, 100f))
		{
			iLocal_202 = func_146(&uLocal_201, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_100(PLAYER::PLAYER_PED_ID(), Local_185, 240f))
	{
		if (iLocal_202)
		{
			func_6(&uLocal_201);
			iLocal_202 = 0;
		}
	}
}

void func_232()//Position - 0x88D5
{
	func_208(&iLocal_199, &uLocal_200, &iLocal_70, &iLocal_182, &iLocal_181, Local_185, Local_198, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_68)
	{
		case 0:
			if (func_115(iLocal_67, bLocal_27))
			{
				func_118(&iLocal_181, Local_198, 1);
				func_114("PRA_GOVAN", &iLocal_180);
				iLocal_68 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (func_36(Local_198))
			{
				func_235(&uLocal_55, Local_198, 0, 0, 1, 1, 1);
			}
			if (!bLocal_189)
			{
				if (func_321(Local_196) && PED::IS_PED_BEING_JACKED(Local_196))
				{
					func_234();
				}
				if (func_321(Local_197) && PED::IS_PED_BEING_JACKED(Local_197))
				{
					func_234();
				}
			}
			if (func_36(iLocal_199))
			{
				if ((iLocal_70 == 1 || iLocal_70 == 2) || iLocal_70 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_68 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_181);
			func_138(&uLocal_55, 0, 0);
			func_103(0);
			break;
		
		case 3:
			func_8(&Local_196);
			func_8(&Local_197);
			if (func_36(Local_198))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_198, -1);
			}
			func_233(1);
			func_39(1, 1, 1);
			iLocal_68 = 1;
			break;
	}
}

void func_233(bool bParam0)//Position - 0x8A2C
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

void func_234()//Position - 0x8A73
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_189 = func_229(&uLocal_204, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_189)
	{
		RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
	}
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8AD9
{
	func_236(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_236(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8AF6
{
	func_237(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_237(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8B14
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_138(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_238(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_238(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8B4C
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_139(iVar0))
	{
		func_255();
	}
	if (func_254(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_249(uParam0, bParam5, bParam7, 0))
			{
				func_246(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_243(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_139(iVar0))
							{
								func_242(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_241(1);
								}
							}
						}
					}
				}
			}
			else if (func_243(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_139(iVar0))
						{
							func_242(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_241(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_139(sParam3))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_138(uParam0, iVar0, 1);
				}
			}
			if (!func_249(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_240(uParam0))
				{
					func_239(uParam0);
				}
			}
		}
	}
	else
	{
		func_138(uParam0, iVar0, 0);
	}
}

void func_239(var uParam0)//Position - 0x8EB9
{
	if (func_254(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_240(var uParam0)//Position - 0x8F22
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_241(bool bParam0)//Position - 0x8F4D
{
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_17C49.f_206F.f_64++;
			}
			return Global_17C49.f_206F.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_17C49.f_206F.f_65++;
			}
			return Global_17C49.f_206F.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_17C49.f_206F.f_66++;
			}
			return Global_17C49.f_206F.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_242(char* sParam0, int iParam1)//Position - 0x8FF7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_243(char* sParam0)//Position - 0x900E
{
	if (!func_244(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_139(sParam0)) || func_139("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_241(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_244(bool bParam0, bool bParam1, bool bParam2)//Position - 0x90A7
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_245())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_105F2)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CADC)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_245()//Position - 0x9223
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_246(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x9238
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_138(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_247())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_B = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_247()//Position - 0x933B
{
	return func_248(PLAYER::PLAYER_ID());
}

int func_248(int iParam0)//Position - 0x934B
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x936A
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_240(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_252(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_251(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_251(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_240(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_244(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_255();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_250(bool bParam0, bool bParam1, bool bParam2)//Position - 0x96D6
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9728
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_252(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9771
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253(bool bParam0, bool bParam1, bool bParam2)//Position - 0x97D0
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x9826
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()//Position - 0x9881
{
	MISC::SET_BIT(&Global_8D8, 4);
}

void func_256()//Position - 0x9891
{
	switch (iLocal_68)
	{
		case 0:
			if (func_115(iLocal_67, 0))
			{
				func_268();
				func_266(33);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (func_337())
				{
					func_263(0, -1, 1);
					func_40(500, 1);
					iLocal_68 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_117(PLAYER::PLAYER_PED_ID(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_257();
					if (iLocal_67 == 2)
					{
						iLocal_68 = 0;
					}
					else
					{
						iLocal_68 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_103(0);
			break;
	}
}

void func_257()//Position - 0x9959
{
}

void func_258(struct<3> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9961
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, iParam1, iParam2, 127);
	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam3);
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam5)
			{
				func_260();
			}
			if (bParam4)
			{
				func_259();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}

void func_259()//Position - 0x99D0
{
	Global_42CA.f_6 = 1;
}

void func_260()//Position - 0x99DE
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_67(0))
		{
			func_261(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_261(int iParam0)//Position - 0x9A06
{
	if (Global_38D7)
	{
		func_262(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
	if (!func_49())
	{
		Global_3839.f_1 = 3;
	}
}

void func_262(bool bParam0, bool bParam1)//Position - 0x9A76
{
	if (bParam0)
	{
		if (func_67(0))
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

void func_263(int iParam0, int iParam1, int iParam2)//Position - 0x9AEA
{
	if (func_337() && func_265())
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
		func_264(0);
	}
}

void func_264(int iParam0)//Position - 0x9BAE
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

bool func_265()//Position - 0x9BD7
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

void func_266(int iParam0)//Position - 0x9BEB
{
	Global_150CE = 0;
	switch (iParam0)
	{
		case 72:
			func_267(2);
			func_267(4);
			break;
		
		case 73:
			func_267(0);
			func_267(1);
			func_267(7);
			break;
		
		case 92:
			func_267(10);
			func_267(9);
			func_267(13);
			func_267(6);
			break;
		
		case 68:
			func_267(11);
			break;
		
		case 78:
			func_267(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_267(3);
			break;
		
		default:
			break;
	}
}

void func_267(int iParam0)//Position - 0x9C79
{
	MISC::SET_BIT(&Global_150CE, iParam0);
}

void func_268()//Position - 0x9C8B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			func_269(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 24, 0);
		}
	}
}

void func_269(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)//Position - 0x9CC8
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
		func_312(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_308(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f))
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
		func_301(iParam3, Var0, Param1, uParam2, func_307(iParam0));
		func_270(iParam3, iParam0, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)//Position - 0x9DF3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_287();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_286(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_271(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_271(int iParam0, int iParam1)//Position - 0x9F10
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_272(iParam0))
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
	func_308(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_272(int iParam0)//Position - 0xA111
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_307(iParam0) != 145) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || func_280(iParam0)) || !func_273(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_282(iParam0))
		{
		}
		if (func_282(iParam0))
		{
		}
		if (func_284(iParam0, 0, 0))
		{
		}
		if (func_284(iParam0, 1, 0))
		{
		}
		if (func_284(iParam0, 2, 0))
		{
		}
		if (func_307(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_273(int iParam0)//Position - 0xA1EE
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_274(iParam0))
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

int func_274(int iParam0)//Position - 0xA39E
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
		if (!func_279())
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
		if ((((!func_278() && !func_277()) && !func_276()) && !func_275()) && !func_279())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_276())
		{
			return 0;
		}
	}
	return 1;
}

int func_275()//Position - 0xA56D
{
	return 0;
}

int func_276()//Position - 0xA576
{
	return 1;
}

int func_277()//Position - 0xA57F
{
	return 1;
}

int func_278()//Position - 0xA588
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_279()//Position - 0xA5A1
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

int func_280(int iParam0)//Position - 0xA624
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_274(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0)//Position - 0xA669
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

int func_282(int iParam0)//Position - 0xA6A4
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

int func_283(int iParam0)//Position - 0xA720
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

int func_284(int iParam0, int iParam1, bool bParam2)//Position - 0xA808
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &iVar2))
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

int func_285(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xA879
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

int func_286(int iParam0)//Position - 0xA951
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

var func_287()//Position - 0xA96D
{
	var uVar0;
	
	func_297(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_296(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_295(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_290(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_289(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_288(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_288(var uParam0, int iParam1)//Position - 0xA9B3
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

void func_289(var uParam0, int iParam1)//Position - 0xAA39
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_290(var uParam0, int iParam1)//Position - 0xAA6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_294(*uParam0);
	iVar1 = func_292(*uParam0);
	if (iParam1 < 1 || iParam1 > func_291(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_291(int iParam0, int iParam1)//Position - 0xAABD
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

var func_292(var uParam0)//Position - 0xAB5F
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_293(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_293(bool bParam0, int iParam1, int iParam2)//Position - 0xAB84
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_294(var uParam0)//Position - 0xAB9B
{
	return uParam0 & 15;
}

void func_295(var uParam0, int iParam1)//Position - 0xABA8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_296(var uParam0, int iParam1)//Position - 0xABE2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_297(var uParam0, int iParam1)//Position - 0xAC1D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_298(var uParam0, int iParam1)//Position - 0xAC59
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
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_299(2, 1);
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
			if (func_279())
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
			if (func_279())
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
		if (!func_15(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_15(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_15(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)//Position - 0xC34E
{
	struct<58> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_300(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_300(int iParam0, var uParam1, int iParam2)//Position - 0xC390
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

void func_301(int iParam0, struct<54> Param1, struct<3> Param2, var uParam3, int iParam4)//Position - 0xC608
{
	if (func_298(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_306(iParam0);
			func_305(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
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
			func_302(iParam0, 1);
		}
	}
}

void func_302(int iParam0, bool bParam1)//Position - 0xC70A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_304(iParam0, 0))
		{
			func_303(iParam0, 1, 0);
			func_303(iParam0, 2, 0);
			func_303(iParam0, 3, 0);
			func_303(iParam0, 4, 0);
			func_303(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_303(iParam0, 0, 0);
	}
}

void func_303(int iParam0, int iParam1, bool bParam2)//Position - 0xC767
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

bool func_304(int iParam0, int iParam1)//Position - 0xC7A2
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_305(struct<54> Param0, var uParam1)//Position - 0xC7C5
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

void func_306(int iParam0)//Position - 0xC890
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_302(iParam0, 0);
		}
	}
}

int func_307(int iParam0)//Position - 0xC90A
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

void func_308(int iParam0, var uParam1)//Position - 0xC96D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_311(uParam1);
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
		func_310(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_309(iVar0 + 1));
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

int func_309(int iParam0)//Position - 0xCC19
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

int func_310(int iParam0, var uParam1, var uParam2)//Position - 0xCCC9
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

void func_311(var uParam0)//Position - 0xCDA3
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

void func_312(int iParam0)//Position - 0xCE53
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_306(iParam0);
	func_302(iParam0, 0);
}

void func_313()//Position - 0xCE7A
{
	func_316();
	func_314();
}

void func_314()//Position - 0xCE8A
{
	if (!iLocal_187)
	{
		if (func_36(iLocal_199))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199, 0))
			{
				func_64(iLocal_199, -1);
				func_63(iLocal_199, 318);
				iLocal_187 = 1;
			}
		}
	}
	if (!iLocal_188)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_315(320, 0);
			iLocal_188 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		func_62(0, 320);
		iLocal_188 = 0;
	}
}

void func_315(int iParam0, bool bParam1)//Position - 0xCF02
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

void func_316()//Position - 0xCF4C
{
}

void func_317()//Position - 0xCF54
{
	if (!bLocal_27 && iLocal_67 != 5)
	{
		if (iLocal_67 > 0)
		{
			func_318();
		}
	}
}

void func_318()//Position - 0xCF77
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_199))
	{
		if (!func_36(uLocal_200) && !func_36(Local_198))
		{
			func_320(1);
			return;
		}
		if (func_36(Local_198) && !func_150(PLAYER::PLAYER_PED_ID(), Local_198, fVar0))
		{
			func_320(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_150(PLAYER::PLAYER_PED_ID(), iLocal_199, fVar0))
		{
			iVar1++;
		}
		if (func_36(uLocal_200))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), uLocal_200, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_198))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), Local_198, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(2);
			return;
		}
		iVar1 = 0;
		if (func_319(iLocal_199))
		{
			iVar1++;
		}
		if (func_36(uLocal_200))
		{
			if (func_319(uLocal_200))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_198))
		{
			if (func_319(Local_198))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(3);
			return;
		}
	}
}

int func_319(var uParam0)//Position - 0xD0B9
{
	if (func_36(uParam0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 1, 40000))
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

void func_320(int iParam0)//Position - 0xD114
{
	HUD::CLEAR_PRINTS();
	func_59();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_178 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_178 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_178 = "PRA_FSTUCK";
			break;
	}
	iLocal_67 = 5;
	iLocal_68 = 0;
}

int func_321(int iParam0)//Position - 0xD16C
{
	if (func_10(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_322()//Position - 0xD18C
{
	if (!func_95(36))
	{
		func_323(21, 0, 0);
	}
}

void func_323(int iParam0, bool bParam1, int iParam2)//Position - 0xD1A6
{
	if (bParam1)
	{
		if (!func_335(iParam0, 0, 0))
		{
			if (iParam2 && Global_15F9E.f_11[iParam0])
			{
				if (func_334(iParam0) == 3 && !func_333(iParam0))
				{
					func_332(iParam0);
					func_331(iParam0, 0, 0);
					func_325(iParam0, 1, 0);
					func_324(iParam0);
				}
				else
				{
					func_331(iParam0, 1, 0);
					func_324(iParam0);
				}
			}
			else
			{
				func_331(iParam0, 0, 0);
				func_325(iParam0, 1, 0);
				func_324(iParam0);
			}
		}
		else
		{
			func_325(iParam0, 1, 0);
			func_324(iParam0);
		}
	}
	else if (func_335(iParam0, 0, 0))
	{
		func_325(iParam0, 0, 0);
		func_325(iParam0, 1, 0);
		func_324(iParam0);
	}
}

void func_324(int iParam0)//Position - 0xD265
{
	Global_15F9E.f_99[iParam0] = 1;
	Global_15F9E.f_98 = 1;
}

void func_325(int iParam0, int iParam1, bool bParam2)//Position - 0xD27F
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_326(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xD2E7
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_327(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_327(var uParam0)//Position - 0xD312
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0xD346
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_327(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xD378
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

int func_330()//Position - 0xD621
{
	return Global_5F7C;
}

void func_331(int iParam0, int iParam1, bool bParam2)//Position - 0xD62C
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_332(int iParam0)//Position - 0xD694
{
	if (Global_15F9E.f_11[iParam0])
	{
		func_331(iParam0, 10, 1);
		func_331(iParam0, 19, 1);
	}
}

bool func_333(int iParam0)//Position - 0xD6BB
{
	return func_335(iParam0, 5, 1);
}

int func_334(int iParam0)//Position - 0xD6CB
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

int func_335(int iParam0, int iParam1, bool bParam2)//Position - 0xD924
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			return MISC::IS_BIT_SET(func_328(func_329(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_336(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xD984
{
	if (func_337())
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
		func_264(1);
	}
}

int func_337()//Position - 0xDA19
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

void func_338()//Position - 0xDA3D
{
	func_353();
	func_351();
	func_344();
	func_341();
	func_339();
}

void func_339()//Position - 0xDA59
{
	iLocal_373[0] = 0;
	iLocal_373[1] = 0;
	iLocal_373[2] = 0;
	Local_72[0 /*8*/] = { func_340("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_72[1 /*8*/] = { func_340("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_72[2 /*8*/] = { func_340("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_340(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xDAE2
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_341()//Position - 0xDB20
{
	Local_45[0 /*25*/] = { func_343(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_342(&(Local_45[0 /*25*/]), Local_184, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_45[1 /*25*/] = { func_343(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_342(&(Local_45[1 /*25*/]), Local_184, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_45[2 /*25*/] = { func_343(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_342(&(Local_45[2 /*25*/]), Local_184, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_45[3 /*25*/] = { func_343(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_342(&(Local_45[3 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_45[4 /*25*/] = { func_343(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_342(&(Local_45[4 /*25*/]), Local_184, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_45[5 /*25*/] = { func_343(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_342(&(Local_45[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_45[6 /*25*/] = { func_343(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_342(&(Local_45[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_45[7 /*25*/] = { func_343(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_342(&(Local_45[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_45[8 /*25*/] = { func_343(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_342(&(Local_45[8 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_45[9 /*25*/] = { func_343(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_342(&(Local_45[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_45[10 /*25*/] = { func_343(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_342(&(Local_45[10 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_45[11 /*25*/] = { func_343(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_45[11 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_45[12 /*25*/] = { func_343(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_342(&(Local_45[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_45[13 /*25*/] = { func_343(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_342(&(Local_45[13 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_45[14 /*25*/] = { func_343(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_342(&(Local_45[14 /*25*/]), Local_184, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_45[15 /*25*/] = { func_343(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_45[15 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_45[16 /*25*/] = { func_343(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_342(&(Local_45[16 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_45[17 /*25*/] = { func_343(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_342(&(Local_45[17 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_45[18 /*25*/] = { func_343(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_45[18 /*25*/]), Local_184, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_186 = 19;
}

void func_342(var uParam0, struct<3> Param1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, struct<3> Param7, struct<3> Param8)//Position - 0xE305
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_A = iParam6;
	uParam0->f_B = { Param7 };
	uParam0->f_E = { Param8 };
}

struct<25> func_343(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xE349
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_A = 3;
	Var0 = { Param0 };
	Var0.f_13 = { Param1 };
	Var0.f_16 = fParam2;
	Var0.f_17 = iParam3;
	return Var0;
}

void func_344()//Position - 0xE383
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_345(&Var0, 6);
}

void func_345(var uParam0, int iParam1)//Position - 0xE41B
{
	int iVar0;
	
	func_350(&uLocal_73);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_349(&uLocal_73, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_348(&uLocal_73);
	func_346(&uLocal_125, &uLocal_73, 50f);
}

void func_346(var uParam0, var uParam1, float fParam2)//Position - 0xE464
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (uParam1->f_2E < 3)
	{
	}
	iVar0 = (uParam1->f_2E - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_2E = uParam1->f_2E;
	while (iVar1 < uParam1->f_2E)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(SYSTEM::SQRT(((Var3.x * Var3.x) + (Var3.f_1 * Var3.f_1)))) };
		Var4 = { Var4 / FtoV(SYSTEM::SQRT(((Var4.x * Var4.x) + (Var4.f_1 * Var4.f_1)))) };
		Var5 = { Var3 - Var4 };
		Var5 = { Var5 / FtoV(SYSTEM::SQRT(((Var5.x * Var5.x) + (Var5.f_1 * Var5.f_1)))) };
		if (func_347(uParam1, *(uParam1[iVar1 /*3*/]) + Var5))
		{
			Var5 = { -Var5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_2E);
	}
}

bool func_347(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0xE571
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_2E - 1);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_348(var uParam0)//Position - 0xE62D
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0;
}

void func_349(var uParam0, struct<3> Param1)//Position - 0xE6CD
{
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E >= 15)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { Param1 };
	uParam0->f_2E++;
}

void func_350(var uParam0)//Position - 0xE6FE
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 1;
}

void func_351()//Position - 0xE725
{
	Local_196 = { func_352(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_197 = { func_352(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_352(struct<3> Param0, float fParam1, int iParam2)//Position - 0xE773
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_353()//Position - 0xE796
{
	Local_198 = { func_354(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_354(struct<3> Param0, float fParam1, int iParam2)//Position - 0xE7C0
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_355()//Position - 0xE7E2
{
	func_233(1);
	func_366(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 0);
	func_61();
	func_365();
	func_364();
	func_356(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_356(bool bParam0)//Position - 0xE827
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_363();
	func_362();
	func_361();
	func_360();
	func_215();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_358();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_357();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	func_138(&uLocal_55, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_183))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_183, 0);
	}
}

void func_357()//Position - 0xE90B
{
	func_3();
	func_6(&Local_198);
	func_6(&uLocal_200);
	func_6(&iLocal_199);
	func_5(&Local_196, 1, 0, 1);
	func_5(&Local_197, 1, 0, 1);
	func_6(&uLocal_201);
}

void func_358()//Position - 0xE947
{
	Global_38DE = 0;
	func_359();
}

void func_359()//Position - 0xE957
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3D4C = 6;
	}
}

void func_360()//Position - 0xE978
{
}

void func_361()//Position - 0xE980
{
	if (iLocal_193)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}

void func_362()//Position - 0xE997
{
}

void func_363()//Position - 0xE99F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_198.f_5);
}

void func_364()//Position - 0xE9B0
{
	func_323(21, 1, 0);
}

void func_365()//Position - 0xE9C0
{
	Global_150CE = 0;
}

void func_366(int iParam0)//Position - 0xE9CD
{
	Global_15679 = iParam0;
}

void func_367()//Position - 0xE9DB
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_32(0))
	{
		if (!func_368())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_368()//Position - 0xEA4C
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

