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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
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
	var uLocal_229 = 0;
	struct<411> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = -1;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
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
	int iLocal_257 = 0;
	struct<3> Local_258[1];
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	struct<3> Local_261 = { 0, 0, 0 } ;
	struct<3> Local_262 = { 0, 0, 0 } ;
	struct<3> Local_263 = { 0, 0, 0 } ;
	struct<3> Local_264 = { 0, 0, 0 } ;
	struct<3> Local_265 = { 0, 0, 0 } ;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	char* sLocal_280 = NULL;
	char* sLocal_281 = NULL;
	bool bLocal_282 = 0;
	struct<28> Local_283 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 5;
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
	var uLocal_329 = 1097859072;
	var uLocal_330 = 1500;
	var uLocal_331 = 45;
	var uLocal_332 = 1103626240;
	var uLocal_333 = 5;
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
	iLocal_259 = joaat("a_m_y_soucent_04");
	Local_261 = { -1230.55f, -896.7814f, 11.11059f };
	Local_262 = { 58.8213f, 293.848f, 109.6124f };
	Local_263 = { 62.7742f, 307.4984f, 109.981f };
	Local_264 = { 0f, 0f, 0f };
	Local_265 = { 0f, 0f, 0f };
	iLocal_266 = 1;
	fLocal_270 = 0f;
	fLocal_271 = 12f;
	sLocal_281 = "random@drunk_driver_1";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_413(2);
		func_412();
	}
	MISC::SET_MISSION_FLAG(1);
	func_399();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x137
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x158
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

int func_3(int iParam0)//Position - 0x1A3
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

int func_4(int iParam0)//Position - 0x1E0
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

bool func_5(int iParam0)//Position - 0x20A
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x216
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x29E
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

void func_8()//Position - 0x339
{
	if (func_398(&Local_230))
	{
		func_397(&Local_230);
		if (Local_230.f_19A > 0)
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (func_396(&Local_230, 0))
			{
				func_394();
			}
		}
		else if (func_393(&Local_230, 31) > 5f)
		{
			func_413(2);
			func_412();
		}
	}
	else
	{
		func_392(&Local_230);
		func_358(&Local_230, &uLocal_327);
		func_357(&Local_230, &uLocal_268, 0);
		func_356(&Local_230);
		if (Local_230.f_19A > 2 && iLocal_257 == 0)
		{
			if (!func_355(&Local_230))
			{
				func_322();
			}
			else
			{
				func_316(&Local_230, "Taxi Not Driveable", func_321(&Local_230));
			}
		}
		if (Local_230.f_19A == 9 && iLocal_257 == 0)
		{
			func_292(&Local_230, 0, 0);
			func_290();
			if (bLocal_276)
			{
				if (func_289())
				{
					func_316(&Local_230, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_230.f_19A)
		{
			case 0:
				func_288(&(Local_258[0 /*3*/]), "TAXI_SC_BN_01", 100);
				func_287(&Local_230, &Local_258);
				func_284();
				func_283(&Local_230, 16, 4f, 0);
				func_281(&Local_230, Local_262, Local_263, "TaxiOtis", iLocal_259, 135.3f, 40f);
				func_279(&Local_230);
				func_278(&Local_230, 1);
				break;
			
			case 1:
				if (func_276())
				{
					func_275();
					func_255();
					func_254(&Local_230);
					Local_230.f_E = { Local_262 };
					func_278(&Local_230, 3);
				}
				break;
			
			case 3:
				if (func_249(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 1, 0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_230.f_3, 1024, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_230.f_3, 131072, 1);
					}
					func_248(&Local_230, 1, 0);
					func_278(&Local_230, 5);
				}
				break;
			
			case 5:
				if (func_218(&Local_230, 0, 1109393408))
				{
					func_278(&Local_230, 15);
				}
				break;
			
			case 15:
				if (func_217(&Local_230))
				{
					Local_230.f_11 = { Local_261 };
					func_214(&Local_230, 9, 1, 0, 0);
					func_213(&Local_230);
					Local_230.f_2E = ENTITY::GET_ENTITY_HEALTH(Local_230.f_4);
					func_212();
					switch (func_211(&Local_230))
					{
						case 2:
							sLocal_280 = "vomit_van";
							break;
						
						case 0:
							sLocal_280 = "vomit_low";
							break;
						
						case 1:
							sLocal_280 = "vomit_outside";
							break;
					}
					func_278(&Local_230, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, 0))
					{
						func_209(&Local_230);
						func_278(&Local_230, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_279)
				{
					if ((func_208(&Local_230, 0) || func_208(&Local_230, 2)) || func_207(&Local_230, 2))
					{
						iLocal_279 = 1;
					}
				}
				if (func_204(&Local_230, 1086324736) && iLocal_257 == 1)
				{
					if (iLocal_260 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_260, 0);
						iLocal_260 = 0;
					}
					TASK::CLEAR_PED_TASKS(Local_230.f_3);
					bLocal_276 = true;
				}
				switch (iLocal_257)
				{
					case 0:
						if (func_186(&Local_230, 1086324736, 1097859072))
						{
							func_184(&uLocal_286);
							func_183(&Local_283, 3, 0);
							HUD::REMOVE_BLIP(&(Local_230.f_9));
							func_181(&Local_230);
							func_172(&(Local_230.f_F4), Local_230.f_90, "txm1_arrive", 9, 0, 0, 0);
							func_278(&Local_230, 22);
						}
						if ((((func_171(&Local_230) >= 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_230.f_4)) && !(ENTITY::GET_ENTITY_ROLL(Local_230.f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(Local_230.f_4) >= 145f)) && !bLocal_276)
						{
							if (func_170())
							{
								func_168();
								func_214(&Local_230, 61, 1, 0, 0);
							}
							Local_230.f_4C = 0;
							iLocal_257 = 1;
						}
						if (CAM::DOES_CAM_EXIST(Local_230))
						{
							CAM::DESTROY_CAM(Local_230, 0);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						}
						break;
					
					case 1:
						if (!bLocal_276)
						{
							func_165(&(Local_230.f_3));
						}
						if (func_162())
						{
							if (bLocal_277)
							{
								func_214(&Local_230, 62, 1, 0, 0);
								iLocal_257 = 0;
							}
							else
							{
								func_214(&Local_230, 63, 1, 0, 0);
								iLocal_257 = 0;
							}
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
						}
						if (!func_157(&Local_230))
						{
							func_145(&Local_230, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_230.f_4, Local_230.f_11, 2f, 2f, 20f, false, 1, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
						}
						break;
				}
				break;
			
			case 22:
				if (!func_170())
				{
					if (bLocal_276)
					{
						func_144(0);
					}
					else
					{
						func_144(1);
						func_143(&Local_230, 0);
					}
					func_278(&Local_230, 27);
				}
				break;
			
			case 27:
				if (func_134(&Local_230, 1))
				{
					func_133(&Local_230);
					func_214(&Local_230, 104, 1, 1, 0);
					func_278(&Local_230, 29);
				}
				break;
			
			case 28:
				if (func_101(&uLocal_229, &Local_230, &(Local_230.f_3), &uLocal_250, 1))
				{
					func_214(&Local_230, 104, 1, 1, 0);
					func_278(&Local_230, 29);
				}
				break;
			
			case 29:
				if (func_74(&Local_230, &uLocal_334))
				{
					func_10(1, &Local_230, 1);
					func_278(&Local_230, 30);
				}
				if (!PED::IS_PED_INJURED(Local_230.f_3))
				{
					if (func_9(Local_230.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_230.f_3, 60, 1);
					}
				}
				break;
			
			case 30:
				if (!PED::IS_PED_INJURED(Local_230.f_3))
				{
					if (func_9(Local_230.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_230.f_3, 60, 1);
					}
					if (func_9(Local_230.f_3, Local_230.f_1D, 1) < 1f)
					{
						func_412();
					}
				}
				else
				{
					func_412();
				}
				break;
			}
	}
}

float func_9(int iParam0, struct<3> Param1, int iParam2)//Position - 0x989
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam2);
}

void func_10(bool bParam0, var uParam1, bool bParam2)//Position - 0x9B2
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_49(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)//Position - 0x9EE
{
	func_397(uParam0);
	if (func_170())
	{
		func_47();
	}
	func_45();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	func_42(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 0);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_39(uParam0->f_E, 1);
	func_37(uParam0->f_E, 1, 1114636288);
	func_36(&(uParam0->f_F4), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	if (func_33())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_24(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (func_23(Global_17C49.f_43C7, 4))
	{
		func_21(&(Global_17C49.f_43C7), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), 0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_16(uParam0->f_19B);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_12(&uLocal_81) * 1000f)), 12, 0);
}

float func_12(var uParam0)//Position - 0xB40
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)//Position - 0xB7C
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

bool func_14(var uParam0)//Position - 0xBC4
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_15(var uParam0)//Position - 0xBD4
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_16(int iParam0)//Position - 0xBE4
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)//Position - 0xC0B
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

void func_18(var uParam0)//Position - 0xCD4
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_33[0]);
}

void func_19(var uParam0)//Position - 0xCE8
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

int func_20()//Position - 0xDE0
{
	return joaat("taxi");
}

void func_21(var uParam0, int iParam1)//Position - 0xDED
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)//Position - 0xDFD
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(var uParam0, int iParam1)//Position - 0xE12
{
	return (uParam0 && iParam1) != 0;
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE21
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_32(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_31())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_30(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_32(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_30(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_25(int iParam0)//Position - 0xEF2
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
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

bool func_26()//Position - 0xF33
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_27(int iParam0, int iParam1)//Position - 0xF44
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)//Position - 0xF8F
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

int func_29()//Position - 0xFD0
{
	return Global_1407E1;
}

int func_30(int iParam0, var uParam1, var uParam2)//Position - 0xFDC
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

int func_31()//Position - 0x100D
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)//Position - 0x1034
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

int func_33()//Position - 0x1057
{
	if (!func_35() && !func_34())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x1082
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x109C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0x10B6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x10D3
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_38(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_38(Param0, 1f, fParam2, fParam2, fParam2) };
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

Vector3 func_38(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1148
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

void func_39(struct<3> Param0, int iParam1)//Position - 0x1195
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_40(Param0, func_41()))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, iParam1, 1);
	}
}

bool func_40(struct<3> Param0, struct<3> Param1)//Position - 0x11F4
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_41()//Position - 0x121D
{
	struct<3> Var0;
	
	return Var0;
}

void func_42(int iParam0)//Position - 0x1229
{
	if (Global_38D7)
	{
		func_43(0, 0);
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
	if (!func_31())
	{
		Global_3839.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)//Position - 0x1299
{
	if (bParam0)
	{
		if (func_44(0))
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

int func_44(int iParam0)//Position - 0x130D
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

void func_45()//Position - 0x1367
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
					func_46(Global_15504[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)//Position - 0x13EE
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

void func_47()//Position - 0x142C
{
	Global_38DE = 0;
	func_48();
}

void func_48()//Position - 0x143C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_49(int iParam0, int iParam1)//Position - 0x145D
{
	switch (iParam0)
	{
		case 0:
			Global_17C49.f_43C7.f_16[0]++;
			func_50("Fares Completed ++ = ", Global_17C49.f_43C7.f_16[0]);
			break;
		
		case 1:
			Global_17C49.f_43C7.f_16[1]++;
			func_50("Fares Failed ++ = ", Global_17C49.f_43C7.f_16[1]);
			break;
		
		case 2:
			Global_17C49.f_43C7.f_16[2]++;
			func_50("Fares Accepted ++ ", Global_17C49.f_43C7.f_16[2]);
			break;
		
		case 3:
			Global_17C49.f_43C7.f_16[3]++;
			func_50("Fares Expired ++ ", Global_17C49.f_43C7.f_16[3]);
			break;
		
		case 13:
			Global_17C49.f_43C7.f_16[13]++;
			func_50("Passengers run ++ = ", Global_17C49.f_43C7.f_16[13]);
			break;
		
		case 14:
			Global_17C49.f_43C7.f_16[14]++;
			func_50("Passenger Forced to Pay ++ = ", Global_17C49.f_43C7.f_16[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_17C49.f_43C7.f_16[4])
				{
					Global_17C49.f_43C7.f_16[4] = iParam1;
					func_50("This distance ", iParam1);
					func_50(" is longer than current best", Global_17C49.f_43C7.f_16[4]);
				}
				else
				{
					func_50("Longest Distance Not Beat ", Global_17C49.f_43C7.f_16[4]);
				}
			}
			break;
		
		case 5:
			Global_17C49.f_43C7.f_16[5] = (Global_17C49.f_43C7.f_16[5] + iParam1);
			func_50("Total Distance w/ Passenger = ", Global_17C49.f_43C7.f_16[5]);
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
			func_50("Wanted Levels ++ = ", Global_17C49.f_43C7.f_16[6]);
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
			func_50("Wanted Levels Lost = ", Global_17C49.f_43C7.f_16[7]);
			break;
		
		case 8:
			Global_17C49.f_43C7.f_16[8]++;
			func_50("Taxis wrecked ++ = ", Global_17C49.f_43C7.f_16[8]);
			break;
		
		case 9:
			Global_17C49.f_43C7.f_16[9]++;
			func_50("Horn Honked ++ = ", Global_17C49.f_43C7.f_16[9]);
			break;
		
		case 10:
			Global_17C49.f_43C7.f_16[10] = (Global_17C49.f_43C7.f_16[10] + iParam1);
			func_50("Total Money Earned = ", Global_17C49.f_43C7.f_16[10]);
			break;
		
		case 11:
			Global_17C49.f_43C7.f_16[11] = (Global_17C49.f_43C7.f_16[11] + iParam1);
			func_50("Total Tips Earned = ", Global_17C49.f_43C7.f_16[11]);
			break;
		
		case 12:
			if (iParam1 > Global_17C49.f_43C7.f_16[12])
			{
				Global_17C49.f_43C7.f_16[12] = iParam1;
				func_50("New Highest Tip = ", Global_17C49.f_43C7.f_16[12]);
			}
			else
			{
				func_50("Highest Tip Not Reached = ", Global_17C49.f_43C7.f_16[12]);
			}
			break;
	}
}

void func_50(char* sParam0, int iParam1)//Position - 0x184E
{
}

void func_51(var uParam0)//Position - 0x1856
{
	func_49(0, 0);
	if (uParam0->f_19B != 9)
	{
		func_413(1);
		func_63(15, 1);
	}
	func_61(&(Global_17C49.f_43C7), 1024);
	if (!func_23(Global_17C49.f_43C7, 64))
	{
		func_52(func_59(func_60(uParam0)), 0, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x18AA
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
		func_58((891 + iParam0), 1, -1, 1);
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
		func_53();
	}
}

void func_53()//Position - 0x1992
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
		func_57(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_56() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()//Position - 0x1E53
{
	if (func_55(0))
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

bool func_55(bool bParam0)//Position - 0x1E9E
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_56()//Position - 0x1EC9
{
	return Global_5F7C;
}

int func_57(int iParam0, int iParam1)//Position - 0x1ED4
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

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F25
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

int func_59(int iParam0)//Position - 0x2182
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

int func_60(var uParam0)//Position - 0x2218
{
	return uParam0->f_19B;
}

void func_61(var uParam0, int iParam1)//Position - 0x2225
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, int iParam1)//Position - 0x2235
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_63(int iParam0, int iParam1)//Position - 0x2246
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)//Position - 0x2261
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

int func_65(var uParam0, int iParam1)//Position - 0x22E5
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

int func_66(var uParam0, int iParam1)//Position - 0x236B
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

bool func_67(var uParam0, int iParam1)//Position - 0x23BB
{
	return (*uParam0)[iParam1] == 61;
}

void func_68(var uParam0)//Position - 0x23CC
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

void func_69(var uParam0, float fParam1)//Position - 0x2403
{
	uParam0->f_1 = (func_13(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_70(var uParam0, int iParam1)//Position - 0x2431
{
	(*uParam0)[iParam1] = 61;
}

bool func_71(var uParam0, int iParam1)//Position - 0x2441
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)//Position - 0x2453
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

bool func_73(var uParam0)//Position - 0x2480
{
	return uParam0->f_44 == 1;
}

int func_74(var uParam0, var uParam1)//Position - 0x248E
{
	switch (iLocal_159)
	{
		case 0:
			if (!func_170() && func_393(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				func_100(uParam0);
				func_21(&(Global_17C49.f_43C7), 4096);
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
				func_283(uParam0, 0, 0, 0);
				func_97(0);
				iLocal_159 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(var uParam0)//Position - 0x2560
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0)
	{
		func_76(func_89(), 21, iVar0, 0, 0);
		func_49(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x259E
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

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2685
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

void func_78(bool bParam0)//Position - 0x2C84
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

void func_79(int iParam0)//Position - 0x2F06
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

void func_80(int iParam0)//Position - 0x2F60
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

char* func_81(int iParam0)//Position - 0x3023
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

int func_82()//Position - 0x309E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0)//Position - 0x30AB
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_84(int iParam0)//Position - 0x30CB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_82() /*8053*/].f_167C.f_A, iParam0);
}

int func_85(bool bParam0)//Position - 0x3107
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
		func_57(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_86(int iParam0, int iParam1)//Position - 0x31BE
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)//Position - 0x31E1
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

void func_88()//Position - 0x323E
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

int func_89()//Position - 0x32B3
{
	func_90();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_90()//Position - 0x32CC
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

bool func_91(int iParam0)//Position - 0x33C9
{
	return Global_8861 == iParam0;
}

int func_92(var uParam0, int iParam1)//Position - 0x33D7
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_96(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_96(&(uParam0->f_5));
				func_95(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
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
		if (!func_15(&(uParam0->f_5)))
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

void func_93(var uParam0)//Position - 0x34DA
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_94(var uParam0)//Position - 0x34F0
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_95(var uParam0, int iParam1)//Position - 0x352F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_96(var uParam0)//Position - 0x3555
{
	func_69(uParam0, 0f);
}

void func_97(int iParam0)//Position - 0x3564
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_98(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x3578
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

char* func_99(var uParam0)//Position - 0x35E3
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

void func_100(var uParam0)//Position - 0x367D
{
	int iVar0;
	
	Local_160.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_160.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_49(11, uParam0->f_38);
	func_49(12, uParam0->f_38);
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

int func_101(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x372C
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
			{
				func_131(uParam1, 320, bParam4);
				PED::SET_PED_MONEY(*uParam2, MISC::GET_RANDOM_INT_IN_RANGE(100, 300));
				func_129(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_49(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam2, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
			{
				func_108(&uLocal_44, *uParam2, 0, 0, 1, 1, 1);
				if (!func_107(uParam1->f_2, *uParam2))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (WEAPON::IS_PED_ARMED(uParam1->f_2, 6))
									{
										if (CAM::IS_AIM_CAM_ACTIVE())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (PED::IS_PED_SHOOTING(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_105(&uLocal_44, 0, 0);
					uParam1->f_6D = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_105(&uLocal_44, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_105(&uLocal_44, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, 1);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, uParam1->f_2, 1000f, -1, 0, 0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam2, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::SET_PED_KEEP_TASK(*uParam2, 1);
				func_214(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			else
			{
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_8));
			}
			func_102(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam3->f_6))
			{
				if (HUD::DOES_BLIP_EXIST(uParam3->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam3->f_5));
				}
				func_181(uParam1);
				func_49(14, 0);
				uParam1->f_38 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam2);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
			}
			else
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_102(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x3A5C
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		uParam1->f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		PED::SET_PED_MONEY(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1067030938, 1069547520) };
	}
	MISC::SET_BIT(&(uParam1->f_1), 3);
	MISC::SET_BIT(&(uParam1->f_1), 4);
	Var0 = { OBJECT::GET_SAFE_PICKUP_COORDS(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_5))
		{
			uParam1->f_5 = func_103(uParam1->f_6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_103(var uParam0)//Position - 0x3B38
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

float func_104(bool bParam0, float fParam1, float fParam2)//Position - 0x3B70
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_105(var uParam0, int iParam1, int iParam2)//Position - 0x3B87
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
		if (func_106(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_106(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_106(char* sParam0)//Position - 0x3C64
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_107(var uParam0, int iParam1)//Position - 0x3C77
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3CC0
{
	func_109(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x3CDA
{
	func_110(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_110(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3CF7
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_105(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_111(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_111(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3D2F
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
	if (func_106(iVar0))
	{
		func_128();
	}
	if (func_127(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_119(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_116(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_106(iVar0))
							{
								func_115(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_114(1);
								}
							}
						}
					}
				}
			}
			else if (func_116(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_106(iVar0))
						{
							func_115(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_114(1);
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
				if (func_106(sParam3))
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
						func_105(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_105(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_105(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_105(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_105(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_105(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_113(uParam0))
				{
					func_112(uParam0);
				}
			}
		}
	}
	else
	{
		func_105(uParam0, iVar0, 0);
	}
}

void func_112(var uParam0)//Position - 0x409D
{
	if (func_127(PLAYER::PLAYER_PED_ID()))
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

int func_113(var uParam0)//Position - 0x4106
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

int func_114(bool bParam0)//Position - 0x4131
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

void func_115(char* sParam0, int iParam1)//Position - 0x41DB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_116(char* sParam0)//Position - 0x41F2
{
	if (!func_117(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_106(sParam0)) || func_106("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_114(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_114(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_114(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)//Position - 0x428B
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
	if (func_44(0))
	{
		return 0;
	}
	if (func_118())
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

bool func_118()//Position - 0x4407
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_119(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x441C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_105(uParam0, 0, 0);
	}
	if (func_40(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_120())
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

bool func_120()//Position - 0x451F
{
	return func_121(PLAYER::PLAYER_ID());
}

int func_121(int iParam0)//Position - 0x452F
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x454E
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_113(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_117(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_128();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x48BA
{
	if (!func_117(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)//Position - 0x490C
{
	if (!func_117(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4955
{
	if (!func_117(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x49B4
{
	if (!func_117(bParam0, bParam1, bParam2))
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

int func_127(int iParam0)//Position - 0x4A0A
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

void func_128()//Position - 0x4A65
{
	MISC::SET_BIT(&Global_8D8, 4);
}

void func_129(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x4A75
{
	if (bParam3)
	{
		func_397(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = func_130(*uParam1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, sParam2);
	}
}

int func_130(int iParam0, bool bParam1, bool bParam2)//Position - 0x4AB5
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_131(var uParam0, int iParam1, bool bParam2)//Position - 0x4B59
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_9(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_132(uParam0->f_1D)) && !bParam2)
		{
			func_133(uParam0);
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

int func_132(struct<3> Param0)//Position - 0x4C4C
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_133(var uParam0)//Position - 0x4C76
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_40(func_41(), uParam0->f_1D))
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

int func_134(var uParam0, bool bParam1)//Position - 0x4E59
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_142(uParam0) && func_139(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_138(uParam0, 2097152))
				{
					func_135(uParam0);
				}
			}
			else
			{
				func_135(uParam0);
			}
		}
		else if (!func_142(uParam0))
		{
			if (bParam1)
			{
				if (func_138(uParam0, 2097152))
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

void func_135(var uParam0)//Position - 0x4EF5
{
	struct<3> Var0;
	
	if (func_132(uParam0->f_1D))
	{
		Var0 = { uParam0->f_11 };
	}
	else
	{
		Var0 = { uParam0->f_1D };
	}
	func_136(uParam0, Var0);
}

void func_136(var uParam0, struct<3> Param1)//Position - 0x4F2B
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_137(uParam0->f_3, uParam0->f_4) == 0)
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

int func_137(int iParam0, int iParam1)//Position - 0x504B
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

bool func_138(var uParam0, int iParam1)//Position - 0x50B7
{
	if (iParam1 != 1073741824)
	{
		return (func_23(uParam0->f_51, iParam1) && !func_170());
	}
	return func_170();
}

int func_139(var uParam0, bool bParam1, int iParam2)//Position - 0x50E4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_141();
				return 1;
			}
			else if (func_140(uParam0->f_4, iParam2, 1, 1056964608, 0, 1))
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

int func_140(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x5164
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

void func_141()//Position - 0x52E6
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	}
}

int func_142(var uParam0)//Position - 0x5301
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

void func_143(var uParam0, int iParam1)//Position - 0x5336
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

void func_144(bool bParam0)//Position - 0x5364
{
	if (Local_230.f_38 < Local_230.f_3A)
	{
		func_214(&Local_230, 103, 1, 0, 0);
	}
	else if (Local_230.f_38 >= Local_230.f_3B)
	{
		if (!bParam0)
		{
			func_214(&Local_230, 101, 1, 0, 0);
		}
		else
		{
			func_61(&(Local_230.f_52), 4194304);
			func_214(&Local_230, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		func_214(&Local_230, 102, 1, 0, 0);
	}
	else
	{
		func_61(&(Local_230.f_52), 2097152);
		func_214(&Local_230, 22, 1, 0, 0);
	}
}

void func_145(var uParam0, bool bParam1)//Position - 0x53F4
{
	func_156(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_155(uParam0, 14))
			{
				if (func_170())
				{
					func_154(1);
				}
				func_153(uParam0, 11, 1);
				func_148(uParam0, 1);
				func_283(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_142(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_393(uParam0, 15) > 5f)
						{
							func_283(uParam0, 15, 0f, 1);
						}
					}
					if (func_393(uParam0, 14) > 20f)
					{
						func_316(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_393(uParam0, 14) > 20f)
				{
					if (func_146(uParam0->f_4, 1) > 40f)
					{
						func_316(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_316(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_146(int iParam0, int iParam1)//Position - 0x54FF
{
	return func_147(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_147(int iParam0, int iParam1, int iParam2)//Position - 0x5517
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

void func_148(var uParam0, bool bParam1)//Position - 0x5573
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
				func_152(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
				HUD::CLEAR_PRINTS();
				if (func_142(uParam0))
				{
					func_214(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_152(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_149(uParam0, 0, 0);
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

void func_149(var uParam0, bool bParam1, bool bParam2)//Position - 0x5691
{
	if (bParam1)
	{
		func_397(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_A))
	{
		uParam0->f_A = func_130(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_A, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_A, 1);
		func_150(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_214(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_150(var uParam0)//Position - 0x56EC
{
	func_283(uParam0, 14, 0, 0);
	func_151();
}

void func_151()//Position - 0x5702
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_152(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x572B
{
	if (!func_23(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_214(uParam0, iParam3, 1, 0, 0);
		func_61(uParam1, iParam2);
	}
}

void func_153(var uParam0, int iParam1, bool bParam2)//Position - 0x5757
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_154(int iParam0)//Position - 0x576B
{
	Global_413F = iParam0;
}

bool func_155(var uParam0, int iParam1)//Position - 0x5778
{
	return func_15(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_156(var uParam0, int iParam1)//Position - 0x578C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_316(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_157(var uParam0)//Position - 0x57F1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_155(uParam0, 14))
			{
				func_158(uParam0);
			}
			func_148(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_158(var uParam0)//Position - 0x5832
{
	func_161(uParam0, 14, 0);
	func_161(uParam0, 15, 0);
	func_160();
	if (func_159())
	{
		func_154(0);
	}
}

int func_159()//Position - 0x585C
{
	if (Global_413F == 1)
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x5873
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_161(var uParam0, int iParam1, bool bParam2)//Position - 0x589C
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

int func_162()//Position - 0x58E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, 0))
	{
		if (iLocal_273 && ENTITY::GET_ENTITY_SPEED(Local_230.f_4) < 5f)
		{
			if (!func_155(&Local_230, 21))
			{
				func_283(&Local_230, 21, 0, 0);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(Local_230.f_4) >= 5f && func_155(&Local_230, 21))
		{
			func_161(&Local_230, 21, 0);
		}
	}
	if (bLocal_276)
	{
		func_163(&Local_230, 21);
		fLocal_272 = func_393(&Local_230, 21);
		if (fLocal_272 >= fLocal_271)
		{
			bLocal_277 = true;
			return 1;
		}
		else
		{
			bLocal_277 = false;
			return 1;
		}
	}
	return 0;
}

void func_163(var uParam0, int iParam1)//Position - 0x5987
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_14(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_164(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_14(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_164(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_164(var uParam0)//Position - 0x59F3
{
	if (func_15(uParam0))
	{
		if (!func_14(uParam0))
		{
			uParam0->f_2 = (func_13(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

int func_165(var uParam0)//Position - 0x5A2D
{
	float fVar0;
	struct<3> Var1;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		switch (iLocal_267)
		{
			case 0:
				if (!func_170())
				{
					if (func_172(&(Local_230.f_F4), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam0, sLocal_281, sLocal_280, 8f, -4f, -1, 0, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							switch (func_167(*uParam0))
							{
								case 0:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
									break;
								
								case 2:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3);
									break;
								
								default:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3);
									break;
								}
						}
						if (func_155(&Local_230, 10))
						{
							func_161(&Local_230, 10, 0);
						}
						iLocal_267++;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_281, sLocal_280, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_281, sLocal_280);
					if (bLocal_282)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_273)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_264, Local_265, 31086, 1065353216, 0, 0, 0);
							iLocal_273 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_274)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_264, Local_265, 31086, 1065353216, 0, 0, 0);
							iLocal_274 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_275)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_264, Local_265, 31086, 1065353216, 0, 0, 0);
							iLocal_275 = 1;
							if (!iLocal_278)
							{
								StringCopy(&Var1, "txm1_pukeR1", 24);
								func_166(&Var1);
								func_172(&(Local_230.f_F4), "txm1aud", &Var1, 8, 0, 0, 0);
								iLocal_278 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_281, sLocal_280) > 0.9f)
					{
						iLocal_267++;
					}
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_281, sLocal_280, 3))
				{
				}
				TASK::TASK_PLAY_ANIM(*uParam0, sLocal_281, "drunk_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_273 = 0;
				iLocal_267++;
				break;
			
			case 3:
				bLocal_276 = true;
				if (!func_155(&Local_230, 10))
				{
					func_283(&Local_230, 10, 0, 0);
				}
				return 1;
				break;
			}
	}
	return 0;
}

void func_166(char* sParam0)//Position - 0x5CD8
{
	StringConCat(sParam0, "F", 24);
}

int func_167(int iParam0)//Position - 0x5CE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_168()//Position - 0x5D65
{
	Global_38DE = 0;
	func_169();
}

void func_169()//Position - 0x5D75
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

int func_170()//Position - 0x5DCC
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_171(var uParam0)//Position - 0x5DEE
{
	return uParam0->f_68;
}

bool func_172(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5DFA
{
	func_180(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_173(sParam2, iParam3, 0);
}

int func_173(char* sParam0, int iParam1, bool bParam2)//Position - 0x5E48
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
					func_169();
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
		if (func_179(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_178();
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
				func_177();
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
				if (func_176())
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
			if (func_31())
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
			func_175();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_174();
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
		func_169();
	}
	return 0;
}

void func_174()//Position - 0x6114
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

void func_175()//Position - 0x6146
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

int func_176()//Position - 0x61DB
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

void func_177()//Position - 0x6274
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

void func_178()//Position - 0x6315
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

bool func_179(int iParam0, int iParam1)//Position - 0x636D
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

void func_180(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x63A8
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

void func_181(var uParam0)//Position - 0x63FE
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_182(fVar0);
	iLocal_56[4] = SYSTEM::CEIL(fVar0);
	iLocal_56[5] = SYSTEM::CEIL(fVar0);
	func_49(4, SYSTEM::CEIL(fVar0));
	func_49(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_182(float fParam0)//Position - 0x6450
{
	return (fParam0 * 0.0006213712f);
}

void func_183(var uParam0, int iParam1, bool bParam2)//Position - 0x6460
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

void func_184(var uParam0)//Position - 0x6484
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_185(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_47();
}

var func_185()//Position - 0x64C4
{
	var uVar0;
	
	return uVar0;
}

int func_186(var uParam0, int iParam1, float fParam2)//Position - 0x64CE
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_8E)
	{
		if (func_203(uParam0))
		{
			func_202(uParam0, &(uParam0->f_2B));
			func_199(uParam0);
			func_194(uParam0);
			func_190(uParam0, fParam2, 1117782016);
			func_189(uParam0);
			func_187(uParam0);
			if ((SYSTEM::ROUND(func_393(uParam0, 7)) % 5) == 0 && !iLocal_84)
			{
				iLocal_84 = 1;
			}
			if ((SYSTEM::ROUND(func_393(uParam0, 7)) % 5) == 2 && iLocal_84)
			{
				iLocal_84 = 0;
			}
			return func_204(uParam0, iParam1);
		}
	}
	return 0;
}

void func_187(var uParam0)//Position - 0x6582
{
	float fVar0;
	
	if ((func_142(uParam0) && func_23(uParam0->f_51, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_88) >= 10000)
		{
			fVar0 = func_188(uParam0->f_11, 1);
			if (fVar0 > fLocal_86)
			{
				iLocal_87++;
			}
			else
			{
				iLocal_87 = 0;
			}
			fLocal_86 = fVar0;
			iLocal_88 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_87 >= 2 && !func_170())
		{
			func_214(uParam0, 136, 1, 0, 1);
			iLocal_87 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_142(uParam0))
			{
			}
			if (!func_23(uParam0->f_51, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_87 > 0)
			{
				iLocal_87 = 0;
			}
		}
	}
}

float func_188(struct<3> Param0, int iParam1)//Position - 0x6658
{
	return func_9(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam1);
}

void func_189(var uParam0)//Position - 0x6672
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_23(uParam0->f_2C, 2))
	{
		func_61(&(uParam0->f_2C), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_23(uParam0->f_2C, 2))
	{
		func_21(&(uParam0->f_2C), 2);
		uParam0->f_2F++;
		func_49(9, 0);
	}
	if (uParam0->f_2F > 30)
	{
		func_214(uParam0, 47, 1, 0, 0);
		uParam0->f_2F = 0;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_190(var uParam0, float fParam1, float fParam2)//Position - 0x66FB
{
	if (func_142(uParam0) && func_23(uParam0->f_2C, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_193(uParam0))
		{
			if (!func_155(uParam0, 2))
			{
				func_191(uParam0, 2);
			}
			else if (func_142(uParam0))
			{
				if (func_393(uParam0, 2) > fParam1 && !func_155(uParam0, 14))
				{
					if (func_35())
					{
						func_214(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_214(uParam0, 48, 1, 0, 0);
					}
					func_283(uParam0, 2, 0, 0);
					if (func_155(uParam0, 10))
					{
						func_283(uParam0, 10, 0, 0);
					}
				}
				if (!func_155(uParam0, 3))
				{
					func_283(uParam0, 3, 0, 0);
				}
				else if (func_393(uParam0, 3) >= fParam2)
				{
					func_161(uParam0, 3, 0);
					func_316(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_155(uParam0, 2))
			{
				func_161(uParam0, 2, 0);
			}
			if (func_155(uParam0, 3))
			{
				func_161(uParam0, 3, 0);
			}
		}
	}
}

void func_191(var uParam0, int iParam1)//Position - 0x6816
{
	func_192(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_192(var uParam0)//Position - 0x682A
{
	if (!func_15(uParam0))
	{
		func_96(uParam0);
	}
}

int func_193(var uParam0)//Position - 0x6842
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

void func_194(var uParam0)//Position - 0x686B
{
	if (!func_23(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_393(uParam0, 9) > 1f)
					{
						func_198(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_19A != 22)
						{
							func_214(uParam0, 50, 1, 1, 0);
						}
						func_283(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
						}
						uParam0->f_8C = 1;
						uParam0->f_19C = 1;
					}
				}
				break;
			
			case 1:
				if (!func_170() && func_393(uParam0, 9) > 4f)
				{
					func_214(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_197("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_19A != 22)
					{
						func_214(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_19C = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_196(uParam0)))
				{
					func_198(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_49(6, 0);
				}
				if (!func_195(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_393(uParam0, 16) > 10f)
						{
							if (uParam0->f_19A != 22)
							{
								func_214(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_197("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
					uParam0->f_8C = 0;
					uParam0->f_19C = 4;
				}
				break;
			
			case 4:
				if (!func_170())
				{
					if (uParam0->f_19A != 22)
					{
						func_214(uParam0, 53, 1, 0, 1);
					}
					func_49(7, func_196(uParam0));
					func_198(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_170())
				{
					func_161(uParam0, 9, 0);
					func_283(uParam0, 11, 0, 0);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

bool func_195(var uParam0)//Position - 0x6A8F
{
	return uParam0->f_6E;
}

int func_196(var uParam0)//Position - 0x6A9B
{
	return uParam0->f_6A;
}

bool func_197(char* sParam0, int iParam1, int iParam2)//Position - 0x6AA7
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_198(var uParam0, int iParam1)//Position - 0x6AC5
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_199(var uParam0)//Position - 0x6ADC
{
	if (func_201(uParam0))
	{
		func_200(uParam0);
	}
}

void func_200(var uParam0)//Position - 0x6AF3
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_161(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_393(uParam0, 20) > 3f)
				{
					func_214(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_23(uParam0->f_51, 262144) || !func_23(uParam0->f_51, 1048576))
				{
					if (func_393(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_214(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (func_393(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_214(uParam0, 85, 1, 0, 0);
						func_161(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_393(uParam0, 20) > 8f)
				{
					func_214(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_23(uParam0->f_51, 262144) || func_23(uParam0->f_52, 67108864))
			{
				if (!func_155(uParam0, 22))
				{
					func_191(uParam0, 22);
				}
			}
			if (func_155(uParam0, 22) && func_393(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_23(uParam0->f_51, 1048576))
					{
						func_214(uParam0, 84, 1, 0, 0);
						func_161(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_23(uParam0->f_52, 134217728))
					{
						func_214(uParam0, 85, 1, 0, 0);
						func_161(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_201(var uParam0)//Position - 0x6D6E
{
	return uParam0->f_78;
}

void func_202(var uParam0, var uParam1)//Position - 0x6D7A
{
	STATS::STAT_GET_FLOAT(uParam0->f_1AC, uParam1, -1);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

int func_203(var uParam0)//Position - 0x6D9B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_316(uParam0, "Passenger left car.", 9);
			}
			else if (func_157(uParam0))
			{
				if (func_197("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_145(uParam0, 1);
			}
		}
	}
	return 0;
}

int func_204(var uParam0, int iParam1)//Position - 0x6E2A
{
	if (func_60(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_11, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_8C, 1, 0))
		{
		}
		if (((func_206(uParam0->f_4, uParam0->f_11, 1) <= (iParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_205(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_139(uParam0, 1, iParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_11, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_8C, 1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_205(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_139(uParam0, 1, iParam1);
	}
	return 0;
}

int func_205(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6F01
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

float func_206(int iParam0, struct<3> Param1, int iParam2)//Position - 0x6FE1
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

int func_207(var uParam0, int iParam1)//Position - 0x701A
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 355471868) != 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_208(var uParam0, int iParam1)//Position - 0x706D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_209(var uParam0)//Position - 0x70B0
{
	func_210(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_168();
	func_158(uParam0);
}

void func_210(var uParam0, int iParam1)//Position - 0x70FA
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

int func_211(var uParam0)//Position - 0x7134
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rebel")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rebel2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sandking")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sandking2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("patriot")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surfer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surfer2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mesa")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rancherxl")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tiptruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mixer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mixer2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rubble")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("scrap")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tiptruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("armytanker")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("barracks2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ambulance")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("firetruk")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("policet")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("riot")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sheriff2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stockade")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stockade3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("biff")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("hauler")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("packer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("phantom")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pounder")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("dloader")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("flatbed")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tourbus")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("towtruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("towtruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("camper")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("taco")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("boxville")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("boxville2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito4")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("journey")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mule")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mule2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pony")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rumpo")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("speedo2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("youga"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("phoenix") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("coquette")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("dune")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("cheetah")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("cogcabrio")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("jb700")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("monroe")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ninef")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ninef2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rapidgt")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rapidgt2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stinger")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stingergt")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ztype")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("banshee")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("bullet")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("carbonizzare")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("comet2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("entityxf")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("f620")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("infernus")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surano")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("voltic"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_212()//Position - 0x77CA
{
	func_61(&(Local_230.f_37), 2);
	func_61(&(Local_230.f_37), 4);
	func_61(&(Local_230.f_37), 16);
	func_61(&(Local_230.f_37), 64);
	func_61(&(Local_230.f_37), 256);
	func_61(&(Local_230.f_37), 512);
	func_61(&(Local_230.f_37), 1024);
	func_61(&(Local_230.f_37), 2048);
	func_61(&(Local_230.f_37), 67108864);
	func_61(&(Local_230.f_37), 134217728);
	func_61(&(Local_230.f_37), 536870912);
	func_61(&(Local_230.f_37), 268435456);
	func_61(&(Local_230.f_37), 8192);
	func_61(&(Local_230.f_37), 16384);
	func_61(&(Local_230.f_37), 32768);
	func_61(&(Local_230.f_37), 65536);
	func_61(&(Local_230.f_37), 131072);
	func_61(&(Local_230.f_37), 262144);
	func_61(&(Local_230.f_37), 524288);
	func_61(&(Local_230.f_37), 1048576);
	func_61(&(Local_230.f_37), 2097152);
	func_61(&(Local_230.f_64), 64);
	func_61(&(Local_230.f_64), 2048);
	func_61(&(Local_230.f_64), 128);
	func_61(&(Local_230.f_64), 32);
	func_61(&(Local_230.f_64), 256);
	func_61(&(Local_230.f_64), 8);
	func_61(&(Local_230.f_64), 1);
	func_61(&(Local_230.f_64), 4096);
	func_61(&(Local_230.f_64), 8192);
	MISC::CLEAR_BIT(&uLocal_327, 2);
	func_191(&Local_230, 7);
}

void func_213(var uParam0)//Position - 0x794D
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	func_210(uParam0, 1000);
}

void func_214(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7970
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_283(uParam0, 16, 4f, 0);
		if (func_215(uParam0))
		{
			func_47();
		}
	}
	func_248(uParam0, iParam2, bParam3);
}

int func_215(var uParam0)//Position - 0x79A5
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_8F, 24);
	if (func_170())
	{
		Var1 = { func_216() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_8F, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_166(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_216()//Position - 0x7A0B
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

int func_217(var uParam0)//Position - 0x7A2F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_80) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218(var uParam0, bool bParam1, float fParam2)//Position - 0x7A82
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_145(uParam0, 1);
			if (func_33())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_30 = 0;
				iLocal_78 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_246(uParam0);
			if (uParam0->f_30 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar3);
				uParam0->f_30 = 0;
			}
		}
		else
		{
			if (func_155(uParam0, 14))
			{
				func_158(uParam0);
				func_148(uParam0, 0);
			}
			if (func_155(uParam0, 9))
			{
				func_161(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_8D && func_245(uParam0, uParam0->f_3) > 300f)
				{
					func_316(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_30)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_147(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_206(uParam0->f_3, uParam0->f_B, 1) <= 28f) && func_206(uParam0->f_4, uParam0->f_B, 1) <= 28f))
						{
							if (func_242(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 1:
						if (func_241(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 1;
							if (bLocal_85)
							{
								uParam0->f_7 = func_240(uParam0->f_4, uParam0->f_3);
								iVar0 = func_239(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_19B == 0)
								{
									if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_30++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_193(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_245(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_19B != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_F3);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_85)
						{
							if (func_147(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_238(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_316(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_237(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_316(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_235(uParam0);
						if (func_245(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_220(uParam0))
								{
									func_219(uParam0);
									iLocal_80 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, 1);
									func_161(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_1AC, &(uParam0->f_2A), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_219(var uParam0)//Position - 0x7F91
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_220(var uParam0)//Position - 0x7FB5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_234("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		func_233();
	}
	if (bLocal_85)
	{
		iLocal_77 = 10;
	}
	if ((iLocal_77 < 7 && iLocal_77 > 0) && !bLocal_85)
	{
		if (func_231(iLocal_79))
		{
			iLocal_77 = 7;
		}
	}
	switch (iLocal_77)
	{
		case 0:
			if (func_139(uParam0, 0, 1084227584) && func_205(1, 1, 1))
			{
				if (func_238(uParam0, 1))
				{
					iLocal_79 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_77 = 1;
				}
				else
				{
					func_316(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_240(uParam0->f_4, uParam0->f_3);
				iVar3 = func_239(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_19B == 0)
				{
					if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_230(&(uParam0->f_199), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_229(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 25f, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				func_227();
				func_248(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_225(uParam0));
				func_224(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var1, 1);
				CAM::SET_CAM_ACTIVE(*uParam0, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, 0, 0);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_77 = 5;
			}
			break;
		
		case 5:
			func_234("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_77 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_223(uParam0->f_7), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(*uParam0, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				func_227();
				func_248(uParam0, 0, 0);
				iLocal_77 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_221(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam0, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			func_221(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_221(bool bParam0, bool bParam1, int iParam2)//Position - 0x84BB
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_24(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_222(23, 0);
}

void func_222(int iParam0, bool bParam1)//Position - 0x84F6
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6070, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_6070, iParam0);
	}
}

int func_223(int iParam0)//Position - 0x8518
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_224(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x8550
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param1, Param2, iParam3, 0, 2);
	}
}

float func_225(var uParam0)//Position - 0x857B
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_226(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_226(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x85E4
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_227()//Position - 0x85FE
{
	Global_38DE = 0;
	func_228();
}

void func_228()//Position - 0x860E
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

void func_229(int iParam0, int iParam1, int iParam2)//Position - 0x8632
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_42(0);
	func_24(1, 1, iParam2, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_222(23, 1);
}

int func_230(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x8688
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

int func_231(int iParam0)//Position - 0x8702
{
	if (func_232() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_42(0);
		func_168();
		return 1;
	}
	return 0;
}

int func_232()//Position - 0x8745
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_233()//Position - 0x8777
{
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_34())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_234(char* sParam0, int iParam1, int iParam2)//Position - 0x87AA
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_235(var uParam0)//Position - 0x87C9
{
	var uVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_146(uParam0->f_3, 1) > 30f || func_236(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
					func_316(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_236(var uParam0)//Position - 0x889A
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_393(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x88D4
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

int func_238(var uParam0, bool bParam1)//Position - 0x8990
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

int func_239(var uParam0, var uParam1)//Position - 0x8A46
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

int func_240(int iParam0, int iParam1)//Position - 0x8AB8
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.x > 0f)
	{
		if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 2, 0, 0))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 1, 0, 0))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 1, 0, 0))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 2, 0, 0))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_241(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x8B70
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_146(uParam0->f_3, 1) < fParam2)
		{
			if (!func_155(uParam0, 5))
			{
				func_283(uParam0, 5, 0, 0);
			}
		}
		else if (func_155(uParam0, 5))
		{
			func_161(uParam0, 5, 0);
		}
		if (((func_393(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_146(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(var uParam0, float fParam1)//Position - 0x8C0D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6A3E157475DBFCD9(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_78)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
			iLocal_78 = 1;
			break;
		
		case 1:
			if ((func_147(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_8E) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_199 == 0)
				{
					uParam0->f_199 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_199, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_78 = 2;
						}
						uParam0->f_199 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_199 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_F3, 1);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_F3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_19B != 9)
			{
				if (!func_23(uParam0->f_2C, 128))
				{
					func_214(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_243(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
			if (uParam0->f_19B != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_F3);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
			iLocal_78 = 3;
			break;
		
		case 3:
			iLocal_78 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_243(var uParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x8EEA
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, uParam2, func_244(iParam3), 0);
}

int func_244(int iParam0)//Position - 0x8F03
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

float func_245(var uParam0, int iParam1)//Position - 0x90F8
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_193(uParam0))
		{
			return func_147(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_246(var uParam0)//Position - 0x9122
{
	func_156(uParam0, uParam0->f_3);
	if (func_193(uParam0))
	{
		if (func_155(uParam0, 14))
		{
			func_158(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_A));
			}
		}
	}
	if (!func_155(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		}
		func_283(uParam0, 9, 0, 0);
		func_247("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_247(char* sParam0, int iParam1, int iParam2)//Position - 0x91A0
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_248(var uParam0, int iParam1, bool bParam2)//Position - 0x91B9
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_47();
		func_283(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_249(var uParam0, int iParam1)//Position - 0x91DE
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_253(12);
	if (func_23(uParam0->f_2C, 8))
	{
		if (!func_23(uParam0->f_2C, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_23(uParam0->f_2C, 256))
			{
				func_61(&(uParam0->f_2C), 256);
			}
			if (func_23(uParam0->f_2C, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_214(uParam0, 135, 1, 0, 1);
				func_61(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_252(uParam0, iParam1))
	{
		if (func_146(uParam0->f_3, 1) < 35f)
		{
			if (!func_23(uParam0->f_2C, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_214(uParam0, 133, 1, 0, 1);
				func_61(&(uParam0->f_2C), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_146(uParam0->f_3, 1) > 400f)
		{
			func_316(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 1);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_250(uParam0);
			func_49(2, 0);
			bLocal_85 = true;
			func_192(&uLocal_81);
			return 1;
		}
		else
		{
			func_316(uParam0, "No Taxi", 21);
			func_115("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_250(var uParam0)//Position - 0x9356
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (func_251())
		{
		}
	}
}

int func_251()//Position - 0x9371
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1)//Position - 0x9392
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
				bVar2 = func_237(iVar0);
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
					if (!func_23(uParam0->f_2C, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_115("TX_VIP_DMGD", -1);
							if (func_106("TX_VIP_DMGD"))
							{
								func_61(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_23(uParam0->f_2C, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_115("TX_VIP_CAR", -1);
							if (func_106("TX_VIP_CAR"))
							{
								func_61(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_23(uParam0->f_2C, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_115("TX_VIP_SMALL", -1);
							if (func_106("TX_VIP_SMALL"))
							{
								func_61(&(uParam0->f_2C), 16);
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
			func_21(&(uParam0->f_2C), 16);
			func_21(&(uParam0->f_2C), 64);
			func_21(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

void func_253(int iParam0)//Position - 0x99A5
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

void func_254(var uParam0)//Position - 0x99FE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_22(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_255()//Position - 0x9A23
{
	Local_164 = 0;
	func_272(40404/*func_274*/, 40379/*func_273*/, 1);
	func_272(40140/*func_270*/, 40117/*func_269*/, 1);
	func_272(40056/*func_268*/, 40031/*func_267*/, 1);
	func_272(39960/*func_266*/, 39936/*func_265*/, 1);
	func_272(39826/*func_264*/, 39805/*func_263*/, 1);
	func_272(39752/*func_261*/, 39727/*func_260*/, 1);
	func_272(39585/*func_257*/, 39562/*func_256*/, 1);
}

int func_256(var uParam0, var uParam1)//Position - 0x9A8A
{
	uParam1 = uParam1;
	func_316(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_257(var uParam0)//Position - 0x9AA1
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_259(uParam0->f_4))
		{
			func_258(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_258(var uParam0, int iParam1)//Position - 0x9ACB
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_259(int iParam0)//Position - 0x9ADE
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

int func_260(var uParam0, var uParam1)//Position - 0x9B2F
{
	uParam1 = uParam1;
	func_316(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_261(var uParam0)//Position - 0x9B48
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_262(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_262(var uParam0, int iParam1)//Position - 0x9B6E
{
	return (uParam0 && iParam1) != 0;
}

int func_263(var uParam0, var uParam1)//Position - 0x9B7D
{
	uParam1 = uParam1;
	func_258(uParam0, 11);
	return 1;
}

int func_264(var uParam0)//Position - 0x9B92
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_155(uParam0, 25))
			{
				func_283(uParam0, 25, 0, 0);
			}
			else if (func_393(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_155(uParam0, 25))
		{
			func_161(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_265(var uParam0, var uParam1)//Position - 0x9C00
{
	uParam1 = uParam1;
	func_316(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_266(var uParam0)//Position - 0x9C18
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

int func_267(var uParam0, var uParam1)//Position - 0x9C5F
{
	uParam1 = uParam1;
	func_316(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_268(var uParam0)//Position - 0x9C78
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_262(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_269(var uParam0, var uParam1)//Position - 0x9CB5
{
	uParam1 = uParam1;
	func_316(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_270(var uParam0)//Position - 0x9CCC
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_271(uParam0->f_4))
		{
			func_258(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)//Position - 0x9CF6
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

void func_272(int iParam0, int iParam1, bool bParam2)//Position - 0x9D51
{
	if (Local_164 >= 16)
	{
		Local_164 = 16;
		return;
	}
	Local_164.f_1[Local_164 /*4*/] = 0;
	func_62(&(Local_164.f_1[Local_164 /*4*/]), 1);
	if (bParam2)
	{
		func_62(&(Local_164.f_1[Local_164 /*4*/]), 2);
	}
	Local_164.f_1[Local_164 /*4*/].f_2 = iParam0;
	Local_164.f_1[Local_164 /*4*/].f_3 = iParam1;
	Local_164++;
}

int func_273(var uParam0, var uParam1)//Position - 0x9DBB
{
	uParam1 = uParam1;
	func_316(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_274(var uParam0)//Position - 0x9DD4
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

void func_275()//Position - 0x9E13
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

int func_276()//Position - 0x9FEB
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_259))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_266, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_334))
	{
		return 0;
	}
	if (!func_277(&iLocal_266, 1))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_266, 1000);
		return 0;
	}
	return 1;
}

int func_277(int iParam0, bool bParam1)//Position - 0xA03E
{
	if (!STREAMING::HAS_MODEL_LOADED(func_20()))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_278(var uParam0, int iParam1)//Position - 0xA0F5
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

int func_279(var uParam0)//Position - 0xA314
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_280(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_280(int iParam0, bool bParam1, bool bParam2)//Position - 0xA363
{
	return func_130(iParam0, !bParam1, bParam2);
}

int func_281(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xA376
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_282(uParam0, uParam0->f_E);
		uParam0->f_B = { Param1 };
		uParam0->f_E = { Param2 };
		func_39(uParam0->f_E, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_E, 2f, 0);
		func_37(uParam0->f_E, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_B);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_17742.f_E1[0]))
		{
			uParam0->f_3 = Global_17742.f_E1[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_B, fParam5, 1, 1);
		}
		func_7(&(uParam0->f_F4), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, 1);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, 0);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_19D));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_19D, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_19D, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_19D);
			return 1;
		}
	}
	return 0;
}

void func_282(var uParam0, struct<3> Param1)//Position - 0xA4CB
{
	uParam0->f_33[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, 0);
}

void func_283(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xA4E9
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

void func_284()//Position - 0xA55B
{
	STREAMING::REQUEST_MODEL(iLocal_259);
	STREAMING::REQUEST_ANIM_DICT(sLocal_281);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0);
	uLocal_334 = func_286();
	STREAMING::REQUEST_PTFX_ASSET();
	func_285(1);
}

void func_285(bool bParam0)//Position - 0xA58B
{
	STREAMING::REQUEST_MODEL(func_20());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_23(Global_17C49.f_43C7, 128))
	{
		func_61(&(Global_17C49.f_43C7), 128);
	}
}

var func_286()//Position - 0xA5E5
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_287(var uParam0, var uParam1)//Position - 0xA5F5
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

void func_288(var uParam0, char* sParam1, int iParam2)//Position - 0xA66C
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

int func_289()//Position - 0xA684
{
	float fVar0;
	int iVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
	iVar1 = func_171(&Local_230);
	if ((fVar0 - fLocal_270) > 5f)
	{
		fLocal_270 = fVar0;
		if (iLocal_269 == 0)
		{
			if (func_9(Local_230.f_4, Local_230.f_11, 1) < 200f)
			{
				iLocal_269++;
			}
			if (iVar1 >= 5)
			{
				if (!func_170())
				{
					return 1;
				}
				else
				{
					func_168();
					fLocal_270 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!func_170())
			{
				return 1;
			}
			else
			{
				func_168();
				fLocal_270 = 0f;
			}
		}
	}
	return 0;
}

void func_290()//Position - 0xA716
{
	if (func_291(&Local_230, 27, 155f))
	{
	}
}

int func_291(var uParam0, int iParam1, float fParam2)//Position - 0xA72F
{
	if (uParam0->f_19A < 29)
	{
		if (func_155(uParam0, 7))
		{
			func_191(uParam0, 23);
			if (func_393(uParam0, 7) > fParam2 && func_393(uParam0, 23) > 35f)
			{
				func_283(uParam0, 23, 0, 0);
				func_214(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_292(var uParam0, int iParam1, bool bParam2)//Position - 0xA78D
{
	if (uParam0->f_19B == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_393(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_214(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_214(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_283(uParam0, 10, 0f, 1);
				}
			}
			else if (func_393(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_214(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_214(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_283(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_393(uParam0, 10) > 30f)
		{
			if (!func_170())
			{
				if (uParam0->f_70)
				{
					func_214(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_214(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_283(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_23(uParam0->f_64, 64))
	{
		if (!func_15(&(Local_161[5 /*10*/].f_6)))
		{
			func_192(&(Local_161[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[5 /*10*/].f_6)) > 6f)
		{
			if (func_315(uParam0))
			{
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[5 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0, 1);
				func_312(5, uParam0);
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 1))
	{
		if (!func_15(&(Local_161[0 /*10*/].f_6)))
		{
			func_192(&(Local_161[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[0 /*10*/].f_6)) > 5f)
		{
			if (func_310(uParam0))
			{
				func_314(uParam0, 1);
				func_312(0, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[0 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2))
	{
		if (!func_15(&(Local_161[1 /*10*/].f_6)))
		{
			func_192(&(Local_161[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[1 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_314(uParam0, 1);
				func_312(1, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[1 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2048))
	{
		if (!func_15(&(Local_161[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_2E = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_192(&(Local_161[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_161[8 /*10*/].f_6)) > 7f || Local_161[8 /*10*/].f_1 == 0)
		{
			if (func_308(uParam0))
			{
				func_314(uParam0, 1);
				func_312(8, uParam0);
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 128))
	{
		if (!func_15(&(Local_161[6 /*10*/].f_6)))
		{
			func_192(&(Local_161[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[6 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				func_314(uParam0, 1);
				func_312(6, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[6 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32))
	{
		if (!func_15(&(Local_161[4 /*10*/].f_6)))
		{
			func_192(&(Local_161[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[4 /*10*/].f_6)) > 4f)
		{
			if (func_306(uParam0))
			{
				func_314(uParam0, 1);
				func_312(4, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[4 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 256))
	{
		if (!func_15(&(Local_161[7 /*10*/].f_6)))
		{
			func_192(&(Local_161[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[7 /*10*/].f_6)) > 5f || Local_161[7 /*10*/].f_1 == 0)
		{
			if (func_305(uParam0))
			{
				func_312(7, uParam0);
				func_314(uParam0, 1);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[7 /*10*/].f_9, 1, 0, 1);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8))
	{
		if (!func_15(&(Local_161[9 /*10*/].f_6)))
		{
			func_192(&(Local_161[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_94(&(Local_161[9 /*10*/].f_6)) > 7f || Local_161[9 /*10*/].f_1 == 0)
		{
			if (func_304(uParam0))
			{
				func_314(uParam0, 1);
				func_312(9, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[9 /*10*/].f_9, 1, 0, 1);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 16384))
	{
		if (!func_15(&(Local_161[13 /*10*/].f_6)))
		{
			func_192(&(Local_161[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[13 /*10*/].f_6)) > 10f)
		{
			if (func_298(uParam0))
			{
				func_314(uParam0, 1);
				func_312(13, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[13 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32768))
	{
		if (!func_15(&(Local_161[14 /*10*/].f_6)))
		{
			func_192(&(Local_161[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[14 /*10*/].f_6)) > 7f)
		{
			if (func_297(uParam0))
			{
				func_314(uParam0, 1);
				func_312(14, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[14 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4096))
	{
		if (!func_15(&(Local_161[11 /*10*/].f_6)))
		{
			func_192(&(Local_161[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[11 /*10*/].f_6)) > 8f)
		{
			if (func_296(uParam0))
			{
				func_314(uParam0, 1);
				func_312(11, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[11 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8192))
	{
		if (!func_15(&(Local_161[12 /*10*/].f_6)))
		{
			func_192(&(Local_161[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_161[12 /*10*/].f_6)) > 5f)
		{
			if (func_295(uParam0))
			{
				func_314(uParam0, 1);
				func_312(12, uParam0);
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[12 /*10*/].f_9, 1, 0, 0);
				}
				func_311(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4))
	{
		if (!func_15(&(Local_161[2 /*10*/].f_6)))
		{
			func_294(&(Local_161[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_161[2 /*10*/].f_6)) > 5f)
		{
			if (func_293(uParam0))
			{
				if (uParam0->f_71)
				{
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, Local_161[2 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0, 1);
				func_312(2, uParam0);
				func_311(uParam0);
			}
		}
	}
}

int func_293(var uParam0)//Position - 0xAF87
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_15(&(Local_161[0 /*10*/].f_3))) && !func_15(&(Local_161[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_161[2 /*10*/].f_3)))
			{
				uParam0->f_25 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_192(&(Local_161[2 /*10*/].f_3));
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

void func_294(var uParam0, float fParam1)//Position - 0xB06A
{
	if (!func_15(uParam0))
	{
		func_69(uParam0, fParam1);
	}
}

int func_295(var uParam0)//Position - 0xB084
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_15(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_161[12 /*10*/].f_3)))
			{
				func_192(&(Local_161[12 /*10*/].f_3));
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

int func_296(var uParam0)//Position - 0xB113
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_161[0 /*10*/].f_3))) && !func_15(&(Local_161[1 /*10*/].f_3))) && !func_15(&(Local_161[5 /*10*/].f_3))) && !func_15(&(Local_161[9 /*10*/].f_3))) && !func_15(&(Local_161[7 /*10*/].f_3))) && !func_15(&(Local_161[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 2.5f && !func_15(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_161[11 /*10*/].f_3)))
			{
				func_192(&(Local_161[11 /*10*/].f_3));
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

int func_297(var uParam0)//Position - 0xB243
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_161[0 /*10*/].f_3))) && !func_15(&(Local_161[8 /*10*/].f_3))) && !func_15(&(Local_161[5 /*10*/].f_3))) && !func_15(&(Local_161[9 /*10*/].f_3))) && !func_15(&(Local_161[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_161[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_147(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1)))
				{
					func_192(&(Local_161[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_161[14 /*10*/].f_3)) < 1.5f && func_147(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
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

int func_298(var uParam0)//Position - 0xB3C6
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_161[9 /*10*/].f_3))) && !func_15(&(Local_161[7 /*10*/].f_3))) && !func_15(&(Local_161[4 /*10*/].f_3)))
	{
		if (!func_299(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_161[13 /*10*/].f_3)))
			{
				func_192(&(Local_161[13 /*10*/].f_3));
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

bool func_299(int iParam0)//Position - 0xB47D
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
	Var3 = { func_303((Var1.x - Var0.x), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_302(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_300(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var5, Var6, Var7);
}

int func_300(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xB566
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
	Var0 = { func_303(Param2 - Param1) };
	Var1 = { func_303(Param3 - Param1) };
	fVar2 = func_301(Param0, Var0);
	fVar3 = func_301(Param1, Var0);
	fVar4 = func_301(Param2, Var0);
	fVar5 = func_301(Param0, Var1);
	fVar6 = func_301(Param1, Var1);
	fVar7 = func_301(Param3, Var1);
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

float func_301(struct<3> Param0, struct<3> Param1)//Position - 0xB64F
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_302(struct<3> Param0, int iParam1)//Position - 0xB670
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

Vector3 func_303(struct<3> Param0)//Position - 0xB6CE
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

int func_304(var uParam0)//Position - 0xB70D
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

int func_305(var uParam0)//Position - 0xB741
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

int func_306(var uParam0)//Position - 0xB7D6
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_161[4 /*10*/].f_3)))
			{
				func_192(&(Local_161[4 /*10*/].f_3));
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

int func_307(var uParam0)//Position - 0xB848
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_161[6 /*10*/].f_3)))
			{
				func_192(&(Local_161[6 /*10*/].f_3));
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

int func_308(var uParam0)//Position - 0xB8BE
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
					func_214(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_214(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_161[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_309(var uParam0)//Position - 0xB93F
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 3f && !func_15(&(Local_161[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_161[1 /*10*/].f_3)))
			{
				func_192(&(Local_161[1 /*10*/].f_3));
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

int func_310(var uParam0)//Position - 0xB9CB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_15(&(Local_161[0 /*10*/].f_3)))
			{
				func_192(&(Local_161[0 /*10*/].f_3));
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

void func_311(var uParam0)//Position - 0xBA55
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_161[iVar0 /*10*/].f_6)))
		{
			func_96(&(Local_161[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_283(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_312(int iParam0, var uParam1)//Position - 0xBA9D
{
	Local_161[iParam0 /*10*/].f_1++;
	func_313(uParam1, iParam0);
	func_93(&(Local_161[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_313(var uParam0, int iParam1)//Position - 0xBAD0
{
	uParam0->f_4C = (uParam0->f_4C + Local_161[iParam1 /*10*/]);
}

void func_314(var uParam0, int iParam1)//Position - 0xBAE7
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_315(var uParam0)//Position - 0xBAFA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_161[5 /*10*/].f_3)))
			{
				func_192(&(Local_161[5 /*10*/].f_3));
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

void func_316(var uParam0, char* sParam1, int iParam2)//Position - 0xBB71
{
	struct<3> Var0;
	
	func_168();
	func_413(2);
	Var0 = { func_320() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_170()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		StringCopy(&Var0, uParam0->f_8F, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!func_142(uParam0))
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
		func_283(uParam0, 3, 0, 0);
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
				func_318(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
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
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 15)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_142(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_131(uParam0, 4096, 0);
				}
				else
				{
					func_131(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_318(uParam0, &Var0);
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
				func_318(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_318(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_318(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_49(8, 0);
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
				func_318(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 4);
			}
			func_131(uParam0, 0, 0);
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_49(8, 0);
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
				func_318(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			func_318(uParam0, &Var0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_49(8, 0);
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
				func_318(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_317(&Var0);
			func_172(&(uParam0->f_F4), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_318(uParam0, &Var0);
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
					func_318(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_243(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_49(3, 0);
		}
		func_283(uParam0, 3, 0f, 1);
	}
}

void func_317(char* sParam0)//Position - 0xC120
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

void func_318(var uParam0, char* sParam1)//Position - 0xC173
{
	if (func_319(uParam0))
	{
		func_172(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_319(var uParam0)//Position - 0xC19B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_147(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_320()//Position - 0xC1D8
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

int func_321(var uParam0)//Position - 0xC21E
{
	return uParam0->f_76;
}

void func_322()//Position - 0xC22A
{
	if (func_354(&Local_230, &Local_283))
	{
		switch (Local_283.f_1B)
		{
			case 0:
				if (Local_230.f_19A == 9)
				{
					if (!func_353(&Local_230) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
					{
						if (func_352("TX_OBJ_TIE_DO") || HUD::DOES_BLIP_EXIST(Local_230.f_9))
						{
							Local_283.f_1B++;
						}
						else if (func_351(&Local_230) != 10)
						{
							func_214(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (!bLocal_276)
				{
					if (func_351(&Local_230) > 10 && func_351(&Local_230) != 15)
					{
						func_214(&Local_230, 15, 1, 0, 0);
						func_283(&Local_230, 10, 0, 0);
						if (bLocal_282)
						{
						}
					}
				}
				else
				{
					Local_283.f_1B++;
				}
				break;
			
			case 2:
				if ((bLocal_276 && iLocal_257 == 0) && !func_170())
				{
					if (func_351(&Local_230) > 10 && func_351(&Local_230) != 16)
					{
						func_214(&Local_230, 16, 1, 0, 0);
						func_283(&Local_230, 10, 0, 0);
						if (bLocal_282)
						{
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	func_323(&Local_230, &uLocal_286, &Local_283, 4, bLocal_282);
}

int func_323(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xC387
{
	char cVar0[48];
	struct<6> Var1;
	
	func_334(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_19A < 29) && !uParam0->f_6D)
	{
		if (func_333(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_332(uParam0))
				{
					uParam2->f_7 = { func_331(uParam1) };
					func_172(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_170())
				{
					uParam2->f_D = { func_216() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_D), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_195(uParam0))
				{
					if (func_170())
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							uParam2->f_1D = 1;
						}
						else
						{
							uParam2->f_1D = 0;
						}
						func_283(uParam0, 17, 0f, 1);
						if (uParam0->f_19B == 1)
						{
							uParam2->f_1 = { func_320() };
							func_47();
						}
						else
						{
							uParam2->f_1 = { func_330() };
							func_168();
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_19B == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_170())
				{
					uParam2->f_13 = { func_330() };
				}
				else
				{
					func_62(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_328(uParam1);
					func_283(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_155(uParam0, 14) && !func_170()) && !func_195(uParam0)) && func_393(uParam0, 18) > 1f)
				{
					func_283(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_393(uParam0, 18) > 1.5f && !func_170()) && !func_195(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_8F, 24);
					if (func_327(uParam2, &cVar0))
					{
						func_172(&(uParam0->f_F4), uParam0->f_90, &cVar0, 8, 0, 0, 0);
						func_283(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_1D)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						func_326(&(uParam2->f_19), iParam3, &cVar0, 1, 1, 0);
						func_325(&(uParam0->f_F4), uParam0->f_90, &Var1, &cVar0, 8, 0, 0);
						func_283(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_170() && func_393(uParam0, 17) > 1f)
				{
					if (func_393(uParam0, 18) > 0.5f || uParam0->f_19B == 0)
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_1)) && uParam0->f_19B != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_8F, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_166(&(uParam2->f_1));
							func_172(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_1), 8, 0, 0, 0);
							func_161(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_324(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_170())
				{
					func_62(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_328(uParam1);
					func_283(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_324(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC74E
{
	func_180(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_173(sParam2, iParam4, 0);
}

int func_325(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC7A2
{
	func_180(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_173(sParam2, iParam4, 0);
}

void func_326(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xC7F6
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_262(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_166(sParam2);
				}
				else
				{
					func_166(sParam2);
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

int func_327(var uParam0, char* sParam1)//Position - 0xC88D
{
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm3_bant1") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3M") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3T")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3F"))
	{
		func_61(&(uParam0->f_1C), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_328(var uParam0)//Position - 0xC90B
{
	int iVar0;
	
	iVar0 = func_329(uParam0);
	if (iVar0 > -1)
	{
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_61(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_185(), 24);
	}
}

int func_329(var uParam0)//Position - 0xC955
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_330()//Position - 0xC985
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

struct<6> func_331(var uParam0)//Position - 0xCA31
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_61(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_332(var uParam0)//Position - 0xCA78
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_197("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_197("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_197("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_197("TX_OBJ_GYB_DO", 0, 0) || func_197("TAXI_OBJ_GYB", 0, 0)) || func_197("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_197("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_197("TX_OBJ_CYI_DO", 0, 0) || func_197("TAXI_OBJ_CYI_01", 0, 0)) || func_197("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_197("TX_OBJ_GYN_DO", 0, 0) || func_197("TAXI_OBJ_GYN", 0, 0)) || func_197("TAXI_OBJ_GYN_TG", 0, 0)) || func_197("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_197("TAXI_OBJ_CC1", 0, 0) || func_197("TAXI_OBJ_CC2", 0, 0)) || func_197("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_197("TAXI_OBJ_FTC1", 0, 0) || func_197("TAXI_OBJ_FTC2", 0, 0)) || func_197("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_197("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_197("TAXI_OBJ_GETRUN", 0, 0) || func_197("TAXI_OBJ_DRIVE", 0, 0)) || func_197("TAXI_OBJ_RETURN", 0, 0)) || func_197("TAXI_OBJ_POL", 0, 0)) || func_197("TAXI_OBJ_RUNOUT", 0, 0)) || func_197("TAXI_OBJ_POL", 0, 0));
}

int func_333(var uParam0)//Position - 0xCC98
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_334(var uParam0, var uParam1)//Position - 0xCCC7
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_332(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_155(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_8F, 24);
		switch (func_351(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_350(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_170())
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
						func_349(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_346(uParam0, Var0, func_348(uParam0, 2));
				}
				if (func_23(uParam0->f_62, 4))
				{
					func_283(uParam0, 16, 0, 0);
					func_248(uParam0, 0, 0);
				}
				func_152(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_393(uParam0, 16) > 1f)
				{
					func_154(1);
					if (uParam0->f_19B == 9)
					{
						func_247("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_247("TAXI_VIP_RETURN", 7500, 1);
					}
					func_283(uParam0, 16, 0, 0);
					func_248(uParam0, 0, 0);
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
					func_349(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_243(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_393(uParam0, 16) > func_104(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_170()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&Var0, uParam0->f_8F, 24);
		switch (func_351(uParam0))
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
				func_349(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_350(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_172(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_214(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_283(uParam0, 16, 0, 0);
				func_214(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_23(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_326(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_349(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_283(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_247("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_247("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_345(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_214(uParam0, 10, 1, 0, 0);
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
				func_166(&Var0);
				if (uParam0->f_19B != 9)
				{
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_243(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_345(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_214(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_344(uParam0, 33554432, Var0, "", 1, 8);
				func_283(uParam0, 16, 0, 0);
				func_214(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_170())
				{
					func_343(uParam0, 0);
					func_61(&(uParam0->f_2C), 4);
					func_283(uParam0, 16, 0, 0);
					func_214(uParam0, 13, 0, 0, 0);
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
				func_166(&Var0);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_393(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_166(&Var0);
					}
					func_341(Var0, uParam1);
					func_61(&(uParam0->f_51), 67108864);
					func_283(uParam0, 16, 0, 0);
					func_283(uParam0, 11, 0, 0);
					func_248(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_393(uParam0, 11) > uParam0->f_24)
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
							func_166(&Var0);
						}
					}
					func_341(Var0, uParam1);
					func_283(uParam0, 11, 0, 0);
					func_283(uParam0, 16, 0, 0);
					func_248(uParam0, 0, 0);
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
					func_166(&Var0);
				}
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
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
				func_166(&Var0);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
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
				func_166(&Var0);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_166(&Var0);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				func_61(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 1, 0, 8);
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
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
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
					func_340(&(uParam0->f_5A), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_340(&(uParam0->f_5A), 3, &Var0, &iVar5, 1, 0);
				}
				func_341(Var0, uParam1);
				func_350(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 6, 0f, 1);
				func_248(uParam0, 0, 0);
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
					func_340(&(uParam0->f_59), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_340(&(uParam0->f_59), 3, &Var0, &iVar5, 1, 0);
				}
				func_341(Var0, uParam1);
				func_350(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 6, 0f, 1);
				func_248(uParam0, 0, 0);
				break;
			
			case 12:
				func_247("TAXI_OBJ_GYB", 3500, 1);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_247("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_247("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_247("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
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
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_23(uParam0->f_62, 268435456))
				{
					func_247("TAXI_OBJ_CYI_01", 7500, 1);
					func_61(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_166(&Var0);
				func_341(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_166(&Var0);
				func_341(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_166(&Var0);
				func_341(Var0, uParam1);
				uParam0->f_7C = { Var0 };
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 33:
				func_247("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_23(uParam0->f_52, 8192))
				{
					if (func_393(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_166(&Var0);
						if (uParam0->f_19B == 5)
						{
							func_341(Var0, uParam1);
						}
						else
						{
							func_349(uParam0, &Var0, 0, 0, 8);
						}
						func_61(&(uParam0->f_52), 8192);
						func_283(uParam0, 16, 0, 0);
						func_283(uParam0, 11, 0, 0);
						func_248(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_23(uParam0->f_52, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_166(&Var0);
					func_349(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_23(uParam0->f_52, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_166(&Var0);
					func_349(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 46, 1, 0, 0);
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
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_248(uParam0, 0, 0);
				break;
			
			case 139:
				func_247("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_214(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_23(uParam0->f_52, 268435456))
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
					func_61(&(uParam0->f_52), 268435456);
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
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_23(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_61(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_247("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_248(uParam0, 0, 0);
				func_214(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_170())
				{
					func_247("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_248(uParam0, 0, 0);
					func_214(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_247("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_248(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_23(uParam0->f_51, 1))
				{
					func_339(uParam0, 1, Var0, "_sick1", 8);
					func_21(&(uParam0->f_51), 2);
				}
				else if (!func_23(uParam0->f_51, 2))
				{
					func_339(uParam0, 2, Var0, "_sick2", 8);
					func_21(&(uParam0->f_51), 1);
				}
				func_350(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_23(uParam0->f_52, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_23(uParam0->f_52, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_61(&(uParam0->f_51), 2097152);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_283(uParam0, 16, 0, 0);
				func_350(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 1);
				func_248(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_350(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_350(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_350(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_23(uParam0->f_51, 4))
				{
					func_339(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_23(uParam0->f_51, 8))
				{
					func_339(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_339(uParam0, 8, Var0, "_turns3", 8);
					func_21(&(uParam0->f_51), 4);
					func_21(&(uParam0->f_51), 8);
				}
				func_350(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_338(uParam0))
				{
					func_346(uParam0, Var0, func_348(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_243(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_326(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_172(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_19B == 0)
					{
						func_326(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_326(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				func_350(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_23(uParam0->f_53, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 128);
					func_21(&(uParam0->f_53), 256);
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 256);
					func_21(&(uParam0->f_53), 512);
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 512);
					func_21(&(uParam0->f_53), 128);
					func_283(uParam0, 16, 0, 0);
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_53, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_166(&Var0);
					}
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 1);
					func_21(&(uParam0->f_53), 2);
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_166(&Var0);
					}
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 4);
					}
					else
					{
						func_21(&(uParam0->f_53), 1);
					}
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_166(&Var0);
					}
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 4);
					func_21(&(uParam0->f_53), 1);
					func_283(uParam0, 16, 0, 0);
				}
				func_350(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 4096))
				{
					func_344(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 8192))
				{
					func_344(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_350(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 16384))
				{
					func_344(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 32768))
				{
					func_344(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_350(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_23(uParam0->f_52, 8))
					{
						func_337(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 16))
					{
						func_337(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 32))
					{
						func_337(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_350(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
					func_248(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_326(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					func_350(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
					func_283(uParam0, 16, 0, 0);
					func_248(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_350(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_350(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_23(uParam0->f_51, 65536))
				{
					func_344(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 131072))
				{
					func_344(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_338(uParam0))
				{
					func_346(uParam0, Var0, func_348(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_243(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_23(uParam0->f_53, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 8);
					func_21(&(uParam0->f_53), 16);
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 16);
					func_21(&(uParam0->f_53), 32);
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 64);
					}
					else
					{
						func_21(&(uParam0->f_53), 8);
					}
					func_283(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_53), 64);
					func_21(&(uParam0->f_53), 8);
					func_283(uParam0, 16, 0, 0);
				}
				func_350(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_170())
				{
					if (uParam0->f_73)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_349(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_346(uParam0, Var0, func_348(uParam0, 65));
					func_248(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_170())
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
					func_349(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_346(uParam0, Var0, func_348(uParam0, 66));
					func_248(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_170())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								func_350(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								func_350(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_326(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
								func_350(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_283(uParam0, 16, 0, 0);
								func_248(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_57)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_349(uParam0, &Var0, 0, 0, 8);
									func_283(uParam0, 16, 0, 0);
									func_283(uParam0, 11, 0, 0);
									func_248(uParam0, 0, 0);
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
									func_166(&Var0);
									func_349(uParam0, &Var0, 0, 0, 8);
									func_283(uParam0, 16, 0, 0);
									func_283(uParam0, 11, 0, 0);
									func_248(uParam0, 0, 0);
									iLocal_57 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_349(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_214(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_350(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_23(uParam0->f_52, 1))
				{
					func_337(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 2))
				{
					func_337(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 4))
				{
					func_337(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_248(uParam0, 0, 0);
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
				func_326(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_243(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_283(uParam0, 16, 0, 0);
				func_350(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_338(uParam0))
				{
					func_346(uParam0, Var0, func_348(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_243(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_336(uParam0, Var0, 8);
				}
				func_350(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_23(uParam0->f_53, 1024))
				{
					func_61(&(uParam0->f_53), 1024);
					func_283(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2048))
				{
					func_61(&(uParam0->f_53), 2048);
					func_283(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4096))
				{
					func_61(&(uParam0->f_53), 4096);
					func_283(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_166(&Var0);
					func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 8, 0, 0, 0);
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_23(uParam0->f_52, 1024))
				{
					func_337(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_21(&(uParam0->f_52), 2048);
				}
				else if (!func_23(uParam0->f_52, 2048))
				{
					func_337(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_350(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 52, 1, 0, 0);
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
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_243(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_338(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_349(uParam0, &Var0, 0, 0, 8);
						func_214(uParam0, 52, 1, 0, 0);
						func_283(uParam0, 16, 0, 0);
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
						func_349(uParam0, &Var0, 0, 0, 8);
						func_283(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_326(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
					func_283(uParam0, 16, 0, 0);
					func_248(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_350(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_283(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_247("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_23(uParam0->f_51, 262144))
				{
					func_344(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_344(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_344(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_350(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_335(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_23(uParam0->f_52, 134217728))
				{
					func_335(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_350(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), Var0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 100:
				func_247("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_248(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_166(&Var0);
				}
				func_61(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_166(&Var0);
				}
				func_61(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_349(uParam0, &Var0, 0, 0, 8);
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
					func_166(&Var0);
				}
				func_61(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_23(uParam0->f_52, 65536))
				{
					if (func_393(uParam0, 11) > uParam0->f_24)
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
						func_166(&Var0);
						func_341(Var0, uParam1);
						func_61(&(uParam0->f_52), 65536);
						func_283(uParam0, 16, 0, 0);
						func_283(uParam0, 11, 0, 0);
						func_248(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_23(uParam0->f_52, 131072))
				{
					if (func_393(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_166(&Var0);
						func_341(Var0, uParam1);
						func_61(&(uParam0->f_52), 131072);
						func_283(uParam0, 16, 0, 0);
						func_283(uParam0, 11, 0, 0);
						func_248(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_23(uParam0->f_52, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_61(&(uParam0->f_52), 8388608);
				}
				else if (!func_23(uParam0->f_52, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_61(&(uParam0->f_52), 16777216);
				}
				else if (!func_23(uParam0->f_52, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_61(&(uParam0->f_52), 33554432);
				}
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_326(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_166(&Var0);
					func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_349(uParam0, &Var0, 0, 0, 8);
				}
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_341(Var0, uParam1);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_326(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_325(&(uParam0->f_F4), uParam0->f_90, &Var0, &cVar1, 8, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_61(&(uParam0->f_51), 2097152);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_166(&Var0);
				func_341(Var0, uParam1);
				func_61(&(uParam0->f_51), 67108864);
				func_283(uParam0, 16, 0, 0);
				func_283(uParam0, 11, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_23(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_344(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_243(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_214(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_23(uParam0->f_51, 268435456))
				{
					func_344(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_214(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_247("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_248(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_23(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_344(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_243(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_344(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_214(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_247("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_248(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_172(&(uParam0->f_F4), uParam0->f_90, &Var0, 9, 0, 0, 0);
				func_283(uParam0, 16, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_23(uParam0->f_51, 16777216))
				{
					func_344(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_248(uParam0, 0, 0);
				break;
			
			case 88:
				func_247("TAXI_TIEFLEE", 7500, 1);
				func_248(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_23(uParam0->f_62, 536870912))
				{
					func_247("TAXI_OBJ_CYI_1B", 7500, 1);
					func_61(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_248(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_166(&Var0);
				func_349(uParam0, &Var0, 0, 0, 8);
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
				func_349(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_349(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 0, 0);
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
				func_349(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_349(uParam0, &Var0, 1, 0, 8);
				func_214(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_247("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_214(uParam0, 0, 0, 0, 0);
				func_248(uParam0, 0, 0);
				break;
			}
	}
}

void func_335(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xFF85
{
	func_61(&(uParam0->f_52), iParam1);
	func_283(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_166(&Param2);
	}
	func_172(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam8, 0, 0, 0);
}

void func_336(var uParam0, struct<6> Param1, int iParam2)//Position - 0xFFC6
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_23(uParam0->f_52, 64))
	{
		func_61(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_23(uParam0->f_52, 128))
	{
		func_61(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_325(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_283(uParam0, 16, 0, 0);
}

void func_337(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x1004D
{
	func_61(&(uParam0->f_52), iParam1);
	func_283(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_166(&Param2);
		}
	}
	func_172(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam7, 0, 0, 0);
}

int func_338(var uParam0)//Position - 0x100CD
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_339(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x10133
{
	func_61(&(uParam0->f_51), iParam1);
	func_283(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_172(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam7, 0, 0, 0);
}

void func_340(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x10169
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_262(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_166(sParam2);
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

void func_341(char[24] cParam0, var uParam1)//Position - 0x101EA
{
	int iVar0;
	
	iVar0 = func_342(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_61(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_342(var uParam0)//Position - 0x10219
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

void func_343(var uParam0, bool bParam1)//Position - 0x10246
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_247("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_247("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_247("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_247("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_247("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_247("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_247("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_247("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_247("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_247("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_247("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_247("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_344(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x103FD
{
	func_61(&(uParam0->f_51), iParam1);
	func_283(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_166(&Param2);
	}
	func_172(&(uParam0->f_F4), uParam0->f_90, &Param2, iParam8, 0, 0, 0);
}

var func_345(struct<3> Param0, int iParam1)//Position - 0x1043E
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_346(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x1046A
{
	func_283(uParam0, 16, 0, 0);
	func_283(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_347(uParam0));
	}
}

char* func_347(var uParam0)//Position - 0x104A8
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

char* func_348(var uParam0, int iParam1)//Position - 0x10542
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

bool func_349(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x108EB
{
	func_283(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_283(uParam0, 17, 0f, 1);
	}
	func_248(uParam0, iParam2, 0);
	return func_172(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_350(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x10928
{
	if (iParam0 == 0)
	{
		if (func_23(*uParam2, 2))
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
		if (func_23(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_23(*uParam2, 4))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_23(*uParam2, 512))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_23(*uParam2, 16))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_23(*uParam2, 64))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_23(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_23(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_23(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_23(*uParam2, 8192))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_23(*uParam2, 16384))
		{
			if (func_23(*uParam2, 4194304))
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
		if (func_23(*uParam2, 32768))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_23(*uParam2, 65536))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_23(*uParam2, 131072))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_23(*uParam2, 262144))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_23(*uParam2, 524288))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_23(*uParam2, 1048576))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_23(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_23(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_23(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_23(*uParam2, 67108864))
		{
			if (func_23(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_23(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_23(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_23(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_23(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_351(var uParam0)//Position - 0x10F32
{
	return uParam0->f_1A0;
}

int func_352(char* sParam0)//Position - 0x10F3F
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_197(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_353(var uParam0)//Position - 0x10F61
{
	if (func_170())
	{
		return 1;
	}
	if (func_155(uParam0, 17))
	{
		return 1;
	}
	if (func_155(uParam0, 14))
	{
		return 1;
	}
	if (func_195(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_354(var uParam0, var uParam1)//Position - 0x10FA0
{
	return ((*uParam1 == -1 && uParam0->f_19C == 0) && !func_155(uParam0, 9));
}

bool func_355(var uParam0)//Position - 0x10FC7
{
	return uParam0->f_75;
}

void func_356(var uParam0)//Position - 0x10FD3
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_164 > 0 && !func_262(Local_164.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_164 - 1))
				{
					if (func_262(Local_164.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_164.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_262(Local_164.f_1[iVar0 /*4*/], 4))
							{
								func_62(&(Local_164.f_1[iVar0 /*4*/]), 4);
								Local_164.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_22(&(Local_164.f_1[iVar0 /*4*/]), 12);
						}
						if (func_262(Local_164.f_1[iVar0 /*4*/], 4) && !func_262(Local_164.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_164.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_164.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_62(&(Local_164.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_316(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_357(var uParam0, var uParam1, bool bParam2)//Position - 0x110E6
{
	if (!func_23(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7C)) && func_170())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_170())
				{
					StringCopy(&(uParam0->f_7C), func_185(), 24);
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

int func_358(var uParam0, var uParam1)//Position - 0x1116C
{
	var uVar0;
	
	if (!func_155(uParam0, 27))
	{
		func_191(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_393(uParam0, 27) > 5f)
	{
		if (func_385(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_283(uParam0, 27, 0, 0);
			func_283(uParam0, 10, 0, 0);
			func_383(uParam0, &uVar0, uParam1);
		}
		func_380(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_359(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_170())
	{
		if (func_393(uParam0, 26) > 10f)
		{
			func_161(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	else if (func_155(uParam0, 26))
	{
		func_161(uParam0, 26, 0);
	}
	return 0;
}

void func_359(var uParam0)//Position - 0x11296
{
	if (!func_379(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_378();
		func_369(&(uParam0->f_1AD), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_360(uParam0->f_1AD))
	{
		func_316(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_360(int iParam0)//Position - 0x112E3
{
	return func_361(func_378(), iParam0);
}

int func_361(int iParam0, int iParam1)//Position - 0x112F5
{
	int iVar0;
	int iVar1;
	
	if (!func_379(iParam1) || !func_379(iParam0))
	{
		return 1;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_363(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_362(iParam0);
	iVar1 = func_362(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x11401
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_363(int iParam0)//Position - 0x11414
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_364(int iParam0)//Position - 0x11427
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_365(int iParam0)//Position - 0x1143A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_366(int iParam0)//Position - 0x1144C
{
	return iParam0 & 15;
}

var func_367(int iParam0)//Position - 0x11459
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_368(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_368(bool bParam0, int iParam1, int iParam2)//Position - 0x1147E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11495
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_367(*uParam0);
	iVar1 = func_366(*uParam0);
	iVar2 = func_365(*uParam0);
	iVar3 = func_364(*uParam0);
	iVar4 = func_363(*uParam0);
	iVar5 = func_362(*uParam0);
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
	iVar6 = func_377(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_377(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_370(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_370(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11617
{
	func_376(uParam0, iParam1);
	func_375(uParam0, iParam2);
	func_374(uParam0, iParam3);
	func_373(uParam0, iParam4);
	func_372(uParam0, iParam5);
	func_371(uParam0, iParam6);
}

void func_371(var uParam0, int iParam1)//Position - 0x1164F
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

void func_372(var uParam0, int iParam1)//Position - 0x116D5
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_373(var uParam0, int iParam1)//Position - 0x11708
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_366(*uParam0);
	iVar1 = func_367(*uParam0);
	if (iParam1 < 1 || iParam1 > func_377(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_374(var uParam0, int iParam1)//Position - 0x11759
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_375(var uParam0, int iParam1)//Position - 0x11793
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_376(var uParam0, int iParam1)//Position - 0x117CE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_377(int iParam0, int iParam1)//Position - 0x1180A
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

int func_378()//Position - 0x118AC
{
	var uVar0;
	
	func_376(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_375(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_374(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_373(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_372(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_371(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_379(int iParam0)//Position - 0x118F2
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
	iVar0 = func_362(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_363(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_364(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_367(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_366(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_365(iParam0);
	if (iVar5 < 1 || iVar5 > func_377(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_380(var uParam0)//Position - 0x119CE
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_382()) && !func_193(uParam0)) || ((uParam0->f_19B != 9 && func_252(uParam0, 1)) && !func_193(uParam0)))
		{
			uVar0 = func_381(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, 1, 0);
			func_158(uParam0);
			func_148(uParam0, 0);
		}
	}
}

var func_381(var uParam0)//Position - 0x11A64
{
	return uParam0;
}

int func_382()//Position - 0x11A6E
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
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_383(var uParam0, var uParam1, var uParam2)//Position - 0x11AC3
{
	switch (*uParam1)
	{
		case 1:
			if (func_384(uParam0, 0, 1))
			{
				func_316(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_384(uParam0, 0, 4))
			{
				func_316(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_384(uParam0, 0, 8))
			{
				func_316(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_384(uParam0, 1, 1))
			{
				func_316(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_384(uParam0, 0, 1))
			{
				func_316(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_23(*uParam2, 2) && func_142(uParam0))
			{
				func_316(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_384(var uParam0, int iParam1, int iParam2)//Position - 0x11B9E
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
				func_214(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_214(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_385(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11C1A
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_23(*uParam2, 1))
		{
			if (func_391(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_23(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_23(*uParam2, 4))
		{
			if (func_389(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_23(*uParam2, 8))
		{
			if (func_388(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_23(*uParam2, 128);
		if (bParam4)
		{
			if (func_386(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_23(*uParam2, 16))
		{
			if (func_386(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_386(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11D42
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
	if (func_387(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_146(iParam0, 1) < 1.5f)
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

int func_387(int iParam0, int iParam1)//Position - 0x11F06
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

int func_388(int iParam0, int iParam1, var uParam2)//Position - 0x11F5B
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

int func_389(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x11FA9
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_390(iVar1))
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

int func_390(int iParam0)//Position - 0x12121
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
						if (func_147(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_391(int iParam0, var uParam1)//Position - 0x121ED
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_146(iParam0, 1) < uParam1->f_2)
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

void func_392(var uParam0)//Position - 0x12271
{
	if (!func_23(uParam0->f_62, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (func_9(uParam0->f_4, uParam0->f_11, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_11, 25f, 0, 0, 0, 0, 0);
				func_61(&(uParam0->f_62), 2);
			}
		}
	}
}

float func_393(var uParam0, int iParam1)//Position - 0x122C7
{
	if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_192(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_394()//Position - 0x122F7
{
	func_395(&Local_230);
	func_412();
}

void func_395(var uParam0)//Position - 0x1230A
{
	func_10(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_413(2);
	}
}

int func_396(var uParam0, bool bParam1)//Position - 0x12329
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_170() && func_393(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_262(uParam0->f_55, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_131(uParam0, 4160, 0);
						}
						else
						{
							func_131(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_131(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_131(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_131(uParam0, 0, 0);
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

void func_397(var uParam0)//Position - 0x12427
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

int func_398(var uParam0)//Position - 0x12468
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_399()//Position - 0x12489
{
	func_401(&Local_230, 1);
	Local_230.f_19A = 0;
	func_400(&Local_230, 2, 4);
	Local_230.f_17 = { 31.3927f, 229.9863f, 108.45f };
	Local_230.f_21 = 340.5f;
	Local_230.f_1A = { -1239.992f, -902.0005f, 10.8342f };
	Local_230.f_22 = 305.2155f;
	Local_230.f_1D = { -1224.093f, -907.3411f, 11.3263f };
}

void func_400(var uParam0, int iParam1, int iParam2)//Position - 0x124FF
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_401(var uParam0, int iParam1)//Position - 0x12513
{
	func_411(1);
	func_160();
	func_6(&(uParam0->f_F4));
	func_410(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_23(Global_17C49.f_43C7, 4))
	{
		func_61(&(Global_17C49.f_43C7), 4);
	}
	func_405(uParam0);
	func_403(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	uParam0->f_66 = (func_402(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_402(int iParam0)//Position - 0x12595
{
	return Global_17C49.f_43C7.f_27[iParam0];
}

void func_403(var uParam0)//Position - 0x125AA
{
	switch (func_60(uParam0))
	{
		case 0:
			func_404(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_404(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_404(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_404(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_404(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_404(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_404(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_404(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_404(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_404(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_404(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x126FD
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_405(var uParam0)//Position - 0x12717
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_409(uParam0, 3);
			func_408(uParam0, 14);
			break;
		
		case 1:
			func_409(uParam0, 14);
			func_408(uParam0, 8);
			break;
		
		case 2:
			func_409(uParam0, 8);
			func_408(uParam0, 7);
			break;
		
		case 3:
			func_409(uParam0, 15);
			func_408(uParam0, 6);
			break;
		
		case 4:
			func_409(uParam0, 0);
			func_408(uParam0, 3);
			break;
		
		case 5:
			func_409(uParam0, 6);
			func_408(uParam0, 7);
			break;
		
		case 6:
			func_409(uParam0, 8);
			func_408(uParam0, 15);
			break;
		
		case 7:
			func_409(uParam0, 8);
			func_408(uParam0, 14);
			break;
		
		case 8:
			func_409(uParam0, 7);
			func_408(uParam0, 15);
			break;
		
		case 9:
			func_409(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_407((uParam0->f_1A2.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_408(uParam0, iVar0);
			func_406(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_406(var uParam0)//Position - 0x1284E
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

int func_407(int iParam0, int iParam1, int iParam2)//Position - 0x1290F
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

void func_408(var uParam0, int iParam1)//Position - 0x129B1
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_409(var uParam0, int iParam1)//Position - 0x129C2
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_410(var uParam0)//Position - 0x129D3
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_41() };
	uParam0->f_11 = { func_41() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_161(uParam0, 32, 0);
}

void func_411(bool bParam0)//Position - 0x12A31
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

void func_412()//Position - 0x12A5D
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_281))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_281);
	}
	if (iLocal_260 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_260, 0);
		iLocal_260 = 0;
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_413(int iParam0)//Position - 0x12A91
{
	Global_17742.f_16 = iParam0;
}

