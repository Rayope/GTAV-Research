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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	struct<3> Local_50[2];
	float fLocal_51[2] = { 0f, 0f };
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88[2] = { 0, 0 };
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 16;
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
	int iVar0;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_44 = -1f;
	StringCopy(&Local_61, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
			}
		}
		func_203();
	}
	if (func_161(ScriptParam_284.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_158(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_75) || iLocal_102)
		{
			if (!func_157())
			{
				if (func_156())
				{
					func_203();
				}
			}
			RECORDING::_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_45)
			{
				case 0:
					if (func_144())
					{
						func_203();
					}
					if (!iLocal_70)
					{
						func_143();
					}
					else
					{
						func_142();
					}
					if (bLocal_71)
					{
						iLocal_69 = 1;
						iLocal_45 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_46)
						{
							case 0:
								func_132();
								iLocal_46 = 1;
								break;
							
							case 1:
								if (!func_131())
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_58, 75f, 75f, 75f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_57)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_157())
										{
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, -1, 0, 2);
											PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
											func_130();
											func_121(1);
										}
										bLocal_78 = true;
									}
									if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_130();
											bLocal_78 = true;
										}
									}
									if (bLocal_78)
									{
										func_115();
									}
									if (!PED::IS_PED_INJURED(iLocal_57) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_52, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_57, uLocal_52, 0))
										{
											iLocal_102 = 1;
										}
									}
									if (bLocal_103)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_52, 0))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_52, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_46 = 9;
											}
										}
									}
								}
								if (func_114())
								{
									func_130();
									iLocal_46 = 3;
								}
								else if (func_131())
								{
									func_130();
									func_112();
									iLocal_46 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_97)
								{
									case 0:
										iLocal_46 = 3;
										break;
									
									case 1:
										iLocal_46 = 3;
										break;
									
									case 3:
										iLocal_46 = 3;
										break;
									
									case 4:
										iLocal_46 = 3;
										break;
									
									case 5:
										if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
										{
											iLocal_105 = 1;
											iLocal_48 = 9;
										}
										else
										{
											iLocal_48 = 13;
										}
										iLocal_46 = 1;
										break;
								}
								if (func_131())
								{
									switch (iLocal_47)
									{
										case 2:
											func_111();
											break;
										
										case 4:
											func_110();
											break;
										
										case 5:
											func_109();
											break;
										}
								}
								break;
							
							case 3:
								func_106();
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(iLocal_57))
								{
									AUDIO::PLAY_PAIN(iLocal_57, 3, 0, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
									{
										if (!iLocal_84)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "idle_girl", 3) && !PED::IS_PED_RAGDOLL(iLocal_57))
											{
												PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_57, 16);
												TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_101);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
												iLocal_84 = 1;
											}
											else
											{
												TASK::TASK_COWER(iLocal_57, -1);
												iLocal_84 = 1;
											}
										}
										else if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "idle_girl", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "knees_loop_girl", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 474215631) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 474215631) != 1)
										{
											iLocal_84 = 0;
										}
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, 0))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_87))
											{
												HUD::REMOVE_BLIP(&uLocal_87);
											}
										}
									}
								}
								else
								{
									func_105();
								}
								if (!func_104())
								{
									if (iLocal_94 < MISC::GET_GAME_TIMER())
									{
										if (func_103())
										{
											if (!PED::IS_PED_INJURED(iLocal_49[0]))
											{
												func_102(&uLocal_119, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!PED::IS_PED_INJURED(iLocal_49[1]))
										{
											func_102(&uLocal_119, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_94 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
									}
								}
								if (PED::IS_PED_INJURED(iLocal_49[0]))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_88[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_88[0]));
									}
									func_101(&uLocal_119, 5);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_49[0], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_88[0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_88[0]));
								}
								if (PED::IS_PED_INJURED(iLocal_49[1]))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_88[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_88[1]));
									}
									func_101(&uLocal_119, 4);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_88[1]))
								{
									HUD::REMOVE_BLIP(&(uLocal_88[1]));
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
								{
									if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_49[0], joaat("weapon_stungun"), 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_49[1], joaat("weapon_stungun"), 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_49[0], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_49[1], 1))) || func_100())
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_88[0]))
										{
											HUD::REMOVE_BLIP(&(uLocal_88[0]));
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_88[1]))
										{
											HUD::REMOVE_BLIP(&(uLocal_88[1]));
										}
										if (!PED::IS_PED_INJURED(iLocal_57))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_104())
												{
													func_102(&uLocal_119, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_63 = false;
													iLocal_75 = 1;
													PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_57, 16);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_57);
													iLocal_46 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_63)
								{
									if (!PED::IS_PED_INJURED(iLocal_57))
									{
										if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "idle_to_knees_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "knees_loop_girl", 1)) && !PED::IS_PED_RAGDOLL(iLocal_57))
										{
											TASK::TASK_PLAY_ANIM(iLocal_57, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iLocal_57);
										}
										PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, func_99());
										PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_57, 1);
										func_98();
										bLocal_63 = true;
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_57))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_57, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_57);
										}
									}
								}
								if (!iLocal_65)
								{
									if (!func_104())
									{
										if (func_102(&uLocal_119, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_65 = 1;
										}
									}
								}
								else if (!iLocal_64)
								{
									if (!func_104())
									{
										if (func_97() == 0)
										{
											func_102(&uLocal_119, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_97() == 1)
										{
											func_102(&uLocal_119, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_64 = 1;
									}
								}
								if (bLocal_63)
								{
									if (!PED::IS_PED_INJURED(iLocal_57))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_87))
											{
												HUD::REMOVE_BLIP(&uLocal_87);
											}
										}
										else if (!HUD::DOES_BLIP_EXIST(uLocal_87))
										{
											uLocal_87 = func_95(iLocal_57, 0, 145);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_49[0]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_49[0], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_49[1]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (iLocal_64 && func_94())
								{
									if (!func_104())
									{
										func_92();
										SYSTEM::WAIT(0);
										func_102(&uLocal_119, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[1]));
										if (!PED::IS_PED_INJURED(iLocal_57))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_57))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_49)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
													{
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[iVar0]));
													}
													iVar0++;
												}
												PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
												iLocal_46 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_86();
								func_81();
								func_80();
								func_77();
								func_76();
								if (func_75(Local_66))
								{
									func_61(0);
									func_92();
									SYSTEM::WAIT(0);
									func_102(&uLocal_119, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_59())
								{
									func_61(0);
									func_92();
									SYSTEM::WAIT(0);
									func_102(&uLocal_119, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_57))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_66, Global_15, 1, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_57))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_87))
											{
												HUD::REMOVE_BLIP(&uLocal_87);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_89))
											{
												HUD::REMOVE_BLIP(&uLocal_89);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_90))
											{
												HUD::REMOVE_BLIP(&uLocal_90);
											}
											if (PED::IS_PED_IN_GROUP(iLocal_57))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_57);
											}
											if (func_94())
											{
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, 0);
												}
												iLocal_46 = 6;
											}
											else
											{
												func_92();
												SYSTEM::WAIT(0);
												func_102(&uLocal_119, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!PED::IS_PED_INJURED(iLocal_57))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
													TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_67, 1f, -1, 0.25f, 0, 38.9844f);
													TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_101);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
													PED::SET_PED_KEEP_TASK(iLocal_57, 1);
												}
												func_34(func_97(), 1, 80, 0, 1);
												iLocal_46 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_105();
								break;
						}
						if (iLocal_115 && !iLocal_116)
						{
							if (iLocal_46 != 6)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_114) > 0.85f)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_57))
											{
												if (!PED::IS_PED_IN_VEHICLE(iLocal_57, iLocal_52, 0))
												{
													if (!PED::IS_PED_RAGDOLL(iLocal_57))
													{
														TASK::CLEAR_PED_TASKS(iLocal_57);
														PED::SET_PED_INTO_VEHICLE(iLocal_57, iLocal_52, 2);
														PED::SET_PED_KEEP_TASK(iLocal_57, 1);
														iLocal_116 = 1;
													}
													else
													{
														iLocal_116 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
							{
								PED::DELETE_PED(&iLocal_57);
							}
							func_4();
						}
						if ((iLocal_46 != 0 && iLocal_46 != 6) && iLocal_46 != 7)
						{
							if (func_1())
							{
								iLocal_46 = 9;
							}
						}
						if (iLocal_46 == 4 || iLocal_46 == 5)
						{
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 150f, 150f, 150f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									func_92();
									func_105();
								}
							}
						}
						if (iLocal_46 < 5)
						{
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						}
						if (PED::IS_PED_INJURED(iLocal_49[0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_88[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_88[0]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_49[1]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_88[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_88[1]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_57))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_87))
							{
								HUD::REMOVE_BLIP(&uLocal_87);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_203();
		}
	}
}

int func_1()//Position - 0xC9C
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_49[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
	{
		if (PED::IS_PED_INJURED(iLocal_49[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (PED::IS_PED_INJURED(iLocal_57))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xD4B
{
	if (Global_6067)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xD63
{
	Global_17C3B = iParam0;
}

void func_4()//Position - 0xD71
{
	while (func_104())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_32())
	{
		SYSTEM::WAIT(0);
	}
	func_8(-1, 0);
	func_5();
	func_203();
}

void func_5()//Position - 0xDA6
{
	func_6();
}

int func_6()//Position - 0xDB3
{
	if (func_7(0))
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

bool func_7(bool bParam0)//Position - 0xDFE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_8(int iParam0, int iParam1)//Position - 0xE29
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_3(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)//Position - 0xF2C
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_10();
	}
}

void func_10()//Position - 0x1014
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
		func_12(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()//Position - 0x14D5
{
	return Global_5F7C;
}

int func_12(int iParam0, int iParam1)//Position - 0x14E0
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1531
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
		iParam2 = func_14();
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

int func_14()//Position - 0x178C
{
	return Global_1407E1;
}

int func_15(int iParam0, int iParam1)//Position - 0x1798
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

int func_16(int iParam0)//Position - 0x1B0C
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

void func_17(int iParam0)//Position - 0x1B3B
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1B7D
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1B9D
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
		func_20();
	}
}

void func_20()//Position - 0x1D6F
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

int func_21()//Position - 0x1E8F
{
	func_22();
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

void func_22()//Position - 0x1ED5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_23(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_24(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_23(int iParam0)//Position - 0x1FD2
{
	return Global_8861 == iParam0;
}

bool func_24(int iParam0)//Position - 0x1FE0
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x1FEC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x2029
{
	if (func_24(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x2053
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

void func_28(int iParam0, int iParam1)//Position - 0x2096
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)//Position - 0x20B1
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

int func_30()//Position - 0x2162
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x217F
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

int func_32()//Position - 0x2359
{
	return 1;
}

void func_33()//Position - 0x2362
{
	switch (iLocal_117)
	{
		case 0:
			func_92();
			SYSTEM::WAIT(0);
			func_102(&uLocal_119, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_117++;
			break;
		
		case 1:
			iLocal_117++;
			break;
		
		case 2:
			iLocal_117++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_67, 1f, -1, 0.25f, 0, 38.9844f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_101);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
				PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			}
			iLocal_117++;
			break;
		
		case 4:
			func_34(func_97(), 1, 80, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2446
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
	func_35(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x252D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_58();
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
					func_57(99, 1);
					func_56(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_56(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_56(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_43(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_42(5))
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
							func_56(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_56(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_56(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_56(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_property"), iParam3);
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
									func_56(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_57(95, iParam3);
					break;
				
				case 1:
					func_57(97, iParam3);
					break;
				
				case 2:
					func_57(96, iParam3);
					break;
			}
			func_57(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
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
					func_56(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_56(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_56(joaat("sp2_total_cash_earned"), iParam3);
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
	func_37(iParam0);
	if (Global_8861 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)//Position - 0x2B2C
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

void func_37(int iParam0)//Position - 0x2DAE
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

void func_38(int iParam0)//Position - 0x2E08
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_40() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_40() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_39(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)//Position - 0x2EC9
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

int func_40()//Position - 0x2F42
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)//Position - 0x2F4F
{
	func_57(93, iParam0);
	func_57(29, iParam0);
	func_57(30, iParam0);
}

bool func_42(int iParam0)//Position - 0x2F6F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_40() /*8053*/].f_167C.f_A, iParam0);
}

int func_43(bool bParam0)//Position - 0x2FAB
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_44(27, 1);
	return 1;
}

int func_44(int iParam0, int iParam1)//Position - 0x3062
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_45(iParam0, iParam1);
}

int func_45(int iParam0, int iParam1)//Position - 0x307D
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_55(&Global_26D4DB))
	{
		if (func_53(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_46(&Global_26D4DB, iParam0))
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

int func_46(var uParam0, int iParam1)//Position - 0x3101
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_47(var uParam0, int iParam1)//Position - 0x3187
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_48(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)//Position - 0x31D7
{
	return (*uParam0)[iParam1] == 61;
}

void func_49(var uParam0)//Position - 0x31E8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_52(uParam0, iVar0);
		iVar0++;
	}
	func_50(&(uParam0->f_3E), (8f - 0.5f));
}

void func_50(var uParam0, float fParam1)//Position - 0x321F
{
	uParam0->f_1 = (func_51(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_51(bool bParam0)//Position - 0x324D
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

void func_52(var uParam0, int iParam1)//Position - 0x3295
{
	(*uParam0)[iParam1] = 61;
}

bool func_53(var uParam0, int iParam1)//Position - 0x32A5
{
	return func_54(uParam0, iParam1) != -1;
}

int func_54(var uParam0, int iParam1)//Position - 0x32B7
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

bool func_55(var uParam0)//Position - 0x32E4
{
	return uParam0->f_44 == 1;
}

void func_56(int iParam0, int iParam1)//Position - 0x32F2
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_57(int iParam0, int iParam1)//Position - 0x3315
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

void func_58()//Position - 0x3372
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

int func_59()//Position - 0x33E7
{
	if (func_97() == 2)
	{
		if (func_60())
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

bool func_60()//Position - 0x3462
{
	return Global_6066;
}

void func_61(bool bParam0)//Position - 0x346D
{
	if (bParam0)
	{
		if (iLocal_60)
		{
			if (func_64(&uLocal_119, "REHOMAU", &Local_62, &Local_61, 8, 0, 0))
			{
				iLocal_60 = 0;
			}
		}
	}
	else if (!iLocal_60 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_62 = { func_63() };
		Local_61 = { func_62() };
		func_112();
		iLocal_60 = 1;
	}
}

struct<6> func_62()//Position - 0x34BF
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

struct<6> func_63()//Position - 0x3505
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3529
{
	func_74(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)//Position - 0x357D
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
					func_73();
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
		if (func_72(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_71();
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
				func_70();
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
				if (func_69())
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
			if (func_68())
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
			func_67();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_66();
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
		func_73();
	}
	return 0;
}

void func_66()//Position - 0x3849
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

void func_67()//Position - 0x3879
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

int func_68()//Position - 0x390E
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x3935
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

void func_70()//Position - 0x39CE
{
	if (func_23(14))
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
		Global_3839 = func_97();
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

void func_71()//Position - 0x3A6F
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

bool func_72(int iParam0, int iParam1)//Position - 0x3AC5
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

void func_73()//Position - 0x3B00
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

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3B57
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

int func_75(struct<3> Param0)//Position - 0x3BAD
{
	if (func_97() == 2)
	{
		if (func_60() && !Global_6069)
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

void func_76()//Position - 0x3C3A
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (!iLocal_72)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_61(0);
					func_92();
					SYSTEM::WAIT(0);
					func_102(&uLocal_119, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_72 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_72 = 0;
			}
		}
		if (!iLocal_73)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_61(0);
				func_92();
				SYSTEM::WAIT(0);
				func_102(&uLocal_119, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_73 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_73 = 0;
		}
		if (!iLocal_74)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_61(0);
				func_92();
				SYSTEM::WAIT(0);
				func_102(&uLocal_119, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_74 = 0;
		}
	}
}

void func_77()//Position - 0x3D5F
{
	if (!func_78())
	{
		func_61(1);
	}
	if (!func_104())
	{
		switch (iLocal_95)
		{
			case 0:
				if (func_97() == 0)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_95++;
				break;
			
			case 1:
				func_102(&uLocal_119, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_95++;
				break;
			
			case 2:
				func_102(&uLocal_119, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_95++;
				break;
			
			case 3:
				if (func_97() == 0)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_95++;
				break;
			
			case 4:
				func_102(&uLocal_119, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_95++;
				break;
			
			case 5:
				if (func_97() == 0)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_95++;
				break;
			
			case 6:
				func_102(&uLocal_119, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_95++;
				break;
			
			case 7:
				func_102(&uLocal_119, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_95++;
				break;
			
			case 8:
				if (func_97() == 0)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_119, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_95++;
				break;
			
			case 9:
				func_102(&uLocal_119, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_95++;
				break;
			}
	}
}

int func_78()//Position - 0x3F61
{
	if (((((((((func_79("REHOM_QM") || func_79("REHOM_GETOUT")) || func_79("REHOM_SHOOT")) || func_79("REHOM_JACK")) || func_79("REHOM_WRONG")) || func_79("REHOM_CULT")) || func_79("REHOM_STOP")) || func_79("REHOM_NOVEH")) || func_79("REHOM_UNS1")) || func_79("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_79(char* sParam0)//Position - 0x3FF5
{
	var uVar0;
	
	if (func_104())
	{
		MemCopy(&uVar0, {func_63()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_80()//Position - 0x401F
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_57))
		{
			if (!iLocal_107)
			{
				iLocal_108 = MISC::GET_GAME_TIMER();
				iLocal_107 = 1;
			}
			else
			{
				iLocal_109 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_107 = 0;
		}
		if ((iLocal_109 - iLocal_108) > 180000)
		{
			if (PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				func_102(&uLocal_119, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_105();
			}
		}
	}
}

void func_81()//Position - 0x4089
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_110)
		{
			iLocal_112 = MISC::GET_GAME_TIMER();
			iLocal_110 = 1;
		}
		else
		{
			iLocal_113 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_113 = 0;
		iLocal_110 = 0;
		iLocal_111 = 0;
	}
	if ((iLocal_113 - iLocal_112) > 50000 && !iLocal_111)
	{
		func_61(0);
		func_92();
		SYSTEM::WAIT(0);
		func_102(&uLocal_119, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_111 = 1;
	}
	if ((iLocal_113 - iLocal_112) > 60000 && iLocal_111)
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			func_82(iLocal_57, 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
			}
		}
		func_105();
	}
}

int func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x414E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_84(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_83();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_8B96[iVar2 /*5*/] = 0;
	Global_8B96[iVar2 /*5*/].f_1 = iParam0;
	Global_8B96[iVar2 /*5*/].f_2 = iParam1;
	Global_8B96[iVar2 /*5*/].f_3 = iParam1;
	Global_8B96[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_8C73 = 1;
	}
	Global_8B95++;
	return 1;
}

int func_83()//Position - 0x420A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8B96[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_84(int iParam0)//Position - 0x4239
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

int func_85(int iParam0)//Position - 0x426A
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
		if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
		{
			return Global_8BB0[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_86()//Position - 0x42AB
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_87))
			{
				HUD::REMOVE_BLIP(&uLocal_87);
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_89))
				{
					uLocal_89 = func_90(Local_66, 1);
				}
				if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_89))
					{
						uLocal_89 = func_90(Local_66, 1);
					}
				}
				if (func_97() == 2 && !func_89())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_90))
					{
						uLocal_90 = func_90(Local_68, 0);
						HUD::SET_BLIP_SPRITE(uLocal_90, 269);
						func_87();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_87))
			{
				uLocal_87 = func_95(iLocal_57, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_89))
			{
				HUD::REMOVE_BLIP(&uLocal_89);
			}
		}
	}
}

void func_87()//Position - 0x43B6
{
	if (func_97() == 2)
	{
		if (!Global_6068)
		{
			func_88("CULT_BLIP_HELP", -1);
			Global_6068 = 1;
		}
	}
}

void func_88(char* sParam0, int iParam1)//Position - 0x43DA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_89()//Position - 0x43F1
{
	if (Global_17C49.f_6E20.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_90(struct<3> Param0, int iParam1)//Position - 0x440D
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_91(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

float func_91(bool bParam0, float fParam1, float fParam2)//Position - 0x4439
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_92()//Position - 0x4450
{
	Global_38DE = 0;
	func_93();
}

void func_93()//Position - 0x4460
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_94()//Position - 0x4481
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_85, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_85))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_95(int iParam0, bool bParam1, int iParam2)//Position - 0x44C4
{
	var uVar0;
	
	uVar0 = func_96(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x4516
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_91(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_91(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_91(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_97()//Position - 0x45BA
{
	func_22();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_98()//Position - 0x45D3
{
	if (!func_89())
	{
		if (func_97() == 2)
		{
			Global_6066 = 1;
		}
	}
}

var func_99()//Position - 0x45EF
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_100()//Position - 0x45FF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, 0) && PED::IS_PED_IN_VEHICLE(iLocal_57, iLocal_52, 0)) && !PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, 0)) && !PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0, int iParam1)//Position - 0x4655
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4672
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_65(sParam2, iParam3, 0);
}

int func_103()//Position - 0x46C0
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_104()//Position - 0x46E1
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_105()//Position - 0x4703
{
	func_203();
}

void func_106()//Position - 0x470F
{
	if (!iLocal_76)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[0], 0);
			TASK::CLEAR_PED_TASKS(iLocal_49[0]);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], uLocal_101);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
			PED::SET_PED_KEEP_TASK(iLocal_49[0], 1);
			if (HUD::DOES_BLIP_EXIST(uLocal_88[0]))
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_88[0], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_76 = 1;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			iLocal_76 = 1;
		}
	}
	if (!iLocal_77)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_88[1]))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uLocal_88[1], false);
		}
		func_92();
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			func_107(iLocal_49[1], "GENERIC_INSULT_HIGH", 24);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[1], 2);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[1], "random@homelandsecurity", "idle_cop_ground", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114)) && !PED::IS_PED_RAGDOLL(iLocal_49[1]))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_49[1], 16);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
				TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], uLocal_101);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
				PED::SET_PED_KEEP_TASK(iLocal_49[1], 1);
				iLocal_77 = 1;
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_49[1], 1);
				iLocal_77 = 1;
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_49[1]))
	{
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[1], "random@homelandsecurity", "idle_cop_ground", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], 780511057) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], 780511057) != 1)
		{
			iLocal_77 = 1;
		}
	}
}

void func_107(var uParam0, char* sParam1, int iParam2)//Position - 0x4900
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_108(iParam2), 1);
}

int func_108(int iParam0)//Position - 0x4917
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

void func_109()//Position - 0x4B0C
{
	iLocal_46 = 3;
}

void func_110()//Position - 0x4B17
{
	func_92();
	SYSTEM::WAIT(0);
	func_102(&uLocal_119, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_46 = 3;
}

void func_111()//Position - 0x4B3D
{
	iLocal_46 = 3;
}

void func_112()//Position - 0x4B48
{
	Global_38DE = 0;
	func_113();
}

void func_113()//Position - 0x4B58
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

int func_114()//Position - 0x4B7C
{
	iLocal_91 = 0;
	while (iLocal_91 <= 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49[iLocal_91]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iLocal_91], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iLocal_91++;
	}
	return 0;
}

void func_115()//Position - 0x4BBA
{
	iLocal_93 = MISC::GET_GAME_TIMER();
	if (!bLocal_103)
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if (func_102(&uLocal_119, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_92 = MISC::GET_GAME_TIMER();
					iLocal_48 = 1;
				}
				break;
			
			case 1:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if (func_102(&uLocal_119, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_92 = MISC::GET_GAME_TIMER();
					iLocal_48 = 2;
				}
				break;
			
			case 2:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if ((iLocal_93 - iLocal_92) > 6000)
				{
					if (func_102(&uLocal_119, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_92 = MISC::GET_GAME_TIMER();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if (func_102(&uLocal_119, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_92 = MISC::GET_GAME_TIMER();
					iLocal_48 = 4;
				}
				break;
			
			case 4:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if ((iLocal_93 - iLocal_92) > 5500)
				{
					if (func_102(&uLocal_119, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_92 = MISC::GET_GAME_TIMER();
						iLocal_48 = 5;
					}
				}
				break;
			
			case 5:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_119() && !iLocal_81)
				{
					iLocal_48 = 13;
				}
				if (!iLocal_82 && SYSTEM::TIMERA() > 5000)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_57, -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_57, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], uLocal_101);
					PED::SET_PED_KEEP_TASK(iLocal_49[0], 1);
					iLocal_82 = 1;
				}
				if ((iLocal_93 - iLocal_92) > 3000 || iLocal_81)
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0) && !PED::IS_PED_INJURED(iLocal_49[0])) && !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(iLocal_57))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_114) > 0.98f)
							{
								if (!func_104())
								{
									if (PED::IS_PED_FACING_PED(iLocal_49[0], iLocal_57, 10f))
									{
										if (func_102(&uLocal_119, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_49[0]);
											uLocal_114 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_114, iLocal_52, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_57, uLocal_114, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], uLocal_114, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], uLocal_114, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											ENTITY::PLAY_ENTITY_ANIM(iLocal_52, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_115 = 1;
											iLocal_92 = MISC::GET_GAME_TIMER();
											iLocal_48 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_118())
				{
					iLocal_48 = 15;
				}
				break;
			
			case 15:
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0) && !PED::IS_PED_INJURED(iLocal_49[0])) && !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(iLocal_57))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
					{
						if (!func_104())
						{
							if (PED::IS_PED_FACING_PED(iLocal_49[0], iLocal_57, 10f))
							{
								if (func_102(&uLocal_119, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_49[0]);
									uLocal_114 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_114, iLocal_52, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_57, uLocal_114, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], uLocal_114, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], uLocal_114, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_52, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_115 = 1;
									iLocal_92 = MISC::GET_GAME_TIMER();
									iLocal_48 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_116();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_114) > 0.45f)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0) && !PED::IS_PED_INJURED(iLocal_57)) && !PED::IS_PED_INJURED(iLocal_49[0]))
						{
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_114) > 0.9f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_49[0]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_52, -1, -1, 1f, 9, 0);
								iLocal_48 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_116();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_114) > 0.95f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_49[1]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_52, -1, 0, 1f, 9, 0);
								PED::SET_PED_KEEP_TASK(iLocal_49[1], 1);
								iLocal_48 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_116();
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0) && !PED::IS_PED_INJURED(iLocal_49[0])) && !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_52) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_49[0], iLocal_52)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_49[1], iLocal_52))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_49[0], iLocal_52, 15f, 786468);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_52, 1);
						bLocal_103 = true;
					}
				}
				break;
			
			case 9:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], uLocal_101);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
				if (!iLocal_79)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
					{
						func_92();
						SYSTEM::WAIT(0);
						func_102(&uLocal_119, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_92();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_49[0]))
						{
							func_107(iLocal_49[0], "GUN_COOL", 24);
						}
					}
					iLocal_79 = 1;
					iLocal_99 = MISC::GET_GAME_TIMER();
				}
				iLocal_48 = 10;
				break;
			
			case 10:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_48 = 13;
				}
				if (((iLocal_100 - iLocal_99) > 6000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !iLocal_80)
				{
					if (func_102(&uLocal_119, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_99 = MISC::GET_GAME_TIMER();
						iLocal_80 = 1;
					}
					iLocal_48 = 11;
				}
				break;
			
			case 11:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_48 = 13;
				}
				if (((iLocal_100 - iLocal_99) > 9000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || iLocal_105)
				{
					if (func_102(&uLocal_119, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_48 = 12;
					}
				}
				break;
			
			case 12:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_48 = 13;
				}
				if ((iLocal_100 - iLocal_99) > 13000)
				{
					iLocal_46 = 3;
				}
				break;
			
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], uLocal_101);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
				}
				if (iLocal_106)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], 1785177548) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_57, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_57, 20000, 0, 2);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_57, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], uLocal_101);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], 1785177548) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_101);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_101);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], uLocal_101);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_101);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1785177548) != 1)
						{
							TASK::TASK_SEEK_COVER_FROM_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
						}
					}
				}
				iLocal_48 = 14;
				break;
			
			case 14:
				if (func_120())
				{
					iLocal_48 = 9;
				}
				if (func_118())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_114))
					{
						if (!iLocal_106)
						{
							if (!PED::IS_PED_INJURED(iLocal_49[1]))
							{
							}
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								TASK::TASK_SEEK_COVER_FROM_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_PED_KEEP_TASK(iLocal_57, 1);
							}
							iLocal_106 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
				{
					if (!func_104() && !iLocal_81)
					{
						if (func_103())
						{
							func_102(&uLocal_119, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_102(&uLocal_119, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_81 = 1;
					}
					iLocal_82 = 0;
					SYSTEM::SETTIMERA(0);
					iLocal_92 = (MISC::GET_GAME_TIMER() - 4500);
					iLocal_48 = 5;
				}
			}
	}
}

void func_116()//Position - 0x556D
{
	if (!func_104())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_57, iLocal_52, 0))
				{
					if (func_117(iLocal_57) == 2)
					{
						if (iLocal_94 < MISC::GET_GAME_TIMER())
						{
							func_102(&uLocal_119, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_94 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_117(int iParam0)//Position - 0x55D3
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
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

int func_118()//Position - 0x5650
{
	if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(iLocal_57))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 1.5f, 1.5f, 5f, 0, 1, 2) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 0.5f, 0.5f, 5f, 0, 1, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x5752
{
	if (!PED::IS_PED_INJURED(iLocal_49[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (PED::IS_PED_FACING_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120()//Position - 0x57D8
{
	if (!PED::IS_PED_INJURED(iLocal_49[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x5871
{
	if (func_124())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_16(Global_17C3E))
		{
			func_122(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_16(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_122(int iParam0)//Position - 0x58C4
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_88(func_123(iParam0), -1);
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
					func_88(func_123(iParam0), -1);
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
					func_88(func_123(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

char* func_123(int iParam0)//Position - 0x59A5
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

int func_124()//Position - 0x59E7
{
	switch (func_125(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_125(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5A1D
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
		if (func_129(0))
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
		if (!func_127(iParam2))
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
			func_126(uParam0, iParam4);
		}
	}
	return 2;
}

void func_126(var uParam0, int iParam1)//Position - 0x5B54
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

bool func_127(int iParam0)//Position - 0x5BA3
{
	return func_128(iParam0, Global_8861);
}

int func_128(int iParam0, int iParam1)//Position - 0x5BB4
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

int func_129(int iParam0)//Position - 0x5D95
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_130()//Position - 0x5DB7
{
	if (HUD::DOES_BLIP_EXIST(uLocal_86))
	{
		HUD::REMOVE_BLIP(&uLocal_86);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_87))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
		{
			uLocal_87 = func_95(iLocal_57, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_87, 0);
		}
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_87, 1);
	}
	iLocal_91 = 0;
	while (iLocal_91 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_88[iLocal_91]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[iLocal_91]))
			{
				uLocal_88[iLocal_91] = func_95(iLocal_49[iLocal_91], 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_88[iLocal_91], 0);
			}
		}
		else
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_88[iLocal_91], 1);
		}
		iLocal_91++;
	}
}

int func_131()//Position - 0x5E58
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_98)
	{
		if (MISC::IS_PROJECTILE_IN_AREA(Local_53 - Vector(30f, 30f, 30f), Local_53 + Vector(30f, 30f, 30f), 1) || MISC::IS_BULLET_IN_BOX(Local_53 - Vector(30f, 30f, 30f), Local_53 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_47 = 2;
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[0])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_49[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_49[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_47 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_47 = 2;
					return 1;
				}
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
				{
					iLocal_47 = 2;
					return 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, 0))
				{
					iLocal_47 = 2;
					return 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, iVar0, 1))
					{
						iLocal_47 = 2;
						return 1;
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_47 = 2;
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar1, iLocal_52))
					{
						iLocal_47 = 2;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_47 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_47 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], iVar0, 1))
				{
					iLocal_47 = 5;
					return 1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_47 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_47 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], iVar0, 1))
				{
					iLocal_47 = 5;
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_47 = 4;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57))
			{
				iLocal_47 = 4;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, iVar0, 1))
				{
					iLocal_47 = 4;
					return 1;
				}
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_47 = 4;
			return 1;
		}
	}
	return 0;
}

void func_132()//Position - 0x620D
{
	func_134(39, 1);
	func_134(40, 1);
	func_134(41, 1);
	func_134(42, 1);
	func_134(43, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_67 - Vector(20f, 20f, 20f), Local_67 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(Local_58, 50f, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	MISC::SET_BIT(&uLocal_96, 5);
	iLocal_57 = PED::CREATE_PED(26, iLocal_59, Local_58, 0, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 185, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 206, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 2, 0);
	AUDIO::STOP_PED_SPEAKING(iLocal_57, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_57, "REHOMGirl");
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 0, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 3, 1, 4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 4, 0, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 6, 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("OFFICERS", &iLocal_118);
	iLocal_91 = 0;
	while (iLocal_91 <= 1)
	{
		iLocal_49[iLocal_91] = PED::CREATE_PED(6, iLocal_55, Local_50[iLocal_91 /*3*/], fLocal_51[iLocal_91], 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iLocal_91], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[iLocal_91], iLocal_118);
		PED::SET_PED_CONFIG_FLAG(iLocal_49[iLocal_91], 42, 1);
		iLocal_91++;
	}
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[0], joaat("weapon_pistol"), -1, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[1], joaat("weapon_pistol"), -1, 0, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_118, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_118, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_118);
	iLocal_52 = VEHICLE::CREATE_VEHICLE(iLocal_56, Local_53, fLocal_54, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_56, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_52);
	VEHICLE::SET_VEHICLE_SIREN(iLocal_52, 1);
	func_133(&uLocal_119, 5, iLocal_49[0], "ACULTMember1", 0, 1);
	func_133(&uLocal_119, 4, iLocal_49[1], "ACULTMember2", 0, 1);
	func_133(&uLocal_119, 3, iLocal_57, "REHOMGirl", 0, 1);
	if (func_97() == 0)
	{
		func_133(&uLocal_119, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_97() == 1)
	{
		func_133(&uLocal_119, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	uLocal_114 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_114, iLocal_52, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_57, uLocal_114, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], uLocal_114, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], uLocal_114, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_114, 1);
}

void func_133(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x64FB
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

void func_134(int iParam0, bool bParam1)//Position - 0x6596
{
	if (bParam1)
	{
		if (!func_141(iParam0, 2, 1))
		{
			func_140(iParam0, 2, 1);
		}
	}
	else if (func_141(iParam0, 2, 1))
	{
		func_135(iParam0, 2, 1);
	}
}

void func_135(int iParam0, int iParam1, bool bParam2)//Position - 0x65CD
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			uVar0 = func_138(func_139(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_136(func_139(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6635
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_137(var uParam0)//Position - 0x6660
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_138(int iParam0, int iParam1, int iParam2)//Position - 0x6694
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_137(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x66C6
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

void func_140(int iParam0, int iParam1, bool bParam2)//Position - 0x696F
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			uVar0 = func_138(func_139(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_136(func_139(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_141(int iParam0, int iParam1, bool bParam2)//Position - 0x69D7
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			return MISC::IS_BIT_SET(func_138(func_139(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_142()//Position - 0x6A37
{
	STREAMING::REQUEST_MODEL(iLocal_59);
	STREAMING::REQUEST_MODEL(iLocal_55);
	STREAMING::REQUEST_MODEL(iLocal_56);
	STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_59) && STREAMING::HAS_MODEL_LOADED(iLocal_55)) && STREAMING::HAS_MODEL_LOADED(iLocal_56)) && STREAMING::HAS_ANIM_DICT_LOADED("random@homelandsecurity"))
	{
		bLocal_71 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_59);
		STREAMING::REQUEST_MODEL(iLocal_55);
		STREAMING::REQUEST_MODEL(iLocal_56);
		STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	}
}

void func_143()//Position - 0x6AA2
{
	iLocal_59 = joaat("a_f_y_tourist_01");
	iLocal_55 = joaat("a_m_o_acult_01");
	iLocal_56 = joaat("fugitive");
	Local_58 = { -174.0522f, 1905.611f, 197.0466f };
	Local_50[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_51[0] = 147.8596f;
	Local_50[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_51[1] = 164.5974f;
	Local_53 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_54 = 187.3899f;
	Local_66 = { 469.8768f, 2617.532f, 42.2566f };
	Local_67 = { 472.2393f, 2611.611f, 42.2676f };
	Local_68 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_70 = 1;
}

int func_144()//Position - 0x6B68
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_151())
	{
		return 1;
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_145(float fParam0, bool bParam1)//Position - 0x6BEE
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
		if (func_24(func_97()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_146(iVar1, &Var0);
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

void func_146(int iParam0, var uParam1)//Position - 0x6CA5
{
	switch (iParam0)
	{
		case 0:
			func_147(uParam1, "Abigail1", func_149(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 1:
			func_147(uParam1, "Abigail2", func_149(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 2:
			func_147(uParam1, "Barry1", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 3:
			func_147(uParam1, "Barry2", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 4:
			func_147(uParam1, "Barry3", func_149(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 5:
			func_147(uParam1, "Barry3A", func_149(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 6:
			func_147(uParam1, "Barry3C", func_149(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 7:
			func_147(uParam1, "Barry4", func_149(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_148(iParam0), 0, 0);
			break;
		
		case 8:
			func_147(uParam1, "Dreyfuss1", func_149(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 9:
			func_147(uParam1, "Epsilon1", func_149(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 10:
			func_147(uParam1, "Epsilon2", func_149(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 11:
			func_147(uParam1, "Epsilon3", func_149(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 12:
			func_147(uParam1, "Epsilon4", func_149(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 13:
			func_147(uParam1, "Epsilon5", func_149(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 14:
			func_147(uParam1, "Epsilon6", func_149(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 15:
			func_147(uParam1, "Epsilon7", func_149(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 16:
			func_147(uParam1, "Epsilon8", func_149(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 17:
			func_147(uParam1, "Extreme1", func_149(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 18:
			func_147(uParam1, "Extreme2", func_149(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 19:
			func_147(uParam1, "Extreme3", func_149(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 20:
			func_147(uParam1, "Extreme4", func_149(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 21:
			func_147(uParam1, "Fanatic1", func_149(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 22:
			func_147(uParam1, "Fanatic2", func_149(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 23:
			func_147(uParam1, "Fanatic3", func_149(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_148(iParam0), 0, 1);
			break;
		
		case 24:
			func_147(uParam1, "Hao1", func_149(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_148(iParam0), 0, 1);
			break;
		
		case 25:
			func_147(uParam1, "Hunting1", func_149(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 26:
			func_147(uParam1, "Hunting2", func_149(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 27:
			func_147(uParam1, "Josh1", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 28:
			func_147(uParam1, "Josh2", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 29:
			func_147(uParam1, "Josh3", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 30:
			func_147(uParam1, "Josh4", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 31:
			func_147(uParam1, "Maude1", func_149(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 32:
			func_147(uParam1, "Minute1", func_149(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 33:
			func_147(uParam1, "Minute2", func_149(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 34:
			func_147(uParam1, "Minute3", func_149(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 35:
			func_147(uParam1, "MrsPhilips1", func_149(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 36:
			func_147(uParam1, "MrsPhilips2", func_149(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 37:
			func_147(uParam1, "Nigel1", func_149(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 38:
			func_147(uParam1, "Nigel1A", func_149(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 39:
			func_147(uParam1, "Nigel1B", func_149(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 40:
			func_147(uParam1, "Nigel1C", func_149(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 41:
			func_147(uParam1, "Nigel1D", func_149(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 42:
			func_147(uParam1, "Nigel2", func_149(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 43:
			func_147(uParam1, "Nigel3", func_149(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 44:
			func_147(uParam1, "Omega1", func_149(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 45:
			func_147(uParam1, "Omega2", func_149(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 46:
			func_147(uParam1, "Paparazzo1", func_149(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 47:
			func_147(uParam1, "Paparazzo2", func_149(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 48:
			func_147(uParam1, "Paparazzo3", func_149(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 49:
			func_147(uParam1, "Paparazzo3A", func_149(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 50:
			func_147(uParam1, "Paparazzo3B", func_149(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 51:
			func_147(uParam1, "Paparazzo4", func_149(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 52:
			func_147(uParam1, "Rampage1", func_149(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 54:
			func_147(uParam1, "Rampage3", func_149(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 55:
			func_147(uParam1, "Rampage4", func_149(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 56:
			func_147(uParam1, "Rampage5", func_149(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 53:
			func_147(uParam1, "Rampage2", func_149(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 57:
			func_147(uParam1, "TheLastOne", func_149(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 58:
			func_147(uParam1, "Tonya1", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 59:
			func_147(uParam1, "Tonya2", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 60:
			func_147(uParam1, "Tonya3", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 61:
			func_147(uParam1, "Tonya4", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 62:
			func_147(uParam1, "Tonya5", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_147(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x7E1A
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

int func_148(int iParam0)//Position - 0x7EAB
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

struct<2> func_149(int iParam0)//Position - 0x833F
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_150(iParam0) };
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

struct<2> func_150(int iParam0)//Position - 0x8375
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

int func_151()//Position - 0x87C0
{
	if (func_154() && !func_155())
	{
		return 1;
	}
	if (func_153() && func_152())
	{
		return 1;
	}
	return 0;
}

bool func_152()//Position - 0x87F2
{
	return Global_17B2F > 0;
}

int func_153()//Position - 0x8800
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_154()//Position - 0x8815
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_155()//Position - 0x883B
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

int func_156()//Position - 0x8858
{
	if (!func_127(5))
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x88BA
{
	if ((Global_17C3E == func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0)//Position - 0x88E5
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_160(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_159();
}

void func_159()//Position - 0x891B
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

void func_160(int iParam0)//Position - 0x8958
{
	Global_17C3E = iParam0;
}

int func_161(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8966
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
		iParam1 = func_30();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_202())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_155())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
		if (func_201())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_24(func_97()))
		{
			if (func_145(100f, 1) != -1)
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
		if (!func_200(iParam1))
		{
			return 0;
		}
		if (func_24(func_97()))
		{
			if (func_199(func_97()) == 4 || func_199(func_97()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_97()))
		{
			if (!func_198(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_197(Global_17C49.f_6E20.f_2B[iParam1]))
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
		if (func_196())
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
		if (!func_187(4))
		{
			return 0;
		}
		if (!func_127(5))
		{
			return 0;
		}
		if (func_186(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_186(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_200(30) && !func_186(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_97()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_185(iVar4))
				{
					if (func_163(iVar2))
					{
						if (!func_162(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_97() != iVar2)
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

bool func_162(struct<3> Param0, struct<3> Param1)//Position - 0x8CFF
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_163(int iParam0)//Position - 0x8D28
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_164(iVar0);
}

int func_164(int iParam0)//Position - 0x8D49
{
	return func_165(iParam0, 1);
}

int func_165(int iParam0, int iParam1)//Position - 0x8D58
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_185(iParam0))
	{
		return 0;
	}
	func_166(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8DAB
{
	func_167(func_178(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_167(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8DC9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_177(iParam0, iParam1))
	{
		iVar0 = func_176(iParam1);
		iVar1 = func_174(iParam0);
		iVar2 = (func_174(iParam0) - func_174(iParam1));
		iVar3 = (func_176(iParam0) - func_176(iParam1));
		iVar4 = (func_173(iParam0) - func_173(iParam1));
		iVar5 = (func_172(iParam0) - func_172(iParam1));
		iVar6 = (func_171(iParam0) - func_171(iParam1));
		iVar7 = (func_170(iParam0) - func_170(iParam1));
	}
	else
	{
		iVar0 = func_176(iParam0);
		iVar1 = func_174(iParam1);
		iVar2 = (func_174(iParam1) - func_174(iParam0));
		iVar3 = (func_176(iParam1) - func_176(iParam0));
		iVar4 = (func_173(iParam1) - func_173(iParam0));
		iVar5 = (func_172(iParam1) - func_172(iParam0));
		iVar6 = (func_171(iParam1) - func_171(iParam0));
		iVar7 = (func_170(iParam1) - func_170(iParam0));
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
		iVar4 = (iVar4 + func_169(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_168(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_168(float fParam0, float fParam1, float fParam2)//Position - 0x8FCA
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

int func_169(int iParam0, int iParam1)//Position - 0x900C
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

int func_170(int iParam0)//Position - 0x90AE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_171(int iParam0)//Position - 0x90C1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_172(int iParam0)//Position - 0x90D4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_173(int iParam0)//Position - 0x90E7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_174(int iParam0)//Position - 0x90F9
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_175(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_175(bool bParam0, int iParam1, int iParam2)//Position - 0x911E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_176(int iParam0)//Position - 0x9135
{
	return iParam0 & 15;
}

int func_177(int iParam0, int iParam1)//Position - 0x9142
{
	int iVar0;
	int iVar1;
	
	if (!func_185(iParam1) || !func_185(iParam0))
	{
		return 1;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	iVar1 = func_170(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_178()//Position - 0x924E
{
	var uVar0;
	
	func_184(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_183(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_182(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_181(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_180(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_179(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_179(var uParam0, int iParam1)//Position - 0x9294
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

void func_180(var uParam0, int iParam1)//Position - 0x931A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_181(var uParam0, int iParam1)//Position - 0x934D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_174(*uParam0);
	if (iParam1 < 1 || iParam1 > func_169(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_182(var uParam0, int iParam1)//Position - 0x939E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_183(var uParam0, int iParam1)//Position - 0x93D8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_184(var uParam0, int iParam1)//Position - 0x9413
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_185(int iParam0)//Position - 0x944F
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
	iVar0 = func_170(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_171(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_172(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_174(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_176(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_173(iParam0);
	if (iVar5 < 1 || iVar5 > func_169(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0, int iParam1)//Position - 0x952B
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x954E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_97();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_195()) || Global_17890) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_193()) || func_192()) || func_191()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_195()) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_191()) || func_193()) || func_192()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_195()) || Global_17890) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_191()) || func_193()) || func_192()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_195()) || Global_17890) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_193()) || func_192()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_195() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_72(8, -1)) || func_190()) || func_189()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_72(8, -1) || func_193()) || func_192()) || func_189()) || func_188())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_195()) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_192()) || func_191()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_195()) || func_192()) || Global_17890) || Global_5F7E) || func_194()) || Global_8C75) || func_72(8, -1)) || func_191()) || func_189()) || func_190()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_195()) || Global_17890) || Global_5F7E) || func_194()) || func_72(8, -1)) || func_191()) || func_189()) || func_193()) || func_192()) || func_190())
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

var func_188()//Position - 0x9C6B
{
	return Global_15F91.f_1;
}

int func_189()//Position - 0x9C79
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_190()//Position - 0x9C9F
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0x9CB9
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

bool func_192()//Position - 0x9CE3
{
	return Global_15F9E.f_123 > 0;
}

bool func_193()//Position - 0x9CF4
{
	return Global_15F9E.f_122 > 0;
}

var func_194()//Position - 0x9D05
{
	return Global_14143C;
}

int func_195()//Position - 0x9D11
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_196()//Position - 0x9D2D
{
	func_70();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0)//Position - 0x9D55
{
	return func_177(func_178(), iParam0);
}

int func_198(int iParam0, int iParam1, int iParam2)//Position - 0x9D67
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_97();
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

int func_199(int iParam0)//Position - 0x9E4B
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_200(int iParam0)//Position - 0x9E6F
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_202())
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

int func_201()//Position - 0x9ECD
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

int func_202()//Position - 0x9F04
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

void func_203()//Position - 0x9F87
{
	int iVar0;
	
	if (iLocal_69)
	{
		func_217(0);
		if (Global_606A)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_216();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_92();
		if (iLocal_70)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_56);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_56, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_49[iVar0], func_215(PLAYER::PLAYER_ID()), -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_49[iVar0], 1);
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							TASK::TASK_COWER(iLocal_57, -1);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iVar0], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_57, 317, 1);
				if (PED::IS_PED_IN_GROUP(iLocal_57))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_57);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_57);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_52);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
	}
	func_204(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_204(int iParam0)//Position - 0xA111
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_157())
	{
		func_208(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_207(30000);
		StringCopy(&cVar0, func_206(Global_17C3E, 1), 64);
		if (func_29(Global_17C3E) > 0)
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
	func_205(&Global_5FB7);
	Global_17C3F = 0;
	func_160(-1);
}

void func_205(var uParam0)//Position - 0xA1C6
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

char* func_206(int iParam0, bool bParam1)//Position - 0xA203
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

void func_207(int iParam0)//Position - 0xA44C
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_208(int iParam0)//Position - 0xA45E
{
	func_209(iParam0, 0, func_214(iParam0));
}

void func_209(int iParam0, int iParam1, int iParam2)//Position - 0xA473
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_178();
	func_212(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_211(iParam0, &uVar0);
	Var1 = { func_210(&uVar0) };
}

struct<16> func_210(var uParam0)//Position - 0xA4A2
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_172(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_171(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_170(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_173(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_174(*uParam0), 64);
	return Var0;
}

void func_211(int iParam0, var uParam1)//Position - 0xA571
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA589
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_176(*uParam0);
	iVar2 = func_173(*uParam0);
	iVar3 = func_172(*uParam0);
	iVar4 = func_171(*uParam0);
	iVar5 = func_170(*uParam0);
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
	iVar6 = func_169(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_169(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_213(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA70B
{
	func_184(uParam0, iParam1);
	func_183(uParam0, iParam2);
	func_182(uParam0, iParam3);
	func_181(uParam0, iParam4);
	func_180(uParam0, iParam5);
	func_179(uParam0, iParam6);
}

int func_214(int iParam0)//Position - 0xA743
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

Vector3 func_215(var uParam0)//Position - 0xA8E6
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_216()//Position - 0xA8F9
{
	Global_6066 = 0;
	Global_6067 = 0;
	Global_6069 = 0;
	Global_606A = 0;
	Global_606B = 0;
}

void func_217(bool bParam0)//Position - 0xA915
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_134(iVar0, bParam0);
		iVar0++;
	}
}

