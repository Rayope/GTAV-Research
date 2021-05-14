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
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<16> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	char* sLocal_64 = NULL;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	int iLocal_81 = 0;
	struct<3> Local_82[5];
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92[5] = { 0, 0, 0, 0, 0 };
	float fLocal_93 = 0f;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 16;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	struct<100> Local_266 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	struct<2> Local_273 = { 0, 5 } ;
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
	var uLocal_289 = 5;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	Local_44 = { 500f, 500f, 500f };
	iLocal_59 = -1;
	iLocal_60 = 2050;
	iLocal_61 = -1;
	iLocal_62 = -1;
	sLocal_64 = "CC_SUBSTR";
	fLocal_65 = 125f;
	iLocal_66 = 1;
	iLocal_68 = 262;
	fLocal_76 = 4f;
	bLocal_77 = true;
	iLocal_78 = 6;
	iLocal_79 = 18;
	iLocal_81 = -1;
	bLocal_95 = true;
	iLocal_96 = 1;
	Local_55 = { ScriptParam_273.f_1[0 /*3*/] };
	Local_55 = { Local_55 };
	iLocal_53 = iLocal_53;
	Local_51 = { Local_51 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_145(1);
	}
	uLocal_52 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_58 = 0;
	func_143(&Global_17707, 0);
	func_137();
	MISC::_0x6F2135B6129620C1(1);
	if (func_136(uLocal_57, 1))
	{
		iLocal_63 = 10;
	}
	else
	{
		iLocal_63 = 9;
	}
	while (!Global_783A)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_136(uLocal_57, 8))
	{
		if (!func_134(iLocal_63))
		{
			if (func_133(0, iLocal_62))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_62 != -1)
	{
		if (!func_133(0, iLocal_62))
		{
			bLocal_77 = false;
		}
	}
	if (func_136(uLocal_57, 8388608))
	{
		func_145(1);
	}
	if (func_136(uLocal_57, 524288) && (func_132() && !func_131()))
	{
		func_145(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_136(uLocal_57, 4194304))
	{
		if (iLocal_68 != 262)
		{
			func_130(iLocal_68, 1, 0);
			iLocal_68 = 262;
		}
		func_129(10);
	}
	while (true)
	{
		if (!func_136(uLocal_57, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_273.f_1[0 /*3*/], &fVar1))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_273.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&uLocal_57, 268435456);
				}
			}
		}
		uLocal_52 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_136(uLocal_57, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_52))
			{
				func_145(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(iLocal_52))
		{
			Local_54 = { ENTITY::GET_ENTITY_COORDS(iLocal_52, 1) };
			fLocal_56 = SYSTEM::VDIST2(Local_54, ScriptParam_273.f_1[0 /*3*/]);
			fLocal_56 = fLocal_56;
			Local_74 = { Local_54 };
			Local_75 = { ScriptParam_273.f_1[0 /*3*/] };
			Local_74.f_2 = 0f;
			Local_75.f_2 = 0f;
			fLocal_73 = SYSTEM::VDIST2(Local_74, Local_75);
			switch (iLocal_58)
			{
				case 0:
					if (func_134(iLocal_63) || (func_136(uLocal_57, 16) && !func_136(uLocal_57, 524288)))
					{
						iLocal_61 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_73 > (fLocal_65 * fLocal_65))
						{
							if (iLocal_68 != 262)
							{
								func_130(iLocal_68, 1, 0);
								iLocal_68 = 262;
							}
							func_129(10);
						}
						if ((Local_54.f_2 - ScriptParam_273.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_56 > ((fLocal_76 * 1.5f) * (fLocal_76 * 1.5f)))
					{
						iLocal_66 = iLocal_66;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_145(1);
						return;
					}
					if (!func_134(iLocal_63))
					{
						if (!func_136(uLocal_57, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_15F6A.f_3), &Local_51))
							{
								Local_51 = { Local_50 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!func_136(uLocal_57, 4))
					{
						func_111();
						func_128(&uLocal_57, 4);
					}
					if (fLocal_73 > (fLocal_65 * fLocal_65) && !Global_15F8C)
					{
						if (iLocal_68 != 262)
						{
							if (func_110(6) && !func_109(iLocal_68))
							{
							}
							else
							{
								func_130(iLocal_68, 1, 0);
								iLocal_68 = 262;
							}
						}
						func_129(10);
					}
					else
					{
						Local_51 = { Local_50 };
						bVar3 = !func_136(uLocal_57, 64);
						func_143(&uLocal_57, 128);
						if (!func_108(3) && !Global_15F8C)
						{
							if (func_136(uLocal_57, 2097152))
							{
								if ((!func_136(uLocal_57, 1) || !ENTITY::DOES_ENTITY_EXIST(func_107())) && !Global_15F8C)
								{
									func_129(10);
									break;
								}
							}
						}
						if (func_136(uLocal_57, 524288) && (func_132() && !func_131()))
						{
							func_145(1);
						}
						if (func_106())
						{
							func_145(1);
						}
						if ((!func_98(6) || Global_17890) || func_97())
						{
							bVar3 = false;
						}
						if (!bLocal_77)
						{
							func_95(&uLocal_57, 128);
							bVar3 = false;
						}
						if (func_136(uLocal_57, 1))
						{
							if (!func_94())
							{
								func_95(&uLocal_57, 128);
								bVar3 = false;
							}
						}
						if (func_93(1))
						{
							bVar3 = false;
						}
						if (Global_10A95)
						{
							bVar3 = false;
						}
						if (func_92())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_52, ScriptParam_273.f_1[0 /*3*/], fLocal_76, fLocal_76, 2f, 0, 1, iLocal_66))
							{
								bVar3 = false;
							}
							iVar4 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_78 > iLocal_79)
							{
								if (iVar4 < iLocal_78 && iVar4 >= iLocal_79)
								{
									func_95(&uLocal_57, 128);
									bVar3 = false;
									if (fLocal_56 < ((fLocal_76 * fLocal_76) + 4f))
									{
										if (!func_136(uLocal_57, 134217728))
										{
											func_87("MG_NA_TIME", iLocal_78, iLocal_79);
											func_95(&uLocal_57, 134217728);
										}
									}
									else
									{
										func_143(&uLocal_57, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_78 || iVar4 >= iLocal_79)
							{
								func_95(&uLocal_57, 128);
								bVar3 = false;
								if (fLocal_56 < ((fLocal_76 * fLocal_76) + 4f))
								{
									if (!func_136(uLocal_57, 134217728))
									{
										func_87("MG_NA_TIME", iLocal_78, iLocal_79);
										func_95(&uLocal_57, 134217728);
									}
								}
								else
								{
									func_143(&uLocal_57, 134217728);
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_86(iLocal_53))
								{
									if (iLocal_59 == -1)
									{
										func_85(&iLocal_59, 4, sLocal_64, 0, 0);
										func_95(&uLocal_57, 2048);
									}
									else if (!func_136(uLocal_57, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_84(&iLocal_59);
										func_143(&uLocal_57, 2048);
									}
									if (func_82(iLocal_59, 1))
									{
										sLocal_64 = sLocal_64;
										func_84(&iLocal_59);
										func_143(&uLocal_57, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_51);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_64 = sLocal_64;
									func_84(&iLocal_59);
									func_143(&uLocal_57, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_51);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_59 != -1)
							{
								func_84(&iLocal_59);
								func_143(&uLocal_57, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_51))
					{
						if (iLocal_59 != -1)
						{
							func_84(&iLocal_59);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_136(uLocal_57, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_61, 6, iLocal_63, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_46();
							if (Global_8C75)
							{
								func_37(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_49 = func_36();
							func_95(&uLocal_57, 2);
							func_129(6);
							func_32(&uLocal_70);
							if (iLocal_62 != -1)
							{
								func_31(iLocal_62);
								func_29(func_30(iLocal_62), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_136(Global_17707, 262144))
					{
						func_143(&Global_17707, 262144);
						func_27();
					}
					if (func_136(uLocal_57, 2097152))
					{
						if (!func_108(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
						{
							func_129(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_23(&uLocal_70) * 1000f)), iLocal_62, 0);
						func_22(&uLocal_70);
						func_143(&uLocal_57, 256);
						func_21();
						if (bVar0)
						{
							func_143(&uLocal_57, 2);
						}
						else if (func_136(uLocal_57, 2))
						{
							if (func_136(Global_17707, 0))
							{
								func_20(&iLocal_61);
								iLocal_61 = -1;
								func_143(&uLocal_57, 2);
							}
							else
							{
								func_20(&iLocal_61);
								iLocal_61 = -1;
								func_143(&uLocal_57, 2);
							}
						}
						func_129(0);
						if (iLocal_62 != -1)
						{
							if (func_136(Global_17707, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_30(iLocal_62), 0, Global_15F8F, 0);
								func_19(func_30(iLocal_62), 0, Global_15F8F, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_30(iLocal_62), 0, Global_15F8F, 0);
								func_19(func_30(iLocal_62), 0, Global_15F8F, 0, 0);
							}
						}
						func_5();
						func_143(&Global_17707, 0);
						if (func_136(uLocal_57, 16777216))
						{
							func_145(1);
						}
						if (iLocal_62 != -1)
						{
							if (Global_17C49.f_1CAD)
							{
								if (!func_133(0, iLocal_62))
								{
									func_145(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_73 > (fLocal_65 * fLocal_65))
					{
						if (iLocal_68 != 262)
						{
							func_130(iLocal_68, 1, 0);
							iLocal_68 = 262;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_68 != 262)
					{
						func_130(iLocal_68, 0, 0);
					}
					if (iLocal_59 != -1)
					{
						func_84(&iLocal_59);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_64))
					{
						if (func_1(sLocal_64))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_67 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_69 == 2)
							{
								if (iLocal_69 == 2)
								{
									if (func_134(iLocal_63) && func_133(0, iLocal_62))
									{
										func_137();
										if (iLocal_68 != 262)
										{
											func_130(iLocal_68, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_69 == 0)
							{
								if (fLocal_73 > (fLocal_65 * fLocal_65))
								{
									if (iLocal_68 != 262)
									{
										func_130(iLocal_68, 1, 0);
										iLocal_68 = 262;
									}
									func_129(10);
								}
							}
							else if (iLocal_69 == 1)
							{
								if (fLocal_73 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_68 != 262)
									{
										func_130(iLocal_68, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							func_130(iLocal_68, 1, 0);
						}
					}
					else
					{
						iLocal_67++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)//Position - 0xB32
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xB45
{
	char* sVar0;
	
	func_3(&(Local_266.f_47));
	func_3(&(Local_266.f_4D));
	func_3(&(Local_266.f_63));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REMOVE_ANIM_DICT("random@street_race");
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	switch (iLocal_81)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)//Position - 0xC1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()//Position - 0xC4B
{
}

void func_5()//Position - 0xC53
{
	if (func_136(Global_17C49.f_4376, 1))
	{
		func_143(&(Global_17C49.f_4376), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()//Position - 0xC83
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

bool func_7(bool bParam0)//Position - 0xCCE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_8()//Position - 0xCF9
{
	if (Global_17C49.f_4376.f_12 < Global_17C49.f_4376.f_13[iLocal_81] || Global_17C49.f_4376.f_13[iLocal_81] == 0)
	{
		Global_17C49.f_4376.f_13[iLocal_81] = Global_17C49.f_4376.f_12;
		Global_17C49.f_4376.f_12 = 999;
	}
	if (iLocal_81 == Global_17C49.f_4376.f_1 || Global_17C49.f_4376.f_1 == -1)
	{
		if (Global_17C49.f_4376.f_1 != 5)
		{
			Global_17C49.f_4376.f_1++;
			switch (Global_17C49.f_4376.f_1)
			{
				case 1:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					break;
				
				case 2:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					break;
				
				case 3:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					break;
				
				case 4:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					break;
				
				case 5:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_130(69, 1, 0);
			func_17(69, 1);
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
		}
		switch (Global_17C49.f_4376.f_1)
		{
			case 0:
				func_13(69);
				func_9(70);
				break;
			
			case 1:
				func_13(70);
				func_9(71);
				break;
			
			case 2:
				func_13(71);
				func_9(72);
				break;
			
			case 3:
				func_13(72);
				func_9(73);
				break;
			
			case 4:
				func_13(73);
				func_9(74);
				break;
			
			case 5:
				func_13(74);
				break;
			}
	}
}

void func_9(int iParam0)//Position - 0xFCC
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)//Position - 0xFEA
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_11(int iParam0, bool bParam1)//Position - 0x1070
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x10F6
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_13(int iParam0)//Position - 0x11A2
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11C0
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x11E2
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
		func_16();
	}
}

void func_16()//Position - 0x13B6
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

void func_17(int iParam0, bool bParam1)//Position - 0x14D6
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 20);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 20);
}

void func_18()//Position - 0x155F
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	switch (iLocal_81)
	{
		case 0:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1670
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_1558D, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_14A40);
	StringCopy(&Global_1558D, "", 64);
}

void func_20(int iParam0)//Position - 0x16B5
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

void func_21()//Position - 0x16F2
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_22(var uParam0)//Position - 0x1735
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)//Position - 0x174B
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)//Position - 0x178A
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

bool func_25(var uParam0)//Position - 0x17D2
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_26(var uParam0)//Position - 0x17E2
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_27()//Position - 0x17F2
{
	func_8();
	return 1;
}

void func_28()//Position - 0x17FF
{
}

void func_29(char* sParam0, int iParam1, int iParam2)//Position - 0x1807
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1558D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1558D, "", 64);
	}
	StringCopy(&Global_1558D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)//Position - 0x1849
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)//Position - 0x199C
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

void func_32(var uParam0)//Position - 0x19F5
{
	if (!func_26(uParam0))
	{
		func_35(uParam0);
	}
	else
	{
		func_33(uParam0);
	}
}

void func_33(var uParam0)//Position - 0x1A16
{
	func_34(uParam0, 0f);
}

void func_34(var uParam0, float fParam1)//Position - 0x1A25
{
	uParam0->f_1 = (func_24(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(var uParam0)//Position - 0x1A53
{
	if (!func_26(uParam0))
	{
		func_33(uParam0);
	}
}

var func_36()//Position - 0x1A6B
{
	struct<18> Var0;
	int iVar1;
	var uVar2;
	
	HUD::CLEAR_HELP(1);
	Var0.f_4 = 5;
	Var0.f_A = 5;
	Var0 = iLocal_81;
	Var0.f_1 = { Local_80 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_266[iVar1 /*14*/];
		Var0.f_A[iVar1] = Local_266[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_10 = Local_266.f_53;
	Var0.f_11 = Local_266.f_53.f_1;
	GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneNeutral", 0, 1);
	SYSTEM::WAIT(400);
	uVar2 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_50, &Var0, 18, iLocal_60);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_50);
	return uVar2;
}

void func_37(int iParam0)//Position - 0x1B08
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
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)//Position - 0x1B61
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

int func_39(int iParam0)//Position - 0x1BE4
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

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x1C15
{
	func_41(iParam0, iParam1, iParam2, 0, 0);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C29
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()//Position - 0x1CA0
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

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x1CD1
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1CEC
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

int func_45(int iParam0)//Position - 0x1D38
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

void func_46()//Position - 0x1D81
{
	if (Global_BFC[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	MISC::CLEAR_BIT(&Global_8D7, 25);
	MISC::SET_BIT(&Global_8D8, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1DFE
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
		if (func_49(0))
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
		if (!func_134(iParam2))
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
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)//Position - 0x1F35
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

int func_49(int iParam0)//Position - 0x1F84
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()//Position - 0x1FA6
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_80);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_96)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_96 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_97)
	{
		if (func_52())
		{
			iLocal_97 = 1;
			func_51();
		}
	}
}

void func_51()//Position - 0x200E
{
	iLocal_45++;
}

int func_52()//Position - 0x201C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_266[iVar0 /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_266[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_266.f_53) || !ENTITY::DOES_ENTITY_EXIST(Local_266.f_53.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()//Position - 0x2084
{
	switch (iLocal_81)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()//Position - 0x20C6
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&uLocal_89))
	{
		func_35(&uLocal_89);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94) && !ENTITY::IS_ENTITY_DEAD(iLocal_94))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_94))
		{
			return;
		}
	}
	if (func_23(&uLocal_89) >= 8f)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_266[(iVar0 - 1) /*14*/]))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_100, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_89);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x218E
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)//Position - 0x21DC
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
					func_68();
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
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_67();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_57();
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
		func_68();
	}
	return 0;
}

void func_57()//Position - 0x24A8
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

void func_58()//Position - 0x24DA
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

int func_59()//Position - 0x256F
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()//Position - 0x2596
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

void func_61()//Position - 0x262F
{
	if (func_110(14))
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
		Global_3839 = func_62();
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

var func_62()//Position - 0x26D0
{
	func_63();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_63()//Position - 0x26E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_66(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_65(PLAYER::PLAYER_PED_ID());
			if (func_64(iVar0) && (!func_110(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_64(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_64(int iParam0)//Position - 0x27E6
{
	return iParam0 < 3;
}

int func_65(int iParam0)//Position - 0x27F2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)//Position - 0x282F
{
	if (func_64(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_67()//Position - 0x2859
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

void func_68()//Position - 0x28B1
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

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2908
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

void func_70()//Position - 0x295E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_266.f_53))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 <= iLocal_78 && iVar0 >= iLocal_79)
		{
			iLocal_96 = 0;
			return;
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_266.f_53, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()//Position - 0x29B9
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= iLocal_78 && iVar0 >= iLocal_79)
	{
		iLocal_265 = 0;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_265)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_94, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_98 = 0;
					iLocal_99 = 0;
					iLocal_265 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_94, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				iLocal_265 = 2;
				break;
			
			case 2:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, 242628503) != 1 || PED::IS_PED_FACING_PED(iLocal_94, PLAYER::PLAYER_PED_ID(), 20f)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_99)
					{
						func_72(iLocal_94, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_72(iLocal_94, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_265 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_94))
				{
					func_33(&uLocal_86);
					TASK::TASK_PLAY_ANIM(iLocal_94, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_265 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_94, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_266.f_53.f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_266.f_53.f_C, Local_266.f_53.f_D, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_94, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					iLocal_265 = 0;
				}
				if (func_26(&uLocal_86))
				{
					if (func_23(&uLocal_86) >= 5f && !iLocal_98)
					{
						iLocal_98 = 1;
						iLocal_265 = 1;
					}
					else if (func_23(&uLocal_86) >= 10f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_265 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_72(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2BE2
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

int func_73(int iParam0)//Position - 0x2BFB
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

void func_74()//Position - 0x2DF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_266[iVar2 /*14*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_266[iVar2 /*14*/]))
		{
			if (func_79(Local_266[iVar2 /*14*/], 1, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_266[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_68);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_266[iVar2 /*14*/]))
			{
				if (func_26(&(Local_82[iVar2 /*3*/])))
				{
					if (func_23(&(Local_82[iVar2 /*3*/])) > uLocal_92[iVar2])
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_266[iVar2 /*14*/].f_1, 0) && PED::IS_PED_IN_VEHICLE(Local_266[iVar2 /*14*/], Local_266[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_266[iVar2 /*14*/].f_1, 1, iVar0);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_266[iVar2 /*14*/].f_1, 31, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							if (!PED::IS_PED_INJURED(Local_266[iVar2 /*14*/]))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_266[iVar2 /*14*/], uVar3);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						}
						func_33(&(Local_82[iVar2 /*3*/]));
						uLocal_92[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
					}
				}
				else
				{
					func_35(&(Local_82[iVar2 /*3*/]));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_266[iVar2 /*14*/]))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_266[iVar2 /*14*/]) && !PED::IS_PED_RAGDOLL(Local_266[iVar2 /*14*/])) && !TASK::IS_PED_GETTING_UP(Local_266[iVar2 /*14*/]))
				{
					Local_266[iVar2 /*14*/].f_B = 1;
				}
				else if (Local_266[iVar2 /*14*/].f_B)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_ACHIEVE_HEADING(0, Local_266[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_266[iVar2 /*14*/].f_C, Local_266[iVar2 /*14*/].f_D, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_266[iVar2 /*14*/], uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					Local_266[iVar2 /*14*/].f_B = 0;
				}
				if (PED::IS_PED_RAGDOLL(Local_266[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_266[iVar2 /*14*/]))
				{
					if (!Local_266[iVar2 /*14*/].f_A && (PED::IS_PED_RAGDOLL(Local_266[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_266[iVar2 /*14*/])))
					{
						Local_266.f_65++;
					}
					Local_266[iVar2 /*14*/].f_A = 1;
				}
				else if (Local_266[iVar2 /*14*/].f_A)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_ACHIEVE_HEADING(0, Local_266[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_266[iVar2 /*14*/].f_C, Local_266[iVar2 /*14*/].f_D, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_266[iVar2 /*14*/], uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					Local_266[iVar2 /*14*/].f_A = 0;
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_266.f_53.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_266.f_53))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_266.f_53.f_1, 0))
		{
			iLocal_53 = Local_266.f_53.f_1;
		}
		if (func_79(Local_266.f_53, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_68);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
		if (!PED::IS_PED_INJURED(Local_266.f_53))
		{
			if (func_26(&uLocal_83))
			{
				if (func_23(&uLocal_83) > fLocal_93)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_266.f_53.f_1, 0) && PED::IS_PED_IN_VEHICLE(Local_266.f_53, Local_266.f_53.f_1, 0))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_266.f_53.f_1, 1, iVar0);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_266.f_53.f_1, 31, iVar1);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						if (!PED::IS_PED_INJURED(Local_266.f_53))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_266.f_53, uVar3);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					}
					func_33(&uLocal_83);
					fLocal_93 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_83);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_266.f_53))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_266.f_53) && !PED::IS_PED_RAGDOLL(Local_266.f_53)) && !TASK::IS_PED_GETTING_UP(Local_266.f_53))
			{
				Local_266.f_53.f_B = 1;
			}
			else if (Local_266.f_53.f_B)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_ACHIEVE_HEADING(0, Local_266.f_53.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_266.f_53.f_C, Local_266.f_53.f_D, 4f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_266.f_53, uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				Local_266.f_53.f_B = 0;
			}
			if (PED::IS_PED_RAGDOLL(Local_266.f_53) || TASK::IS_PED_GETTING_UP(Local_266.f_53))
			{
				if (!Local_266.f_53.f_A)
				{
					Local_266.f_65++;
				}
				Local_266.f_53.f_A = 1;
			}
			else if (Local_266.f_53.f_A)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_ACHIEVE_HEADING(0, Local_266.f_53.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_266.f_53.f_C, Local_266.f_53.f_D, 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_266.f_53, uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				iLocal_265 = 4;
				func_33(&uLocal_86);
				Local_266.f_53.f_A = 0;
			}
		}
	}
}

char* func_75()//Position - 0x338C
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)//Position - 0x33C8
{
	if (iLocal_58 < 5)
	{
		if (iParam0 != 262)
		{
			func_130(iParam0, 0, 0);
		}
		iLocal_68 = 262;
		func_84(&iLocal_59);
		iLocal_58 = 9;
	}
}

void func_77()//Position - 0x33F5
{
	int iVar0[10];
	var uVar1;
	int iVar2;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar2]) && !PED::IS_PED_INJURED(iVar0[iVar2]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0[iVar2], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(300, 900));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iVar0[iVar2], uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
			}
		}
		iVar2++;
	}
	switch (Global_17C49.f_4376.f_1)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)//Position - 0x3505
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_69 = iParam0;
	iLocal_67 = 0;
	iLocal_58 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3526
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (Local_266.f_65 >= 3)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (bParam1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_FLEEING(iParam0))
			{
				return 1;
			}
			if (WEAPON::IS_PED_ARMED(iVar0, 4))
			{
				if (PED::IS_PED_SHOOTING(iVar0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (MISC::IS_BULLET_IN_AREA(Var1, 4f, 1))
			{
				return 1;
			}
			if (MISC::IS_PROJECTILE_IN_AREA((Var1.x - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.x + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 25f)) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 25f))
			{
				return 1;
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(var uParam0, int iParam1)//Position - 0x36E0
{
	return func_81(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0, iParam1);
}

var func_81(int iParam0, int iParam1, var uParam2)//Position - 0x36F8
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, uParam2);
}

int func_82(int iParam0, bool bParam1)//Position - 0x3754
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_89(0))
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

int func_83(int iParam0)//Position - 0x380C
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

void func_84(int iParam0)//Position - 0x3847
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_83(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_85(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x389E
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_84(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_8B1D[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_86(int iParam0)//Position - 0x39A9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1, int iParam2)//Position - 0x39D6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, -1);
}

var func_88()//Position - 0x39F8
{
	return Global_105F2;
}

int func_89(int iParam0)//Position - 0x3A04
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

bool func_90(int iParam0, int iParam1)//Position - 0x3A5E
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

bool func_91()//Position - 0x3A99
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

int func_92()//Position - 0x3AAE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)//Position - 0x3AC8
{
	if (bParam0)
	{
		return (Global_42CA.f_4 && Global_42CA.f_68 == 4);
	}
	return Global_42CA.f_4;
}

int func_94()//Position - 0x3AF1
{
	return 1;
}

void func_95(var uParam0, int iParam1)//Position - 0x3AFA
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)//Position - 0x3B0A
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()//Position - 0x3B1B
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_98(int iParam0)//Position - 0x3C25
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_62();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_105()) || Global_17890) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_105()) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_105()) || Global_17890) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_105()) || Global_17890) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_105()) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_105()) || func_102()) || Global_17890) || Global_5F7E) || func_104()) || Global_8C75) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_105()) || Global_17890) || Global_5F7E) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()//Position - 0x4343
{
	return Global_15F91.f_1;
}

int func_100()//Position - 0x4351
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_101()//Position - 0x4377
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

bool func_102()//Position - 0x43A1
{
	return Global_15F9E.f_123 > 0;
}

bool func_103()//Position - 0x43B2
{
	return Global_15F9E.f_122 > 0;
}

var func_104()//Position - 0x43C3
{
	return Global_14143C;
}

int func_105()//Position - 0x43CF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_106()//Position - 0x43EB
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()//Position - 0x4405
{
	return Global_150B7;
}

int func_108(int iParam0)//Position - 0x4411
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_134(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)//Position - 0x4483
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13);
}

bool func_110(int iParam0)//Position - 0x44BF
{
	return Global_8861 == iParam0;
}

void func_111()//Position - 0x44CD
{
	int iVar0;
	char* sVar1;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if ((iVar0 <= iLocal_78 && iVar0 >= iLocal_79) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (bLocal_95)
	{
		func_121();
		func_120();
		switch (iLocal_81)
		{
			case 0:
				func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_81)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar1))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar1))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED(sVar1, 1);
				}
			}
		}
	}
	func_112();
}

void func_112()//Position - 0x4BB0
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_73 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_266)
		{
			if (!func_117(Local_266[iVar5 /*14*/].f_2))
			{
				Local_266[iVar5 /*14*/].f_1 = VEHICLE::CREATE_VEHICLE(func_116(0), Local_266[iVar5 /*14*/].f_2, Local_266[iVar5 /*14*/].f_5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_266[iVar5 /*14*/].f_1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_266[iVar5 /*14*/].f_1, 1);
				if (func_117(Local_266[iVar5 /*14*/].f_6))
				{
					Local_266[iVar5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_266[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_266[iVar5 /*14*/].f_1, 1, 0);
				}
				else
				{
					Local_266[iVar5 /*14*/] = PED::CREATE_PED(4, func_115(), Local_266[iVar5 /*14*/].f_6, Local_266[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_266[iVar5 /*14*/].f_C = sVar3;
					Local_266[iVar5 /*14*/].f_D = sVar4;
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
					TASK::TASK_PLAY_ANIM(0, sVar3, sVar4, 8f, -8f, -1, 8193, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_266[iVar5 /*14*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				PED::SET_PED_HELMET(Local_266[iVar5 /*14*/], 1);
				PED::GIVE_PED_HELMET(Local_266[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_266.f_53.f_1 = VEHICLE::CREATE_VEHICLE(func_116(1), Local_266.f_53.f_2, Local_266.f_53.f_5, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_266.f_53.f_1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_266.f_53.f_1, 1);
		if (func_117(Local_266.f_53.f_6))
		{
			Local_266.f_53 = PED::CREATE_PED_INSIDE_VEHICLE(Local_266.f_53.f_1, 4, func_115(), -1, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_266.f_53.f_1, 1, 0);
		}
		else
		{
			Local_266.f_53 = PED::CREATE_PED(4, func_115(), Local_266.f_53.f_6, Local_266.f_53.f_9, 1, 1);
			iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_266.f_53.f_C = "amb@world_human_aa_smoke@male@idle_a";
			Local_266.f_53.f_D = sVar4;
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_STAND_STILL(0, func_114((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 1000), 1, 1000));
			TASK::TASK_PLAY_ANIM(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_266.f_53, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else if (fLocal_73 < 225f)
	{
	}
	iLocal_94 = Local_266.f_53;
	if (!ENTITY::IS_ENTITY_DEAD(Local_266[0 /*14*/]))
	{
		func_113(&uLocal_100, 1, Local_266[0 /*14*/], "MALE1", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_266[1 /*14*/]))
	{
		func_113(&uLocal_100, 2, Local_266[1 /*14*/], "MALE2", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_266[2 /*14*/]))
	{
		func_113(&uLocal_100, 3, Local_266[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_89))
	{
		func_35(&uLocal_89);
	}
	else
	{
		func_33(&uLocal_89);
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4F70
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

int func_114(int iParam0, int iParam1, int iParam2)//Position - 0x500B
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

int func_115()//Position - 0x5030
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)//Position - 0x503D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_266.f_47)
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Local_266.f_47[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_81 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (Local_266.f_47[iVar0] == 0)
	{
		if (Local_266.f_47[0] == 0)
		{
			switch (iLocal_81)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_266.f_47[0];
		}
	}
	return Local_266.f_47[iVar0];
}

int func_117(struct<3> Param0)//Position - 0x512F
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_118(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x5159
{
	if (func_117(Local_266.f_53.f_2))
	{
		Local_266.f_53.f_2 = { Param0 };
		Local_266.f_53.f_5 = fParam1;
		Local_266.f_53.f_6 = { Param2 };
		Local_266.f_53.f_9 = fParam3;
	}
}

void func_119(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x519D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_266)
	{
		if (!bVar1 && func_117(Local_266[iVar0 /*14*/].f_2))
		{
			Local_266[iVar0 /*14*/].f_2 = { Param0 };
			Local_266[iVar0 /*14*/].f_5 = fParam1;
			Local_266[iVar0 /*14*/].f_6 = { Param2 };
			Local_266[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()//Position - 0x5218
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_266)
	{
		Local_266[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_266[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_266.f_53.f_2 = { 0f, 0f, 0f };
	Local_266.f_53.f_5 = 0f;
}

void func_121()//Position - 0x5263
{
	switch (iLocal_81)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0);
			break;
	}
}

var func_122()//Position - 0x5497
{
	return ((((((((func_123(&(Local_266.f_47)) && func_123(&(Local_266.f_4D))) && func_123(&(Local_266.f_63))) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_c@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_aa_smoke@male@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("random@street_race")) && STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"));
}

int func_123(var uParam0)//Position - 0x550C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_124()//Position - 0x5553
{
	char cVar0[64];
	
	func_126(&(Local_266.f_4D), joaat("a_m_y_motox_01"));
	func_126(&(Local_266.f_63), joaat("a_m_y_motox_01"));
	switch (iLocal_81)
	{
		case 0:
			func_126(&(Local_266.f_47), joaat("sanchez"));
			func_126(&(Local_266.f_47), joaat("blazer"));
			break;
		
		case 1:
			func_126(&(Local_266.f_47), joaat("mesa"));
			func_126(&(Local_266.f_47), joaat("bjxl"));
			func_126(&(Local_266.f_47), joaat("patriot"));
			func_126(&(Local_266.f_47), joaat("dubsta2"));
			func_126(&(Local_266.f_47), joaat("bfinjection"));
			break;
		
		case 3:
			func_126(&(Local_266.f_47), joaat("sanchez"));
			func_126(&(Local_266.f_47), joaat("blazer"));
			break;
		
		case 4:
			func_126(&(Local_266.f_47), joaat("sanchez"));
			func_126(&(Local_266.f_47), joaat("blazer"));
			break;
		
		case 5:
			func_126(&(Local_266.f_47), joaat("mesa"));
			func_126(&(Local_266.f_47), joaat("bfinjection"));
			func_126(&(Local_266.f_47), joaat("bjxl"));
			func_126(&(Local_266.f_47), joaat("sadler"));
			func_126(&(Local_266.f_47), joaat("rebel"));
			break;
		
		case 2:
			func_126(&(Local_266.f_47), joaat("sanchez"));
			func_126(&(Local_266.f_47), joaat("blazer"));
			break;
	}
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("random@street_race");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	if (iLocal_81 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_81)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar0);
	func_125(&(Local_266.f_4D));
	func_125(&(Local_266.f_47));
	func_125(&(Local_266.f_63));
}

void func_125(var uParam0)//Position - 0x5793
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_126(var uParam0, int iParam1)//Position - 0x57C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)//Position - 0x5820
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_128(var uParam0, int iParam1)//Position - 0x584C
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_129(int iParam0)//Position - 0x585D
{
	iLocal_58 = iParam0;
}

void func_130(int iParam0, bool bParam1, bool bParam2)//Position - 0x5869
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
		if (Global_60A9 == 1)
		{
			Global_60AA = 1;
		}
		Global_60A9 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_60AC[iVar0 /*23*/].f_13));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_131()//Position - 0x5972
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

int func_132()//Position - 0x598F
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)//Position - 0x59B5
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

bool func_134(int iParam0)//Position - 0x5A02
{
	return func_135(iParam0, Global_8861);
}

int func_135(int iParam0, int iParam1)//Position - 0x5A13
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

bool func_136(var uParam0, int iParam1)//Position - 0x5BF4
{
	return (uParam0 && iParam1) != 0;
}

void func_137()//Position - 0x5C03
{
	StringCopy(&Local_50, "Offroad_Races", 64);
	MISC::_0x6F2135B6129620C1(1);
	fLocal_76 = (6f + 4f);
	iLocal_62 = 4;
	func_95(&uLocal_57, 4194304);
	iLocal_60 = 17000;
	iLocal_53 = 0;
	iLocal_78 = 0;
	iLocal_79 = 25;
	iLocal_66 = 0;
	iLocal_81 = func_141(Local_55, &Local_80);
	iLocal_68 = func_140(iLocal_81);
	fLocal_65 = (SYSTEM::TO_FLOAT(func_139(iLocal_68)) + 5f);
	if (func_133(0, iLocal_62))
	{
		bLocal_95 = true;
	}
	else
	{
		func_76(iLocal_68);
		bLocal_95 = false;
	}
	if (iLocal_81 > Global_17C49.f_4376.f_1)
	{
		if (func_109(func_140(iLocal_81)))
		{
		}
		iLocal_68 = 262;
		func_76(iLocal_68);
	}
	if (!func_109(func_140(iLocal_81)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (func_138(iLocal_68, 1))
		{
			iLocal_68 = 262;
		}
		func_76(iLocal_68);
	}
	if (iLocal_81 == 2)
	{
		iLocal_78 = 20;
		iLocal_79 = 3;
	}
	if (iLocal_81 == 1 || iLocal_81 == 5)
	{
		sLocal_64 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_64 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)//Position - 0x5CF6
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (bParam1)
	{
		return MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
	}
	return MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0);
}

int func_139(int iParam0)//Position - 0x5D4A
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
			return 209;
			break;
	}
	return -1;
}

int func_140(int iParam0)//Position - 0x5E62
{
	switch (iParam0)
	{
		case 0:
			return 69;
		
		case 1:
			return 70;
		
		case 3:
			return 72;
		
		case 4:
			return 73;
		
		case 5:
			return 74;
		
		case 2:
			return 71;
		
		default:
	}
	return 262;
}

int func_141(struct<3> Param0, var uParam1)//Position - 0x5EB6
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_142(0) };
	Var1[1 /*3*/] = { func_142(1) };
	Var1[3 /*3*/] = { func_142(3) };
	Var1[4 /*3*/] = { func_142(4) };
	Var1[5 /*3*/] = { func_142(5) };
	Var1[2 /*3*/] = { func_142(2) };
	Var1[6 /*3*/] = { func_142(6) };
	fVar2 = SYSTEM::VDIST2(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = SYSTEM::VDIST2(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)//Position - 0x5F75
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)//Position - 0x602E
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, var uParam1)//Position - 0x603E
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_145(bool bParam0)//Position - 0x6053
{
	if (bParam0)
	{
		if (iLocal_68 != 262)
		{
			func_130(iLocal_68, 0, 0);
		}
	}
	func_84(&iLocal_59);
	if (func_136(uLocal_57, 2))
	{
		func_5();
		func_143(&uLocal_57, 2);
		func_20(&iLocal_61);
	}
	iLocal_61 = -1;
	func_146();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_146()//Position - 0x609C
{
	func_143(&uLocal_57, 4);
	func_147();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_49, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_51))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_51) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
		}
	}
}

void func_147()//Position - 0x60D9
{
}

