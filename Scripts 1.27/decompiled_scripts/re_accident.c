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
	int iLocal_17 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	bool bLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	float fLocal_54 = 0f;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	struct<5> Local_59[31];
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<5> Local_67[14];
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 16;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	struct<3> Local_272 = { 0, 0, 0 } ;
	struct<3> Local_273 = { 0, 0, 0 } ;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
	struct<33> Local_282 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_283 = 1;
	struct<2> Local_284 = { 0, 5 } ;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_48 = -1;
	iLocal_51 = -1;
	fLocal_54 = 0.5f;
	fLocal_55 = 0f;
	iLocal_61 = 1;
	fLocal_68 = 160f;
	iLocal_72 = 55000;
	Local_75 = { 30f, 30f, 5f };
	iLocal_101 = -1;
	Local_272 = { -458.4085f, -984.6459f, 22.5892f };
	Local_273 = { -458.1934f, -995.4897f, 22.7427f };
	Local_73 = { ScriptParam_284.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_172();
	}
	if (CLOCK::GET_CLOCK_HOURS() > 18 || CLOCK::GET_CLOCK_HOURS() < 5)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_130(Local_73, -1, 0, 0, 0))
	{
		func_127(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (!func_126())
			{
				if (func_125())
				{
					func_172();
				}
			}
			RECORDING::_0x208784099002BC30("RE_CA", 0);
			switch (iLocal_69)
			{
				case 0:
					if (func_113())
					{
						func_172();
					}
					func_107();
					func_104(&Local_282);
					break;
				
				case 1:
					func_21();
					func_104(&Local_282);
					func_12();
					break;
				
				case 2:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_77) && PED::IS_PED_DEAD_OR_DYING(iLocal_77, 1)) && iLocal_97 < 5) && !bLocal_94)
					{
						func_11();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_172();
		}
	}
}

void func_1()//Position - 0x1CC
{
	if (iLocal_279 && !iLocal_280)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
		iLocal_96 = 0;
		while (iLocal_96 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[iLocal_96]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[iLocal_96], 0);
			}
			iLocal_96++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_79, 0f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_88, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		func_2(0, 1, 1, 0);
		iLocal_91 = 1;
		MISC::SET_TIME_SCALE(1f);
		STREAMING::REMOVE_ANIM_DICT("re@construction");
		if (CAM::DOES_CAM_EXIST(uLocal_274))
		{
			CAM::DESTROY_CAM(uLocal_274, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_83))
		{
			HUD::REMOVE_BLIP(&uLocal_83);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_84))
		{
			HUD::REMOVE_BLIP(&uLocal_84);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_85))
		{
			HUD::REMOVE_BLIP(&uLocal_85);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_86))
		{
			HUD::REMOVE_BLIP(&uLocal_86);
		}
		iLocal_280 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[0]) || ENTITY::DOES_ENTITY_EXIST(uLocal_87[1]))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_74 + Vector(20f, 0f, 0f), 30f) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_74, 80f, 80f, 80f, 0, 1, 0))
		{
			func_172();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x36B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_10(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_9())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_8(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_10(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_8(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_3(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_3(int iParam0)//Position - 0x43C
{
	if (func_5(iParam0, 0))
	{
		return 1;
	}
	if (func_4())
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

bool func_4()//Position - 0x47D
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_5(int iParam0, int iParam1)//Position - 0x48E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_6(-1, 0) == 8;
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

int func_6(int iParam0, bool bParam1)//Position - 0x4D9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()//Position - 0x51A
{
	return Global_1407E1;
}

int func_8(int iParam0, var uParam1, var uParam2)//Position - 0x526
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

int func_9()//Position - 0x557
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)//Position - 0x57E
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

void func_11()//Position - 0x5A1
{
	if (iLocal_101 == -1)
	{
		iLocal_101 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_101)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_79, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_79, 1, 0);
			}
		}
	}
}

void func_12()//Position - 0x602
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_20();
		func_19();
		func_16();
		func_13();
	}
}

void func_13()//Position - 0x626
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_60 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_67[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_67)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67[(iVar0 - 1) /*5*/], Local_67[iVar0 /*5*/], 1));
				}
				if (Local_67[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_67[iVar0 /*5*/]))
					{
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67[iVar0 /*5*/], Var1, 1);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_54)
			{
				iVar3 = iVar3;
				iLocal_60 = 1;
				iLocal_62 = MISC::GET_GAME_TIMER();
				fVar6 = fVar6;
				Local_57 = { Local_67[iVar3 /*5*/] };
				iLocal_58 = iVar3;
				iLocal_63 = iVar3 * 2;
				iLocal_65 = iLocal_63;
				iLocal_66 = iLocal_63;
				if (iLocal_66 < 0)
				{
					iLocal_66 = 0;
				}
				if (iLocal_65 >= Local_67 * 2)
				{
					iLocal_65 = (Local_67 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_60 == 1)
	{
		GRAPHICS::_0xD9454B5752C857DC();
		fVar7 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_62)) / fLocal_68);
		iVar8 = (SYSTEM::FLOOR((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_63 + iVar8);
		iVar10 = (iLocal_63 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_65)
		{
			iVar0 = iLocal_65 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_67)
				{
					if (Local_67[iVar11 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_65 = iVar9;
		}
		if (iVar10 < iLocal_66)
		{
			iVar0 = (iLocal_66 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_67)
				{
					if (Local_67[iVar11 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_66 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_59)
		{
			if ((MISC::GET_GAME_TIMER() - Local_59[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_59[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_59[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_59[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x85E
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_15(Local_67[(iParam0 / 2) /*5*/] + Local_67[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_55, fLocal_55, fLocal_55), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_15(Local_67[(iParam0 / 2) /*5*/] + Vector(fLocal_55, fLocal_55, fLocal_55), iParam1);
		}
	}
}

void func_15(struct<3> Param0, int iParam1)//Position - 0x8C7
{
	if (iLocal_61 == 0)
	{
		iParam1 = 0;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_59[iLocal_64 /*5*/]);
	if (Local_59[iLocal_64 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_59[iLocal_64 /*5*/].f_1, 0.4f, 1f);
	}
	Local_59[iLocal_64 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_59[iLocal_64 /*5*/].f_1 = { Param0 };
	Local_59[iLocal_64 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, uLocal_52, iParam1);
	iLocal_64++;
	if (iLocal_64 >= 31)
	{
		iLocal_64 = 0;
	}
}

void func_16()//Position - 0x93E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_47)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_53 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_53)
				{
					if (!bLocal_43)
					{
						fVar4 = 9999.9f;
						Local_56 = { func_18() };
						iVar0 = 0;
						while (iVar0 < Local_67)
						{
							if (HUD::DOES_BLIP_EXIST(Local_67[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_56, HUD::GET_BLIP_COORDS(Local_67[iVar0 /*5*/].f_3), 1);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_67[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_67[iVar0 /*5*/] = { Local_56 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_49 != -1)
							{
								if (MISC::ABSI((iLocal_50 - iVar5)) > 1)
								{
									iLocal_50 = -1;
								}
								if (iLocal_50 == -1)
								{
									iLocal_50 = iLocal_49;
								}
								if (MISC::ABSI((iLocal_50 - iVar5)) < 3 && MISC::ABSI((iLocal_50 - iVar5)) > 0)
								{
									if (iLocal_50 < iVar5)
									{
										iVar6 = iLocal_50;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_67[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_67[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_67[iVar6 /*5*/].f_3, 0);
													Local_67[iVar6 /*5*/].f_4 = 1;
													iLocal_51 = (iLocal_51 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_50)
										{
											if (HUD::DOES_BLIP_EXIST(Local_67[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_67[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_67[iVar6 /*5*/].f_3, 0);
													Local_67[iVar6 /*5*/].f_4 = 1;
													iLocal_51 = (iLocal_51 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_50 = iLocal_49;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_67[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3, 0);
											Local_67[iVar5 /*5*/].f_4 = 1;
											iLocal_51 = (iLocal_51 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (HUD::DOES_BLIP_EXIST(Local_67[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3, 0);
											Local_67[iVar5 /*5*/].f_4 = 1;
											iLocal_51 = (iLocal_51 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_17(Local_67[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_67[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_67[iVar5 /*5*/].f_3, 0);
												Local_67[iVar5 /*5*/].f_4 = 1;
												iLocal_51 = (iLocal_51 - 1);
											}
										}
									}
								}
							}
							iLocal_49 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_49 = -1;
				iLocal_50 = -1;
				iLocal_53 = 0;
			}
		}
	}
}

int func_17(struct<3> Param0)//Position - 0xC13
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18()//Position - 0xC3D
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &uVar4);
		Var3 = { Var2.x, Var2.f_1, uVar4 };
	}
	return Var3;
}

void func_19()//Position - 0xCAA
{
	int iVar0;
	
	if (iLocal_45)
	{
		if (iLocal_60)
		{
			iVar0 = 0;
			while (iVar0 < Local_59)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_59[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_45 = 0;
		iLocal_60 = 1;
		iLocal_62 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_67)
		{
			Local_67[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_48 != -1)
		{
			iLocal_66 = iLocal_48;
			iLocal_65 = iLocal_48;
			iLocal_63 = iLocal_48;
		}
		else
		{
			iLocal_66 = -1;
			iLocal_65 = -1;
			iLocal_63 = iLocal_48;
		}
		iLocal_64 = 1;
	}
}

void func_20()//Position - 0xD23
{
	if (!iLocal_46)
	{
		iLocal_46 = 1;
	}
}

void func_21()//Position - 0xD34
{
	switch (iLocal_70)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false);
			STREAMING::REQUEST_ANIM_DICT("re@construction");
			if (Local_282.f_20 <= 0)
			{
				Local_282.f_20 = MISC::GET_FRAME_COUNT();
			}
			func_103(&Local_282, joaat("s_m_m_dockwork_01"));
			func_103(&Local_282, joaat("prop_generator_01a"));
			func_103(&Local_282, joaat("p_amb_phone_01"));
			func_100(&Local_282);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false) && STREAMING::HAS_ANIM_DICT_LOADED("re@construction")) && func_96(&Local_282))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
				{
					iLocal_77 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_79, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_77, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_77, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_77, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_77, 8, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_77, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_89 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_89, iLocal_77, PED::GET_PED_BONE_INDEX(iLocal_77, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_77, 17, 1);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_77, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_77, 1);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_77, 0);
					func_95(&uLocal_107, 3, iLocal_77, "RECONACWorker", 0, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_77, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_78 = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_78, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_78, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, 1);
					EVENT::SET_DECISION_MAKER(iLocal_77, -1143637011);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 24);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 46);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 61);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 136);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 55);
					iLocal_88 = OBJECT::CREATE_OBJECT(joaat("prop_generator_01a"), Local_273.x, (Local_273.f_1 + 0.5f), (Local_273.f_2 - 0.25f), 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_88, 75f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_88, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_278 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sparking_generator", iLocal_88, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_88, 1);
					func_94(&uLocal_107, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_70 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_90)
			{
				func_90();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_91)
				{
					if (!PED::IS_PED_INJURED(iLocal_77))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_84))
								{
									uLocal_84 = func_89(iLocal_79, 0, 0);
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_77, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_79, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
							TASK::CLEAR_PED_TASKS(iLocal_77);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_77, uLocal_106);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
							func_88();
						}
						STREAMING::REQUEST_MODEL(joaat("prop_ld_pipe_single_01"));
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && func_87(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_126())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									iLocal_82 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								func_77(1);
							}
							iLocal_90 = 1;
						}
					}
					else
					{
						func_88();
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_77))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_79) && !HUD::DOES_BLIP_EXIST(uLocal_84))
							{
								uLocal_84 = func_89(iLocal_79, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(uLocal_83))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_84))
							{
								HUD::REMOVE_BLIP(&uLocal_84);
							}
							uLocal_83 = func_74(iLocal_77, 0, 145);
						}
					}
					func_45();
					func_42();
					if (!PED::IS_PED_INJURED(iLocal_77))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, Local_75, 0, 1, 0))
						{
							if (!bLocal_92)
							{
								func_41();
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_83))
						{
							HUD::REMOVE_BLIP(&uLocal_83);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_84))
						{
							HUD::REMOVE_BLIP(&uLocal_84);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_85))
						{
							HUD::REMOVE_BLIP(&uLocal_85);
						}
						if (PED::IS_PED_INJURED(iLocal_77) || ENTITY::IS_ENTITY_DEAD(iLocal_79))
						{
							func_88();
						}
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_85))
						{
							HUD::REMOVE_BLIP(&uLocal_85);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_79) && !HUD::DOES_BLIP_EXIST(uLocal_84))
							{
								uLocal_84 = func_89(iLocal_79, 0, 0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, 0))
				{
					if (iLocal_102 >= 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_85))
							{
								HUD::REMOVE_BLIP(&uLocal_85);
								if (!PED::IS_PED_INJURED(iLocal_77) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0) && !HUD::DOES_BLIP_EXIST(uLocal_84))
									{
										uLocal_84 = func_89(iLocal_79, 0, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_77) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0) && HUD::DOES_BLIP_EXIST(uLocal_84))
							{
								HUD::REMOVE_BLIP(&uLocal_84);
								if (!HUD::DOES_BLIP_EXIST(uLocal_85))
								{
									uLocal_85 = func_89(iLocal_80, 0, 0);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_77))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							iLocal_96 = 0;
							while (iLocal_96 < 11)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[iLocal_96]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[iLocal_96], 0);
								}
								iLocal_96++;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_79))
					{
						iLocal_96 = 0;
						while (iLocal_96 < 11)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[iLocal_96]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[iLocal_96], 0);
							}
							iLocal_96++;
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
						if (!PED::IS_PED_INJURED(iLocal_77))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_77, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_77, 116, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_77, 29, 0);
								if (!bLocal_94)
								{
									func_39();
									SYSTEM::WAIT(0);
									func_23(&uLocal_107, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_22())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_94 = true;
								}
								if (!PED::IS_PED_INJURED(iLocal_77))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_77, 99);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
									ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_79, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									VEHICLE::EXPLODE_VEHICLE(iLocal_79, 1, 0);
								}
								func_88();
							}
						}
					}
				}
			}
			break;
	}
}

int func_22()//Position - 0x1490
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x14B2
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)//Position - 0x1500
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_35();
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
				func_28();
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
				if (func_27())
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
			if (func_9())
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
			func_26();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_25();
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
		func_37();
	}
	return 0;
}

void func_25()//Position - 0x17CC
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

void func_26()//Position - 0x17FD
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

int func_27()//Position - 0x1892
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

void func_28()//Position - 0x192B
{
	if (func_34(14))
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
		Global_3839 = func_29();
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

int func_29()//Position - 0x19CC
{
	func_30();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_30()//Position - 0x19E5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_34(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_31(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_31(int iParam0)//Position - 0x1AE2
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x1AEE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x1B2B
{
	if (func_31(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0x1B55
{
	return Global_8861 == iParam0;
}

void func_35()//Position - 0x1B63
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

bool func_36(int iParam0, int iParam1)//Position - 0x1BBA
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

void func_37()//Position - 0x1BF5
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1C4C
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

void func_39()//Position - 0x1CA2
{
	Global_38DE = 0;
	func_40();
}

void func_40()//Position - 0x1CB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_41()//Position - 0x1CD3
{
	switch (iLocal_102)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_100) > 3000)
				{
					func_23(&uLocal_107, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_102 = 2;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_100) > 3000)
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_102++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_100) > 5000 && !func_22())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_105 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_85))
									{
										uLocal_85 = func_89(iLocal_80, 0, 0);
										if (HUD::DOES_BLIP_EXIST(uLocal_84))
										{
											HUD::REMOVE_BLIP(&uLocal_84);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(uLocal_85))
							{
								uLocal_85 = func_89(iLocal_80, 0, 0);
								if (HUD::DOES_BLIP_EXIST(uLocal_84))
								{
									HUD::REMOVE_BLIP(&uLocal_84);
								}
							}
						}
					}
					if (iLocal_105 == joaat("bulldozer"))
					{
						func_23(&uLocal_107, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_23(&uLocal_107, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_102++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_100) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!func_22())
				{
					func_23(&uLocal_107, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_100 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

void func_42()//Position - 0x1EA9
{
	switch (iLocal_98)
	{
		case 0:
			GRAPHICS::ADD_PETROL_DECAL(Local_273 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_272, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_272 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_272 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_273, 1f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_104 = MISC::GET_GAME_TIMER();
			iLocal_98 = 2;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > iLocal_72 || func_44())
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_278))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_278, 0);
				}
				func_43();
				if (!bLocal_94)
				{
					if (!PED::IS_PED_INJURED(iLocal_77) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
					{
						if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_77, iLocal_79, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_77, iLocal_79, 0, 0, 0))
						{
							func_39();
							SYSTEM::WAIT(0);
							func_23(&uLocal_107, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_94 = true;
						}
					}
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(80f);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_277);
				SYSTEM::SETTIMERA(0);
				iLocal_98 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_79))
				{
				}
			}
			if (iLocal_97 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_79, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_79, 1, 0);
					}
				}
			}
			break;
	}
}

void func_43()//Position - 0x2088
{
	iLocal_45 = 1;
}

int func_44()//Position - 0x2093
{
	if (iLocal_60 == 1)
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x20A6
{
	struct<3> Var0;
	
	switch (iLocal_97)
	{
		case 0:
			if (iLocal_102 >= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_77) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0))
					{
						iLocal_97++;
					}
					OBJECT::DELETE_OBJECT(&iLocal_89);
					if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_77, iLocal_79, -1, 0, 0) || VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_77, iLocal_79, 0, 0, 0))
					{
						if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_77, iLocal_79, -1, 0, 0))
						{
							bLocal_93 = true;
							Local_76 = { ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_76 = { ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_76, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_92)
							{
								func_39();
								SYSTEM::WAIT(0);
								func_23(&uLocal_107, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_92 = true;
							}
						}
						else
						{
							bLocal_92 = true;
							iLocal_97++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_77) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_80))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_80, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_77, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
				if (bLocal_93)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_77, uLocal_106);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
				PED::SET_PED_KEEP_TASK(iLocal_77, 1);
				iLocal_100 = MISC::GET_GAME_TIMER();
				iLocal_97++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_100) > 500 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_77, 0))
				{
					iLocal_72 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
					{
					}
					func_39();
					SYSTEM::WAIT(0);
					func_23(&uLocal_107, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_97++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_77, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_100) > 10000)
				{
					func_23(&uLocal_107, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_97++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_77, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_100) > 10000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_79, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_79, 1, 0);
					}
					iLocal_97++;
				}
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_100) > 3000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_79, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::EXPLODE_VEHICLE(iLocal_79, 1, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_77))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RE14A_SAFE");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_80))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_80, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_77, 0, 0, 0, 0, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_77, 1);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_77, 1);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_77, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_77, 0);
					EVENT::SET_DECISION_MAKER(iLocal_77, joaat("DEFAULT"));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
					TASK::TASK_PLAY_ANIM(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_106, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_77, uLocal_106);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_277);
				iLocal_100 = MISC::GET_GAME_TIMER();
				iLocal_97++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_100) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_82))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_82, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_80, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_106);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_106);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_77, uLocal_106);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_106);
					func_23(&uLocal_107, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_46();
				}
			}
			else
			{
				func_88();
			}
			break;
	}
}

void func_46()//Position - 0x26A7
{
	while (!func_73())
	{
		SYSTEM::WAIT(0);
	}
	func_69(func_29(), 4, 2);
	func_50(-1, 0);
	func_47();
	iLocal_69 = 2;
}

void func_47()//Position - 0x26D7
{
	func_48();
}

int func_48()//Position - 0x26E4
{
	if (func_49(0))
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

bool func_49(bool bParam0)//Position - 0x272F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_50(int iParam0, int iParam1)//Position - 0x275A
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_66(iParam0))
	{
		func_65(iParam0, iParam1);
		if (!func_64(51))
		{
			func_60("RE_REWARD", 1, 0, 4000, 10000, func_63(), 0, 138, 0);
			func_59(51);
		}
		if (func_58(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_52(func_57(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_51(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_51(7);
			}
			else
			{
				func_51(1);
			}
		}
	}
}

void func_51(int iParam0)//Position - 0x285E
{
	Global_17C3B = iParam0;
}

void func_52(int iParam0, var uParam1, var uParam2)//Position - 0x286C
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
		func_56((891 + iParam0), 1, -1, 1);
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
		func_53();
	}
}

void func_53()//Position - 0x2954
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
		func_55(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_54() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()//Position - 0x2E15
{
	return Global_5F7C;
}

int func_55(int iParam0, int iParam1)//Position - 0x2E20
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

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E71
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
		iParam2 = func_7();
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

int func_57(int iParam0, int iParam1)//Position - 0x30CE
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

int func_58(int iParam0)//Position - 0x3442
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

void func_59(int iParam0)//Position - 0x3471
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

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x34B3
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x34D4
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
		func_62();
	}
}

void func_62()//Position - 0x36A7
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

int func_63()//Position - 0x37C7
{
	func_30();
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

int func_64(int iParam0)//Position - 0x380D
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

void func_65(int iParam0, int iParam1)//Position - 0x3850
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_66(int iParam0)//Position - 0x386B
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

int func_67()//Position - 0x391C
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_68(Var0);
	return uVar1;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3939
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

void func_69(int iParam0, int iParam1, int iParam2)//Position - 0x3B13
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
				iVar0 = func_72(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_70(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C02
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)//Position - 0x3C2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x3C61
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73()//Position - 0x3C93
{
	return 1;
}

var func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x3C9C
{
	var uVar0;
	
	uVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CEE
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x3D92
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77(int iParam0)//Position - 0x3DA9
{
	if (func_81())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_58(Global_17C3E))
		{
			func_78(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_58(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x3DFC
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_79(func_80(iParam0), -1);
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
					func_79(func_80(iParam0), -1);
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
					func_79(func_80(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

void func_79(var uParam0, int iParam1)//Position - 0x3EDD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_80(int iParam0)//Position - 0x3EF4
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

int func_81()//Position - 0x3F37
{
	switch (func_82(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_82(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3F6D
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
		if (func_86(0))
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
		if (!func_84(iParam2))
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
			func_83(uParam0, iParam4);
		}
	}
	return 2;
}

void func_83(var uParam0, int iParam1)//Position - 0x40A5
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

bool func_84(int iParam0)//Position - 0x40F4
{
	return func_85(iParam0, Global_8861);
}

int func_85(int iParam0, int iParam1)//Position - 0x4105
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

int func_86(int iParam0)//Position - 0x42E6
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4308
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

void func_88()//Position - 0x43E8
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_69 = 2;
}

int func_89(int iParam0, bool bParam1, bool bParam2)//Position - 0x43FC
{
	return func_75(iParam0, !bParam1, bParam2);
}

void func_90()//Position - 0x440F
{
	if (func_92(1000))
	{
		func_39();
		CAM::DO_SCREEN_FADE_OUT(800);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
		{
			VEHICLE::SET_VEHICLE_DAMAGE(iLocal_79, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_281 = true;
		iLocal_71 = 8;
	}
	switch (iLocal_71)
	{
		case 0:
			func_2(1, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			HUD::CLEAR_ALL_HELP_MESSAGES();
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
			}
			MISC::CLEAR_AREA_OF_PEDS(Local_74, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_74, 30f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_74, 100f, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_74, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_81 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_81, 1, 0);
					VEHICLE::DELETE_VEHICLE(&iLocal_81);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 237.4839f);
			}
			uLocal_275 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			CAM::SHAKE_CAM(uLocal_275, "HAND_SHAKE", 0.3f);
			CAM::SHAKE_CAM(uLocal_276, "HAND_SHAKE", 0.3f);
			func_91();
			CAM::SET_CAM_ACTIVE(uLocal_275, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			SYSTEM::WAIT(500);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_276, uLocal_275, 3500, 1, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_START");
			iLocal_103 = MISC::GET_GAME_TIMER();
			iLocal_71 = 1;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_99, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uLocal_87[0], 1);
				uLocal_275 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				CAM::SHAKE_CAM(uLocal_275, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_276, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_276, uLocal_275, 4000, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_77))
				{
					TASK::CLEAR_PED_TASKS(iLocal_77);
					TASK::TASK_LOOK_AT_COORD(iLocal_77, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
				{
					ENTITY::DETACH_ENTITY(iLocal_89, 1, 1);
					OBJECT::DELETE_OBJECT(&iLocal_89);
				}
				iLocal_103 = MISC::GET_GAME_TIMER();
				iLocal_71 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_103 = MISC::GET_GAME_TIMER();
				iLocal_71 = 3;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 500)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[0], 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_87[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 11, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 18, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 19, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 23, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 9, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 12, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_87[0], 17, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipefall_debris", uLocal_87[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_103 = MISC::GET_GAME_TIMER();
				iLocal_71 = 4;
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 2000)
			{
				uLocal_275 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				CAM::SHAKE_CAM(uLocal_275, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_276, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_276, uLocal_275, 1000, 3, 3);
				AUDIO::STOP_SOUND(iLocal_99);
				iLocal_103 = MISC::GET_GAME_TIMER();
				iLocal_71 = 5;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_79, 0f, 1f, 1f, 200f, 800f, 1);
					if (!PED::IS_PED_INJURED(iLocal_77))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_77);
					}
					TASK::TASK_PLAY_ANIM(iLocal_77, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipe_impact", iLocal_79, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_23(&uLocal_107, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_275) && CAM::DOES_CAM_EXIST(uLocal_276))
					{
						CAM::SHAKE_CAM(uLocal_275, "HAND_SHAKE", 1.5f);
						CAM::SHAKE_CAM(uLocal_276, "HAND_SHAKE", 1.5f);
					}
					iLocal_103 = MISC::GET_GAME_TIMER();
					iLocal_71 = 6;
				}
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 500)
			{
				uLocal_275 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				CAM::SHAKE_CAM(uLocal_275, "HAND_SHAKE", 0.5f);
				CAM::SHAKE_CAM(uLocal_276, "HAND_SHAKE", 0.5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_276, uLocal_275, 2500, 3, 3);
				if (!PED::IS_PED_INJURED(iLocal_77))
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_77, ENTITY::GET_ENTITY_COORDS(iLocal_77, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_103 = MISC::GET_GAME_TIMER();
				iLocal_71 = 7;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 2200 && !iLocal_95)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_95 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 2500)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 1);
				}
				iLocal_71 = 8;
			}
			break;
		
		case 8:
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_PIPES");
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[0]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_87[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_79, 250f);
				ENTITY::SET_ENTITY_COORDS(iLocal_79, Local_74, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_79, 80f);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_74, 50f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				TASK::CLEAR_PED_TASKS(iLocal_77);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_77);
				TASK::TASK_PLAY_ANIM(iLocal_77, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			CAM::SET_CAM_ACTIVE(uLocal_275, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uLocal_275, 0);
			CAM::DESTROY_CAM(uLocal_276, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			func_2(0, 1, 1, 0);
			iLocal_100 = MISC::GET_GAME_TIMER();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pipe_stack_01"));
			uLocal_87[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_87[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_87[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_87[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_87[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_87[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_87[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_87[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_87[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_87[10] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_87[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_96 = 0;
			while (iLocal_96 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[iLocal_96]))
				{
					ENTITY::SET_ENTITY_DYNAMIC(uLocal_87[iLocal_96], 1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[iLocal_96], 1);
				}
				iLocal_96++;
			}
			if (bLocal_281)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
			}
			iLocal_91 = 1;
			iLocal_90 = 0;
			break;
	}
}

void func_91()//Position - 0x4F26
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_412C = 0;
}

int func_92(int iParam0)//Position - 0x4F36
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_1B) > iParam0)
		{
			Global_1A = MISC::GET_GAME_TIMER();
		}
		Global_1B = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_1A) > iParam0)
		{
			if (func_93())
			{
				Global_1A = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_93()//Position - 0x4F80
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

int func_94(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4FB2
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_412D = 1;
	Global_4131 = 0;
	Global_412F = iParam7;
	Global_280001 = 0;
	return func_24(sParam2, iParam3, 0);
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5005
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

int func_96(var uParam0)//Position - 0x50A0
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_97(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_97(var uParam0)//Position - 0x5102
{
	return func_98(*uParam0, "NULL", uParam0->f_1);
}

int func_98(var uParam0, char* sParam1, int iParam2)//Position - 0x5117
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (func_99(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27));
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

int func_99(var uParam0)//Position - 0x520A
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

void func_100(var uParam0)//Position - 0x5236
{
	func_101(uParam0, 9, -1, 0);
}

void func_101(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5248
{
	int iVar0;
	
	if (!func_102(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_102(int iParam0)//Position - 0x530B
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_103(var uParam0, int iParam1)//Position - 0x53AA
{
	func_101(uParam0, 0, iParam1, 0);
}

void func_104(var uParam0)//Position - 0x53BC
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_20 + uParam0->f_21) || MISC::IS_BIT_SET(Global_15F6A.f_14, 2)) || MISC::IS_BIT_SET(Global_15F6A.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_105(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_105(var uParam0)//Position - 0x5446
{
	func_106(uParam0, "NULL", uParam0->f_1);
}

void func_106(var uParam0, char* sParam1, int iParam2)//Position - 0x545A
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_99(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
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

void func_107()//Position - 0x5533
{
	int iVar0;
	
	func_103(&Local_282, joaat("bulldozer"));
	func_103(&Local_282, joaat("utillitruck2"));
	func_103(&Local_282, joaat("prop_pipe_stack_01"));
	if (func_96(&Local_282))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_73 + Vector(50f, 50f, 50f), Local_73 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_74 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_79 = VEHICLE::CREATE_VEHICLE(joaat("utillitruck2"), Local_74, 80f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_79, 0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_79, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 1, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 2, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 3, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 4, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 5, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 6, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_79, 7, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_79, 0, 0, 0, 1, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_79, 10000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_79, 5f);
		iLocal_80 = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		MISC::CLEAR_AREA(Local_74, 10f, 1, 0, 0, 0);
		uLocal_87[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_87[0], 90f);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[0], 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_87[0], 1, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(uLocal_87[0], 10000000);
		Local_67[0 /*5*/] = { Local_273 };
		Local_67[1 /*5*/] = { Local_273 + Vector(0f, 0.5f, 0f) };
		Local_67[2 /*5*/] = { Local_273 + Vector(0f, 1f, 0f) };
		Local_67[3 /*5*/] = { Local_273 + Vector(0f, 2.5f, 0f) };
		Local_67[4 /*5*/] = { Local_273 + Vector(0f, 3f, 0f) };
		Local_67[5 /*5*/] = { Local_273 + Vector(0f, 3.5f, 0f) };
		Local_67[6 /*5*/] = { Local_273 + Vector(0f, 4f, 0f) };
		Local_67[7 /*5*/] = { Local_273 + Vector(0f, 4.5f, 0f) };
		Local_67[8 /*5*/] = { Local_273 + Vector(0f, 5f, 0f) };
		Local_67[9 /*5*/] = { Local_273 + Vector(0f, 5.5f, 0f) };
		Local_67[10 /*5*/] = { Local_273 + Vector(0f, 6f, 0f) };
		Local_67[11 /*5*/] = { Local_273 + Vector(0f, 6.5f, 0f) };
		Local_67[12 /*5*/] = { Local_273 + Vector(0f, 7f, 0f) };
		Local_67[13 /*5*/] = { Local_272 };
		iVar0 = 0;
		while (iVar0 < Local_67)
		{
			Local_67[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_86))
		{
		}
		func_108(&Local_282, 0);
		iLocal_279 = 1;
		iLocal_69 = 1;
	}
}

void func_108(var uParam0, bool bParam1)//Position - 0x5816
{
	int iVar0;
	
	if (!bParam1)
	{
		func_110(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_109(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = -1;
	uParam0->f_21 = 1;
}

void func_109(var uParam0)//Position - 0x5856
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_110(var uParam0)//Position - 0x5867
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_111(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_111(var uParam0)//Position - 0x58A0
{
	func_112(*uParam0, "NULL", uParam0->f_1);
}

void func_112(var uParam0, char* sParam1, int iParam2)//Position - 0x58B5
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_99(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
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

int func_113()//Position - 0x5975
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_120())
	{
		return 1;
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_114(float fParam0, bool bParam1)//Position - 0x59FB
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
		if (func_31(func_29()))
		{
			iVar5 = func_63();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_115(iVar1, &Var0);
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

void func_115(int iParam0, var uParam1)//Position - 0x5AB2
{
	switch (iParam0)
	{
		case 0:
			func_116(uParam1, "Abigail1", func_118(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 1:
			func_116(uParam1, "Abigail2", func_118(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 2:
			func_116(uParam1, "Barry1", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 3:
			func_116(uParam1, "Barry2", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 4:
			func_116(uParam1, "Barry3", func_118(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 5:
			func_116(uParam1, "Barry3A", func_118(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 6:
			func_116(uParam1, "Barry3C", func_118(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 7:
			func_116(uParam1, "Barry4", func_118(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
			break;
		
		case 8:
			func_116(uParam1, "Dreyfuss1", func_118(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 9:
			func_116(uParam1, "Epsilon1", func_118(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 10:
			func_116(uParam1, "Epsilon2", func_118(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 11:
			func_116(uParam1, "Epsilon3", func_118(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 12:
			func_116(uParam1, "Epsilon4", func_118(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 13:
			func_116(uParam1, "Epsilon5", func_118(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 14:
			func_116(uParam1, "Epsilon6", func_118(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 15:
			func_116(uParam1, "Epsilon7", func_118(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 16:
			func_116(uParam1, "Epsilon8", func_118(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 17:
			func_116(uParam1, "Extreme1", func_118(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 18:
			func_116(uParam1, "Extreme2", func_118(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 19:
			func_116(uParam1, "Extreme3", func_118(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 20:
			func_116(uParam1, "Extreme4", func_118(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 21:
			func_116(uParam1, "Fanatic1", func_118(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 22:
			func_116(uParam1, "Fanatic2", func_118(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 23:
			func_116(uParam1, "Fanatic3", func_118(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
			break;
		
		case 24:
			func_116(uParam1, "Hao1", func_118(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
			break;
		
		case 25:
			func_116(uParam1, "Hunting1", func_118(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 26:
			func_116(uParam1, "Hunting2", func_118(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 27:
			func_116(uParam1, "Josh1", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 28:
			func_116(uParam1, "Josh2", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 29:
			func_116(uParam1, "Josh3", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 30:
			func_116(uParam1, "Josh4", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 31:
			func_116(uParam1, "Maude1", func_118(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 32:
			func_116(uParam1, "Minute1", func_118(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 33:
			func_116(uParam1, "Minute2", func_118(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 34:
			func_116(uParam1, "Minute3", func_118(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 35:
			func_116(uParam1, "MrsPhilips1", func_118(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 36:
			func_116(uParam1, "MrsPhilips2", func_118(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 37:
			func_116(uParam1, "Nigel1", func_118(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 38:
			func_116(uParam1, "Nigel1A", func_118(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 39:
			func_116(uParam1, "Nigel1B", func_118(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 40:
			func_116(uParam1, "Nigel1C", func_118(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 41:
			func_116(uParam1, "Nigel1D", func_118(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 42:
			func_116(uParam1, "Nigel2", func_118(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 43:
			func_116(uParam1, "Nigel3", func_118(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 44:
			func_116(uParam1, "Omega1", func_118(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 45:
			func_116(uParam1, "Omega2", func_118(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 46:
			func_116(uParam1, "Paparazzo1", func_118(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 47:
			func_116(uParam1, "Paparazzo2", func_118(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 48:
			func_116(uParam1, "Paparazzo3", func_118(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 49:
			func_116(uParam1, "Paparazzo3A", func_118(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 50:
			func_116(uParam1, "Paparazzo3B", func_118(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 51:
			func_116(uParam1, "Paparazzo4", func_118(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 52:
			func_116(uParam1, "Rampage1", func_118(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 54:
			func_116(uParam1, "Rampage3", func_118(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 55:
			func_116(uParam1, "Rampage4", func_118(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 56:
			func_116(uParam1, "Rampage5", func_118(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 53:
			func_116(uParam1, "Rampage2", func_118(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 57:
			func_116(uParam1, "TheLastOne", func_118(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 58:
			func_116(uParam1, "Tonya1", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 59:
			func_116(uParam1, "Tonya2", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 60:
			func_116(uParam1, "Tonya3", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 61:
			func_116(uParam1, "Tonya4", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 62:
			func_116(uParam1, "Tonya5", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_116(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x6C67
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

int func_117(int iParam0)//Position - 0x6CF8
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

struct<2> func_118(int iParam0)//Position - 0x703E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_119(iParam0) };
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

struct<2> func_119(int iParam0)//Position - 0x7075
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

int func_120()//Position - 0x74C1
{
	if (func_123() && !func_124())
	{
		return 1;
	}
	if (func_122() && func_121())
	{
		return 1;
	}
	return 0;
}

bool func_121()//Position - 0x74F3
{
	return Global_17B2F > 0;
}

int func_122()//Position - 0x7501
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x7516
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_124()//Position - 0x753C
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

int func_125()//Position - 0x7559
{
	if (!func_84(5))
	{
		return 1;
	}
	if (func_120())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0x75BB
{
	if ((Global_17C3E == func_67() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)//Position - 0x75E6
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_129(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_128();
}

void func_128()//Position - 0x761C
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

void func_129(int iParam0)//Position - 0x7659
{
	Global_17C3E = iParam0;
}

int func_130(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7667
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
		iParam1 = func_67();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_171())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_49(0))
		{
			return 0;
		}
		if (func_120())
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_114(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_169(iParam1))
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_168(func_29()) == 4 || func_168(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_29()))
		{
			if (!func_167(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_166(Global_17C49.f_6E20.f_2B[iParam1]))
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
		if (func_165())
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
		if (!func_156(4))
		{
			return 0;
		}
		if (!func_84(5))
		{
			return 0;
		}
		if (func_155(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_155(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_169(30) && !func_155(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_29()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_154(iVar4))
				{
					if (func_132(iVar2))
					{
						if (!func_131(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_29() != iVar2)
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

bool func_131(struct<3> Param0, struct<3> Param1)//Position - 0x7A00
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_132(int iParam0)//Position - 0x7A29
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_133(iVar0);
}

int func_133(int iParam0)//Position - 0x7A4A
{
	return func_134(iParam0, 1);
}

int func_134(int iParam0, int iParam1)//Position - 0x7A59
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_154(iParam0))
	{
		return 0;
	}
	func_135(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7AAC
{
	func_136(func_147(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_136(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7ACA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_146(iParam0, iParam1))
	{
		iVar0 = func_145(iParam1);
		iVar1 = func_143(iParam0);
		iVar2 = (func_143(iParam0) - func_143(iParam1));
		iVar3 = (func_145(iParam0) - func_145(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_141(iParam0) - func_141(iParam1));
		iVar6 = (func_140(iParam0) - func_140(iParam1));
		iVar7 = (func_139(iParam0) - func_139(iParam1));
	}
	else
	{
		iVar0 = func_145(iParam0);
		iVar1 = func_143(iParam1);
		iVar2 = (func_143(iParam1) - func_143(iParam0));
		iVar3 = (func_145(iParam1) - func_145(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_141(iParam1) - func_141(iParam0));
		iVar6 = (func_140(iParam1) - func_140(iParam0));
		iVar7 = (func_139(iParam1) - func_139(iParam0));
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
		iVar4 = (iVar4 + func_138(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_137(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_137(float fParam0, float fParam1, float fParam2)//Position - 0x7CCB
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

int func_138(int iParam0, int iParam1)//Position - 0x7D0D
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

int func_139(int iParam0)//Position - 0x7DAF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_140(int iParam0)//Position - 0x7DC2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_141(int iParam0)//Position - 0x7DD5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_142(int iParam0)//Position - 0x7DE8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_143(int iParam0)//Position - 0x7DFA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_144(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_144(bool bParam0, int iParam1, int iParam2)//Position - 0x7E1F
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_145(int iParam0)//Position - 0x7E36
{
	return iParam0 & 15;
}

int func_146(int iParam0, int iParam1)//Position - 0x7E43
{
	int iVar0;
	int iVar1;
	
	if (!func_154(iParam1) || !func_154(iParam0))
	{
		return 1;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_147()//Position - 0x7F4F
{
	var uVar0;
	
	func_153(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_152(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_151(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_150(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_149(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_148(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_148(var uParam0, int iParam1)//Position - 0x7F95
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

void func_149(var uParam0, int iParam1)//Position - 0x801D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)//Position - 0x8050
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_143(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_151(var uParam0, int iParam1)//Position - 0x80A1
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_152(var uParam0, int iParam1)//Position - 0x80DB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_153(var uParam0, int iParam1)//Position - 0x8116
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_154(int iParam0)//Position - 0x8152
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
	iVar0 = func_139(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_141(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_143(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_145(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_138(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0, int iParam1)//Position - 0x822E
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x8251
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_29();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_17890) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_164()) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_17890) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_17890) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_164() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_36(8, -1)) || func_159()) || func_158()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_36(8, -1) || func_162()) || func_161()) || func_158()) || func_157())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_164()) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_161()) || func_160()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_164()) || func_161()) || Global_17890) || Global_5F7E) || func_163()) || Global_8C75) || func_36(8, -1)) || func_160()) || func_158()) || func_159()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_164()) || Global_17890) || Global_5F7E) || func_163()) || func_36(8, -1)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

var func_157()//Position - 0x896E
{
	return Global_15F91.f_1;
}

int func_158()//Position - 0x897C
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_159()//Position - 0x89A2
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x89BC
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

bool func_161()//Position - 0x89E6
{
	return Global_15F9E.f_123 > 0;
}

bool func_162()//Position - 0x89F7
{
	return Global_15F9E.f_122 > 0;
}

var func_163()//Position - 0x8A08
{
	return Global_14143C;
}

int func_164()//Position - 0x8A14
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_165()//Position - 0x8A30
{
	func_28();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)//Position - 0x8A58
{
	return func_146(func_147(), iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x8A6A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_29();
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

int func_168(int iParam0)//Position - 0x8B4E
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_169(int iParam0)//Position - 0x8B72
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_171())
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

int func_170()//Position - 0x8BD0
{
	int iVar0;
	
	if (Global_6012)
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()//Position - 0x8C07
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

void func_172()//Position - 0x8C8A
{
	if (iLocal_279)
	{
		if (!iLocal_280)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			func_204();
			if (!PED::IS_PED_INJURED(iLocal_77))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_77, 317, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_82))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_82, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_82, 50f, 50f, 50f, 0, 1, 0))
				{
					func_184(iLocal_82, 0, 145);
				}
			}
			iLocal_96 = 0;
			while (iLocal_96 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_87[iLocal_96]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_87[iLocal_96], 0);
				}
				iLocal_96++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_79, 0f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_88, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			func_2(0, 1, 1, 0);
			iLocal_91 = 1;
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("re@construction");
			if (CAM::DOES_CAM_EXIST(uLocal_274))
			{
				CAM::DESTROY_CAM(uLocal_274, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_83))
			{
				HUD::REMOVE_BLIP(&uLocal_83);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_84))
			{
				HUD::REMOVE_BLIP(&uLocal_84);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_85))
			{
				HUD::REMOVE_BLIP(&uLocal_85);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_86))
			{
				HUD::REMOVE_BLIP(&uLocal_86);
			}
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_108(&Local_282, 0);
	func_173(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_173(int iParam0)//Position - 0x8E72
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_126())
	{
		func_177(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_176(30000);
		StringCopy(&cVar0, func_175(Global_17C3E, 1), 64);
		if (func_66(Global_17C3E) > 0)
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
	func_174(&Global_5FB7);
	Global_17C3F = 0;
	func_129(-1);
}

void func_174(var uParam0)//Position - 0x8F27
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

char* func_175(int iParam0, bool bParam1)//Position - 0x8F64
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

void func_176(int iParam0)//Position - 0x91AD
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_177(int iParam0)//Position - 0x91BF
{
	func_178(iParam0, 0, func_183(iParam0));
}

void func_178(int iParam0, int iParam1, int iParam2)//Position - 0x91D4
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_147();
	func_181(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_180(iParam0, &uVar0);
	Var1 = { func_179(&uVar0) };
}

struct<16> func_179(var uParam0)//Position - 0x9203
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_141(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_142(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_145(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_143(*uParam0), 64);
	return Var0;
}

void func_180(int iParam0, var uParam1)//Position - 0x92D3
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x92EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_145(*uParam0);
	iVar2 = func_142(*uParam0);
	iVar3 = func_141(*uParam0);
	iVar4 = func_140(*uParam0);
	iVar5 = func_139(*uParam0);
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
	iVar6 = func_138(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_138(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_182(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x946D
{
	func_153(uParam0, iParam1);
	func_152(uParam0, iParam2);
	func_151(uParam0, iParam3);
	func_150(uParam0, iParam4);
	func_149(uParam0, iParam5);
	func_148(uParam0, iParam6);
}

int func_183(int iParam0)//Position - 0x94A5
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

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0x9648
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			if (MISC::GET_HASH_KEY(uVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_185(iParam0, iParam2);
	return 1;
}

void func_185(int iParam0, int iParam1)//Position - 0x9688
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_190(iParam0))
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
	func_186(iParam0, &(Global_17C49.f_47C3.f_1286));
}

void func_186(int iParam0, var uParam1)//Position - 0x9889
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_189(uParam1);
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
		func_188(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_187(iVar0 + 1));
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

int func_187(int iParam0)//Position - 0x9B35
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

int func_188(int iParam0, var uParam1, var uParam2)//Position - 0x9BE5
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

void func_189(var uParam0)//Position - 0x9CBF
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

int func_190(int iParam0)//Position - 0x9D6F
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_202(iParam0, 0, 0)) || func_202(iParam0, 1, 0)) || func_202(iParam0, 2, 0)) || func_201(iParam0) != 145) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0)) || func_197(iParam0)) || !func_191(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_199(iParam0))
		{
		}
		if (func_199(iParam0))
		{
		}
		if (func_202(iParam0, 0, 0))
		{
		}
		if (func_202(iParam0, 1, 0))
		{
		}
		if (func_202(iParam0, 2, 0))
		{
		}
		if (func_201(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_191(int iParam0)//Position - 0x9E4C
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_192(iParam0))
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

int func_192(int iParam0)//Position - 0x9FFC
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
		if (!func_171())
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
		if ((((!func_196() && !func_195()) && !func_194()) && !func_193()) && !func_171())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_194())
		{
			return 0;
		}
	}
	return 1;
}

int func_193()//Position - 0xA1CB
{
	return 0;
}

int func_194()//Position - 0xA1D4
{
	return 1;
}

int func_195()//Position - 0xA1DD
{
	return 1;
}

int func_196()//Position - 0xA1E6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xA1FF
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_192(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xA244
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

int func_199(int iParam0)//Position - 0xA27F
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

int func_200(int iParam0)//Position - 0xA2FB
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

int func_201(int iParam0)//Position - 0xA3E3
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

int func_202(int iParam0, int iParam1, bool bParam2)//Position - 0xA446
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_203(iParam1, iVar0, &sVar1, &iVar2))
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

int func_203(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xA4B7
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

void func_204()//Position - 0xA58F
{
	Global_38DE = 0;
	func_205();
}

void func_205()//Position - 0xA59F
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

