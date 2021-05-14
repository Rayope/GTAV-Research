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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	struct<50> Local_87 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_88 = 0;
	struct<5> Local_89[32];
	int iLocal_90 = 0;
	int iLocal_91[3] = { 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 16;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	struct<20> Local_282 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_93 = -1;
	iLocal_96 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_435(ScriptParam_282);
	}
	while (true)
	{
		func_434();
		if (func_424())
		{
			func_422();
		}
		uLocal_99 = NETWORK::GET_NETWORK_TIME();
		func_413();
		func_393();
		func_388();
		func_387();
		switch (func_386(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_385() == 1)
				{
					Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_385() == 4)
				{
					Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_385() == 1)
				{
					func_380();
				}
				else if (func_385() == 0)
				{
					func_374();
					Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_385() == 4)
				{
					Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_349();
				func_347(&(Local_87.f_31));
				if (func_346(&(Local_87.f_31)))
				{
					iVar0 = 0;
					while (iVar0 < func_345(iLocal_93))
					{
						func_349();
						iVar0++;
					}
					Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_178();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_176();
			func_175();
			func_174();
			switch (func_385())
			{
				case 0:
					func_173();
					if (func_169())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_95)))
						{
							func_167(PLAYER::GET_PLAYER_PED(iLocal_95));
						}
						else
						{
							Local_87.f_24 = { Local_97 };
						}
						MISC::CLEAR_BIT(&(Local_87.f_2), 6);
						Local_87 = 1;
					}
					break;
				
				case 1:
					if (func_36())
					{
						func_35();
						func_34();
					}
					func_18();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x231
{
	int iVar0;
	
	if (func_385() < 4)
	{
		if (func_13())
		{
			iLocal_100 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_345(iLocal_93) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_87 = 4;
		}
	}
}

void func_2()//Position - 0x26D
{
	var uVar0;
	struct<14> Var1;
	
	if (MISC::IS_BIT_SET(Local_87.f_A[iLocal_100 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_87.f_A[iLocal_100 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iLocal_100 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_87.f_A[iLocal_100 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_87.f_A[iLocal_100 /*7*/])))
				{
					if (!MISC::IS_BIT_SET(Local_87.f_A[iLocal_100 /*7*/].f_2, 6))
					{
						if (iLocal_93 == 0)
						{
							Local_87.f_30++;
							if (!MISC::IS_BIT_SET(Local_87.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_87.f_A[iLocal_100 /*7*/], &uVar0) == iLocal_95)
								{
									MISC::SET_BIT(&(Local_87.f_2), 12);
								}
							}
							if ((Local_87.f_2A == iLocal_100 && !MISC::IS_BIT_SET(Local_87.f_2, 5)) || Local_87.f_30 == func_345(iLocal_93))
							{
								Var1.f_2 = 127;
								Var1.f_A = iLocal_95;
								Var1.f_B = iLocal_94;
								if (func_345(iLocal_93) > 1)
								{
									Var1.f_C = PLAYER::INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_C = PLAYER::INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_87.f_2B;
								func_11(Var1, func_12(1));
								if (Local_87.f_2A == iLocal_100)
								{
									MISC::SET_BIT(&(Local_87.f_2), 5);
								}
							}
							else if (!MISC::IS_BIT_SET(Local_87.f_2, 5))
							{
								Var1.f_2 = 126;
								Var1.f_B = iLocal_94;
								func_11(Var1, func_12(1));
							}
						}
						MISC::SET_BIT(&(Local_87.f_A[iLocal_100 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_87.f_A[iLocal_100 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_90, 2);
					}
					MISC::SET_BIT(&iLocal_90, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_90, 1);
		MISC::SET_BIT(&iLocal_90, 2);
	}
	func_3(iLocal_100);
	iLocal_100++;
	if (iLocal_100 >= func_345(iLocal_93))
	{
		iLocal_100 = 0;
		if (MISC::IS_BIT_SET(Local_87.f_1, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_90, 1))
			{
				if (!MISC::IS_BIT_SET(Local_87.f_1, 1))
				{
					MISC::SET_BIT(&(Local_87.f_1), 1);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_90, 2))
			{
				if (!MISC::IS_BIT_SET(Local_87.f_1, 9))
				{
					MISC::SET_BIT(&(Local_87.f_1), 9);
				}
			}
		}
		MISC::CLEAR_BIT(&iLocal_90, 1);
		MISC::CLEAR_BIT(&iLocal_90, 2);
	}
}

void func_3(int iParam0)//Position - 0x4A8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_87.f_A[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_10(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_87.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 7))
							{
								if ((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_24D5B9[iLocal_95 /*254*/].f_E6 != -1 && func_9(Global_24D5B9[iLocal_95 /*254*/].f_E6) == 4)) || Global_182604[PLAYER::PLAYER_ID() /*324*/].f_13C)
								{
									Local_87.f_A[iParam0 /*7*/].f_3 = uLocal_99;
									MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_24D5B9[iLocal_95 /*254*/].f_E6 == -1) && !Global_182604[PLAYER::PLAYER_ID() /*324*/].f_13C)
							{
								MISC::CLEAR_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_A[iParam0 /*7*/].f_3) > 10000)
							{
								if (!MISC::IS_BIT_SET(Local_87.f_2, 10))
								{
									MISC::SET_BIT(&(Local_87.f_2), 10);
									Local_87.f_27 = { func_8(iLocal_95) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_345(iLocal_93))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
									{
										MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (MISC::IS_BIT_SET(Local_87.f_2, 1))
						{
							MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_95, 1, 1))
						{
							if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1), 625f))
								{
									MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_95)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (MISC::IS_BIT_SET(Local_87.f_2, 1))
						{
							MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_95, 1, 1))
						{
							if (!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_95)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
								{
									MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param1)//Position - 0x865
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (MISC::ABSF((Param1.f_2 - Param0.f_2)) < 2f)
	{
		Var0.x = Param0.x;
		Var0.f_1 = Param0.f_1;
		Var1.x = Param1.x;
		Var1.f_1 = Param1.f_1;
		if (func_5(Var0, Var1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x8AC
{
	if (SYSTEM::VDIST2(Param0, Param1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x8CB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_24F57C.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0x90F
{
	Local_87.f_A[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)//Position - 0x923
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_9(int iParam0)//Position - 0x936
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

int func_10(int iParam0, int iParam1)//Position - 0xB8F
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (MISC::IS_BIT_SET(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xBC2
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)//Position - 0xBEB
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13()//Position - 0xC48
{
	if (MISC::IS_BIT_SET(Local_87.f_1, 0))
	{
		if (iLocal_93 == 1)
		{
			if (MISC::IS_BIT_SET(Local_87.f_1, 4))
			{
				MISC::SET_BIT(&(Local_87.f_3), 11);
				return 1;
			}
		}
		else if (MISC::IS_BIT_SET(Local_87.f_1, 1))
		{
			MISC::SET_BIT(&(Local_87.f_3), 0);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Local_87.f_1, 2))
	{
		MISC::SET_BIT(&(Local_87.f_3), 1);
		MISC::SET_BIT(&Global_199085, iLocal_93);
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 12))
	{
		return 1;
	}
	if (iLocal_93 == 0)
	{
		if (MISC::IS_BIT_SET(Local_87.f_2, 2))
		{
			MISC::SET_BIT(&(Local_87.f_3), 2);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_87.f_2, 8))
		{
			MISC::SET_BIT(&(Local_87.f_3), 8);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_87.f_2, 5))
		{
			MISC::SET_BIT(&(Local_87.f_3), 3);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_87.f_2, 9))
		{
			MISC::SET_BIT(&(Local_87.f_3), 9);
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_87.f_1, 15))
		{
			MISC::SET_BIT(&(Local_87.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_95, 0, 1))
	{
		if (iLocal_93 != 0 || !MISC::IS_BIT_SET(Local_87.f_2, 1))
		{
			MISC::SET_BIT(&(Local_87.f_3), 4);
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_95)))
	{
		if (iLocal_93 == 1)
		{
			if (MISC::IS_BIT_SET(Local_87.f_1, 0))
			{
				MISC::SET_BIT(&(Local_87.f_3), 6);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_93 == 1)
		{
			if (!MISC::IS_BIT_SET(Local_87.f_1, 16))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_9) > 120000)
				{
					MISC::SET_BIT(&(Local_87.f_3), 7);
					return 1;
				}
			}
			if (func_14())
			{
				MISC::SET_BIT(&(Local_87.f_3), 7);
				return 1;
			}
		}
		if (iLocal_96 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_95)))
		{
			MISC::SET_BIT(&(Local_87.f_3), 5);
			return 1;
		}
	}
	return 0;
}

int func_14()//Position - 0xE28
{
	if (((func_17(iLocal_95, 1) || func_16(iLocal_95, 0)) || func_16(iLocal_95, 7)) || func_15(iLocal_95))
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0xE69
{
	return Global_182604[iParam0 /*324*/].f_A5 != 0;
}

bool func_16(int iParam0, int iParam1)//Position - 0xE7E
{
	return MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_CD, iParam1);
}

int func_17(int iParam0, bool bParam1)//Position - 0xE96
{
	if (MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_EB.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_EB.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_18()//Position - 0xED6
{
	func_28();
	if (iLocal_93 != 1)
	{
		func_2();
	}
	func_19();
}

void func_19()//Position - 0xEF1
{
	int iVar0;
	
	if (func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_101), 0, 1))
	{
		if (iLocal_93 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iLocal_101) == iLocal_95)
			{
				if (!MISC::IS_BIT_SET(Local_87.f_1, 16))
				{
					if (MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_87.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_87.f_1, 11))
			{
				if (func_25(PLAYER::INT_TO_PLAYERINDEX(iLocal_101)))
				{
					if (!MISC::IS_BIT_SET(Local_87.f_4, iLocal_101))
					{
						MISC::SET_BIT(&(Local_87.f_1), 11);
						MISC::SET_BIT(&(Local_87.f_4), iLocal_101);
					}
				}
				else if (MISC::IS_BIT_SET(Local_87.f_4, iLocal_101))
				{
					MISC::SET_BIT(&(Local_87.f_1), 11);
					MISC::CLEAR_BIT(&(Local_87.f_4), iLocal_101);
				}
			}
			else if (MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_87.f_1), 11);
			}
			if (iLocal_93 == 0)
			{
				if (MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 0))
				{
					if (Local_89[iLocal_101 /*5*/].f_2 != -1)
					{
						if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
						{
							MISC::SET_BIT(&(Local_87.f_2), 1);
							Local_87.f_2A = Local_89[iLocal_101 /*5*/].f_2;
							Local_87.f_2B = Local_89[iLocal_101 /*5*/].f_3;
							if (!func_24())
							{
								func_23();
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_87.f_2, 9))
					{
						if (!func_24())
						{
							func_22();
						}
						iVar0 = 0;
						while (iVar0 < func_345(iLocal_93))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_87.f_2), 9);
						MISC::SET_BIT(&(Local_87.f_2), 1);
					}
				}
				if (func_24())
				{
					if (!MISC::IS_BIT_SET(iLocal_90, 17))
					{
						if (MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 5))
						{
							func_23();
							MISC::SET_BIT(&iLocal_90, 17);
						}
						else if (MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 6))
						{
							func_22();
							MISC::SET_BIT(&iLocal_90, 17);
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 1))
				{
					if (!MISC::IS_BIT_SET(iLocal_90, 3))
					{
						MISC::SET_BIT(&iLocal_90, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(iLocal_101) == iLocal_95)
				{
					if (iLocal_93 == 0)
					{
						if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
						{
							if (!MISC::IS_BIT_SET(Local_87.f_2, 6))
							{
								MISC::SET_BIT(&(Local_87.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_101++;
	if (iLocal_101 >= 32)
	{
		iLocal_101 = 0;
		if (iLocal_93 == 0)
		{
			if (!MISC::IS_BIT_SET(iLocal_90, 3))
			{
				func_21();
			}
			else
			{
				func_20();
			}
			MISC::CLEAR_BIT(&iLocal_90, 3);
		}
	}
}

void func_20()//Position - 0x116A
{
	if (MISC::IS_BIT_SET(Local_87.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Local_87.f_2), 3);
	}
}

void func_21()//Position - 0x1187
{
	if (!MISC::IS_BIT_SET(Local_87.f_2, 3))
	{
		Local_87.f_6 = uLocal_99;
		MISC::SET_BIT(&(Local_87.f_2), 3);
	}
}

void func_22()//Position - 0x11AC
{
	struct<14> Var0;
	
	Var0.f_2 = 128;
	Var0.f_A = iLocal_95;
	Var0.f_B = iLocal_94;
	func_11(Var0, func_12(1));
}

void func_23()//Position - 0x11D6
{
	struct<14> Var0;
	
	Var0.f_2 = 125;
	Var0.f_A = iLocal_95;
	Var0.f_B = iLocal_94;
	if (func_345(iLocal_93) > 1)
	{
		Var0.f_C = PLAYER::INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_C = PLAYER::INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_87.f_2B;
	func_11(Var0, func_12(1));
}

int func_24()//Position - 0x1228
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

bool func_25(int iParam0)//Position - 0x123C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_F1.f_88[func_27(10) /*33*/][iParam0], func_26(10));
}

int func_26(int iParam0)//Position - 0x1274
{
	return (iParam0 % 32);
}

int func_27(int iParam0)//Position - 0x1281
{
	return (iParam0 / 32);
}

void func_28()//Position - 0x128E
{
	int iVar0;
	
	if (iLocal_93 == 0)
	{
		if (MISC::IS_BIT_SET(Local_87.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_6) > 10000)
			{
				if (MISC::IS_BIT_SET(Local_87.f_2, 1))
				{
					MISC::SET_BIT(&(Local_87.f_2), 2);
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_87.f_1, 8))
		{
			if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
			{
				if (func_32())
				{
					MISC::SET_BIT(&(Local_87.f_2), 6);
					func_31();
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_87.f_1, 0))
		{
			if (func_6(iLocal_95, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_95);
				if (func_30(iVar0))
				{
					func_167(iVar0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
		{
			if (!func_6(iLocal_95, 1, 1) || func_15(iLocal_95))
			{
				MISC::SET_BIT(&(Local_87.f_1), 15);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_1, 0))
	{
		if (MISC::IS_BIT_SET(Local_87.f_1, 5))
		{
			if (!MISC::IS_BIT_SET(Local_87.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_87.f_1), 4);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_87.f_3, 12))
		{
			if (func_29())
			{
				MISC::SET_BIT(&(Local_87.f_3), 12);
			}
		}
	}
}

int func_29()//Position - 0x13BE
{
	switch (Local_87.f_A[0 /*7*/].f_1)
	{
		case 0:
			if (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_134 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_134 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1413
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_87.f_24, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_31()//Position - 0x145E
{
	func_374();
	Local_87 = 0;
}

int func_32()//Position - 0x146D
{
	if (((((((MISC::IS_BIT_SET(Local_87.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_95)) || func_17(iLocal_95, 1)) || func_16(iLocal_95, 0)) || func_16(iLocal_95, 7)) || func_15(iLocal_95)) || Global_24D5B9[iLocal_95 /*254*/].f_E8) || func_33(PLAYER::GET_PLAYER_PED(iLocal_95), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_95 != -1)
	{
		if (MISC::IS_BIT_SET(Local_89[iLocal_95 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x150D
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_34()//Position - 0x1553
{
	if (!MISC::IS_BIT_SET(Local_87.f_1, 5))
	{
		Local_87.f_5 = uLocal_99;
		MISC::SET_BIT(&(Local_87.f_1), 5);
	}
}

void func_35()//Position - 0x1578
{
	if (MISC::IS_BIT_SET(Local_87.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_87.f_1), 5);
	}
}

int func_36()//Position - 0x1595
{
	bool bVar0;
	
	if (MISC::IS_BIT_SET(Local_87.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_169())
		{
			if (iLocal_93 == 1)
			{
				bVar0 = true;
			}
			else if (func_164())
			{
				if (func_161())
				{
					if (func_160())
					{
						bVar0 = true;
					}
					else if (func_158(func_159(iLocal_93)))
					{
						if (func_42())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_34();
			if (func_37())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_37()//Position - 0x160F
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (MISC::IS_BIT_SET(Local_87.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_93)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_345(iLocal_93))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iVar0 /*7*/]) && !MISC::IS_BIT_SET(Local_87.f_A[iVar0 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_87.f_A[iVar0 /*7*/].f_2, 6))
						{
							func_38(iVar0, func_41(iLocal_93), Local_87.f_20, Local_87.f_23);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_93 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_345(iLocal_93))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iVar0 /*7*/]))
					{
						if (!MISC::IS_BIT_SET(Local_87.f_A[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_90, 1);
			MISC::SET_BIT(&iLocal_90, 2);
			MISC::SET_BIT(&iLocal_90, 3);
			MISC::SET_BIT(&iLocal_90, 4);
			MISC::SET_BIT(&(Local_87.f_1), 0);
			MISC::SET_BIT(&Global_199086, iLocal_93);
			return 1;
		}
	}
	return 0;
}

void func_38(int iParam0, var uParam1, struct<3> Param2, var uParam3)//Position - 0x172D
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iParam0 /*7*/]))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_158(func_159(iLocal_93)))
					{
						if (func_40(&(Local_87.f_A[iParam0 /*7*/]), 7, func_159(iLocal_93), Param2, uParam3, 1, 1, 1))
						{
							Local_87.f_A[iParam0 /*7*/].f_1 = iLocal_93;
							Local_87.f_A[iParam0 /*7*/].f_4 = uParam1;
							func_39(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_39(int iParam0)//Position - 0x17AE
{
	char cVar0[16];
	
	if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/])))
		{
			if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), Global_1804A6);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 41, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 20, 1);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 132, 1);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 118, 0);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 311, 1);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), &cVar0);
			switch (Local_87.f_A[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 2, 0);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0, -1, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 32, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 4, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 1024, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 128, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 32, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 8, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 64, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 256, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 16, 1);
					if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 512, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 17, 0);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_95), -1, 0, 2);
					NETWORK::_0x3FA36981311FA4FF(Local_87.f_A[iParam0 /*7*/], 1);
					break;
			}
			ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]), SYSTEM::ROUND((Global_40001.f_86 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]))))));
			if (!MISC::IS_BIT_SET(Local_87.f_1, 8))
			{
				MISC::SET_BIT(&(Local_87.f_1), 8);
			}
			MISC::SET_BIT(&(Local_87.f_A[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_40(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x1B38
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x1B97
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_42()//Position - 0x1BB4
{
	struct<18> Var0;
	
	if (MISC::IS_BIT_SET(Local_87.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_93)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_95) && func_6(iLocal_95, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1) };
					Var0.f_5 = 20f;
					if (func_43(Local_87.f_24, 40f, &(Local_87.f_20), &(Local_87.f_23), Var0))
					{
						MISC::SET_BIT(&(Local_87.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
					PED::SPAWNPOINTS_CANCEL_SEARCH();
					if (Global_24B0C4.f_4AE)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_24B0C4.f_4AE = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_43(struct<3> Param0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x1C6C
{
	struct<11> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 3;
	Var0.f_A = 3;
	Var0.f_E = 3;
	Var1.f_16 = 1;
	Var1 = { Param0 };
	Var1.f_3 = Param4.f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_44(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_C > 0f && Param4.f_7) && Param4.f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > Param4.f_C)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_A[0] = Param4.f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_A[0];
		return 1;
	}
	return 0;
}

int func_44(var uParam0, var uParam1, var uParam2)//Position - 0x1D54
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	struct<46> Var11;
	bool bVar12;
	
	bVar10 = false;
	if (!uParam0->f_7)
	{
		if (((!Global_24B0C4.f_4A8 == *uParam0 || !Global_24B0C4.f_4A8.f_1 == uParam0->f_1) || !Global_24B0C4.f_4A8.f_2 == uParam0->f_2) || !Global_24B0C4.f_4AB == uParam0->f_4)
		{
			bVar10 = true;
		}
	}
	else if ((((((!Global_24B0C4.f_4B6 == uParam0->f_8 || !Global_24B0C4.f_4B6.f_1 == uParam0->f_8.f_1) || !Global_24B0C4.f_4B6.f_2 == uParam0->f_8.f_2) || !Global_24B0C4.f_4B9 == uParam0->f_B) || !Global_24B0C4.f_4B9.f_1 == uParam0->f_B.f_1) || !Global_24B0C4.f_4B9.f_2 == uParam0->f_B.f_2) || !Global_24B0C4.f_4BC == uParam0->f_E)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (Global_24B0C4.f_4A6 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B0C4.f_4AF))
			{
				if (Global_24B0C4.f_4AF == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) < func_157())
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) < func_157())
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_156();
		}
		Global_24B0C4.f_4A6 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AC) > func_157())
	{
		Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
	}
	if (!uParam0->f_7)
	{
		fVar2 = (*uParam0 - uParam0->f_4);
		fVar3 = (uParam0->f_1 - uParam0->f_4);
		fVar4 = (*uParam0 + uParam0->f_4);
		fVar5 = (uParam0->f_1 + uParam0->f_4);
	}
	else
	{
		if (uParam0->f_8 < uParam0->f_B)
		{
			fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
			fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
		}
		else
		{
			fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
			fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
		}
		if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
		{
			fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
			fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
		}
		else
		{
			fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
			fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fVar2, fVar3, fVar4, fVar5);
	if (!uParam0->f_7)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B0C4.f_4A6)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		func_156();
		if (uParam1->f_7 && !uParam0->f_7)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_155(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_11, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_A[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!uParam0->f_7)
			{
				Global_24B0C4.f_4A8 = { *uParam0 };
				Global_24B0C4.f_4AB = uParam0->f_4;
				Global_24B0C4.f_4BD = 0;
			}
			else
			{
				Global_24B0C4.f_4B6 = { uParam0->f_8 };
				Global_24B0C4.f_4B9 = { uParam0->f_B };
				Global_24B0C4.f_4BC = uParam0->f_E;
				Global_24B0C4.f_4A8 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
				Global_24B0C4.f_4BD = 1;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_154(Var6.x, Var6.f_1);
			}
			Global_24B0C4.f_4A7 = 1;
			Global_24B0C4.f_4A6 = 1;
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4AC = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4AF = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B0C4.f_4A6)
	{
		if (Global_24B0C4.f_4A7 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 5000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var11.f_6 = 1082130432;
					Var11.f_7 = 1176255488;
					Var11.f_8 = 1;
					Var11.f_A = 1;
					Var11.f_D = 1;
					Var11.f_F = 1;
					Var11.f_10 = 1;
					Var11.f_1F = 1;
					Var11.f_22 = joaat("tailgater");
					Var11.f_2B = 1123024896;
					Var11 = { *uParam1 };
					Var11.f_3 = uParam1->f_5;
					Var11.f_B = uParam1->f_9;
					Var11.f_12 = 1;
					if (uParam0->f_7)
					{
						Var11.f_1A = 1;
						Var11.f_13 = { uParam0->f_8 };
						Var11.f_16 = { uParam0->f_B };
						Var11.f_19 = uParam0->f_E;
					}
					else
					{
						Var11.f_1A = 0;
						Var11.f_13 = { *uParam0 };
						Var11.f_19 = uParam0->f_4;
					}
					Var11.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var11.f_1E = 1;
						Var11.f_20 = 1;
					}
					Var11.f_26 = { uParam1->f_D };
					Var11.f_29 = uParam1->f_10;
					Var11.f_2D = uParam1->f_11;
					func_141(uParam2[0 /*3*/], &(uParam2->f_A[0]), &Var11);
					if ((uParam1->f_7 && uParam1->f_9) && !uParam0->f_7)
					{
						if (!func_140(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_A[0] = uParam0->f_3;
						}
					}
					Global_24B0C4.f_4A7 = 9;
				}
				else
				{
					Global_24B0C4.f_4A7 = 2;
				}
			}
		}
		if (Global_24B0C4.f_4A7 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(Var7, Var8) == 0)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_137(PLAYER::PLAYER_ID(), 0))
				{
					Global_24B0C4.f_4A7 = 3;
				}
				else
				{
					Global_24B0C4.f_4A7 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4B1) > 7000)
			{
				func_136(Var6.x, Var6.f_1);
			}
		}
		if (Global_24B0C4.f_4A7 == 3)
		{
			if (func_135() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 10000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 4;
			}
		}
		if (Global_24B0C4.f_4A7 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				func_130();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					if (!uParam0->f_7)
					{
						if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
						{
							Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
							Global_24B0C4.f_4A7 = 5;
						}
					}
					else if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
					{
						Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
						Global_24B0C4.f_4A7 = 5;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					Global_24B0C4.f_4A7 = 5;
					if (!uParam0->f_7)
					{
						PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					}
					else
					{
						PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					}
				}
			}
		}
		if (Global_24B0C4.f_4A7 == 5)
		{
			if (func_74(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B0C4.f_4C1.f_4)
				{
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					Global_24B0C4.f_4A7 = 6;
				}
				else
				{
					Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_A[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						}
					}
					Global_24B0C4.f_4A7 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 8;
			}
		}
		if (Global_24B0C4.f_4A7 == 6)
		{
			iVar0 = 0;
			Global_24B0C4.f_4C1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (!uParam0->f_7)
			{
				if (!func_73(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_72(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4A7 = 7;
			if (!uParam0->f_7)
			{
				PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
			}
			else
			{
				PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
			}
		}
		if (Global_24B0C4.f_4A7 == 7)
		{
			if (func_74(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B0C4.f_52C[iVar9 /*3*/]) == 0f)
							{
								if (!uParam0->f_7)
								{
									if (SYSTEM::VDIST(Global_24B0C4.f_52C[iVar9 /*3*/], *uParam0) < uParam0->f_4)
									{
									}
								}
								else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B0C4.f_52C[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
								{
									*(uParam2[0 /*3*/]) = { Global_24B0C4.f_52C[iVar9 /*3*/] };
								}
							}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						if (!uParam0->f_7)
						{
							Var1 = { *uParam0 };
						}
						else
						{
							Var1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
						}
						func_47(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_A[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_24B0C4.f_4A7 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_24B0C4.f_4AD) > 20000)
			{
				Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
				Global_24B0C4.f_4A7 = 8;
			}
		}
		if (Global_24B0C4.f_4A7 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_46(Global_24B0C4.f_194))
				{
				}
			}
			else if (Global_24B0C4.f_4C1.f_1)
			{
				func_45(uParam2, &(Global_24B0C4.f_4C1.f_5));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar12 = false;
				}
				else
				{
					bVar12 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B0C4.f_4A8 };
				func_47(uParam2[0 /*3*/], 0, bVar12, 0, 0, uParam0, uParam1);
			}
			Global_24B0C4.f_4AD = NETWORK::GET_NETWORK_TIME();
			Global_24B0C4.f_4A7 = 9;
		}
		if (Global_24B0C4.f_4A7 == 9)
		{
			Global_24B0C4.f_4A6 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_156();
			return 1;
		}
		Global_24B0C4.f_4AC = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_45(var uParam0, var uParam1)//Position - 0x2981
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*8*/])->f_4 };
		uParam0->f_A[iVar0] = (uParam1[iVar0 /*8*/])->f_7;
		uParam0->f_E[iVar0] = (*uParam1)[iVar0 /*8*/];
		iVar0++;
	}
}

int func_46(int iParam0)//Position - 0x29CB
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_47(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x29EA
{
	struct<3> Var0;
	var uVar1;
	struct<46> Var2;
	var uVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("tailgater");
	Var2.f_2B = 1123024896;
	if (bParam1)
	{
		iVar5 = 0;
	}
	else
	{
		iVar5 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar5 += 4;
			}
			else if (!uParam5->f_7)
			{
				Var6 = { *uParam5 };
				if (func_73(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar5 += 4;
				}
			}
			else
			{
				Var6 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
				if (func_72(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar5 += 4;
				}
			}
		}
		else
		{
			iVar5 += 4;
		}
	}
	if (func_49(*uParam0, &Var0, iVar5, iParam3, 1))
	{
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (bParam4)
		{
			Var2.f_12 = 1;
			if (uParam5->f_7)
			{
				Var2.f_1A = 1;
				Var2.f_13 = { uParam5->f_8 };
				Var2.f_16 = { uParam5->f_B };
				Var2.f_19 = uParam5->f_E;
			}
			else
			{
				Var2.f_1A = 0;
				Var2.f_13 = { *uParam5 };
				Var2.f_19 = uParam5->f_4;
			}
		}
		Var2.f_26 = { uParam6->f_D };
		Var2.f_29 = uParam6->f_10;
		Var2.f_2D = uParam6->f_11;
		func_141(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		if (uParam5->f_7)
		{
			Var7 = { uParam5->f_8 };
			Var8 = { uParam5->f_B };
			fVar9 = uParam5->f_E;
		}
		else
		{
			Var7 = { *uParam5 };
			fVar9 = uParam5->f_4;
		}
		if (!func_48(Var0, uParam5->f_7, Var7, Var8, fVar9))
		{
			if (func_49(*uParam0, &Var0, iVar5, iParam3, 0))
			{
				if (!func_48(Var0, uParam5->f_7, Var7, Var8, fVar9))
				{
					if (uParam5->f_7)
					{
						Var0 = { Var7 + Var8 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var7 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7)
				{
					Var0 = { Var7 + Var8 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var7 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_24B0C4.f_206 = 1;
}

int func_48(struct<3> Param0, bool bParam1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x2CD3
{
	if (bParam1)
	{
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param2, Param3, fParam4, 0, 1);
	}
	else if (SYSTEM::VDIST(Param0, Param2) <= fParam4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_49(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2D18
{
	float fVar0;
	
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam1, iParam2))
	{
		fVar0 = SYSTEM::VDIST(Param0, *uParam1);
		if (fVar0 < 40f)
		{
			if ((iParam3 == 1 && !func_50(Global_24B0C4.f_1A1, &Param0, 0f, 0f, 0f, 0f, bParam4, 1)) || iParam3 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x2D84
{
	if (func_63(Param0))
	{
		if (func_62(uParam1, bParam4, 0, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_53(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_52(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	if (SYSTEM::VDIST(*uParam1, Param2) < fParam3)
	{
		if (bParam4)
		{
			func_51(uParam1, Param2, fParam3, 1036831949, 0);
		}
		return 1;
	}
	return 0;
}

void func_51(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4)//Position - 0x2E0F
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_52(struct<3> Param0, float fParam1)//Position - 0x2E91
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SYSTEM::VDIST(Param0, Global_24B0C4.f_58A[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_53(var uParam0, bool bParam1, bool bParam2)//Position - 0x2ECB
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_24B0C4.f_11A.f_79)
	{
		if (Global_24B0C4.f_11A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_61(*uParam0, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_54(&Var1, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_53(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_54(&Var1, &(Global_24B0C4.f_11A[iVar0 /*12*/]), 1036831949, 1, bParam2);
					}
					*uParam0 = { Var1 };
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2F7A
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_59(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_59(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_59(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_51(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_58(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_55(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_55(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)//Position - 0x3083
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_57(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_56(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_56(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_57(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_57(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_56(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_56(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_56(struct<3> Param0, struct<3> Param1)//Position - 0x3352
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_57(struct<3> Param0, struct<3> Param1)//Position - 0x3373
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_58(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x33AC
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

Vector3 func_59(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x34AB
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_51(&Param0, Param1, fParam3, fParam5, bParam6);
			break;
		
		case 1:
			func_58(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_55(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_140(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_60(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x35AD
{
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_61(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x3650
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_140(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B0C4.f_589) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_60(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_62(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x37B1
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_24B8BC[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24B8BC[iVar0 /*17*/].f_10))
			{
				if (func_61(*uParam0, &(Global_24B8BC[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_24B8BC[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24B8BC[iVar0 /*17*/].f_D };
						}
						else
						{
							Var1 = { *uParam0 };
							func_54(&Var1, &(Global_24B8BC[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_62(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_54(&Var1, &(Global_24B8BC[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(struct<3> Param0)//Position - 0x388A
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_67(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (!Global_24B0C4.f_1A4)
	{
		if (!func_66(Param0, 1008981770))
		{
			if (!func_62(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_62(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_65(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_64(&(Global_24B0C4.f_25[iVar0 /*12*/])) };
				if (!func_62(&Var1, 0, 0, 0))
				{
					if (!func_62(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_64(var uParam0)//Position - 0x392C
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_65(struct<3> Param0, float fParam1)//Position - 0x3975
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_24B0C4.f_25[iVar0 /*12*/].f_9)
		{
			if (func_61(Param0, &(Global_24B0C4.f_25[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(struct<3> Param0, float fParam1)//Position - 0x39BD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_24B0C4.f_25[iVar0 /*12*/].f_9)
		{
			if (func_61(Param0, &(Global_24B0C4.f_25[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_67(int iParam0, bool bParam1)//Position - 0x3A04
{
	if (Global_1406C1 != 0)
	{
		return func_71(iParam0) != 0;
	}
	return func_68(iParam0, bParam1);
}

int func_68(int iParam0, bool bParam1)//Position - 0x3A2A
{
	if (bParam1)
	{
		if (func_69(iParam0))
		{
			return 1;
		}
	}
	if (Global_182604[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_69(int iParam0)//Position - 0x3A56
{
	return func_70(iParam0);
}

bool func_70(int iParam0)//Position - 0x3A64
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

int func_71(int iParam0)//Position - 0x3A7E
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_24D5B9[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3A9F
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_73(float fParam0)//Position - 0x3B4A
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3B62
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B0C4.f_4C1 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_24B0C4.f_4C1)))
			{
				case 0:
					if (uParam2->f_7 && !Global_24B0C4.f_1B8.f_7)
					{
						*(uParam0[0 /*3*/]) = { *uParam1 };
						uParam0->f_A[0] = uParam1->f_3;
						return 1;
					}
					else
					{
						if (uParam1->f_15)
						{
							*(uParam0[0 /*3*/]) = { uParam1->f_12 };
						}
						else
						{
							*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
						}
						if (uParam1->f_5 && func_46(Global_24B0C4.f_194))
						{
							if (!Global_24B0C4.f_4C1.f_4)
							{
								Global_24B0C4.f_4C1.f_4 = 1;
							}
							else
							{
								func_47(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
							}
						}
						else
						{
							func_47(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
						}
						uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					Global_24B0C4.f_4C1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_24B0C4.f_4C1.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_127(Global_24B0C4.f_1B8, &(Global_24B0C4.f_4C1.f_1E), &(Global_24B0C4.f_4C1.f_3F));
	}
	if (uParam2->f_7 && !Global_24B0C4.f_4C1.f_3)
	{
		Global_24B0C4.f_4C1.f_3 = 1;
		func_79(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 43;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B0C4.f_4C1 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B0C4.f_4C1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B0C4.f_4C1.f_2)
					{
						iVar2 = Global_24B0C4.f_4C1.f_2 + 1;
					}
					if (iVar2 > (Global_24B0C4.f_4C1 - 1))
					{
						iVar2 = (Global_24B0C4.f_4C1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_79(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B0C4.f_4C1.f_2 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B0C4.f_4C1;
		}
		if (Global_24B0C4.f_4C1 == iVar2)
		{
			if (uParam1->f_5 && func_46(Global_24B0C4.f_194))
			{
				if (Global_24B0C4.f_4C1.f_1)
				{
					func_45(uParam0, &(Global_24B0C4.f_4C1.f_5));
					func_78(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
					func_47(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_78(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B0C4.f_4C1.f_1)
			{
				func_45(uParam0, &(Global_24B0C4.f_4C1.f_5));
				func_78(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B0C4.f_4C1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_A[0]));
				if (!func_75(uParam0[0 /*3*/], 0))
				{
					uParam0->f_A[0] = (uParam0->f_A[0] * 57.29578f);
					func_78(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
					func_47(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_78(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
				func_47(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_78(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B0C4.f_4A8 };
		if (uParam1->f_5 && func_46(Global_24B0C4.f_194))
		{
			if (!Global_24B0C4.f_4C1.f_4)
			{
				Global_24B0C4.f_4C1.f_4 = 1;
			}
			else
			{
				func_47(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_47(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_A[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_78(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_75(var uParam0, bool bParam1)//Position - 0x407C
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_77(Var1);
	iVar0 = 0;
	while (iVar0 < Global_24BC43[iVar2])
	{
		if (func_76(Var1, &(Global_24B945[iVar2 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_24B945[iVar2 /*85*/][iVar0 /*7*/], Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_3, Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24BC43[8])
	{
		if (func_76(Var1, &(Global_24B945[8 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_24B945[iVar2 /*85*/][iVar0 /*7*/], Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_3, Global_24B945[iVar2 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_76(struct<3> Param0, var uParam1)//Position - 0x4189
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_77(struct<2> Param0, var uParam1)//Position - 0x41A9
{
	if (Param0 < 0f)
	{
		if (Param0.f_1 > 4000f)
		{
			return 0;
		}
		else if (Param0.f_1 > 0f)
		{
			return 2;
		}
		else if (Param0.f_1 > -2000f)
		{
			return 4;
		}
		else
		{
			return 6;
		}
	}
	else if (Param0.f_1 > 4000f)
	{
		return 1;
	}
	else if (Param0.f_1 > 0f)
	{
		return 3;
	}
	else if (Param0.f_1 > -2000f)
	{
		return 5;
	}
	else
	{
		return 7;
	}
	return 8;
}

void func_78(struct<3> Param0)//Position - 0x4235
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B0C4.f_52C[(3 - iVar0) /*3*/] = { Global_24B0C4.f_52C[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B0C4.f_52C[0 /*3*/] = { Param0 };
}

void func_79(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x4285
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<8> Var11;
	bool bVar12;
	bool bVar13;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_24B0C4.f_194 == 1)
		{
			if (MISC::ABSF((Global_24B0C4.f_1A1.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_67(PLAYER::PLAYER_ID(), 1))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_126(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_125(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	if (SYSTEM::VMAG(uParam3->f_D) > 0f)
	{
		if (SYSTEM::VDIST(Param0, uParam3->f_D) > uParam3->f_10)
		{
			iVar7 += 64;
		}
	}
	else
	{
		iVar7 += 64;
	}
	if (uParam2->f_5)
	{
		if (!Global_24B0C4.f_219)
		{
			if (func_63(Global_24B0C4.f_1A1))
			{
				if ((!func_62(&Param0, 0, 0, 0) && !func_53(&Param0, 0, 0)) && !func_124(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_53(&Param0, 0, 0) && !func_124(&Param0, 0)) && !func_52(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_123(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam2->f_5)
	{
		if (func_116(Param0, fParam1, uParam2->f_F, func_122(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_24B0C4.f_1;
		}
	}
	else if (!func_110(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_109(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_109(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam2->f_5)
	{
		if (!(func_108(PLAYER::PLAYER_ID()) && func_107(PLAYER::PLAYER_ID())))
		{
			if (!func_106(&Param0, &(Global_24B0C4.f_4C1.f_3F), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_107(PLAYER::PLAYER_ID()))
		{
			if (!func_105(Param0, &(Global_24B0C4.f_4C1.f_1E), &(Global_24B0C4.f_4C1.f_3F), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_104(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_104(Param0))
			{
				if (func_46(Global_24B0C4.f_194))
				{
					if (func_66(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_103(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_24B0C4.f_25.f_1F)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_75(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_102(Param0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar12 = false;
	bVar13 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_24B0C4.f_4C1.f_5[iVar10 /*8*/])
		{
			if (uParam2->f_5)
			{
				if (!bVar12)
				{
					if (bParam4)
					{
						uParam3->f_4 = 0;
						bVar4 = false;
					}
					else
					{
						bVar4 = true;
					}
					if (uParam2->f_15)
					{
						fVar0 = func_94(Param0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_94(Param0, Global_24B0C4.f_4A8, uParam3->f_6, uParam3->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar12 = true;
				}
				if ((func_46(Global_24B0C4.f_194) && iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar13)
					{
						fVar2 = func_92(Param0);
						bVar13 = true;
					}
					if (fVar2 < Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam1;
						Var11 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						func_91(Var11, iVar10);
						Global_24B0C4.f_4C1.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] || (iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] && fVar0 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam1;
					Var11 = iVar7;
					Var11.f_1 = fVar0;
					func_91(Var11, iVar10);
					Global_24B0C4.f_4C1.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar12)
				{
					if (uParam2->f_F)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_90(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_81(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_80(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_80(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar12 = true;
				}
				if (iVar7 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] || (iVar7 == Global_24B0C4.f_4C1.f_5[iVar10 /*8*/] && fVar3 > Global_24B0C4.f_4C1.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam1;
					Var11 = iVar7;
					Var11.f_3 = fVar3;
					func_91(Var11, iVar10);
					Global_24B0C4.f_4C1.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}

float func_80(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4A01
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_81(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x4A9F
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	
	fVar2 = 999999.9f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_6(iVar5, 1, 1))
		{
			if (!iVar5 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar3 = false;
				if (bParam1)
				{
					if (func_83(iVar5))
					{
						bVar3 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar5) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar5) == -1 || !func_67(PLAYER::PLAYER_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar5) || !bParam4)
					{
						if (func_82(iVar5))
						{
							Var4 = { func_8(iVar5) };
							if (!bParam4)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4, 1);
							if (fVar1 < fVar2)
							{
								fVar2 = fVar1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar2;
}

int func_82(int iParam0)//Position - 0x4B97
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24D5B9[iParam0 /*254*/].f_EF)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x4BC1
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_88(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_68(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_87(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_68(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_84(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x4C6B
{
	if (func_86(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_25510E = { func_85(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_25510E))
	{
		return 1;
	}
	return 0;
}

struct<13> func_85(int iParam0)//Position - 0x4CA1
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_86(int iParam0, int iParam1)//Position - 0x4CB8
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_25510E = { func_85(iParam0) };
		Global_25511B = { func_85(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_25510E))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_25511B))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2550C8, 35, &Global_25510E);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2550EB, 35, &Global_25511B);
				if (Global_2550C8 == Global_2550EB)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x4D25
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_187385.f_20, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_187385.f_20, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_187385.f_20, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_187385.f_20, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x4EDB
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_89())
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

bool func_89()//Position - 0x4F1C
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

float func_90(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4F2D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_82(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_91(struct<8> Param0, int iParam1)//Position - 0x50C4
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B0C4.f_4C1.f_5[iParam1 /*8*/] };
	Global_24B0C4.f_4C1.f_5[iParam1 /*8*/] = { Param0 };
	if (iParam1 < 2)
	{
		func_91(Var0, iParam1 + 1);
	}
}

float func_92(struct<3> Param0)//Position - 0x5116
{
	var uVar0;
	
	return func_93(Param0, &(Global_24B0C4.f_25), &uVar0);
}

float func_93(struct<3> Param0, var uParam1, var uParam2)//Position - 0x512E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B0C4.f_589) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_94(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x52AA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_80(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_80(func_81(Param0, 1, 0, 0, 1), 0f, func_101(), func_99(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_80(func_97(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_67(PLAYER::PLAYER_ID(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_80(func_96(Param0, PLAYER::PLAYER_ID(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam3)
	{
		if (func_95(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_80(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_80(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_80(SYSTEM::VDIST(Global_24B0C4.f_1A1, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_95(struct<3> Param0, var uParam1, var uParam2)//Position - 0x5455
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar1, &Var0);
		*uParam1 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_96(struct<3> Param0, int iParam1, int iParam2)//Position - 0x54AE
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam1 == iVar2 || iParam2 == 1)
		{
			iVar3 = iVar2;
			if (func_6(iVar3, 0, 1))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1))
				{
					if (Global_24C9BC.f_104[iVar2])
					{
						fVar1 = SYSTEM::VDIST(Global_24C9BC.f_82[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_97(struct<3> Param0)//Position - 0x554F
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2]))
			{
				if (func_98(uVar4[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_98(var uParam0)//Position - 0x55DB
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_180484[PLAYER::PLAYER_ID()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_182604[PLAYER::PLAYER_ID() /*324*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_180363[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_99()//Position - 0x5686
{
	if (func_100())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B0C4.f_25.f_2B) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B0C4.f_25.f_2B)) || Global_24B0C4.f_25.f_2B == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_100()//Position - 0x56E2
{
	if (Global_24B0C4.f_25.f_29 && !Global_24B0C4.f_25.f_F0)
	{
		if (!func_88(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_101()//Position - 0x5717
{
	if (func_100())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B0C4.f_25.f_2B) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B0C4.f_25.f_2B)) || Global_24B0C4.f_25.f_2B == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_102(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5773
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_103(struct<3> Param0)//Position - 0x5802
{
	var uVar0;
	int iVar1;
	
	if (Global_24B0C4.f_25.f_1F)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B0C4.f_25.f_20))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_24B0C4.f_25.f_21)
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
		}
	}
	return 1;
}

int func_104(struct<3> Param0)//Position - 0x586D
{
	float fVar0;
	
	if (!Global_24B0C4.f_4BD)
	{
		fVar0 = MISC::ABSF((Param0.f_2 - Global_24B0C4.f_4A8.f_2));
		if (fVar0 < Global_24B0C4.f_4AB)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_24B0C4.f_4B6, Global_24B0C4.f_4B9, Global_24B0C4.f_4BC, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_105(struct<3> Param0, var uParam1, var uParam2, float fParam3)//Position - 0x58D3
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_106(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x5981
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_51(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x59F3
{
	switch (Global_1406C1)
	{
		case 0:
			if (!func_15(iParam0))
			{
				if (Global_182604[iParam0 /*324*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x5A29
{
	if (func_68(iParam0, 1))
	{
		if (Global_182604[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x5A4D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_82(iVar1) || !bParam8) && !Global_24D5B9[iVar1 /*254*/].f_FD)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_110(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5C03
{
	if (func_115(Param0, fParam1, iParam2, iParam3) || func_111(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_111(struct<3> Param0, int iParam1, int iParam2)//Position - 0x5C33
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar1 = iVar0;
			if (func_112(Param0, Global_24C9BC.f_125[iVar0 /*3*/], Global_24C9BC.f_186[iVar0], Global_24C9BC.f_1A7[iVar0], 1036831949))
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam1, 0, 1))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, float fParam4)//Position - 0x5CBC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	
	if (SYSTEM::VDIST(Param0, Param1) < func_114(iParam3, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_113(&Var0, 0f, 0f, uParam2);
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
		MISC::GET_MODEL_DIMENSIONS(iParam3, &Var1, &Var2);
		fVar3 = MISC::ABSF((Var2.f_1 - Var1.f_1));
		fVar4 = MISC::ABSF((Var2.x - Var1.x));
		fVar5 = MISC::ABSF((Var2.f_2 - Var1.f_2));
		Var6 = { Param1 + Var0 * FtoV(((0.5f * fVar3) + fParam4)) };
		Var6.f_2 = (Var6.f_2 - ((0.5f * fVar5) + fParam4));
		Var7 = { Param1 - Var0 * FtoV(((0.5f * fVar3) + fParam4)) };
		Var7.f_2 = (Var7.f_2 + ((0.5f * fVar5) + fParam4));
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var6, Var7, fVar4, 0, 1);
	}
	return 0;
}

void func_113(var uParam0, struct<3> Param1)//Position - 0x5DA9
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_114(int iParam0, float fParam1)//Position - 0x5E80
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	Var2 = { Var1 - Var0 };
	return (SYSTEM::SQRT((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f)))) + fParam1);
}

int func_115(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x5ED7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
			{
				if (Global_24C9BC.f_104[iVar0])
				{
					if (SYSTEM::VDIST(Global_24C9BC.f_82[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (SYSTEM::VDIST(func_8(iVar1), Param0) < fParam1)
				{
					return 1;
				}
			}
			else if (Global_24C9BC.f_104[iVar0])
			{
				if (SYSTEM::VDIST(Global_24C9BC.f_82[iVar0 /*3*/], Param0) < fParam1)
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 1))
			{
				if (SYSTEM::VDIST(func_8(iVar1), Param0) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12)//Position - 0x5FBE
{
	Global_24B0C4.f_1 = 0;
	if (!func_110(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_24B0C4.f_1++;
		if (bParam3)
		{
			if (func_155(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
				if (!func_121(Param0, fParam10))
				{
					Global_24B0C4.f_1++;
					if (!func_120(Param0))
					{
						Global_24B0C4.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			}
		}
		else if (!bParam2)
		{
			if (func_155(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
				if (!func_121(Param0, fParam10))
				{
					Global_24B0C4.f_1++;
					if (!func_117(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B0C4.f_1++;
						if (!func_120(Param0))
						{
							Global_24B0C4.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			}
		}
		else if (func_155(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, 0, -1, 1, 0, 0, fParam11, bParam12))
		{
			Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
			if (!func_121(Param0, fParam10))
			{
				Global_24B0C4.f_1++;
				if (!func_117(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B0C4.f_1++;
					if (!func_120(Param0))
					{
						Global_24B0C4.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B0C4.f_1 = (Global_24B0C4.f_1 + Global_24B0C4);
		}
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x61DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_82(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_119(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_118(func_8(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
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

bool func_118(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x625C
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = SYSTEM::SIN(fParam2);
	Var0.f_1 = SYSTEM::COS(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_119(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62E8
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_120(struct<3> Param0)//Position - 0x6360
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (func_68(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_187385.f_6F19 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_187385.f_6F19)
			{
				if (Global_187385.f_6F1A[iVar0 /*31*/].f_7 != 0)
				{
					MISC::GET_MODEL_DIMENSIONS(Global_187385.f_6F1A[iVar0 /*31*/].f_7, &Var1, &Var2);
					fVar3 = (MISC::ABSF((Var1.f_1 - Var2.f_1)) * 0.5f);
					fVar4 = (MISC::ABSF((Var1.x - Var2.x)) * 0.5f);
					fVar5 = (MISC::ABSF((Var1.f_2 - Var2.f_2)) * 0.5f);
					fVar6 = ((fVar3 * fVar3) + (fVar4 * fVar4));
					fVar6 = (fVar6 + fVar5);
					if (SYSTEM::VDIST2(Global_187385.f_6F1A[iVar0 /*31*/], Param0) < fVar6)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_121(struct<3> Param0, float fParam1)//Position - 0x642C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_82(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_67(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_119(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x64E8
{
	if ((Global_24B0C4.f_194 == 9 || Global_24B0C4.f_194 == 9) || (Global_24B0C4.f_194 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam1, int iParam2)//Position - 0x652B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B0C4.f_52C[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124(var uParam0, bool bParam1)//Position - 0x6569
{
	struct<3> Var0;
	float fVar1;
	
	if (Global_24B0C4.f_1D9 > 0f)
	{
		fVar1 = SYSTEM::VDIST(*uParam0, Global_24B0C4.f_1D6);
		if (fVar1 < Global_24B0C4.f_1D9)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_51(&Var0, Global_24B0C4.f_1D6, Global_24B0C4.f_1D9, 1036831949, 0);
				if (func_124(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_51(&Var0, Global_24B0C4.f_1D6, Global_24B0C4.f_1D9, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_125(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6601
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_82(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && func_84(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(struct<3> Param0, float fParam1, int iParam2, float fParam3)//Position - 0x66FD
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_137(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_127(struct<3> Param0, var uParam1, var uParam2)//Position - 0x67C2
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!MISC::IS_BIT_SET(Global_2401A6[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A6[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2401A6[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2401A6[iVar1 /*26*/].f_6.f_2;
					func_129(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var4 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var4, Param0) < SYSTEM::VDIST(Var5, Param0))
			{
				Var3 = { Global_140131[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_240062[iVar1 /*3*/] };
				func_128(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_128(var uParam0, var uParam1, int iParam2)//Position - 0x69AA
{
	Global_24BF7F = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_128(&Global_24BF7F, uParam1, iParam2 + 1);
	}
}

void func_129(var uParam0, var uParam1, int iParam2)//Position - 0x69E8
{
	Global_24BF7B = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_129(&Global_24BF7B, uParam1, iParam2 + 1);
	}
}

void func_130()//Position - 0x6A22
{
	func_134();
	func_133();
	func_132();
	func_131();
}

void func_131()//Position - 0x6A3A
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B0C4.f_4C1.f_3F[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_132()//Position - 0x6A69
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B0C4.f_4C1.f_1E[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_133()//Position - 0x6A97
{
	struct<8> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_24B0C4.f_4C1.f_5[iVar1 /*8*/] = { Var0 };
		iVar1++;
	}
}

void func_134()//Position - 0x6AD3
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_24B0C4.f_4C1 = { Var0 };
}

var func_135()//Position - 0x6AF1
{
	return Global_14010B.f_4;
}

void func_136(var uParam0, var uParam1)//Position - 0x6AFF
{
	func_156();
	func_154(uParam0, uParam1);
}

bool func_137(int iParam0, int iParam1)//Position - 0x6B13
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_138(-1, 0) == 8;
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

int func_138(int iParam0, bool bParam1)//Position - 0x6B5E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_139();
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

int func_139()//Position - 0x6B9F
{
	return Global_1407E1;
}

bool func_140(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x6BAB
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

void func_141(var uParam0, var uParam1, var uParam2)//Position - 0x6C5E
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	struct<3> Var21;
	var uVar22;
	struct<3> Var23;
	var uVar24;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_50(uParam2->f_23, uParam0, uParam2->f_26, uParam2->f_29, 1, 1))
		{
			uParam2->f_6 = 9999.9f;
		}
	}
	if (uParam2->f_2D)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_2A)
	{
		if (func_153(uParam0, 1))
		{
		}
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24BF89.f_A2 = 0;
	Global_24BF89.f_A3 = 0;
	Global_24BF89.f_A4 = -99;
	Global_24BF89.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24BF89[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24BF89.f_79[iVar14] = 0f;
		iVar14++;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, iVar0, &uVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_24BF89.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24BF89.f_A5 = { Var1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_124(&Var1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_152(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
											{
												if (func_151(Var1, uParam2) || uParam2->f_21 >= 2)
												{
													if ((uParam2->f_2A && !func_153(&Var1, 0)) || uParam2->f_2A == 0)
													{
														Var1 = { func_149(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_2D) };
														if (!bVar10)
														{
															if (bVar9)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (SYSTEM::VMAG(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
															{
																if ((uParam2->f_C && !func_147(Var1, uVar2, uParam2->f_22, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_C)
																{
																	if (!uParam2->f_F || !func_50(uParam2->f_23, &Var1, uParam2->f_26, uParam2->f_29, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar15 = uParam2->f_1F;
																			bVar16 = true;
																			iVar17 = 1;
																			fVar18 = uParam2->f_2B;
																			if (uParam2->f_11)
																			{
																				iVar15 = 0;
																				bVar16 = false;
																				iVar17 = 0;
																				if (uParam2->f_21 == 1)
																				{
																					fVar18 = (fVar18 * 0.375f);
																				}
																			}
																			else
																			{
																				bVar16 = true;
																				iVar17 = 1;
																				if (uParam2->f_1C)
																				{
																					if (uParam2->f_21 == 1)
																					{
																						fVar18 = (fVar18 * 0.375f);
																					}
																				}
																			}
																			iVar19 = 0;
																			if (uParam2->f_3 > 7f)
																			{
																				if (func_155(Var1, 6f, 1f, 1f, 5f, iVar15, bVar16, iVar17, fVar18, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar19 = 1;
																				}
																			}
																			else if (func_155(Var1, 6f, 1f, 1f, 5f, iVar15, bVar16, iVar17, fVar18, 0, -1, 1, 0f, 0, 0, 0) && !func_146(Var1, uVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																			{
																				iVar19 = 1;
																			}
																			if (iVar19 || uParam2->f_21 >= 2)
																			{
																				if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2)
																				{
																					if (uParam2->f_1E)
																					{
																						if (Global_24BF89.f_A2 == 0)
																						{
																							Global_24BF89[0 /*3*/] = { Var1 };
																							Global_24BF89.f_79[0] = uVar2;
																						}
																						else
																						{
																							iVar14 = 0;
																							while (iVar14 < Global_24BF89.f_A2 + 1)
																							{
																								if (iVar14 < 40)
																								{
																									if (SYSTEM::VDIST2(Var1, *uParam0) < SYSTEM::VDIST2(Global_24BF89[iVar14 /*3*/], *uParam0))
																									{
																										func_145(Var1, uVar2, iVar14);
																										iVar14 = Global_24BF89.f_A2 + 1;
																									}
																								}
																								iVar14++;
																							}
																						}
																						Global_24BF89.f_A2++;
																						if (Global_24BF89.f_A2 >= 5)
																						{
																							iVar0 = 100;
																						}
																					}
																					else
																					{
																						Global_24BF89[Global_24BF89.f_A2 /*3*/] = { Var1 };
																						Global_24BF89.f_79[Global_24BF89.f_A2] = uVar2;
																						Global_24BF89.f_A2++;
																						if (func_151(Var1, uParam2))
																						{
																							Global_24BF89.f_A3++;
																						}
																						if (Global_24BF89.f_A2 >= 10)
																						{
																							iVar0 = 100;
																						}
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = uVar2;
																					return;
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																		}
																		else
																		{
																			*uParam0 = { Var1 };
																			*uParam1 = uVar2;
																			return;
																		}
																	}
																}
																else
																{
																	iVar13++;
																}
															}
															else
															{
																iVar0 = 100;
															}
														}
													}
													else
													{
														iVar0++;
													}
												}
												else if (!uParam2->f_20)
												{
													iVar0 = 100;
												}
											}
											else
											{
												iVar0++;
											}
										}
										else
										{
											iVar0++;
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24BF89.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24BF89[0 /*3*/] };
						*uParam1 = Global_24BF89.f_79[0];
						return;
					}
					else
					{
						if (Global_24BF89.f_A3 > 0 && !Global_24BF89.f_A3 == Global_24BF89.f_A2)
						{
							func_143(0, uParam2);
						}
						iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24BF89.f_A2);
						Var21 = { Global_24BF89[0 /*3*/] };
						uVar22 = Global_24BF89.f_79[0];
						Global_24BF89[0 /*3*/] = { Global_24BF89[iVar20 /*3*/] };
						Global_24BF89.f_79[0] = Global_24BF89.f_79[iVar20];
						Global_24BF89[iVar20 /*3*/] = { Var21 };
						Global_24BF89.f_79[iVar20] = uVar22;
						*uParam0 = { Global_24BF89[0 /*3*/] };
						*uParam1 = Global_24BF89.f_79[0];
						return;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						func_141(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iVar13), (40 + iVar13));
						PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var1, &uVar2, &iVar7, iVar3, fVar11, fVar12);
						Var1 = { func_149(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, 0, 0, uParam2->f_2D) };
						Var23 = { Var1 };
						uVar24 = uVar2;
						if (func_50(uParam2->f_23, &Var23, uParam2->f_26, uParam2->f_29, 1, 1) || func_153(&Var23, 1))
						{
							if (!uParam2->f_2C)
							{
								uParam2->f_21 = 0;
								uParam2->f_2C = 1;
								*uParam0 = { Var23 };
								*uParam1 = uVar24;
								func_141(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var23 };
								*uParam1 = uVar24;
								return;
							}
						}
						else
						{
							*uParam0 = { Var23 };
							*uParam1 = uVar24;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				func_141(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_142(&Global_14053D, uParam0, uParam1, PLAYER::PLAYER_ID());
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return;
			}
		}
		Global_24BF89.f_A4 = iVar6;
	}
}

void func_142(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x74F3
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), func_8(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_110(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_143(int iParam0, var uParam1)//Position - 0x7577
{
	if (!func_151(Global_24BF89[iParam0 /*3*/], uParam1))
	{
		Global_24BF89.f_A2 = (Global_24BF89.f_A2 - 1);
		func_144(iParam0);
		if (Global_24BF89.f_A2 > Global_24BF89.f_A3)
		{
			func_143(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_143(iParam0 + 1, uParam1);
	}
}

void func_144(int iParam0)//Position - 0x75D2
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24BF89[iParam0 /*3*/] = { Global_24BF89[iParam0 + 1 /*3*/] };
			Global_24BF89.f_79[iParam0] = Global_24BF89.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_145(struct<3> Param0, var uParam1, int iParam2)//Position - 0x761D
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_24BF89[iParam2 /*3*/] };
	uVar1 = Global_24BF89.f_79[iParam2];
	Global_24BF89[iParam2 /*3*/] = { Param0 };
	Global_24BF89.f_79[iParam2] = uParam1;
	if (iParam2 <= Global_24BF89.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_145(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_146(struct<3> Param0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x768A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_82(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_84(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (func_112(func_8(iVar1), Param0, uParam1, iParam2, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x778B
{
	if (func_148(Param0, uParam1, iParam2, iParam3, iParam4) || func_111(Param0, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_148(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x77BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_24C9BC.f_104[iVar0])
				{
					if (func_112(Global_24C9BC.f_82[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_112(func_8(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24C9BC.f_104[iVar0])
			{
				if (func_112(Global_24C9BC.f_82[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 1))
			{
				if (func_112(func_8(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_149(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x78BC
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(Param4) > 0f)
		{
			if (!func_150(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar4, &iVar5, &iVar6, &fVar7, iParam5);
		if (iVar5 == iVar6)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar5 + iVar6) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		bVar10 = false;
		if (bVar9)
		{
			if (iVar5 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar5)
			{
				bVar10 = true;
			}
		}
		else if (iVar6 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar6)
		{
			bVar10 = true;
		}
		if (fVar7 < 0f)
		{
			fVar8 = 0f;
		}
		else
		{
			if (bVar9)
			{
				if (bVar10)
				{
					fVar8 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar8 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar10)
				{
					if (iVar5 > 2)
					{
						fVar8 = (fVar8 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar8 = (fVar8 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar10)
				{
					fVar8 = (4.2f * (SYSTEM::TO_FLOAT(iVar6) * 0.5f));
				}
				else
				{
					fVar8 = (4.2f * SYSTEM::TO_FLOAT(iVar6));
				}
				if (bVar10)
				{
					if (iVar6 > 2)
					{
						fVar8 = (fVar8 + (IntToFloat((iVar6 - 2)) * 1f));
					}
				}
				else if (iVar6 > 1)
				{
					fVar8 = (fVar8 + (IntToFloat((iVar6 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar8 = (fVar8 + (0.95f * fVar7));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar8 = (fVar8 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				MISC::GET_MODEL_DIMENSIONS(iParam7, &fVar11, &fVar12);
				fVar13 = (fVar12 - fVar11);
				if (fVar13 > 1.8f)
				{
					fVar8 = (fVar8 + ((fVar13 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param4) > 0f)
	{
		if (!func_150(Param0, *uParam1, Param4))
		{
			if (bParam3)
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *uParam1, fVar8, 0f, 0f) };
	return Var0;
}

int func_150(struct<3> Param0, var uParam1, struct<3> Param2)//Position - 0x7C04
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_113(&Var0, 0f, 0f, uParam1);
	Var1 = { Param2 - Param0 };
	if (func_56(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_151(struct<3> Param0, var uParam1)//Position - 0x7C40
{
	if (uParam1->f_12)
	{
		if (!uParam1->f_1A)
		{
			if (SYSTEM::VDIST(Param0, uParam1->f_13) <= uParam1->f_19)
			{
				return 1;
			}
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_152(struct<3> Param0)//Position - 0x7C9A
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_77(Param0);
	iVar0 = 0;
	while (iVar0 < Global_24BF0C[iVar1])
	{
		if (func_76(Param0, &(Global_24BC4D[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24BF0C[8])
	{
		if (func_76(Param0, &(Global_24BC4D[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_153(var uParam0, bool bParam1)//Position - 0x7D15
{
	if (Global_24B0C4.f_16.f_E)
	{
		if (((((*uParam0 > Global_24B0C4.f_16.f_8 && *uParam0 < Global_24B0C4.f_16.f_B) && uParam0->f_1 > Global_24B0C4.f_16.f_8.f_1) && uParam0->f_1 < Global_24B0C4.f_16.f_B.f_1) && uParam0->f_2 > Global_24B0C4.f_16.f_8.f_2) && uParam0->f_2 < Global_24B0C4.f_16.f_B.f_2)
		{
			if (bParam1)
			{
				*uParam0 = { func_59(*uParam0, Global_24B0C4.f_16.f_8, Global_24B0C4.f_16.f_B, 0f, 1, 1036831949, 0) };
			}
			return 1;
		}
	}
	return 0;
}

void func_154(var uParam0, var uParam1)//Position - 0x7DCA
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_24B0C4.f_4B0 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B0C4.f_4AE = 1;
	Global_24B0C4.f_4B1 = NETWORK::GET_NETWORK_TIME();
}

int func_155(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15)//Position - 0x7DFD
{
	Global_24B0C4 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, 0))
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (fParam12 > 0f)
	{
		if (func_125(Param0, fParam12, 1, 1, bParam13, bParam15, 0, bParam13))
		{
			return 0;
		}
	}
	Global_24B0C4++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_109(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B0C4++;
	return 1;
}

void func_156()//Position - 0x7EFA
{
	if (Global_24B0C4.f_4AE)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B0C4.f_4B0)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B0C4.f_4AE = 0;
	}
}

int func_157()//Position - 0x7F2D
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	return 1000;
}

int func_158(int iParam0)//Position - 0x7F45
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_159(int iParam0)//Position - 0x7F63
{
	switch (iParam0)
	{
		case 0:
			return uLocal_98;
			break;
	}
	return 0;
}

int func_160()//Position - 0x7F82
{
	if (iLocal_93 == 0)
	{
		if (MISC::IS_BIT_SET(Local_87.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()//Position - 0x7FA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!MISC::IS_BIT_SET(Local_87.f_2, 0))
	{
		MISC::SET_BIT(&(Local_87.f_2), 0);
		if (iLocal_93 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_95, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(0)) >= func_345(iLocal_93)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_345(iLocal_93)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_95);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_277, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_345(iLocal_93))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iVar1 /*7*/]) && !MISC::IS_BIT_SET(Local_87.f_A[iVar1 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_87.f_A[iVar1 /*7*/].f_2, 6)) && !MISC::IS_BIT_SET(Local_87.f_A[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_277[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_277[iVar0]))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_277[iVar0]))
										{
											if (func_163(ENTITY::GET_ENTITY_MODEL(uLocal_277[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_277[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_277[iVar0], 0))
													{
														if (func_5(ENTITY::GET_ENTITY_COORDS(uLocal_277[iVar0], 1), ENTITY::GET_ENTITY_COORDS(iVar2, 1), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_277[iVar0], 1, 0);
															Local_87.f_A[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_87.f_A[iVar5 /*7*/].f_2), 8);
															if (!MISC::IS_BIT_SET(Local_87.f_1, 12))
															{
																Local_87.f_8 = uLocal_99;
																MISC::SET_BIT(&(Local_87.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_87.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_345(iLocal_93))
		{
			if (MISC::IS_BIT_SET(Local_87.f_A[iVar6 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_87.f_A[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (MISC::IS_BIT_SET(Local_87.f_A[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6]))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6], 1);
							Local_87.f_A[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_277[Local_87.f_A[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_87.f_A[iVar6 /*7*/], 1);
							MISC::SET_BIT(&(Local_87.f_A[iVar6 /*7*/].f_2), 0);
							Local_87.f_A[iVar6 /*7*/].f_1 = iLocal_93;
							Local_87.f_A[iVar6 /*7*/].f_4 = func_41(iLocal_93);
							func_39(iVar6);
							MISC::CLEAR_BIT(&(Local_87.f_A[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_8) > 5000)
		{
			if (iVar7 >= func_345(iLocal_93))
			{
				MISC::SET_BIT(&(Local_87.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_277[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_345(iLocal_93))
			{
				if (MISC::IS_BIT_SET(Local_87.f_A[iVar6 /*7*/].f_2, 8))
				{
					func_162(&(Local_87.f_A[iVar6 /*7*/]));
					MISC::CLEAR_BIT(&(Local_87.f_A[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			MISC::CLEAR_BIT(&(Local_87.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0)//Position - 0x8380
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_163(int iParam0)//Position - 0x83A4
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_164()//Position - 0x86A2
{
	if (MISC::IS_BIT_SET(Local_87.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_93 == 0)
	{
		uLocal_98 = func_165(Local_87.f_24, 1);
		MISC::SET_BIT(&(Local_87.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_87.f_1), 6);
		return 1;
	}
	return 0;
}

int func_165(struct<3> Param0, int iParam1)//Position - 0x86F0
{
	int iVar0;
	
	if (func_166(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_166(Param0, 1100f, -196f, 300f, 350f, 0) || func_166(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_166(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_166(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_166(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_166(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_166(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_166(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x88AD
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, iParam3) <= fParam2;
}

void func_167(int iParam0)//Position - 0x88C6
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_87.f_24 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (func_168(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_87.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_87.f_1), 17);
	}
}

int func_168(int iParam0, int iParam1)//Position - 0x8905
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169()//Position - 0x8945
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (MISC::IS_BIT_SET(Local_87.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_93)
			{
				case 0:
					if (MISC::IS_BIT_SET(Local_87.f_2, 11))
					{
						if (func_6(iLocal_95, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_95), Local_87.f_27) > 625f)
							{
								MISC::CLEAR_BIT(&(Local_87.f_2), 11);
								MISC::CLEAR_BIT(&iLocal_90, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_95, 1, 1))
						{
							bVar0 = true;
							if (func_172())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_34();
						}
						else
						{
							func_35();
						}
						if (MISC::IS_BIT_SET(Local_87.f_1, 5))
						{
							if (func_171())
							{
								func_35();
								MISC::SET_BIT(&(Local_87.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_95, 1, 1))
					{
						bVar0 = true;
						if (func_170())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_34();
					}
					else
					{
						func_35();
					}
					if (MISC::IS_BIT_SET(Local_87.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_5) > 30000)
						{
							func_35();
							MISC::SET_BIT(&(Local_87.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_170()//Position - 0x8A6A
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_95);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_17(iLocal_95, 1)) || func_16(iLocal_95, 0)) || func_16(iLocal_95, 7)) || func_15(iLocal_95))
	{
		return 1;
	}
	if (func_67(iLocal_95, 1))
	{
		if (iLocal_95 > -1)
		{
			if (Global_182604[iLocal_95 /*324*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()//Position - 0x8AF0
{
	if (!MISC::IS_BIT_SET(Local_87.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_87.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0x8B3F
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_95);
	if ((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_17(iLocal_95, 1)) || func_16(iLocal_95, 0)) || func_16(iLocal_95, 7)) || func_15(iLocal_95)) || Global_24D5B9[iLocal_95 /*254*/].f_E8) || func_33(PLAYER::GET_PLAYER_PED(iLocal_95), joaat("titan")))
	{
		return 1;
	}
	if (func_67(iLocal_95, 1))
	{
		if (iLocal_95 > -1)
		{
			if (Global_182604[iLocal_95 /*324*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_95 != -1)
	{
		if (MISC::IS_BIT_SET(Local_89[iLocal_95 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_173()//Position - 0x8C1A
{
	if (!MISC::IS_BIT_SET(Local_87.f_1, 14))
	{
		Local_87.f_9 = uLocal_99;
		MISC::SET_BIT(&(Local_87.f_1), 14);
	}
}

void func_174()//Position - 0x8C41
{
	if (Local_87.f_2C != Local_89[iLocal_94 /*5*/].f_4)
	{
		Local_87.f_2C = Local_89[iLocal_94 /*5*/].f_4;
	}
}

void func_175()//Position - 0x8C66
{
	if (!MISC::IS_BIT_SET(Local_87.f_1, 10))
	{
		Local_87.f_2D = func_345(iLocal_93);
		Local_87.f_2E = 0;
		Local_87.f_2F = 0;
		MISC::SET_BIT(&(Local_87.f_1), 10);
	}
}

void func_176()//Position - 0x8C9B
{
	func_177();
	if (!MISC::IS_BIT_SET(Local_87.f_1, 8))
	{
		if (MISC::IS_BIT_SET(Local_87.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uLocal_99, Local_87.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_87.f_2), 8);
			}
		}
	}
}

void func_177()//Position - 0x8CDD
{
	if (!MISC::IS_BIT_SET(Local_87.f_2, 7))
	{
		Local_87.f_7 = uLocal_99;
		MISC::SET_BIT(&(Local_87.f_2), 7);
	}
}

void func_178()//Position - 0x8D02
{
	int iVar0;
	
	MISC::SET_BIT(&iLocal_90, 7);
	if (MISC::IS_BIT_SET(Local_87.f_3, 1))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 2))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 3))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 9))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 4))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 5))
	{
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::CLEAR_BIT(&iLocal_90, 7);
			if (func_245("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_90, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::CLEAR_BIT(&iLocal_90, 7);
			if (func_245("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_90, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::CLEAR_BIT(&iLocal_90, 7);
			if (func_244())
			{
				iLocal_278 = func_241(12);
				func_239(iLocal_278, 1, 0, 0f);
				func_229(iLocal_278, 4, 1, 1);
				MISC::SET_BIT(&iLocal_90, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 0))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
			{
				MISC::CLEAR_BIT(&iLocal_90, 7);
				if (func_245("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_90, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == iLocal_95)
		{
			if (MISC::IS_BIT_SET(Local_87.f_2, 1))
			{
				if (MISC::IS_BIT_SET(Local_87.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_40001.f_1373) * Global_40001.f_10A6));
					func_192(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_180(47, 1);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::CLEAR_BIT(&iLocal_90, 7);
			if (func_244())
			{
				iLocal_278 = (func_241(2) * func_345(iLocal_93));
				func_239(iLocal_278, 1, 0, 0f);
				func_229(iLocal_278, 3, 1, 0);
				MISC::SET_BIT(&iLocal_90, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_87.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::CLEAR_BIT(&iLocal_90, 7);
			if (func_244())
			{
				iLocal_278 = (func_241(2) * func_345(iLocal_93));
				func_239(iLocal_278, 1, 0, 0f);
				func_229(iLocal_278, 3, 1, 0);
				MISC::SET_BIT(&iLocal_90, 7);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_90, 7))
	{
		func_179();
	}
}

void func_179()//Position - 0x8F61
{
	MISC::CLEAR_BIT(&(Global_182604[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*324*/].f_75), iLocal_93);
	Global_182604[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*324*/].f_76 = -1;
	if (iLocal_93 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(uLocal_276))
		{
			MISC::DELETE_INCIDENT(uLocal_276);
		}
	}
	func_374();
	func_422();
}

int func_180(int iParam0, int iParam1)//Position - 0x8FAB
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_181(iParam0, iParam1);
}

int func_181(int iParam0, int iParam1)//Position - 0x8FC6
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_191(&Global_26D4DB))
	{
		if (func_189(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_182(&Global_26D4DB, iParam0))
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

int func_182(var uParam0, int iParam1)//Position - 0x904A
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_189(uParam0, iParam1))
	{
		return 0;
	}
	func_185(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_183(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_183(var uParam0, int iParam1)//Position - 0x90D0
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_189(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_184(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_184(var uParam0, int iParam1)//Position - 0x9120
{
	return (*uParam0)[iParam1] == 61;
}

void func_185(var uParam0)//Position - 0x9131
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_188(uParam0, iVar0);
		iVar0++;
	}
	func_186(&(uParam0->f_3E), (8f - 0.5f));
}

void func_186(var uParam0, float fParam1)//Position - 0x9168
{
	uParam0->f_1 = (func_187(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_187(bool bParam0)//Position - 0x9196
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

void func_188(var uParam0, int iParam1)//Position - 0x91DE
{
	(*uParam0)[iParam1] = 61;
}

bool func_189(var uParam0, int iParam1)//Position - 0x91EE
{
	return func_190(uParam0, iParam1) != -1;
}

int func_190(var uParam0, int iParam1)//Position - 0x9200
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

bool func_191(var uParam0)//Position - 0x922D
{
	return uParam0->f_44 == 1;
}

var func_192(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x923B
{
	return func_193(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_193(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9257
{
	var uVar0;
	
	uVar0 = func_194(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_194(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x927A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_228(PLAYER::PLAYER_ID()) || func_227(PLAYER::PLAYER_ID()))
	{
		if (Global_40001.f_1C6E > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_40001.f_1C6E;
		}
	}
	else if (Global_40001.f_136C > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_40001.f_136C;
	}
	if (func_226(uParam2))
	{
	}
	if (func_225())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_223(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_222(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_220(0, &iVar1);
					break;
				
				case 3:
					func_220(1, &iVar1);
					break;
				
				case 1:
					func_218(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_215(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_214(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_2 != -1)
				{
					func_215(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_199(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_195(int iParam0)//Position - 0x9435
{
	if (func_225())
	{
		Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_5 = iParam0;
		func_196(joaat("mpply_globalxp"), iParam0);
	}
}

void func_196(int iParam0, var uParam1)//Position - 0x9460
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_197(int iParam0)//Position - 0x947C
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_198(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_182604[iParam0 /*324*/].f_B4.f_5;
			}
		}
		else
		{
			return func_198(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x94CD
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_199(int iParam0)//Position - 0x94EB
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_85(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_202(func_203(&Var0));
			if (iVar1 == 0)
			{
				func_201(&Global_1460C2, iParam0);
				func_200(joaat("mpply_crew_local_xp_0"), Global_1460C2);
			}
			else if (iVar1 == 1)
			{
				func_201(&Global_1460C3, iParam0);
				func_200(joaat("mpply_crew_local_xp_1"), Global_1460C3);
			}
			else if (iVar1 == 2)
			{
				func_201(&Global_1460C4, iParam0);
				func_200(joaat("mpply_crew_local_xp_2"), Global_1460C4);
			}
			else if (iVar1 == 3)
			{
				func_201(&Global_1460C5, iParam0);
				func_200(joaat("mpply_crew_local_xp_3"), Global_1460C5);
			}
			else if (iVar1 == 4)
			{
				func_201(&Global_1460C6, iParam0);
				func_200(joaat("mpply_crew_local_xp_4"), Global_1460C6);
			}
		}
	}
}

void func_200(int iParam0, var uParam1)//Position - 0x95BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1460BD = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1460BF = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1460BF = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1460C0 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1460C1 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1460C2 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1460C3 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1460C4 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1460C5 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1460C6 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1460C7 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1460C8 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1460C9 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1460CA = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1460CB = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1460CC = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1460CD = uParam1;
			break;
		
		default:
			break;
	}
}

void func_201(var uParam0, int iParam1)//Position - 0x96E4
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_202(int iParam0)//Position - 0x96F5
{
	if (iParam0 == Global_1460BD)
	{
		return 0;
	}
	else if (iParam0 == Global_1460BE)
	{
		return 1;
	}
	else if (iParam0 == Global_1460BF)
	{
		return 2;
	}
	else if (iParam0 == Global_1460C0)
	{
		return 3;
	}
	else if (iParam0 == Global_1460C1)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_203(var uParam0)//Position - 0x9752
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_252863;
		}
	}
	return Global_252863;
}

void func_204(int iParam0, int iParam1, int iParam2)//Position - 0x9775
{
	if (func_225())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_1C55 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_146135[func_213(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_146135[func_213(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_1C54 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_1C54 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_212(PLAYER::PLAYER_ID()))
		{
			Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_1 = iParam0;
			Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_6 = func_210(iParam0, 1);
		}
		func_209(627, iParam0, -1, 1);
		func_208(628, func_210(iParam0, 1), -1, 1);
		Global_146135[func_213(-1)] = iParam0;
		func_205(7, 0);
	}
}

void func_205(int iParam0, int iParam1)//Position - 0x9895
{
	int iVar0;
	
	if (func_207(iParam0, iParam1))
	{
		iVar0 = func_206();
		Global_25284D[iVar0] = iParam0;
	}
}

int func_206()//Position - 0x98B8
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

int func_207(int iParam0, var uParam1)//Position - 0x98ED
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

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9973
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_213(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x999E
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_213(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1460FF[func_213(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_146105[func_213(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14610B[func_213(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_146111[func_213(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1460E7[func_213(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1460ED[func_213(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1460F3[func_213(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1460F9[func_213(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1460CF[func_213(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1460D5[func_213(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1460DB[func_213(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1460E1[func_213(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_146117[func_213(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_14611D[func_213(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_146123[func_213(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_146129[func_213(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_14612F[func_213(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_146135[func_213(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_14613B[func_213(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_25C7E2[0 /*6*/][func_213(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_25C7E2[1 /*6*/][func_213(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_146141[func_213(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_146147[func_213(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_14614D[func_213(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_146153[func_213(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_210(int iParam0, bool bParam1)//Position - 0x9C18
{
	if (bParam1)
	{
	}
	return func_211(iParam0, 0);
}

int func_211(int iParam0, int iParam1)//Position - 0x9C2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_42099[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_42099[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_212(int iParam0)//Position - 0x9CEB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_24F57C.f_1, iParam0);
	}
	return 1;
}

int func_213(int iParam0)//Position - 0x9D10
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_139();
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

int func_214(int iParam0)//Position - 0x9D44
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_146135[func_213(-1)];
			}
			else if (func_212(iParam0))
			{
				return Global_182604[iParam0 /*324*/].f_B4.f_1;
			}
		}
	}
	else
	{
		return Global_146135[func_213(-1)];
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2)//Position - 0x9DA1
{
	int iVar0;
	
	iVar0 = func_217(iParam0, func_213(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_216(iParam0))
	{
		func_208(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_209(iParam0, iVar0, iParam2, 1);
	}
}

int func_216(int iParam0)//Position - 0x9DE2
{
	if (Global_1460BC)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2)//Position - 0x9E96
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_213(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_218(int iParam0)//Position - 0x9EC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_87(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_86(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_219(*iParam0, 100) * (10f * Global_40001.f_105B)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_219(*iParam0, 100) * (20f * Global_40001.f_1054)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_219(int iParam0, int iParam1)//Position - 0x9FB2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_220(bool bParam0, int iParam1)//Position - 0x9FD3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_86(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_221(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_86(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_219(*iParam1, 100) * (10f * Global_40001.f_105B)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_219(*iParam1, 100) * (20f * Global_40001.f_1054)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_221(int iParam0, int iParam1)//Position - 0xA0EB
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_222(int iParam0)//Position - 0xA107
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_219(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_223(int iParam0)//Position - 0xA13E
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_214(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_214(PLAYER::PLAYER_ID());
		}
	}
	if (func_224(8000, 0, 0) > 0)
	{
		if (func_224(8000, 0, 0) < (iParam0 + func_214(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_224(8000, 0, 0) - func_214(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_224(int iParam0, bool bParam1, int iParam2)//Position - 0xA1A2
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_42099[iParam0];
}

int func_225()//Position - 0xA1CA
{
	return 1;
}

int func_226(var uParam0)//Position - 0xA1D3
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_227(int iParam0)//Position - 0xA20B
{
	return Global_24D5B9[iParam0 /*254*/].f_72 == 2;
}

bool func_228(int iParam0)//Position - 0xA21F
{
	return Global_24D5B9[iParam0 /*254*/].f_72 == 7;
}

void func_229(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA233
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_238(iParam1), 16);
	StringCopy(&Var1, func_237(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
	}
	if (func_24())
	{
		func_230(iVar2, iParam0, &iVar3, bParam3, bParam3);
		Global_26C240[iVar3 /*69*/].f_8.f_2B = { Var0 };
		Global_26C240[iVar3 /*69*/].f_8.f_2F = { Var1 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_230(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0xA36E
{
	int iVar0;
	
	if (!func_24())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_231(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_231(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xA606
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_139()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_26C40D = 1;
			return 0;
		}
		if (Global_252B28)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_26C40E = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_26C240[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_236(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_26C240[*uParam0 /*69*/].f_3E = 1;
				}
			}
			Global_26C40A = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_26C40C = 1;
			Global_26C40F = iParam4;
			Global_26C411 = iParam3;
			Global_26C412 = 1;
			Global_26C410 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_26C40F = iParam4;
			Global_26C411 = iParam3;
			Global_26C412 = 1;
			Global_26C410 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_235(1, iParam4);
			Global_26C40C = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_232(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_232(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0xA77A
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_79.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_233(iParam0);
	}
}

void func_233(int iParam0)//Position - 0xA7B1
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_234(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_26C240[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_26C240[iParam0 /*69*/] = { Var1 };
	}
}

int func_234(int iParam0)//Position - 0xA812
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_235(int iParam0, var uParam1)//Position - 0xA83A
{
	Global_25300C = uParam1;
	Global_25300B = iParam0;
}

int func_236(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)//Position - 0xA84E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_26C240[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_24())
			{
				iParam0 = iVar0 + 900;
			}
			Global_26C240[iVar0 /*69*/].f_2 = 1;
			Global_26C240[iVar0 /*69*/].f_1 = uParam5;
			Global_26C240[iVar0 /*69*/].f_3 = uParam1;
			Global_26C240[iVar0 /*69*/].f_4 = uParam2;
			Global_26C240[iVar0 /*69*/].f_7 = uParam3;
			Global_26C240[iVar0 /*69*/].f_5 = 0;
			Global_26C240[iVar0 /*69*/] = iParam0;
			Global_26C240[iVar0 /*69*/].f_6 = iParam4;
			Global_26C240[iVar0 /*69*/].f_41 = uParam8;
			Global_26C240[iVar0 /*69*/].f_40 = uParam7;
			Global_26C240[iVar0 /*69*/].f_44 = 0;
			Global_26C40A = 0;
			if (bParam6)
			{
				Global_26C240[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_237(int iParam0)//Position - 0xA922
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_238(int iParam0)//Position - 0xA9AC
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		default:
	}
	return "DEFAULT";
}

void func_239(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xAA57
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_4 = iVar1;
	Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_3 = (Global_182604[PLAYER::PLAYER_ID() /*324*/].f_B4.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_240(iVar1, 0);
	}
}

void func_240(int iParam0, bool bParam1)//Position - 0xAADA
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_241(int iParam0)//Position - 0xAAEB
{
	int iVar0;
	
	iVar0 = 0;
	if (func_243(iParam0) >= 0)
	{
		iVar0 = func_243(iParam0);
	}
	else
	{
		iVar0 = func_242(iParam0);
	}
	return iVar0;
}

int func_242(int iParam0)//Position - 0xAB15
{
	switch (iParam0)
	{
		case 10:
			return 5000;
			break;
		
		case 11:
			return 12500;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_40001.f_137D;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_40001.f_137E;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_40001.f_137F;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_40001.f_1380;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_40001.f_1381;
			}
			else
			{
				return 200;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
	}
	return 0;
}

int func_243(int iParam0)//Position - 0xACEB
{
	switch (iParam0)
	{
		case 10:
			return Global_40001.f_FF7;
			break;
		
		case 11:
			return Global_40001.f_FF8;
			break;
		
		case 8:
			return Global_40001.f_FF5;
			break;
		
		case 0:
			return Global_40001.f_FE7;
			break;
		
		case 9:
			return Global_40001.f_FF6;
			break;
		
		case 13:
			return Global_40001.f_FFA;
			break;
		
		case 12:
			return Global_40001.f_FF9;
			break;
		
		case 2:
			return Global_40001.f_FF1;
			break;
		
		case 14:
			return Global_40001.f_FFB;
			break;
		
		case 20:
			return Global_40001.f_1000;
			break;
		
		case 6:
			return Global_40001.f_FF4;
			break;
		
		case 22:
			return Global_40001.f_1001;
			break;
		
		case 23:
			return Global_40001.f_1002;
			break;
		
		case 24:
			return Global_40001.f_1003;
			break;
		
		case 25:
			return Global_40001.f_1004;
			break;
		
		case 26:
			return Global_40001.f_1005;
			break;
		
		case 35:
			return Global_40001.f_15B2;
			break;
		
		case 15:
			return Global_40001.f_1377;
			break;
		
		case 17:
			return Global_40001.f_1377;
			break;
		
		case 18:
			return Global_40001.f_1377;
			break;
		
		case 19:
			return Global_40001.f_1377;
			break;
		
		case 21:
			return Global_40001.f_1377;
			break;
		
		case 36:
			return Global_40001.f_1783;
			break;
	}
	return 0;
}

int func_244()//Position - 0xAEB0
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	switch (iLocal_93)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_245(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_245(char* sParam0, char* sParam1, int iParam2)//Position - 0xAF02
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!MISC::IS_BIT_SET(iLocal_92, 0))
		{
			func_344(&uLocal_111, 3, 0, sParam1, 0, 1);
			if (func_247(&uLocal_111, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_92, 0);
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_92, 1))
		{
			if (func_246(0))
			{
				MISC::SET_BIT(&iLocal_92, 1);
			}
		}
		else if (!func_246(0))
		{
			iLocal_92 = 0;
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0)//Position - 0xAF7F
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

int func_247(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xAFD9
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_342())
	{
		return 0;
	}
	if (func_341())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_248(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_248(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xB01E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_340(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(iParam7);
	}
	if (func_339(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_334(iParam6))
	{
		return 0;
	}
	if (func_331(iVar0, iVar1, iVar2))
	{
		if (func_330())
		{
			return 0;
		}
		func_329();
		return func_255(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_254(iParam4))
	{
		return 0;
	}
	func_249(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB103
{
	Global_14292B.f_28.f_1 = iParam0;
	Global_14292B.f_28.f_2 = iParam1;
	Global_14292B.f_28.f_3 = iParam2;
	StringCopy(&(Global_14292B.f_28.f_4), sParam3, 16);
	Global_14292B.f_28.f_8 = iParam4;
	Global_14292B.f_28.f_9 = iParam5;
	Global_14292B.f_28.f_E = iParam6;
	func_250(iParam4);
	func_329();
	Global_14292B.f_28.f_D = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_250(int iParam0)//Position - 0xB170
{
	if (func_253(iParam0))
	{
		func_252();
		return;
	}
	func_251();
}

void func_251()//Position - 0xB18C
{
	Global_14292B.f_28.f_A = 0;
}

void func_252()//Position - 0xB19D
{
	Global_14292B.f_28.f_A = 1;
}

int func_253(int iParam0)//Position - 0xB1AE
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_254(int iParam0)//Position - 0xB1F6
{
	return iParam0 > Global_14292B.f_28.f_8;
}

int func_255(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xB209
{
	struct<2> Var0;
	
	func_328();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_325(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_322(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_325(uParam0, sParam3, sParam4);
		}
		return func_305(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_304(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_294(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_293(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_256(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_256(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xB303
{
	bool bVar0;
	
	func_292();
	bVar0 = true;
	if (func_258(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_257(120000);
		return 1;
	}
	return 0;
}

void func_257(int iParam0)//Position - 0xB33A
{
	Global_14292B.f_28.f_B = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_14292B.f_28.f_C = 1;
}

int func_258(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xB35D
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_291();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_285(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_14292B.f_28.f_D))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_284(uParam5, bParam6, &iVar3);
	uVar5 = func_282(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_281(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_262(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_261();
	}
	func_292();
	func_260();
	func_259();
	return 1;
}

void func_259()//Position - 0xB4AF
{
	Global_14292B.f_39 = 0;
	Global_14292B.f_39.f_1 = 0;
}

void func_260()//Position - 0xB4C7
{
	Global_14292B.f_28 = 3;
}

void func_261()//Position - 0xB4D6
{
	MISC::SET_BIT(&Global_8D7, 8);
}

int func_262(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xB4E7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_263(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_B9A = iParam6;
			MISC::SET_BIT(&Global_26D408, 0);
		}
		return 1;
	}
	return 0;
}

int func_263(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xB553
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_275();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_3839 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_3839 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_3839 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_26D3F9 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_274() == 0)
	{
		func_272();
		return 0;
	}
	func_271(Global_26D3F8);
	StringCopy(&(Global_26CF17[Global_26D3F8 /*104*/]), sParam1, 64);
	Global_26CF17[Global_26D3F8 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_26CF17[Global_26D3F8 /*104*/].f_18 = iParam2;
	}
	Global_26CF17[Global_26D3F8 /*104*/].f_19 = iParam7;
	Global_26CF17[Global_26D3F8 /*104*/].f_1A = uParam8;
	Global_26CF17[Global_26D3F8 /*104*/].f_1D = uParam9;
	Global_26CF17[Global_26D3F8 /*104*/].f_1E = uParam12;
	Global_26CF17[Global_26D3F8 /*104*/].f_1F = uParam11;
	Global_26CF17[Global_26D3F8 /*104*/].f_1C = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_26CF17[Global_26D3F8 /*104*/].f_21), sParam4, 64);
	Global_26CF17[Global_26D3F8 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_26CF17[Global_26D3F8 /*104*/].f_32), sParam5, 64);
	Global_26CF17[Global_26D3F8 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_26CF17[Global_26D3F8 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_26CF17[Global_26D3F8 /*104*/].f_53), sParam15, 64);
	func_275();
	switch (iParam16)
	{
		case 3:
			Global_26CF17[Global_26D3F8 /*104*/].f_63[Global_3839] = 1;
			break;
		
		case 0:
			Global_26CF17[Global_26D3F8 /*104*/].f_63[0] = 1;
			break;
		
		case 2:
			Global_26CF17[Global_26D3F8 /*104*/].f_63[2] = 1;
			break;
		
		case 1:
			Global_26CF17[Global_26D3F8 /*104*/].f_63[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_3839)
		{
			case 0:
				func_270(0);
				break;
			
			case 1:
				func_270(1);
				break;
			
			case 2:
				func_270(2);
				break;
			
			case 3:
				func_270(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_26D3F9 = 1;
				break;
			
			case 0:
				Global_26D3F9 = 1;
				break;
			
			case 2:
				Global_26D3F9 = 1;
				break;
			
			case 1:
				Global_26D3F9 = 1;
				break;
			}
	}
	Global_4179[Global_26D3F8] = 0;
	if (bParam10)
	{
		func_275();
		if (Global_3800)
		{
			StringCopy(&Global_382E, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_3839)
			{
				case 0:
					StringCopy(&Global_382E, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_382E, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_382E, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_382E, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_269())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_382E, 1);
			}
		}
	}
	if (!Global_38D8)
	{
		if (Global_3839.f_1 == 6)
		{
			func_268(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_264(1);
			func_268(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3825), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_264(int iParam0)//Position - 0xB916
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
	
	Global_4178 = 0;
	Global_B34 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B10[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_267(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8DE[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_8DE[iVar1 /*15*/].f_4)
					{
						if (Global_B10[iVar0] == 0)
						{
							Global_AEC[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 3))
								{
									iVar2 = 42;
									Global_38DB = 1;
								}
								else
								{
									iVar2 = 255;
									Global_38DB = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_B10[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8DE[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_8DE[iVar1 /*15*/].f_4)
					{
						if (Global_B10[iVar0] == 0)
						{
							Global_AEC[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_17C49.f_306B[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_17C49.f_306B[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_17C49.f_306B[iVar3 /*104*/].f_63[Global_3839] == 1)
											{
												Global_4178++;
											}
										}
									}
									iVar3++;
								}
								func_265(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4178), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_10A95)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_26CF17[iVar4 /*104*/].f_18 != 0)
										{
											if (Global_26CF17[iVar4 /*104*/].f_1C == 0)
											{
												if (Global_26CF17[iVar4 /*104*/].f_63[Global_3839] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_265(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_3839)
									{
										case 0:
											iVar6 = Global_8C7A;
											break;
										
										case 1:
											iVar6 = Global_8C7B;
											break;
										
										case 2:
											iVar6 = Global_8C7C;
											break;
										
										default:
											break;
									}
									func_265(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_265(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4173), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DD);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_8D8, 3))
								{
									iVar8 = 42;
									Global_38DB = 1;
								}
								else
								{
									iVar8 = 255;
									Global_38DB = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_265(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B10[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_265(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xBDAC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_266(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_266(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_266(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_266(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_266(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_266(char* sParam0)//Position - 0xBE5F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_267(int iParam0)//Position - 0xBE71
{
	return Global_8861 == iParam0;
}

void func_268(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xBE7F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_269()//Position - 0xBEE2
{
	return Global_14143C;
}

void func_270(int iParam0)//Position - 0xBEEE
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_17C49.f_3011[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_271(int iParam0)//Position - 0xBF0D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_26CF17[iParam0 /*104*/].f_12 = uVar0;
	Global_26CF17[iParam0 /*104*/].f_12.f_1 = uVar1;
	Global_26CF17[iParam0 /*104*/].f_12.f_2 = uVar2;
	Global_26CF17[iParam0 /*104*/].f_12.f_3 = uVar3;
	Global_26CF17[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_26CF17[iParam0 /*104*/].f_12.f_5 = uVar5;
}

void func_272()//Position - 0xBF8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_26D3F8 = 11;
	Global_26CF17[Global_26D3F8 /*104*/].f_12 = -1;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_1 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_2 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_3 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_273(Global_26CF17[iVar2 /*104*/].f_12, Global_26CF17[Global_26D3F8 /*104*/].f_12))
		{
			Global_26D3F8 = iVar2;
		}
		iVar2++;
	}
	Global_26CF17[Global_26D3F8 /*104*/].f_18 = 1;
}

int func_273(struct<6> Param0, struct<6> Param1)//Position - 0xC038
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_274()//Position - 0xC123
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_26CF17[iVar2 /*104*/].f_18 == 0)
		{
			Global_26D3F8 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_26D3F8 = 11;
	Global_26CF17[Global_26D3F8 /*104*/].f_12 = -1;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_1 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_2 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_3 = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_26CF17[iVar2 /*104*/].f_18 == 0 || Global_26CF17[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_273(Global_26CF17[iVar2 /*104*/].f_12, Global_26CF17[Global_26D3F8 /*104*/].f_12))
			{
				Global_26D3F8 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_26D3F8 == 11)
	{
		return 0;
	}
	Global_26CF17[Global_26D3F8 /*104*/].f_63[0] = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_63[1] = 0;
	Global_26CF17[Global_26D3F8 /*104*/].f_63[2] = 0;
	return 1;
}

void func_275()//Position - 0xC24E
{
	if (func_267(14))
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
		Global_3839 = func_276();
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

var func_276()//Position - 0xC2EF
{
	func_277();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_277()//Position - 0xC308
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_280(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_279(PLAYER::PLAYER_PED_ID());
			if (func_278(iVar0) && (!func_267(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_278(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_278(int iParam0)//Position - 0xC405
{
	return iParam0 < 3;
}

int func_279(int iParam0)//Position - 0xC411
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_280(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_280(int iParam0)//Position - 0xC44E
{
	if (func_278(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_281(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xC478
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_263(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_B9A = iParam10;
			MISC::SET_BIT(&Global_26D408, 0);
		}
		return 1;
	}
	return 0;
}

int func_282(int iParam0, int iParam1)//Position - 0xC4FA
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_283(2, iParam1);
	return iParam0;
}

void func_283(int iParam0, var uParam1)//Position - 0xC519
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_284(char* sParam0, bool bParam1, int iParam2)//Position - 0xC5CA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_19))
	{
		return sLocal_19;
	}
	func_283(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_285(int iParam0)//Position - 0xC607
{
	int iVar0;
	
	iVar0 = func_288(iParam0);
	if (iVar0 == -1)
	{
		func_286(iParam0, 1);
		return 0;
	}
	Global_146450[iVar0 /*5*/].f_4 = 1;
	return Global_146450[iVar0 /*5*/].f_2;
}

void func_286(int iParam0, bool bParam1)//Position - 0xC63D
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_288(iParam0) != -1)
	{
		return;
	}
	if (Global_1464F3)
	{
		if (iParam0 == Global_1464F3.f_1)
		{
			return;
		}
	}
	if (func_287(iParam0))
	{
		return;
	}
	if (Global_146519 >= 32)
	{
		return;
	}
	Global_1464F8[Global_146519] = iParam0;
	Global_146519++;
	if (bParam1)
	{
	}
}

int func_287(int iParam0)//Position - 0xC6A9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_146519)
	{
		if (Global_1464F8[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_288(int iParam0)//Position - 0xC6DB
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1464F1 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1464F1)
	{
		if (Global_146450[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_146450[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_146450[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_289(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_289(int iParam0)//Position - 0xC75A
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1464F1)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_146450[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_146450[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_146450[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_146450[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1464F1)
	{
		Global_146450[iVar2 /*5*/] = { Global_146450[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_290(&(Global_146450[iVar2 /*5*/]));
	Global_1464F1 = (Global_1464F1 - 1);
}

void func_290(var uParam0)//Position - 0xC810
{
	*uParam0 = 0;
	uParam0->f_1 = func_291();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_291()//Position - 0xC83D
{
	return -1;
}

void func_292()//Position - 0xC846
{
	Global_14292B.f_28.f_9 = 4;
}

int func_293(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xC857
{
	bool bVar0;
	
	func_292();
	bVar0 = false;
	return func_258(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_294(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xC87E
{
	bool bVar0;
	
	bVar0 = false;
	return func_295(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_295(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xC8A1
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_291();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_285(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_14292B.f_28.f_D))
			{
				return 0;
			}
		}
		Global_4171 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_284(uParam5, bParam6, &iVar3);
	uVar5 = func_282(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_303(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_297(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_261();
	}
	func_296();
	func_260();
	func_259();
	return 1;
}

void func_296()//Position - 0xC9F8
{
	Global_14292B.f_28.f_9 = 3;
}

int func_297(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xCA09
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8D7, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_298(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_B9A = iParam6;
			Global_B39[3 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
			Global_B86 = iParam0;
			MISC::SET_BIT(&Global_8D7, 1);
			MISC::SET_BIT(&Global_8D7, 7);
		}
		return 1;
	}
	return 0;
}

int func_298(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xCAA1
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_275();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_3839 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_3839 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_3839 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_302() == 0)
	{
		func_300();
		return 0;
	}
	func_299(Global_4177);
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/]), sParam1, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_17C49.f_306B[Global_4177 /*104*/].f_18 = iParam2;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_19 = iParam7;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1A = uParam8;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1D = uParam9;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1E = uParam12;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1F = uParam11;
	Global_17C49.f_306B[Global_4177 /*104*/].f_1C = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_21), sParam4, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_32), sParam5, 64);
	Global_17C49.f_306B[Global_4177 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_17C49.f_306B[Global_4177 /*104*/].f_53), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_8D7, 10))
	{
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 1;
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 1;
		Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 1;
		Global_B99 = 4;
		func_270(0);
		func_270(2);
		func_270(1);
	}
	else
	{
		func_275();
		switch (iParam16)
		{
			case 3:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[Global_3839] = 1;
				break;
			
			case 0:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_3839)
			{
				case 0:
					func_270(0);
					Global_B99 = 0;
					break;
				
				case 1:
					func_270(1);
					Global_B99 = 1;
					break;
				
				case 2:
					func_270(2);
					Global_B99 = 2;
					break;
				
				case 3:
					func_270(3);
					Global_B99 = 3;
					break;
				
				default:
					Global_B99 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_8D7, 10))
		{
			Global_17C49.f_3011[0 /*20*/].f_11 = 1;
			Global_17C49.f_3011[1 /*20*/].f_11 = 1;
			Global_17C49.f_3011[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_17C49.f_3011[Global_3839 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_17C49.f_3011[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_17C49.f_3011[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_17C49.f_3011[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_4179[Global_4177] = 0;
	if (bParam10)
	{
		func_275();
		if (Global_3800)
		{
			StringCopy(&Global_382E, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_3839)
			{
				case 0:
					StringCopy(&Global_382E, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_382E, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_382E, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_382E, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_269())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_382E, 1);
			}
		}
	}
	if (!Global_38D8)
	{
		if (Global_3839.f_1 == 6)
		{
			func_268(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_264(1);
			func_268(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3825), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_299(int iParam0)//Position - 0xCF58
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_17C49.f_306B[iParam0 /*104*/].f_12 = uVar0;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_1 = uVar1;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_2 = uVar2;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_3 = uVar3;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_17C49.f_306B[iParam0 /*104*/].f_12.f_5 = uVar5;
}

void func_300()//Position - 0xCFEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_4177 = 34;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12 = -1;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_1 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_2 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_3 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_301(Global_17C49.f_306B[iVar2 /*104*/].f_12, Global_17C49.f_306B[Global_4177 /*104*/].f_12))
		{
			Global_4177 = iVar2;
		}
		iVar2++;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_18 = 1;
}

int func_301(struct<6> Param0, struct<6> Param1)//Position - 0xD0B5
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_302()//Position - 0xD1A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_17C49.f_306B[iVar2 /*104*/].f_18 == 0)
		{
			Global_4177 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4177 = 34;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12 = -1;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_1 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_2 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_3 = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_17C49.f_306B[iVar2 /*104*/].f_18 == 0 || Global_17C49.f_306B[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_301(Global_17C49.f_306B[iVar2 /*104*/].f_12, Global_17C49.f_306B[Global_4177 /*104*/].f_12))
			{
				Global_4177 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4177 == 34)
	{
		return 0;
	}
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[0] = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[1] = 0;
	Global_17C49.f_306B[Global_4177 /*104*/].f_63[2] = 0;
	return 1;
}

int func_303(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xD2F7
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8D7, 10);
	iVar0 = 3;
	if (func_298(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_B9A = iParam10;
			Global_B39[3 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
			Global_B86 = iParam0;
			StringCopy(&Global_B87, sParam5, 64);
			MISC::SET_BIT(&Global_8D7, 1);
			MISC::SET_BIT(&Global_8D7, 7);
		}
		return 1;
	}
	return 0;
}

int func_304(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xD3AC
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_296();
	bVar0 = true;
	if (func_295(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_257(120000);
		return 1;
	}
	return 0;
}

int func_305(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0xD3FE
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_321(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_311(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_310(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_309(1);
		}
		func_308();
		func_260();
		func_307();
		func_306();
		return 1;
	}
	return 0;
}

void func_306()//Position - 0xD4A1
{
	Global_256D5D = 0;
}

void func_307()//Position - 0xD4AE
{
	Global_14292B.f_39 = 1;
	Global_14292B.f_39.f_1 = 0;
}

void func_308()//Position - 0xD4C6
{
	Global_14292B.f_28.f_9 = 1;
}

void func_309(int iParam0)//Position - 0xD4D7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D9, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D9, 0);
	}
}

void func_310(int iParam0)//Position - 0xD4F8
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 20);
	}
}

int func_311(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xD51B
{
	func_320(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_280001 = 0;
	return func_312(sParam3, iParam4, bParam7);
}

int func_312(char* sParam0, int iParam1, bool bParam2)//Position - 0xD569
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
					func_319();
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
		if (func_318(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_317();
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
				func_275();
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
				if (func_316())
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
			if (func_315())
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
			func_314();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_313();
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
		func_319();
	}
	return 0;
}

void func_313()//Position - 0xD835
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

void func_314()//Position - 0xD866
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

int func_315()//Position - 0xD8FB
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_316()//Position - 0xD922
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

void func_317()//Position - 0xD9BB
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

bool func_318(int iParam0, int iParam1)//Position - 0xDA12
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

void func_319()//Position - 0xDA4D
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

void func_320(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDAA4
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

int func_321(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xDAFA
{
	func_320(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3D7C = 1;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 0;
	Global_3D82 = 0;
	Global_280001 = 0;
	return func_312(sParam3, iParam4, bParam7);
}

int func_322(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0xDB48
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_324(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_323();
		func_308();
		func_260();
		func_307();
		func_306();
		return 1;
	}
	return 0;
}

void func_323()//Position - 0xDB9A
{
	Global_4146 = 0;
}

bool func_324(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xDBA6
{
	func_320(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3D7C = 0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 1;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 1;
	Global_3D82 = 0;
	StringCopy(&Global_3DE0, sParam5, 24);
	Global_280001 = 0;
	return func_312(sParam3, iParam4, bParam8);
}

int func_325(var uParam0, char* sParam1, char* sParam2)//Position - 0xDBFB
{
	if (func_327(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_326();
		func_260();
		func_307();
		return 1;
	}
	return 0;
}

void func_326()//Position - 0xDC26
{
	Global_14292B.f_28.f_9 = 2;
}

bool func_327(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDC37
{
	func_320(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_312(sParam2, iParam3, 0);
}

void func_328()//Position - 0xDC85
{
	Global_14292B.f_37 = Global_14292B.f_28.f_1;
	Global_14292B.f_37.f_1 = Global_14292B.f_28.f_A;
}

void func_329()//Position - 0xDCAB
{
	Global_14292B.f_28 = 1;
}

bool func_330()//Position - 0xDCBA
{
	return Global_14292B.f_28 == 1;
}

int func_331(int iParam0, int iParam1, int iParam2)//Position - 0xDCCA
{
	if (!func_332(iParam0))
	{
		return 0;
	}
	if (Global_14292B.f_28.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_14292B.f_28.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_332(int iParam0)//Position - 0xDD09
{
	if (!func_333())
	{
		return 0;
	}
	if (!Global_14292B.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_333()//Position - 0xDD31
{
	if (Global_14292B.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)//Position - 0xDD48
{
	if (func_338())
	{
		return 0;
	}
	if (func_337())
	{
		return 0;
	}
	if (func_246(0))
	{
		return 0;
	}
	if (Global_1406D3.f_12 != 0)
	{
		return 0;
	}
	if (Global_19B0AA || func_336())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_335())
		{
			return 0;
		}
	}
	return 1;
}

bool func_335()//Position - 0xDDAC
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_145F98);
}

int func_336()//Position - 0xDDC0
{
	if (Global_26AFD5.f_31C > -1)
	{
		return 1;
	}
	return 0;
}

bool func_337()//Position - 0xDDD8
{
	return Global_14292B.f_28 == 3;
}

bool func_338()//Position - 0xDDE8
{
	return func_315();
}

int func_339(int iParam0, int iParam1, int iParam2)//Position - 0xDDF4
{
	if (!func_337())
	{
		return 0;
	}
	return func_331(iParam0, iParam1, iParam2);
}

int func_340(char* sParam0, char* sParam1)//Position - 0xDE12
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_341()//Position - 0xDE2C
{
	return Global_256647.f_1;
}

int func_342()//Position - 0xDE3A
{
	if (Global_1429E7.f_2)
	{
		return 1;
	}
	return func_343();
}

bool func_343()//Position - 0xDE53
{
	return func_338();
}

void func_344(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xDE5F
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

int func_345(int iParam0)//Position - 0xDEFA
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_346(var uParam0)//Position - 0xDF17
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_347(var uParam0)//Position - 0xDF40
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_348(uParam0, 0, 0);
		}
	}
}

void func_348(var uParam0, bool bParam1, bool bParam2)//Position - 0xDF5F
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_349()//Position - 0xDFA4
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_87.f_A[iLocal_102 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_87.f_A[iLocal_102 /*7*/])))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_87.f_A[iLocal_102 /*7*/]), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50625f))
			{
				if (!MISC::IS_BIT_SET(iLocal_90, 4))
				{
					MISC::SET_BIT(&iLocal_90, 4);
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_90, 5))
			{
				if (Local_87.f_2A != -1)
				{
					if (iLocal_102 == Local_87.f_2A)
					{
						if (!MISC::IS_BIT_SET(iLocal_90, 5))
						{
							MISC::SET_BIT(&iLocal_90, 5);
						}
					}
				}
			}
		}
	}
	func_350(iLocal_102);
	iLocal_102++;
	if (iLocal_102 >= func_345(iLocal_93))
	{
		if ((!MISC::IS_BIT_SET(iLocal_90, 4) && MISC::IS_BIT_SET(Local_87.f_1, 8)) || MISC::IS_BIT_SET(iLocal_90, 5))
		{
			if (!MISC::IS_BIT_SET(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
			}
		}
		else if (MISC::IS_BIT_SET(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
		}
		MISC::CLEAR_BIT(&iLocal_90, 4);
		MISC::CLEAR_BIT(&iLocal_90, 5);
		iLocal_102 = 0;
	}
}

void func_350(int iParam0)//Position - 0xE0EE
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_87.f_A[iParam0 /*7*/]);
		if (iLocal_93 == 0)
		{
			if (PLAYER::PLAYER_ID() == iLocal_95)
			{
				if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_87.f_A[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			if (MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 1))
			{
				if (!MISC::IS_BIT_SET(iLocal_91[iParam0], 0))
				{
					MISC::SET_BIT(&Global_180039, 0);
					MISC::SET_BIT(&(iLocal_91[iParam0]), 0);
				}
				if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 9))
				{
					if (!MISC::IS_BIT_SET(iLocal_91[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_91[iParam0], 1))
				{
					MISC::CLEAR_BIT(&(iLocal_91[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_87.f_A[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_87.f_A[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_87.f_A[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == iLocal_94)
			{
				if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 9) && !MISC::IS_BIT_SET(iLocal_91[iParam0], 1))
				{
					if (NETWORK::_0x0EDE326D47CD0F3E(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_87.f_A[iParam0 /*7*/].f_1)
						{
							case 0:
								func_373(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_91[iParam0]), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_87.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, 1);
						if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == iLocal_95 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1), 25f))
						{
							MISC::SET_BIT(&(Global_2554DA.f_112B), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2554DA.f_112B), 0);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_95, 1, 1))
								{
									if (func_372(iLocal_95) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_95)))
									{
										if (!func_371(iVar0, -1794415470))
										{
											if (func_370(iVar0))
											{
												uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_95), 0);
												if (ENTITY::DOES_ENTITY_EXIST(uVar1))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
													{
													}
													if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_369(PLAYER::GET_PLAYER_PED(iLocal_95))))
													{
														TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_368(PLAYER::GET_PLAYER_PED(iLocal_95), iVar1), func_367(iParam0), 1179977, 0);
													}
												}
											}
										}
									}
									else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_95)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
									{
										if (func_371(iVar0, -1794415470))
										{
											TASK::CLEAR_PED_TASKS(iVar0);
										}
										if (!func_371(iVar0, 1227113341))
										{
											if (func_370(iVar0))
											{
												TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_95), -1, 0f, func_367(iParam0), 1073741824, 0);
											}
										}
										else
										{
											PED::SET_PED_RESET_FLAG(iVar0, 151, 1);
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER::PLAYER_ID() == iLocal_95 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_95), 1), 25f))
						{
							MISC::SET_BIT(&(Global_2554DA.f_112B), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2554DA.f_112B), 0);
						}
						if (PLAYER::PLAYER_ID() == iLocal_95)
						{
							if (!MISC::IS_BIT_SET(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									if ((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = func_365(PLAYER::PLAYER_ID());
										fVar5 = (SYSTEM::TO_FLOAT(Global_40001.f_137B) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = func_364(PLAYER::PLAYER_ID());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_40001.f_137C))
										{
											iVar2 = (iVar6 * Global_40001.f_137C);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_90, 16);
										}
										TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_95)))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
											Var3 = { func_363(Var3) };
											Var3.x = (Var3.x * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 1);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && func_361(iVar0)) && func_369(iVar0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 1);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 1, 0);
										}
										Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1804AB);
										MISC::SET_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 0);
										MISC::SET_BIT(&(Global_2554DA.f_112B), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, 0);
						}
						if (Local_87.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 4))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, 1);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_95)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_370(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && !MISC::IS_BIT_SET(Local_87.f_2, 10))
									{
										if (!func_371(iVar0, -258271821) && !func_371(iVar0, -1273030092))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												uVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 1);
												iVar8 = ENTITY::GET_ENTITY_MODEL(uVar7);
												if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar8))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("taxi"))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_95), 10000f, -1, 1, 0);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_371(iVar0, 1805844857))
									{
										if (func_6(iLocal_95, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_95), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_359(Local_87.f_A[iParam0 /*7*/], 0);
						break;
				}
				func_351(iVar0);
			}
		}
	}
}

void func_351(int iParam0)//Position - 0xE8CA
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(iLocal_90, 16))
	{
		iVar0 = Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_352(iVar0);
		if (iVar1 == 1)
		{
			MISC::CLEAR_BIT(&iLocal_90, 15);
			MISC::CLEAR_BIT(&iLocal_90, 16);
			if (!func_24())
			{
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, 0, 0);
			}
			if (iVar0 > Global_40001.f_18DB)
			{
				iVar0 = Global_40001.f_18DB;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_90, 15);
			MISC::CLEAR_BIT(&iLocal_90, 16);
			MISC::SET_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_352(int iParam0)//Position - 0xE976
{
	if (func_24())
	{
		if (func_355(uParam0))
		{
			if (func_354(iLocal_279) == 2)
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_353(iLocal_279));
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(uParam0, 0, 0);
				func_233(iLocal_279);
				return 1;
			}
			else
			{
				func_233(iLocal_279);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_353(int iParam0)//Position - 0xE9CE
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/];
	}
	return -1;
}

int func_354(int iParam0)//Position - 0xE9F2
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_2;
	}
	return 0;
}

int func_355(var uParam0)//Position - 0xEA18
{
	if (!MISC::IS_BIT_SET(iLocal_90, 15))
	{
		func_231(&iLocal_279, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_358(&uLocal_280, 0, 0);
		MISC::SET_BIT(&iLocal_90, 15);
	}
	else if (func_357(iLocal_279) || func_356(&uLocal_280, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_356(var uParam0, int iParam1, bool bParam2)//Position - 0xEA82
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_348(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0xEAE0
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_2 != 1;
	}
	return 0;
}

void func_358(var uParam0, bool bParam1, bool bParam2)//Position - 0xEB08
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_359(var uParam0, bool bParam1)//Position - 0xEB45
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0))
		{
			if (!func_360(uParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(uParam0));
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 6, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 1, 1);
			}
		}
		func_162(&uParam0);
	}
}

int func_360(var uParam0)//Position - 0xEB96
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_361(int iParam0)//Position - 0xEBB5
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (func_372(iLocal_95))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_95), 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_362(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_362(int iParam0)//Position - 0xEC41
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

Vector3 func_363(struct<3> Param0)//Position - 0xEC83
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

var func_364(int iParam0)//Position - 0xECC2
{
	return Global_182604[iParam0 /*324*/].f_B4.f_6;
}

int func_365(int iParam0)//Position - 0xECD7
{
	var uVar0;
	
	uVar0 = func_366(iParam0);
	return uVar0;
}

int func_366(int iParam0)//Position - 0xECE9
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_212(iParam0))
		{
			return Global_182604[iParam0 /*324*/].f_B4.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_367(int iParam0)//Position - 0xED2C
{
	if (!MISC::IS_BIT_SET(Local_87.f_A[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_368(int iParam0, int iParam1)//Position - 0xED4C
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(uParam1))
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

int func_369(int iParam0)//Position - 0xEDB8
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

int func_370(int iParam0)//Position - 0xEE35
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1)//Position - 0xEE65
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xEE8F
{
	if (PLAYER::_0x690A61A6D13583F6(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_373(int iParam0, int iParam1)//Position - 0xEEB6
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(uParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_374()//Position - 0xEEE9
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = MISC::IS_BIT_SET(Local_87.f_2, 6);
	bVar1 = MISC::IS_BIT_SET(Local_87.f_2, 10);
	func_379();
	if (iLocal_93 != 1)
	{
		if (MISC::IS_BIT_SET(Local_87.f_3, 12))
		{
			func_376();
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_103))
	{
		func_375(&uLocal_103);
	}
	iVar3 = 0;
	while (iVar3 < func_345(iLocal_93))
	{
		iLocal_91[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_87.f_2A = -1;
		Local_87.f_5 = uLocal_99;
		Local_87.f_6 = uLocal_99;
		Local_87.f_7 = uLocal_99;
		Local_87.f_1 = 0;
		Local_87.f_4 = 0;
		Local_87.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_345(iLocal_93))
		{
			bVar2 = MISC::IS_BIT_SET(Local_87.f_A[iVar3 /*7*/].f_2, 6);
			Local_87.f_A[iVar3 /*7*/].f_2 = 0;
			Local_87.f_A[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_87.f_A[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_90 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_87.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_87.f_2), 11);
		MISC::SET_BIT(&iLocal_90, 8);
	}
	MISC::SET_BIT(&iLocal_90, 4);
	MISC::SET_BIT(&iLocal_90, 11);
}

void func_375(var uParam0)//Position - 0xF029
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_376()//Position - 0xF097
{
	switch (iLocal_93)
	{
		case 0:
			func_378(&(Global_1804AC[3]));
			break;
		
		case 1:
			func_377();
			break;
	}
}

void func_377()//Position - 0xF0C8
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180484[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_180484[iVar0]);
			iVar0++;
		}
	}
}

void func_378(var uParam0)//Position - 0xF10E
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180484[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_180484[iVar0]);
			iVar0++;
		}
	}
}

void func_379()//Position - 0xF150
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_345(iLocal_93))
	{
		bVar1 = false;
		if (iLocal_93 == 0)
		{
			if (!MISC::IS_BIT_SET(Local_87.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_359(Local_87.f_A[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_380()//Position - 0xF19B
{
	func_381();
	if (iLocal_93 != 1)
	{
		func_349();
	}
}

void func_381()//Position - 0xF1B2
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_345(iLocal_93))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_87.f_A[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_87.f_A[iVar0 /*7*/]))
			{
				uVar1 = NETWORK::NET_TO_PED(Local_87.f_A[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(uVar1))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2554DA.f_638)
	{
	}
	if (iLocal_93 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_95)
		{
			if (MISC::IS_BIT_SET(Local_87.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(uLocal_276))
				{
					if (func_6(iLocal_95, 1, 1))
					{
						MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_95), 4, 0f, &uLocal_276);
					}
				}
				if (Global_2554DA.f_638)
				{
					if (!MISC::IS_BIT_SET(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_93 == 0)
	{
		if (Local_87.f_2A != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_87.f_A[Local_87.f_2A /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_87.f_A[Local_87.f_2A /*7*/])))
				{
					if (Local_87.f_A[Local_87.f_2A /*7*/].f_5 == 3)
					{
						func_382(Local_87.f_A[Local_87.f_2A /*7*/], &uLocal_103, -1082130432, 0, 1, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_103))
						{
							if (!MISC::IS_BIT_SET(iLocal_90, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_103, "FM_MGR_BLP");
								MISC::SET_BIT(&iLocal_90, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_103))
				{
					func_375(&uLocal_103);
				}
			}
			if (PLAYER::PLAYER_ID() == iLocal_94)
			{
				if (!MISC::IS_BIT_SET(iLocal_90, 14))
				{
					if (func_245("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_90, 14);
					}
				}
			}
		}
	}
}

void func_382(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF367
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_384())
		{
			Global_24F57C = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_383(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_24F57C, iParam4, iParam5, fParam2, iParam6);
		}
		else
		{
			func_383(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_24F57C, iParam4, iParam5, fParam2, iParam6);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		func_375(uParam1);
	}
}

int func_383(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7)//Position - 0xF3D6
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, uParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, uParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_384()//Position - 0xF4F5
{
	return Global_141422;
}

int func_385()//Position - 0xF501
{
	return Local_87;
}

int func_386(int iParam0)//Position - 0xF50B
{
	return Local_89[iParam0 /*5*/];
}

void func_387()//Position - 0xF519
{
	if (PLAYER::PLAYER_ID() == iLocal_95)
	{
		if (Global_6012)
		{
			if (!MISC::IS_BIT_SET(Local_89[iLocal_101 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_89[iLocal_101 /*5*/].f_1), 4);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_89[iLocal_101 /*5*/].f_1), 4);
		}
	}
}

void func_388()//Position - 0xF562
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == iLocal_94)
	{
		if (MISC::IS_BIT_SET(Global_180039, 0))
		{
			MISC::CLEAR_BIT(&Global_180039, 0);
			bVar0 = true;
		}
		if (!MISC::IS_BIT_SET(Local_89[iLocal_94 /*5*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Local_87.f_1, 11))
			{
				MISC::SET_BIT(&(Local_89[iLocal_94 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!MISC::IS_BIT_SET(Local_87.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Local_89[iLocal_94 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_392();
			func_389(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_87.f_2C)
	{
		Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_87.f_2C;
		func_389(Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_389(int iParam0)//Position - 0xF632
{
	switch (iLocal_93)
	{
		case 0:
			func_391(&(Global_1804AC[3]), iParam0);
			break;
		
		case 1:
			func_390(iParam0);
			break;
	}
}

void func_390(int iParam0)//Position - 0xF667
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180484[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_180484[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180484[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_180484[iVar0]);
		}
		iVar0++;
	}
}

void func_391(var uParam0, int iParam1)//Position - 0xF6D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180484[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_180484[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180484[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_180484[iVar0]);
		}
		iVar0++;
	}
}

int func_392()//Position - 0xF741
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_93 == 1 || iLocal_93 == 0)
		{
			if (iLocal_94 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (func_25(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_393()//Position - 0xF7CA
{
	switch (iLocal_93)
	{
		case 0:
			if (!MISC::IS_BIT_SET(iLocal_90, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_94)
				{
					if (func_6(iLocal_95, 1, 1))
					{
						func_395("GC_TCK_60", iLocal_95, 0, 0, 0, 1, 1, 0);
						MISC::SET_BIT(&iLocal_90, 11);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_90, 12))
			{
				if (MISC::IS_BIT_SET(Local_87.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_94)
					{
						if (func_6(iLocal_95, 1, 1))
						{
							func_395("GC_TCK_62", iLocal_95, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_90, 12);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_87.f_2, 10))
			{
				if (!MISC::IS_BIT_SET(iLocal_90, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_94)
					{
						if (func_6(iLocal_95, 1, 1))
						{
							func_395("GC_TCK_65", iLocal_95, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_90, 8);
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_90, 13))
			{
				if (!MISC::IS_BIT_SET(Local_87.f_2, 11))
				{
					if (MISC::IS_BIT_SET(Local_87.f_1, 8))
					{
						if (MISC::IS_BIT_SET(Local_87.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == iLocal_94)
							{
								if (func_6(iLocal_95, 1, 1))
								{
									func_395("GC_TCK_63", iLocal_95, 0, 0, 0, 1, 1, 0);
									MISC::SET_BIT(&iLocal_90, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_90, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_94)
				{
					if (func_6(iLocal_95, 1, 1))
					{
						func_395("GC_TCK_70", iLocal_95, 0, 0, 0, 1, 1, 0);
						MISC::SET_BIT(&iLocal_90, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == iLocal_95)
				{
					if (func_6(iLocal_94, 1, 1))
					{
						func_395("GC_TCK_71", iLocal_94, 0, 0, 0, 1, 1, 0);
						MISC::SET_BIT(&iLocal_90, 11);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_90, 10))
			{
				if (MISC::IS_BIT_SET(Local_87.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_87.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == iLocal_94)
						{
							if (func_6(iLocal_95, 0, 1))
							{
								func_394(-1);
								func_395("GC_TCK_73", iLocal_95, 0, 0, 0, 1, 1, 0);
								MISC::SET_BIT(&iLocal_90, 10);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_90, 9))
			{
				if (MISC::IS_BIT_SET(Local_87.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_87.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == iLocal_94)
						{
							if (func_6(iLocal_95, 0, 1))
							{
								func_395("GC_TCK_75", iLocal_95, 0, 0, 0, 1, 1, 0);
								MISC::SET_BIT(&iLocal_90, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_394(int iParam0)//Position - 0xFA4B
{
	if (Global_18032E)
	{
		if (Global_180332)
		{
			if (Global_180194.f_B == PLAYER::INT_TO_PLAYERINDEX(iParam0))
			{
				Global_186A10++;
			}
		}
		else
		{
			Global_186A10++;
		}
	}
}

int func_395(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xFA87
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_403(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_401(&Var1));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_25510E = { func_85(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2550C8, 35, &Global_25510E))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2550C8.f_16), "Leader") && Global_2550C8.f_1E == 0)
				{
					iVar2 = 1;
				}
				if (Global_2550C8.f_15 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_400(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2550C8, 35), &(Global_2550C8.f_11), Global_2550C8.f_1E, iVar2, 0, Global_2550C8, &Var1, Global_1418C4, Global_1418C5, Global_1418C6);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2550C8, 35), &(Global_2550C8.f_11), Global_2550C8.f_1E, iVar2, 0, Global_2550C8, Global_1418C4, Global_1418C5, Global_1418C6);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_396(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_396(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xFBE8
{
	int iVar0;
	
	if ((!func_399() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_137(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_397(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_19D2F5.f_5[iVar0 /*53*/] = iParam0;
		Global_19D2F5.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_19D2F5.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_19D2F5.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_19D2F5.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_19D2F5.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_397(int iParam0)//Position - 0xFCF0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_19D2F5 - 1))
	{
		if (iParam0 > Global_19D2F5.f_5[iVar0 /*53*/].f_1)
		{
			func_398(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_19D2F5++;
	if (Global_19D2F5 > 5)
	{
		Global_19D2F5 = 5;
		return Global_19D2F5;
	}
	return (Global_19D2F5 - 1);
}

void func_398(int iParam0)//Position - 0xFD52
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_19D2F5.f_5[iVar0 /*53*/] = { Global_19D2F5.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_399()//Position - 0xFD8B
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_400(char* sParam0)//Position - 0xFD9C
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_401(char* sParam0)//Position - 0xFDC7
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_402(&cVar0);
}

var func_402(char[4] cParam0)//Position - 0xFDEB
{
	return cParam0;
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xFDF5
{
	var uVar0;
	
	if (func_88(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_88(PLAYER::PLAYER_ID()) || (func_412() && func_411()))
	{
		uVar0 = func_410();
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0) != -1)
				{
					if (func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 1))
					{
						return func_409(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_404(0, -1, 0);
			}
		}
	}
	return func_409(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_404(bool bParam0, int iParam1, bool bParam2)//Position - 0xFE97
{
	return func_405(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_405(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xFEAD
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_87(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_408(1);
				}
				else
				{
					return func_408(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_406(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_408(1);
	}
	return func_408(0);
}

int func_406(int iParam0, int iParam1)//Position - 0xFF2F
{
	int iVar0;
	
	iVar0 = func_407(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_407(int iParam0, int iParam1)//Position - 0xFF6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_87(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_408(bool bParam0)//Position - 0xFFB0
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_409(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xFFC7
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_119(iParam1, iParam0, iVar0, 0))
		{
			return func_408(1);
		}
		else
		{
			return func_405(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_180337 || Global_18032E)
	{
		if (iParam0 == iParam1 || (Global_180337 == 1 && Global_180341 == 0))
		{
			return func_408(1);
		}
		else
		{
			return func_405(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_180332 && Global_180194.f_B == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

var func_410()//Position - 0x10087
{
	return Global_240005.f_2;
}

bool func_411()//Position - 0x10095
{
	return MISC::IS_BIT_SET(Global_240005, 4);
}

bool func_412()//Position - 0x100A6
{
	return MISC::IS_BIT_SET(Global_182604[PLAYER::PLAYER_ID() /*324*/].f_1F.f_12, 14);
}

void func_413()//Position - 0x100C3
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != Local_87.f_2D)
	{
		if (func_421(Local_87.f_2D, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= Local_87.f_2D)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_87.f_2D);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) != Local_87.f_2E)
	{
		if (func_420(Local_87.f_2D, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= Local_87.f_2E)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_87.f_2E);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) != Local_87.f_2F)
	{
		if (func_414(Local_87.f_2D, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(0) <= Local_87.f_2F)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_87.f_2F);
			}
		}
	}
}

bool func_414(int iParam0, bool bParam1, bool bParam2)//Position - 0x10152
{
	return func_415(2, iParam0, 1, bParam1, bParam2);
}

int func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x10166
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_146527, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_419(iParam0) - func_418(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_418(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_419(iParam0) - func_417(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_418(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_419(iParam0) - func_418(iParam0, 1));
		}
		if (!bParam4 && Global_182604[PLAYER::PLAYER_ID() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_416(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_416(int iParam0)//Position - 0x1022F
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x10269
{
	switch (iParam0)
	{
		case 0:
			return Global_146527.f_1;
			break;
		
		case 1:
			return Global_146527.f_2;
			break;
		
		case 2:
			return Global_146527.f_3;
			break;
	}
	return 0;
}

int func_418(int iParam0, bool bParam1)//Position - 0x102AF
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_CE;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_CF;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24D5B9[iVar0 /*254*/].f_D0;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1);
			}
			break;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x10346
{
	switch (iParam0)
	{
		case 0:
			return Global_14652F;
			break;
		
		case 1:
			return Global_146530;
			break;
		
		case 2:
			return Global_146531;
			break;
	}
	return 0;
}

bool func_420(int iParam0, bool bParam1, bool bParam2)//Position - 0x10386
{
	return func_415(1, iParam0, 1, bParam1, bParam2);
}

bool func_421(int iParam0, bool bParam1, bool bParam2)//Position - 0x1039A
{
	return func_415(0, iParam0, 1, bParam1, bParam2);
}

void func_422()//Position - 0x103AE
{
	func_423();
}

void func_423()//Position - 0x103BA
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_424()//Position - 0x103C6
{
	bool bVar0;
	
	func_431(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_141422 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_430())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_429())
	{
		return 1;
	}
	if (func_428(157))
	{
		if (!func_427())
		{
			return 1;
		}
	}
	if (func_428(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_425()//Position - 0x10459
{
	switch (func_426())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_426()//Position - 0x1048D
{
	return Global_5F7C;
}

bool func_427()//Position - 0x10498
{
	return Global_250CE3.f_23C;
}

int func_428(int iParam0)//Position - 0x104A7
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_429()//Position - 0x104BE
{
	return Global_2528A6;
}

bool func_430()//Position - 0x104CA
{
	return Global_250CE3.f_237;
}

void func_431(var uParam0)//Position - 0x104D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_432(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 3);
					if (Var3.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_432(int iParam0)//Position - 0x10549
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_433(uVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_433(int iParam0, var uParam1)//Position - 0x105CA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_434()//Position - 0x10618
{
	SYSTEM::WAIT(0);
}

void func_435(struct<20> Param0)//Position - 0x10625
{
	func_438(32, Param0);
	func_437(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_87, 51);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_89, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_436())
	{
		func_179();
	}
	iLocal_93 = Param0.f_10;
	iLocal_94 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_11);
	iLocal_95 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_12);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_95))
	{
		iLocal_96 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_95));
	}
	Local_97 = { Param0.f_A };
	if (iLocal_93 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_94)
		{
			MISC::SET_BIT(&Global_180039, 0);
		}
	}
	Global_199085 = 0;
	Global_199086 = 0;
	if (iLocal_93 == 1)
	{
		Global_2554DA.f_638 = 0;
	}
	Local_89[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

int func_436()//Position - 0x106DC
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_430())
		{
			return 0;
		}
		if (func_428(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_437(int iParam0, int iParam1, bool bParam2)//Position - 0x10735
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_423();
			}
			else
			{
				return 0;
			}
		}
		if (!func_384())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_430())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_428(155))
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_423();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1406F8 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_423();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_423();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_438(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x1084A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_423();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

