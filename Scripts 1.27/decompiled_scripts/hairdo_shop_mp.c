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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	struct<4> Local_56 = { 0, 0, 0, 0 } ;
	var uLocal_57[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	float fLocal_62 = 0f;
	bool bLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	struct<493> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_188 = 12;
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
	var uLocal_201 = 12;
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
	var uLocal_214 = 12;
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
	var uLocal_227 = 9;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 9;
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
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	struct<2> Local_268 = { 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_58 = 207;
	iLocal_61 = AUDIO::GET_SOUND_ID();
	fLocal_62 = -1f;
	fLocal_64 = 0.113f;
	fLocal_65 = 0.255f;
	fLocal_66 = 0.5972f;
	fLocal_67 = 0.255f;
	iLocal_68 = -99;
	Local_69.f_1 = ScriptParam_268.f_1;
	Local_69.f_3 = -1;
	Local_69.f_1EC = ScriptParam_268;
	if (!Local_69.f_1)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[ScriptParam_268]), 16);
	}
	Local_69.f_1BE = 518475/*func_905*/;
	Local_69.f_1BF = 518314/*func_904*/;
	Local_69.f_1C0 = 462956/*func_860*/;
	Local_69.f_1C1 = 462914/*func_859*/;
	Local_69.f_1C2 = 462872/*func_858*/;
	Local_69.f_1C3 = 455013/*func_850*/;
	Local_69.f_1C4 = 454971/*func_849*/;
	Local_69.f_1C5 = 362180/*func_816*/;
	Local_69.f_1C6 = 336391/*func_799*/;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, ScriptParam_268);
	if (!func_796(0, -1, 1))
	{
		func_785(&Local_69, 0);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_56, 4);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_57, 33);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_784())
	{
		func_785(&Local_69, 0);
	}
	func_783(Local_69.f_1EC);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Local_69);
	}
}

void func_1(var uParam0)//Position - 0x17C
{
	int iVar0;
	
	func_782(&(uParam0->f_C));
	if (uParam0->f_7)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
	}
	if (func_781(uParam0->f_1EC) && !func_772(uParam0, uParam0->f_1EC))
	{
		if (func_771(uParam0))
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::_0x7F4724035FDCA1DD(0);
			if (!uParam0->f_B == 2 && !func_770(uParam0))
			{
				iVar0 = 0;
				func_760(uParam0, &iVar0, 0, 0);
			}
			func_752(uParam0, &(uParam0->f_67));
			if (uParam0->f_9)
			{
				if (!func_751(*uParam0))
				{
					func_744(uParam0, &(uParam0->f_67), uParam0->f_231);
				}
				else
				{
					func_743(uParam0);
					if (!uParam0->f_B == 2 && !func_770(uParam0))
					{
						func_742(uParam0);
					}
				}
			}
			func_741(uParam0);
			func_719(uParam0);
			func_710(uParam0);
			switch (uParam0->f_B)
			{
				case 0:
					func_690(uParam0);
					break;
				
				case 1:
					func_686(0);
					func_685(uParam0);
					func_684(uParam0);
					if (func_683(uParam0))
					{
						if (uParam0->f_B == 2)
						{
							uParam0->f_230 = 1;
							func_655(uParam0);
						}
					}
					else
					{
						func_649(uParam0);
					}
					break;
				
				case 2:
					func_655(uParam0);
					func_644(uParam0, &(uParam0->f_67));
					break;
				
				case 3:
					func_643(uParam0);
					func_649(uParam0);
					func_633(uParam0);
					func_626(uParam0);
					func_615(uParam0);
					break;
				
				case 4:
					func_22(uParam0);
					func_644(uParam0, &(uParam0->f_67));
					break;
				
				case 5:
					uParam0->f_B = 3;
					break;
				}
		}
	}
	else
	{
		func_785(uParam0, 0);
	}
	if (func_15(uParam0))
	{
		func_9(uParam0);
	}
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x32B
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_57[PLAYER::PLAYER_ID()] = Global_15F9E.f_4F3[*uParam0];
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(*uParam0);
			if (uParam0->f_2A7)
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_2A8))
				{
					bVar0 = true;
					if ((!MISC::IS_BIT_SET(Global_15F9E.f_4F3[*uParam0], 0) && !MISC::IS_BIT_SET(Global_15F9E.f_4F3[*uParam0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) || PED::IS_PED_INJURED(uParam0->f_C)))
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
							{
								if (MISC::IS_BIT_SET(uLocal_57[iVar1], 5))
								{
									bVar0 = false;
									iVar1 = 33;
								}
							}
							iVar1++;
						}
					}
					else
					{
						bVar0 = false;
					}
					func_3(*uParam0, bVar0, 0);
					uParam0->f_2A7 = 0;
				}
			}
			else
			{
				uParam0->f_2A8 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
				uParam0->f_2A7 = 1;
			}
		}
		else
		{
			uParam0->f_2A8 = NETWORK::GET_NETWORK_TIME();
			uParam0->f_2A7 = 1;
		}
	}
}

void func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x440
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
			iVar1 = 3;
		}
		else
		{
			iVar0 = 3;
			iVar1 = 4;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = func_5(iParam0, iVar2);
		if (iVar3 != 225)
		{
			Var4 = { func_4(iVar3) };
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var4.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var4.f_5))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Var4.f_5))
				{
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var4.f_5) == iVar1)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var4.f_5, iVar0, 1, 1);
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Var4.f_5);
				}
			}
		}
		iVar2++;
	}
}

struct<7> func_4(int iParam0)//Position - 0x50A
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

int func_5(int iParam0, int iParam1)//Position - 0x30DC
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 225;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x3549
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

void func_7(int iParam0)//Position - 0x358D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = func_8(iParam0, iVar1);
		if (iVar0 != 0)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iVar0))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(iVar0);
				}
			}
		}
		iVar1++;
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x35D1
{
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 183249434;
				}
				else if (iParam1 == 1)
				{
					return 758345384;
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1804701345;
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1403601067;
				}
			}
			break;
		
		case 3:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2031139496;
				}
			}
			break;
		
		case 4:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1796834809;
				}
			}
			break;
		
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 96153298;
				}
			}
			break;
		
		case 6:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -281080954;
				}
			}
			break;
		
		case 7:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1069262641;
				}
				else if (iParam1 == 1)
				{
					return 1968521986;
				}
			}
			break;
		
		case 8:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2143706301;
				}
				else if (iParam1 == 1)
				{
					return -1403421822;
				}
			}
			break;
		
		case 9:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1950137670;
				}
				else if (iParam1 == 1)
				{
					return 1226259807;
				}
			}
			break;
		
		case 10:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1090833557;
				}
				else if (iParam1 == 1)
				{
					return 897332612;
				}
			}
			break;
		
		case 11:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1095946640;
				}
				else if (iParam1 == 1)
				{
					return 801975945;
				}
			}
			break;
		
		case 12:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -167996547;
				}
				else if (iParam1 == 1)
				{
					return -1935818563;
				}
			}
			break;
		
		case 13:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1891185217;
				}
				else if (iParam1 == 1)
				{
					return 1236591681;
				}
			}
			break;
		
		case 14:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1980808685;
				}
			}
			break;
		
		case 15:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1352749757;
				}
			}
			break;
		
		case 16:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -566554453;
				}
			}
			break;
		
		case 17:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1284749450;
				}
			}
			break;
		
		case 18:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 261851994;
				}
				else if (iParam1 == 1)
				{
					return 217646625;
				}
			}
			break;
		
		case 19:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1801139578;
				}
				else if (iParam1 == 1)
				{
					return -2123275866;
				}
			}
			break;
		
		case 20:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1312689981;
				}
				else if (iParam1 == 1)
				{
					return -595055661;
				}
			}
			break;
		
		case 22:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -265260897;
				}
			}
			break;
		
		case 23:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1284867488;
				}
			}
			break;
		
		case 24:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 302307081;
				}
			}
			break;
		
		case 25:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -681886015;
				}
			}
			break;
		
		case 26:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2086556500;
				}
			}
			break;
		
		case 27:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1496386696;
				}
			}
			break;
		
		case 39:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1871080926;
				}
			}
			else if (iParam1 == 0)
			{
				return -1871080926;
			}
			break;
		
		case 40:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1168079979;
				}
			}
			else if (iParam1 == 0)
			{
				return 1168079979;
			}
			break;
		
		case 41:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1206354175;
				}
			}
			else if (iParam1 == 0)
			{
				return 1206354175;
			}
			break;
		
		case 42:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1200466273;
				}
				else if (iParam1 == 1)
				{
					return -1038180727;
				}
			}
			else if (iParam1 == 0)
			{
				return 1200466273;
			}
			else if (iParam1 == 1)
			{
				return -1038180727;
			}
			break;
		
		case 43:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -459199009;
				}
				else if (iParam1 == 1)
				{
					return 1391004277;
				}
			}
			else if (iParam1 == 0)
			{
				return -459199009;
			}
			else if (iParam1 == 1)
			{
				return 1391004277;
			}
			break;
		
		case 28:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1071759151;
				}
				else if (iParam1 == 1)
				{
					return -2119023917;
				}
			}
			break;
		
		case 29:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1488490473;
				}
				else if (iParam1 == 1)
				{
					return -511187813;
				}
			}
			break;
		
		case 30:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -248569395;
				}
				else if (iParam1 == 1)
				{
					return 989443413;
				}
			}
			break;
		
		case 31:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 2022251829;
				}
				else if (iParam1 == 1)
				{
					return 649820567;
				}
			}
			break;
		
		case 32:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 537455378;
				}
				else if (iParam1 == 1)
				{
					return 1121431731;
				}
			}
			break;
		
		case 33:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1437380438;
				}
				else if (iParam1 == 1)
				{
					return -946336965;
				}
			}
			break;
		
		case 34:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1893144650;
				}
				else if (iParam1 == 1)
				{
					return 435841678;
				}
			}
			break;
		
		case 35:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 948508314;
				}
				else if (iParam1 == 1)
				{
					return -1796714665;
				}
			}
			break;
		
		case 36:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1155247245;
				}
				else if (iParam1 == 1)
				{
					return 782482084;
				}
			}
			break;
		
		case 37:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1194470801;
				}
				else if (iParam1 == 1)
				{
					return -2129698061;
				}
			}
			break;
		
		case 38:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -675817295;
				}
				else if (iParam1 == 1)
				{
					return 2121442868;
				}
			}
			break;
	}
	return 0;
}

void func_9(var uParam0)//Position - 0x3D25
{
	func_785(uParam0, 1);
	func_10(uParam0);
}

void func_10(var uParam0)//Position - 0x3D3A
{
	func_14(&(uParam0->f_67));
	func_13(uParam0);
	func_12(&(uParam0->f_102));
	func_11(&(uParam0->f_AA));
	uParam0->f_FE = 0;
	uParam0->f_1AC.f_1 = 0;
	uParam0->f_1AC.f_2 = { 0f, 0f, 0f };
	uParam0->f_1AC.f_A = { 0f, 0f, 0f };
	uParam0->f_1AC.f_5 = 0f;
	uParam0->f_1AC.f_D = 0f;
	uParam0->f_1AC.f_E = 0;
}

void func_11(var uParam0)//Position - 0x3D9E
{
	uParam0->f_1 = { 0f, 0f, 0f };
	StringCopy(&(uParam0->f_7), "", 16);
	uParam0->f_1F = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = { 0f, 0f, 0f };
	uParam0->f_26 = 0f;
	uParam0->f_27 = { 0f, 0f, 0f };
	uParam0->f_2A = { 0f, 0f, 0f };
	uParam0->f_2D = { 0f, 0f, 0f };
}

void func_12(var uParam0)//Position - 0x3DEE
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_13(var uParam0)//Position - 0x3E09
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_60 = 0;
	uParam0->f_9 = 0;
	uParam0->f_B = 0;
	uParam0->f_57 = 0;
	uParam0->f_C.f_1 = 0;
	uParam0->f_C.f_2 = { 0f, 0f, 0f };
	uParam0->f_C.f_5 = 0f;
	uParam0->f_C.f_6 = { 0f, 0f, 0f };
	uParam0->f_C.f_9 = 0f;
	uParam0->f_C.f_A = { 0f, 0f, 0f };
	uParam0->f_C.f_D = 0f;
	uParam0->f_C.f_11 = 0;
	uParam0->f_C.f_E = 0;
	uParam0->f_1E.f_2 = { 0f, 0f, 0f };
	uParam0->f_1E.f_5 = 0f;
	uParam0->f_1E.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_26[iVar0 /*12*/].f_B = 0;
		uParam0->f_26[iVar0 /*12*/] = 0;
		iVar0++;
	}
}

void func_14(var uParam0)//Position - 0x3ECC
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	StringCopy(&(uParam0->f_B), "", 16);
	uParam0->f_1E = 0;
	uParam0->f_F = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_1F = 0;
}

int func_15(var uParam0)//Position - 0x3F44
{
	if (uParam0->f_9)
	{
		if (func_16(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (func_16(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_15F9E.f_F)
		{
			return 1;
		}
		if (Global_10A95)
		{
			if (Global_1406E9.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_B != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.278f, 25.77012f, 142.8917f, -1274.154f, 46.51249f, 62f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x3FF6
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			return MISC::IS_BIT_SET(func_17(func_20(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)//Position - 0x4056
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x4088
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x40BC
{
	return Global_1407E1;
}

int func_20(int iParam0)//Position - 0x40C8
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

int func_21()//Position - 0x4371
{
	return Global_5F7C;
}

void func_22(var uParam0)//Position - 0x437C
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<10> Var8;
	var uVar9;
	var uVar10;
	struct<11> Var11;
	var uVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	func_614(1);
	func_613(1);
	if (func_612(1))
	{
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_611();
			func_610();
		}
		else if (!func_609())
		{
			func_610();
		}
		return;
	}
	func_598(uParam0, &(uParam0->f_67));
	func_596(0, 1, 1);
	func_592();
	fVar3 = 0f;
	if (!PED::IS_PED_INJURED(uParam0->f_C))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_C, uParam0->f_1C7, "keeper_idle_a", 3))
		{
			fVar1 = 0.29f;
			fVar2 = 0.474f;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_C, uParam0->f_1C7, "keeper_idle_b", 3))
		{
			fVar1 = 0.33f;
			fVar2 = 0.59f;
		}
		else
		{
			fVar1 = 0.3f;
			fVar2 = 0.5f;
		}
	}
	switch (uParam0->f_67.f_1F)
	{
		case 0:
			uParam0->f_1D8.f_13 = 0;
			uParam0->f_1D8.f_12 = 0;
			func_591(PLAYER::PLAYER_ID(), uParam0->f_1EC);
			if (func_590(1))
			{
				if ((((((((func_643(uParam0) && func_589(uParam0)) && func_588("HAR_MNU", *uParam0)) && func_586(uParam0)) && func_585(*uParam0)) && func_584(uParam0, 1)) && func_583(PLAYER::PLAYER_ID(), uParam0->f_1EC, 1)) && func_614(1)) && func_613(1))
				{
					func_581(1);
					if (!Global_10A95)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
						{
							iVar4 = uParam0->f_260.f_2;
						}
						iVar4 = iVar4;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_C))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_C, 1);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_C, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_C, Global_1804A8);
					}
					func_577(&(uParam0->f_67));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					uParam0->f_1CD = 0;
					uParam0->f_1CE = 0;
					uParam0->f_1CF = 0;
					uParam0->f_1D5 = 0;
					uParam0->f_22D = 0;
					uParam0->f_22E = 1;
					uParam0->f_232 = 0;
					uParam0->f_233 = 0;
					uParam0->f_FE = -1;
					uParam0->f_FF = -1;
					uParam0->f_243 = -1;
					uParam0->f_101 = 1f;
					uParam0->f_67.f_13 = 1;
					uParam0->f_67.f_12 = 0;
					uParam0->f_67.f_F = 0;
					uParam0->f_67.f_17 = 0;
					uParam0->f_67.f_16 = 0;
					StringCopy(&(uParam0->f_67.f_B), "", 16);
					uParam0->f_67.f_5 = 0;
					uParam0->f_1EE = 0;
					uParam0->f_67.f_1F = 1;
					uParam0->f_1D4 = 0;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_2B1)) > 8000) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_2B2) > 8000))
				{
					uParam0->f_67.f_1F = 8;
				}
			}
			break;
		
		case 1:
			func_504(uParam0);
			break;
		
		case 6:
			func_503(uParam0);
			break;
		
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					func_502(uParam0);
				}
			}
			else
			{
				func_502(uParam0);
			}
			break;
		
		case 2:
			func_501();
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iLocal_58 = 209;
			}
			else
			{
				iLocal_58 = 207;
			}
			iVar5 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
			{
				iVar5 = uParam0->f_260.f_2;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::SET_PED_CONFIG_FLAG(iVar5, 240, 1);
			}
			if ((func_590(1) && !PED::IS_PED_INJURED(iVar5)) && !PED::IS_PED_INJURED(uParam0->f_C))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
					{
						if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_RESET_FLAG(iVar5, 302, 1);
						}
					}
				}
				if (!uParam0->f_67.f_16 && uParam0->f_67.f_F)
				{
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500()) && func_495(uParam0))
					{
					}
					else if (!func_494(uParam0, uParam0->f_1C9))
					{
						func_491(*uParam0, &Var6, &Var7);
						if (func_490(uParam0))
						{
							uParam0->f_1CA = func_489(uParam0);
						}
						else
						{
							uParam0->f_1CA = "player_base";
						}
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar5, uParam0->f_1C7, uParam0->f_1CA, Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar5, 0, 0);
						uParam0->f_1C9 = func_488(uParam0);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_C, uParam0->f_1C7, uParam0->f_1C9, Var6, Var7, 1000f, -1000f, -1, 5640, 0f, 2, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_C, 0, 0);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_56.f_1), func_487(uParam0->f_1C9), uParam0->f_1C7, 1000f, 0, 1, 1, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_56.f_1));
							func_486(uParam0);
							func_485(uParam0, 1, 0);
							func_484(uParam0, uParam0->f_C, uParam0->f_1C9, 69, 4f, -998637568);
							func_484(uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_1CA, 64, 4f, -998637568);
							func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487(uParam0->f_1C9), 64, 1148846080, -998637568);
							func_482(uParam0);
							if (func_613(1))
							{
								if ((((((uParam0->f_1EE == 3 || uParam0->f_1EE == 8) || uParam0->f_1EE == 10) || uParam0->f_1EE == 11) || uParam0->f_1EE == 13) || uParam0->f_1EE == 14) || uParam0->f_1EE == 15)
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
								}
								else
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), true);
								}
							}
						}
						else
						{
							func_481(uParam0, uParam0->f_1C9, 0, 0, 1, -1056964608);
						}
						func_479(uParam0, func_480(uParam0, 3, uParam0->f_1C9));
						if (CAM::DOES_CAM_EXIST(uParam0->f_26[1 /*12*/]))
						{
							CAM::SET_CAM_ACTIVE(uParam0->f_26[1 /*12*/], 0);
							CAM::DESTROY_CAM(uParam0->f_26[1 /*12*/], 0);
						}
					}
					else
					{
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
						if (func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) == 1f)
						{
							uParam0->f_67.f_F = 0;
							uParam0->f_67.f_17 = 0;
							uParam0->f_67.f_16 = 0;
							uParam0->f_1C9 = "";
							uParam0->f_22E = 1;
							uParam0->f_22F = 1;
							if (func_477() || func_476())
							{
								if (uParam0->f_1EE == 1)
								{
									uParam0->f_1EE = 0;
									uParam0->f_67.f_1 = 0;
								}
								else if (uParam0->f_1EE == 2)
								{
									uParam0->f_1EE = 0;
									uParam0->f_67.f_1 = 1;
								}
								else if (uParam0->f_1EE == 3)
								{
									uParam0->f_1EE = 3;
									if (func_477())
									{
										uParam0->f_67.f_1 = 2;
									}
									else
									{
										uParam0->f_67.f_1 = 1;
									}
								}
								else if (func_475(uParam0->f_1EE))
								{
								}
							}
							func_467(uParam0, iVar5);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								func_486(uParam0);
								func_485(uParam0, 0, 1);
								func_484(uParam0, uParam0->f_C, "keeper_base", 69, 1148846080, -998637568);
								func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_base"), 64, 1148846080, -998637568);
								func_482(uParam0);
							}
							else
							{
								func_481(uParam0, "keeper_base", 0, 1, 0, -1056964608);
							}
							func_458(uParam0, 0);
						}
						else if (func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) > 0.6f)
						{
							if (!uParam0->f_67.f_17)
							{
								func_422(uParam0);
							}
						}
						else if (func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) > fVar2)
						{
							if (uParam0->f_20C != 0)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_20C, 0);
								uParam0->f_20C = 0;
							}
							if (uParam0->f_1D4)
							{
								uParam0->f_1CA = func_489(uParam0);
								func_491(*uParam0, &Var6, &Var7);
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									uParam0->f_1F3 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var6, Var7, 2, 0, 1, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_1F3, uParam0->f_1C7, uParam0->f_1CA, 8f, -8f, 0, 0, 1148846080, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1F3);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_1C7, uParam0->f_1CA, Var6, Var7, 8f, -8f, -1, 5640, 0f, 2, 1);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_1C7, "player_base", Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
									TASK::CLOSE_SEQUENCE_TASK(uVar0);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, uVar0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								}
								AUDIO::STOP_SOUND(uParam0->f_20D);
								AUDIO::STOP_SOUND(uParam0->f_20E);
								AUDIO::STOP_SOUND(uParam0->f_20F);
								uParam0->f_1D4 = 0;
							}
						}
						else if (func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) > 0.4f)
						{
							if (!uParam0->f_67.f_17)
							{
								func_422(uParam0);
							}
							if (uParam0->f_1EE == 1)
							{
								Stack.Push(PLAYER::PLAYER_PED_ID());
								Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
								Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
								Call_Loc(uParam0->f_1BE);
								if (!StackVal)
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
									Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(uParam0->f_1C0);
									if (Global_10A95)
									{
										func_421(385, Global_26C92B[uParam0->f_67.f_1], -1, 1);
										func_407(8);
										func_406(740, Global_26C92B[uParam0->f_67.f_1], -1, 1);
										func_406(2035, Global_26C92B[uParam0->f_67.f_1], -1, 1);
									}
								}
								if (PLAYER::PLAYER_PED_ID() != iVar5)
								{
									Stack.Push(iVar5);
									Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
									Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(uParam0->f_1C0);
								}
							}
							else if (uParam0->f_1EE == 2)
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_403(PLAYER::PLAYER_PED_ID(), 1, (func_404(uParam0->f_67.f_1) - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_403(iVar5, 1, (func_404(uParam0->f_67.f_1) - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
									}
									func_407(8);
									func_421(448, (func_404(uParam0->f_67.f_1) - 1), -1, 1);
									func_401(88, 1f, -1, 1);
									uParam0->f_FF = func_404(uParam0->f_67.f_1);
									uParam0->f_101 = 1f;
								}
								else
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
									Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
									Call_Loc(uParam0->f_1BE);
									if (!StackVal)
									{
										Stack.Push(PLAYER::PLAYER_PED_ID());
										Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
										Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(uParam0->f_1C0);
										uParam0->f_FF = Global_26C92B[uParam0->f_67.f_1];
									}
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										Stack.Push(iVar5);
										Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
										Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(uParam0->f_1C0);
									}
								}
							}
							else if (uParam0->f_1EE == 3)
							{
								if (Global_10A95)
								{
									uParam0->f_243 = uParam0->f_67.f_1;
									func_403(PLAYER::PLAYER_PED_ID(), 4, (uParam0->f_243 - 1), uParam0->f_25A, 0, 0, 1f, 1);
									func_421(451, (uParam0->f_243 - 1), -1, 1);
									func_401(91, 1f, -1, 1);
									if ((uParam0->f_243 - 1) == -1 || (uParam0->f_243 - 1) > 15)
									{
										func_403(PLAYER::PLAYER_PED_ID(), 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
										func_401(89, 1f, -1, 1);
									}
									else
									{
										func_403(PLAYER::PLAYER_PED_ID(), 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
										func_401(89, 0f, -1, 1);
									}
									func_401(func_397(4), 1f, -1, 1);
									func_407(8);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_403(iVar5, 4, (uParam0->f_243 - 1), uParam0->f_25A, 0, 0, 1f, 1);
										if ((uParam0->f_243 - 1) == -1 || (uParam0->f_243 - 1) > 15)
										{
											func_403(iVar5, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
										}
										else
										{
											func_403(iVar5, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
										}
									}
								}
							}
							else if (func_475(uParam0->f_1EE))
							{
								if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_1EE, uParam0->f_67.f_1, &Var8))
								{
									if (Var8.f_9 == 0)
									{
										if (!func_392(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var8, uParam0))
										{
											Stack.Push(PLAYER::PLAYER_PED_ID());
											Stack.Push(2);
											Stack.Push(Var8.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_25A);
											Stack.Push(uParam0->f_25B);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(uParam0->f_1C0);
											if (Global_10A95)
											{
												func_421(385, Var8.f_8, -1, 1);
												func_407(8);
												func_406(740, Var8.f_8, -1, 1);
												func_406(2035, Var8.f_8, -1, 1);
												func_406(2135, uParam0->f_25A, -1, 1);
												func_406(2142, uParam0->f_25B, -1, 1);
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											Stack.Push(iVar5);
											Stack.Push(2);
											Stack.Push(Var8.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_25A);
											Stack.Push(uParam0->f_25B);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(uParam0->f_1C0);
										}
									}
									else if (Var8.f_9 == 1 || Var8.f_9 == 2)
									{
										func_403(PLAYER::PLAYER_PED_ID(), Var8.f_5, Var8.f_6, uParam0->f_25A, uParam0->f_25B, uParam0->f_25D, uParam0->f_25F, 1);
										if (Global_10A95)
										{
											if (Var8.f_5 == 7)
											{
												func_401(157, SYSTEM::TO_FLOAT(Var8.f_6), -1, 1);
												uParam0->f_25A = -1;
												uParam0->f_25B = -1;
												uParam0->f_25C = uParam0->f_25B;
											}
											else
											{
												func_421(func_391(Var8.f_5), Var8.f_6, -1, 1);
												if (uParam0->f_25A >= 0)
												{
													func_389(Var8.f_5, uParam0->f_25A, uParam0->f_25D, -1, 1);
												}
												if (uParam0->f_25B >= 0)
												{
													func_406(func_388(Var8.f_5), uParam0->f_25B, -1, 1);
												}
												func_401(func_397(Var8.f_5), uParam0->f_25F, -1, 1);
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											func_403(iVar5, Var8.f_5, Var8.f_6, uParam0->f_25A, uParam0->f_25B, uParam0->f_25D, uParam0->f_25F, 1);
										}
									}
								}
							}
						}
						else if (func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) > fVar1)
						{
							if (uParam0->f_1D1 && uParam0->f_20C == 0)
							{
								if (uParam0->f_1EE == 1)
								{
									uParam0->f_20C = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_barbers_haircut", iVar5, 0f, 0f, 0.1f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
								}
							}
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_20C))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_20C, 0f, 0f, 0f, 0);
							}
							if (!uParam0->f_1D4)
							{
								if (uParam0->f_1EE == 1 || uParam0->f_1EE == 6)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_20D))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_20D, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (((uParam0->f_1EE == 2 || uParam0->f_1EE == 7) || uParam0->f_1EE == 9) || uParam0->f_1EE == 8)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_20E))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_20D, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (uParam0->f_1EE == 10)
								{
								}
								else if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_20F))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_20F, "Makeup", iVar5, "Barber_Sounds", 0, 0);
								}
								uParam0->f_1D4 = 1;
							}
						}
					}
				}
				if (uParam0->f_22E)
				{
					func_383(iVar5);
					func_467(uParam0, iVar5);
				}
				if (!uParam0->f_67.f_16 && !uParam0->f_67.f_F)
				{
					if (PAD::_0x6CD79468A1E595C6(2))
					{
						uVar9 = uParam0->f_67.f_1;
						uParam0->f_22E = 1;
						func_383(iVar5);
						func_467(uParam0, iVar5);
						uParam0->f_67.f_1 = uVar9;
						func_382(uParam0->f_67.f_1, 1, 1);
					}
					else if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_15F9E.f_526) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
					{
						func_458(uParam0, 1);
						switch (uParam0->f_1EE)
						{
							case 0:
								func_381(uParam0, iVar5);
								break;
							
							case 4:
								func_380(uParam0, iVar5);
								break;
							
							case 1:
								func_364(uParam0, iVar5);
								break;
							
							case 2:
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_322(uParam0, iVar5);
								}
								else
								{
									func_364(uParam0, iVar5);
								}
								break;
							
							case 3:
								func_319(uParam0, iVar5);
								break;
							
							default:
								if (func_475(uParam0->f_1EE))
								{
									func_205(uParam0, iVar5);
								}
								break;
							}
						}
				}
				if (uParam0->f_1CD)
				{
					if (uParam0->f_67.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_204(&uVar10);
							if (MISC::GET_HASH_KEY(&uVar10) == 0)
							{
								if (uParam0->f_1EE == 1)
								{
									func_203("HAIR_UNLOCK", 0, 0);
									func_199(func_200(Global_26C92B[uParam0->f_67.f_1]));
								}
								else if (uParam0->f_1EE == 2)
								{
									func_203("HAIR_UNLOCK", 0, 0);
									func_199(func_197(func_198(func_404(uParam0->f_67.f_1))));
								}
								else if (uParam0->f_1EE == 3)
								{
									func_203("HAIR_UNLOCK", 0, 0);
									func_199(func_197(func_196(uParam0->f_67.f_1)));
								}
								else if (func_475(uParam0->f_1EE))
								{
									if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_1EE, uParam0->f_67.f_1, &Var11))
									{
										if (Var11.f_9 == 0)
										{
											func_203("HAIR_UNLOCK", 0, 0);
											func_199(func_200(Var11.f_8));
										}
										else if (Var11.f_9 == 1 || Var11.f_9 == 2)
										{
											if (Var11.f_5 == 1)
											{
												func_203("HAIR_UNLOCK", 0, 0);
												func_199(func_197(Var11.f_A));
											}
											else if (Var11.f_5 == 4)
											{
												func_203("HAIR_UNLOCK", 0, 0);
												func_199(func_197(Var11.f_A));
											}
										}
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_1EE == 0)
				{
					if (uParam0->f_67.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_204(&uVar10);
							if (MISC::GET_HASH_KEY(&uVar10) == 0)
							{
								if (uParam0->f_67.f_1 == 0)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 1))
									{
										func_203("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_67.f_1 == 1)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 2))
									{
										func_203("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_67.f_1 == 2)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 3))
									{
										func_203("HAIR_UNLOCK_M", 0, 0);
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_1EE == 5)
				{
				}
				else if (uParam0->f_1EE == 4)
				{
					if (uParam0->f_2AA > -1)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_204(&uVar10);
							if (MISC::GET_HASH_KEY(&uVar10) == 0)
							{
								if (MISC::IS_BIT_SET(uParam0->f_2AE[(uParam0->f_2AA / 32)], (uParam0->f_2AA % 32)))
								{
									func_203("HAIR_UNLOCK_M", 0, 0);
								}
							}
						}
					}
				}
				else if ((uParam0->f_1EE != 0 && uParam0->f_1CE) && !uParam0->f_1D5)
				{
					if (uParam0->f_67.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_204(&uVar10);
							if (MISC::GET_HASH_KEY(&uVar10) == 0)
							{
								if (uParam0->f_1CF)
								{
									if (func_144(&(uParam0->f_216)))
									{
										func_203("SHOP_UNLOCKDLC", 4000, 0);
										func_142(func_143(&(uParam0->f_216), 0));
									}
									else if (func_141(&(uParam0->f_216)))
									{
										func_203("SHOP_UNLOCKDLC3", 4000, 0);
										func_142(func_143(&(uParam0->f_216), 0));
									}
									else if (func_140(&(uParam0->f_216)))
									{
										func_203("SHOP_UNLOCKDLC4", 4000, 0);
										func_142(func_143(&(uParam0->f_216), 0));
									}
									else
									{
										func_203("SHOP_UNLOCKDLC2", 4000, 0);
										func_142(func_143(&(uParam0->f_216), 1));
									}
								}
								else
								{
									func_203("HAIR_UNLOCK_N", 4000, 0);
								}
								uParam0->f_1D5 = 1;
							}
						}
					}
				}
				if (!uParam0->f_67.f_F || uParam0->f_67.f_16)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iLocal_60)
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						iLocal_60 = 1;
					}
					if ((uParam0->f_1EE == 1 || uParam0->f_1EE == 2) || uParam0->f_1EE == 3)
					{
						func_204(&uVar12);
						if (MISC::GET_HASH_KEY(&uVar12) == 0)
						{
							if (uParam0->f_1CF && !MISC::IS_STRING_NULL_OR_EMPTY(func_143(&(uParam0->f_216), 0)))
							{
								if (func_144(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else if (func_141(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK3", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else if (func_140(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK4", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else
								{
									func_203("SHOP_DLC_PACK2", 0, 0);
									func_142(func_143(&(uParam0->f_216), 1));
								}
							}
						}
					}
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
					func_118(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
					fVar3 = 0f;
					if (MISC::IS_PC_VERSION())
					{
						if (!func_117(uParam0))
						{
							fVar3 = 0.4f;
						}
						if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.6f)) < 0.1f)
						{
							fVar13 = 0.0456f;
						}
						else if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.777778f)) < 0.1f)
						{
							fVar13 = 0f;
						}
						else if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.333333f)) < 0.1f)
						{
							fVar13 = 0.038f;
						}
						else
						{
							fVar13 = 0f;
						}
					}
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_246, (fLocal_64 + fVar13), (fLocal_65 + func_116()), Global_4353, fLocal_66, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_250, ((fLocal_64 + fVar13) + fVar3), (fLocal_67 + func_116()), Global_4353, fLocal_66, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					if (uParam0->f_1EE == 1 || uParam0->f_1EE == 2)
					{
						func_204(&uVar12);
						if (MISC::GET_HASH_KEY(&uVar12) == 0)
						{
							if (uParam0->f_1CF && !MISC::IS_STRING_NULL_OR_EMPTY(func_143(&(uParam0->f_216), 0)))
							{
								if (func_144(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else if (func_141(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK3", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else if (func_140(&(uParam0->f_216)))
								{
									func_203("SHOP_DLC_PACK4", 0, 0);
									func_142(func_143(&(uParam0->f_216), 0));
								}
								else
								{
									func_203("SHOP_DLC_PACK2", 0, 0);
									func_142(func_143(&(uParam0->f_216), 1));
								}
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						if (Global_40001.f_978)
						{
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
							{
								if (func_110(29, 1, 1, &fVar14, &fVar15, 0))
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
									GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_4353, fVar15, 0f, 255, 255, 255, 255, 0);
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_60)
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
					iLocal_60 = 0;
				}
			}
			break;
		
		case 7:
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 104, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, 1);
			if (uParam0->f_67.f_13)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_107(uParam0);
				}
				else
				{
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				}
				if (!PED::IS_PED_INJURED(uParam0->f_C))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_C);
					func_102(uParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_C, 1);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_101();
					func_486(uParam0);
				}
				func_99(1, *uParam0);
				func_97(uParam0);
				func_95(*uParam0);
				func_94(uParam0);
				func_93(1);
				uParam0->f_1D8.f_13 = 0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_80(PLAYER::PLAYER_PED_ID()))
						{
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(-1);
							Call_Loc(uParam0->f_1BF);
							uVar16 = StackVal;
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(uVar16);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_1C0);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iVar17 = func_79(2135, -1, 0);
								iVar18 = func_79(2142, -1, 0);
								PED::_SET_PED_HAIR_COLOR(PLAYER::PLAYER_PED_ID(), iVar17, iVar18);
							}
							func_383(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				func_55(&(uParam0->f_67), 0, 0, 1);
				func_47();
				func_581(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_45(PLAYER::PLAYER_PED_ID(), -1);
				}
				if (func_583(PLAYER::PLAYER_ID(), uParam0->f_1EC, 1))
				{
					func_44(PLAYER::PLAYER_ID(), uParam0->f_1EC);
				}
				if (!Global_10A95)
				{
					func_33(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (Global_26C413)
				{
					if (Global_10A95)
					{
						func_29(32, func_30(1, 1));
					}
				}
				SYSTEM::SETTIMERB(0);
				uParam0->f_67.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_67.f_13 = 0;
				uParam0->f_67.f_12 = 1;
				uParam0->f_67.f_17 = 0;
				uParam0->f_67.f_16 = 0;
			}
			else if (uParam0->f_67.f_12)
			{
				func_27(&(uParam0->f_DA), 300);
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 || uParam0->f_DA < -75) || uParam0->f_DA > 75) || uParam0->f_DA.f_1 < -75) || uParam0->f_DA.f_1 > 75) || MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1.5f, 0f), 0.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
				{
					func_47();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_C)) && func_614(0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_C, 0);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_C, 1);
						if (uParam0->f_1D0)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_C, uParam0->f_1ED);
						}
					}
					if (uParam0->f_1D6)
					{
						func_25();
					}
					uParam0->f_230 = 0;
					uParam0->f_67.f_11 = 0;
					uParam0->f_1D6 = 0;
					uParam0->f_B = 5;
				}
			}
			else
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_C)) && func_614(0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_C, 0);
					PED::SET_PED_CAN_RAGDOLL(uParam0->f_C, 1);
					if (uParam0->f_1D0)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_C, uParam0->f_1ED);
					}
				}
				if (uParam0->f_1D6)
				{
					func_25();
				}
				uParam0->f_230 = 0;
				uParam0->f_67.f_11 = 0;
				uParam0->f_1D6 = 0;
				uParam0->f_B = 5;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			func_24(&(uParam0->f_26));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_99(1, *uParam0);
			func_97(uParam0);
			func_95(*uParam0);
			func_94(uParam0);
			uParam0->f_1D8.f_13 = 0;
			func_107(uParam0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			func_55(&(uParam0->f_67), 1, 1, 1);
			func_93(1);
			func_47();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_101();
				func_486(uParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_56.f_1), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_56.f_1), true);
				}
			}
			else
			{
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_C))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_C);
				func_102(uParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_C, 1);
			}
			if (Global_26C413)
			{
				if (Global_10A95)
				{
					func_29(32, func_30(1, 1));
				}
			}
			func_581(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_45(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (func_583(PLAYER::PLAYER_ID(), uParam0->f_1EC, 1))
			{
				func_44(PLAYER::PLAYER_ID(), uParam0->f_1EC);
			}
			if (!Global_10A95)
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
			}
			uParam0->f_230 = 0;
			uParam0->f_67.f_11 = 0;
			uParam0->f_67.f_13 = 0;
			uParam0->f_B = 3;
			break;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2)) && ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_260.f_2))
		{
			NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(0);
		}
	}
	func_23(&(uParam0->f_1D8), 1);
}

void func_23(var uParam0, bool bParam1)//Position - 0x5F9A
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!uParam0->f_12)
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				(*uParam0)[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				if (iVar0 < *uParam0)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], 0))
					{
						if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							(*uParam0)[iVar0] = uVar1[iVar3];
							uParam0->f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1) };
							iVar0++;
						}
					}
				}
				iVar3++;
			}
			uParam0->f_12 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], 0))
			{
				if (uParam0->f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false);
					if (bParam1)
					{
						ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], false, 0);
						ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iVar0]))
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], true);
					if (bParam1)
					{
						ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], true, 0);
						ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_24(var uParam0)//Position - 0x614D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/]))
		{
			CAM::SET_CAM_ACTIVE((*uParam0)[iVar0 /*12*/], 0);
		}
		iVar0++;
	}
}

void func_25()//Position - 0x6183
{
	int iVar0;
	
	iVar0 = func_26(23);
	Global_24C174[iVar0 /*83*/] = 23;
	StringCopy(&(Global_24C174[iVar0 /*83*/].f_12[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_26(int iParam0)//Position - 0x61B0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24C174[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24C174[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_27(var uParam0, int iParam1)//Position - 0x61FD
{
	float fVar0;
	
	func_28(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 1);
	fVar0 = 1f;
	if (fVar0 == 1f)
	{
		if ((!uParam0->f_4 || !uParam0->f_9) || !uParam0->f_8)
		{
			if (uParam0->f_1C <= 0)
			{
				uParam0->f_1C = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_20 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_1C > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_20, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_1C) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_1C = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if ((!uParam0->f_5 || !uParam0->f_A) || !uParam0->f_B)
		{
			if (uParam0->f_1D <= 0)
			{
				uParam0->f_1D = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_21 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_1D > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_21, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_1D) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_1D = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!uParam0->f_6)
		{
			if (uParam0->f_1E <= 0)
			{
				uParam0->f_1E = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_22 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_1E > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_22, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_1E) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_1E = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!uParam0->f_7)
		{
			if (uParam0->f_1F <= 0)
			{
				uParam0->f_1F = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_23 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_1F > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_23, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_1F) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_1F = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (((!uParam0->f_C || !uParam0->f_D) || !uParam0->f_E) || !uParam0->f_F)
		{
			if (uParam0->f_12 <= 0)
			{
				uParam0->f_12 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_13 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_12 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_13, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_12) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_12 = 0;
		}
	}
	iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) * fVar0));
	if (!uParam0->f_4)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_18, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_14) > iParam1)) || (uParam0->f_1 < 75 && uParam0->f_1 > -75))
		{
			uParam0->f_4 = 1;
		}
	}
	if (!uParam0->f_5)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_19, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_15) > iParam1)) || (*uParam0 < 75 && *uParam0 > -75))
		{
			uParam0->f_5 = 1;
		}
	}
	if (!uParam0->f_6)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_1A, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1)) || (uParam0->f_3 < 75 && uParam0->f_3 > -75))
		{
			uParam0->f_6 = 1;
		}
	}
	if (!uParam0->f_7)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_1B, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_17) > iParam1)) || (uParam0->f_2 < 75 && uParam0->f_2 > -75))
		{
			uParam0->f_7 = 1;
		}
	}
	if (!uParam0->f_8)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_18, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_14) > iParam1))
		{
			uParam0->f_8 = 1;
		}
	}
	if (!uParam0->f_9)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_18, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_14) > iParam1))
		{
			uParam0->f_9 = 1;
		}
	}
	if (!uParam0->f_A)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_19, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_15) > iParam1))
		{
			uParam0->f_A = 1;
		}
	}
	if (!uParam0->f_B)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_19, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_15) > iParam1))
		{
			uParam0->f_B = 1;
		}
	}
	if (!uParam0->f_C)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_11, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_10) > iParam1))
		{
			uParam0->f_C = 1;
		}
	}
	if (!uParam0->f_D)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_11, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_10) > iParam1))
		{
			uParam0->f_D = 1;
		}
	}
	if (!uParam0->f_E)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_11, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_10) > iParam1))
		{
			uParam0->f_E = 1;
		}
	}
	if (!uParam0->f_F)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_11, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_10) > iParam1))
		{
			uParam0->f_F = 1;
		}
	}
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x68C0
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_29(int iParam0, int iParam1)//Position - 0x6995
{
	struct<3> Var0;
	
	Var0.x = 2;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_30(int iParam0, bool bParam1)//Position - 0x69C3
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_31(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_31(int iParam0, int iParam1)//Position - 0x6A28
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_32(-1, 0) == 8;
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

int func_32(int iParam0, bool bParam1)//Position - 0x6A73
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

void func_33(int iParam0, int iParam1)//Position - 0x6AB4
{
	int iVar0;
	struct<27> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_42(iParam0);
		if (func_41(iVar0))
		{
			Var1 = 12;
			Var1.f_D = 12;
			Var1.f_1A = 12;
			Var1.f_27 = 9;
			Var1.f_31 = 9;
			func_37(iParam0, &Var1, 1);
			func_421(1306, Var1[0], -1, 1);
			func_421(1307, Var1[1], -1, 1);
			func_421(1308, Var1[2], -1, 1);
			func_421(1318, Var1.f_D[0], -1, 1);
			func_421(1319, Var1.f_D[1], -1, 1);
			func_421(1320, Var1.f_D[2], -1, 1);
			func_421(1330, Var1.f_1A[0], -1, 1);
			func_421(1331, Var1.f_1A[1], -1, 1);
			func_421(1332, Var1.f_1A[2], -1, 1);
			Global_15E98[iVar0 /*65*/][0] = Var1[0];
			Global_15E98[iVar0 /*65*/][1] = Var1[1];
			Global_15E98[iVar0 /*65*/][2] = Var1[2];
			Global_15E98[iVar0 /*65*/].f_D[0] = Var1.f_D[0];
			Global_15E98[iVar0 /*65*/].f_D[1] = Var1.f_D[1];
			Global_15E98[iVar0 /*65*/].f_D[2] = Var1.f_D[2];
			Global_15E98[iVar0 /*65*/].f_1A[0] = Var1.f_1A[0];
			Global_15E98[iVar0 /*65*/].f_1A[1] = Var1.f_1A[1];
			Global_15E98[iVar0 /*65*/].f_1A[2] = Var1.f_1A[2];
			if (!func_34(0) || iParam1)
			{
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/][0] = Var1[0];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/][1] = Var1[1];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/][2] = Var1[2];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_D[0] = Var1.f_D[0];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_D[1] = Var1.f_D[1];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_D[2] = Var1.f_D[2];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_1A[0] = Var1.f_1A[0];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_1A[1] = Var1.f_1A[1];
				Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_1A[2] = Var1.f_1A[2];
			}
		}
	}
}

int func_34(int iParam0)//Position - 0x6D2E
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)//Position - 0x6D50
{
	return func_36(iParam0, Global_8861);
}

int func_36(int iParam0, int iParam1)//Position - 0x6D61
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

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x6F42
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_42(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_40(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_39(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_41(iVar0))
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
			if (func_38(161, -1))
			{
				uParam1->f_3B = func_17(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_17(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_17(741, Global_10A08, 0);
			uParam1->f_3D = func_17(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_38(161, -1))
			{
				uParam1->f_3B = func_17(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_17(740, Global_10A08, 0);
			}
		}
	}
}

int func_38(int iParam0, int iParam1)//Position - 0x70EC
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_18(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7118
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x7660
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
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

bool func_41(int iParam0)//Position - 0x78A1
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x78AD
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)//Position - 0x78EA
{
	if (func_41(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)//Position - 0x7914
{
	if (iParam1 == -1)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_182604[iParam0 /*324*/].f_B0)
		{
			Global_182604[iParam0 /*324*/].f_B0 = 0;
			Global_182604[iParam0 /*324*/].f_B1 = 0;
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x794F
{
	struct<65> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = 12;
		Var0.f_D = 12;
		Var0.f_1A = 12;
		Var0.f_27 = 9;
		Var0.f_31 = 9;
		func_37(iParam0, &Var0, 1);
		func_46(Var0, iParam1);
	}
}

void func_46(struct<50> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16)//Position - 0x7999
{
	func_421(387, Param0[0], iParam16, 1);
	func_421(388, Param0[1], iParam16, 1);
	func_421(389, Param0[2], iParam16, 1);
	func_421(390, Param0[3], iParam16, 1);
	func_421(391, Param0[4], iParam16, 1);
	func_421(392, Param0[5], iParam16, 1);
	func_421(393, Param0[6], iParam16, 1);
	func_421(394, Param0[7], iParam16, 1);
	func_421(395, Param0[8], iParam16, 1);
	func_421(396, Param0[9], iParam16, 1);
	func_421(397, Param0[10], iParam16, 1);
	func_421(398, Param0[11], iParam16, 1);
	func_421(399, Param0.f_D[0], iParam16, 1);
	func_421(400, Param0.f_D[1], iParam16, 1);
	func_421(401, Param0.f_D[2], iParam16, 1);
	func_421(402, Param0.f_D[3], iParam16, 1);
	func_421(403, Param0.f_D[4], iParam16, 1);
	func_421(404, Param0.f_D[5], iParam16, 1);
	func_421(405, Param0.f_D[6], iParam16, 1);
	func_421(406, Param0.f_D[7], iParam16, 1);
	func_421(407, Param0.f_D[8], iParam16, 1);
	func_421(408, Param0.f_D[9], iParam16, 1);
	func_421(409, Param0.f_D[10], iParam16, 1);
	func_421(410, Param0.f_D[11], iParam16, 1);
	func_421(411, Param0.f_1A[0], iParam16, 1);
	func_421(412, Param0.f_1A[1], iParam16, 1);
	func_421(413, Param0.f_1A[2], iParam16, 1);
	func_421(414, Param0.f_1A[3], iParam16, 1);
	func_421(415, Param0.f_1A[4], iParam16, 1);
	func_421(416, Param0.f_1A[5], iParam16, 1);
	func_421(417, Param0.f_1A[6], iParam16, 1);
	func_421(418, Param0.f_1A[7], iParam16, 1);
	func_421(419, Param0.f_1A[8], iParam16, 1);
	func_421(420, Param0.f_1A[9], iParam16, 1);
	func_421(421, Param0.f_1A[10], iParam16, 1);
	func_421(422, Param0.f_1A[11], iParam16, 1);
	func_421(423, Param0.f_27[0], iParam16, 1);
	func_421(424, Param0.f_27[1], iParam16, 1);
	func_421(425, Param0.f_27[2], iParam16, 1);
	func_421(426, Param0.f_27[3], iParam16, 1);
	func_421(427, Param0.f_27[4], iParam16, 1);
	func_421(428, Param0.f_27[5], iParam16, 1);
	func_421(429, Param0.f_27[6], iParam16, 1);
	func_421(430, Param0.f_27[7], iParam16, 1);
	func_421(431, Param0.f_27[8], iParam16, 1);
	func_421(432, Param0.f_31[0], iParam16, 1);
	func_421(433, Param0.f_31[1], iParam16, 1);
	func_421(434, Param0.f_31[2], iParam16, 1);
	func_421(435, Param0.f_31[3], iParam16, 1);
	func_421(436, Param0.f_31[4], iParam16, 1);
	func_421(437, Param0.f_31[5], iParam16, 1);
	func_421(438, Param0.f_31[6], iParam16, 1);
	func_421(439, Param0.f_31[7], iParam16, 1);
	func_421(440, Param0.f_31[8], iParam16, 1);
}

void func_47()//Position - 0x7D63
{
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	func_54();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		if (!Global_10A95)
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
	}
	Global_164CD = 0;
	func_48(0, 1, 1, 0);
}

void func_48(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7DB0
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_53(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_52())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_51(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_53(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_51(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_49(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_49(int iParam0)//Position - 0x7E81
{
	if (func_31(iParam0, 0))
	{
		return 1;
	}
	if (func_50())
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

bool func_50()//Position - 0x7EC2
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

int func_51(int iParam0, var uParam1, var uParam2)//Position - 0x7ED3
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

int func_52()//Position - 0x7F04
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0)//Position - 0x7F2B
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

void func_54()//Position - 0x7F4E
{
	if (Global_15F9E.f_5 && Global_15F9E.f_6 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
	{
		HUD::CLEAR_HELP(1);
		Global_15F9E.f_5 = 0;
	}
}

void func_55(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7F7F
{
	if (Global_10A95)
	{
		func_69();
	}
	if (func_590(1))
	{
		if (uParam0->f_13)
		{
		}
		if (Global_10A95)
		{
			if (bParam3)
			{
				if (!func_67())
				{
				}
				else if ((!func_66() && !func_65()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					func_61(PLAYER::PLAYER_ID(), 1, 0, 1);
				}
				else
				{
					func_61(PLAYER::PLAYER_ID(), 0, 66048, 1);
				}
			}
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	if (bParam2)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	uParam0->f_1E = 1;
	uParam0->f_1C = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_1D = NETWORK::GET_NETWORK_TIME();
	}
	if (Global_10A95)
	{
		func_58();
		func_56();
	}
	if (uParam0->f_21 != 0 || !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_22)))
	{
		StringCopy(&(uParam0->f_22), "", 16);
		uParam0->f_21 = 0;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && uParam0->f_20 != 0)
	{
		if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
		{
			NETWORK::NETWORK_END_TUTORIAL_SESSION();
			uParam0->f_20 = 0;
		}
	}
}

void func_56()//Position - 0x80B4
{
	if (!Global_14073B)
	{
		return;
	}
	func_57();
}

void func_57()//Position - 0x80CB
{
	Global_14073B = 0;
	StringCopy(&(Global_14073B.f_1), "", 24);
	Global_14073B.f_7 = 0;
}

void func_58()//Position - 0x80E9
{
	func_60(1);
	func_59(4, 0, -1);
	func_59(6, 0, -1);
	func_59(7, 0, -1);
	func_59(3, 0, -1);
	func_59(1, 0, -1);
	func_59(2, 0, -1);
	func_59(11, 0, -1);
	func_59(13, 0, -1);
	func_59(14, 0, -1);
	func_59(16, 0, -1);
}

void func_59(int iParam0, bool bParam1, int iParam2)//Position - 0x8140
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1441E9.f_89[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1441E9.f_3B3), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1441E9.f_3B3), iParam0);
			}
			break;
	}
}

void func_60(int iParam0)//Position - 0x818F
{
	Global_2554DA.f_110D = iParam0;
}

void func_61(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x81A0
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_67())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24D5B9[iParam0 /*254*/].f_EE = 0;
				}
			}
			if (bParam1)
			{
				if (!func_64(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(iVar23);
				PED::SET_PED_CAN_RAGDOLL(iVar23, 1);
				func_63();
				func_62();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24D5B9[iParam0 /*254*/].f_EF = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_64(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar23) && !PED::IS_PED_IN_ANY_VEHICLE(iVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}

void func_62()//Position - 0x851F
{
	struct<2> Var0;
	
	Global_24F57C.f_2A4 = 0;
	Global_24F57C.f_2A5 = 0;
	Global_24F57C.f_2A6 = { 9999.9f, 9999.9f, 9999.9f };
	Global_24B0C4.f_560 = { Var0 };
}

void func_63()//Position - 0x855C
{
	Global_24B0C4.f_21A = 0;
	Global_24B0C4.f_589 = 0;
	Global_24B0C4.f_1A4 = 0;
	Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CC = 0;
}

int func_64(int iParam0)//Position - 0x8589
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_65()//Position - 0x85BA
{
	return Global_250CE3.f_290.f_5;
}

bool func_66()//Position - 0x85CB
{
	return MISC::IS_BIT_SET(Global_250CE3, 2);
}

int func_67()//Position - 0x85DC
{
	if (func_68() == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x85F1
{
	return Global_1406D3.f_12;
}

void func_69()//Position - 0x85FF
{
	if (Global_1406A2.f_1 == 1)
	{
		func_70(0);
		Global_1406A2.f_1 = 0;
		Global_1406A2.f_2 = 0;
	}
}

void func_70(int iParam0)//Position - 0x8624
{
	if (func_78())
	{
		if (iParam0 == 1)
		{
			if (Global_2554DA.f_1085 == -1)
			{
				Global_2554DA.f_1085 = 60000;
			}
			func_77(&(Global_2554DA.f_1083), 0, 0);
			if (Global_2554DA.f_1088 == -1)
			{
				Global_2554DA.f_1088 = 10000;
			}
			func_77(&(Global_2554DA.f_1086), 0, 0);
		}
		else
		{
			Global_1406A2 = 0;
			func_76();
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_75()) && !func_71(PLAYER::PLAYER_ID()))
		{
			Global_ED3D8 = 0;
		}
	}
}

int func_71(int iParam0)//Position - 0x86AF
{
	if (func_72(iParam0, 1))
	{
		if (Global_182604[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0, bool bParam1)//Position - 0x86D3
{
	if (bParam1)
	{
		if (func_73(iParam0))
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

bool func_73(int iParam0)//Position - 0x86FF
{
	return func_74(iParam0);
}

bool func_74(int iParam0)//Position - 0x870D
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

bool func_75()//Position - 0x8727
{
	return Global_250CE3.f_2C7;
}

void func_76()//Position - 0x8736
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_78())
		{
			if (func_6(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(0);
			}
		}
		else
		{
			if (func_6(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(1);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_77(var uParam0, bool bParam1, bool bParam2)//Position - 0x881E
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

bool func_78()//Position - 0x885B
{
	return Global_1406A2;
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x8867
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return func_17(iParam0, iParam1, iParam2);
}

int func_80(int iParam0)//Position - 0x8883
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_88(iParam0, iVar2);
			if (func_84(iVar5, 14, iVar4))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = func_81(iParam0, iVar3);
				if (func_84(iVar5, iVar3, iVar4))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
		if (iVar6 > 0)
		{
			iVar7 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HAT"), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x8954
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	uVar0 = func_83(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_82(iParam0, iVar1, iVar2, iParam1);
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x89B4
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = func_83(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uParam0, uVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_83(int iParam0)//Position - 0x8A38
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x8AE8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_85(iParam0, iParam2, 1, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_85(iParam0, iParam2, 1, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8EDD
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_87(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_86(iParam0, func_83(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		iVar9 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_83(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var5))
			{
				if (iVar7 == iVar8)
				{
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_86(int iParam0, int iParam1)//Position - 0x8FD7
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_87(int iParam0)//Position - 0x937E
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_88(int iParam0, int iParam1)//Position - 0x93DF
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_92(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_89(iParam0, iVar0, iVar1, iParam1);
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9425
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_92(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_91(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_91(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_90(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_92(iParam3);
}

int func_90(int iParam0, int iParam1)//Position - 0x9521
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x965F
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_87(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_83(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_86(iParam0, func_83(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_92(int iParam0)//Position - 0x973F
{
	switch (iParam0)
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
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

void func_93(bool bParam0)//Position - 0x97C5
{
	if (bParam0)
	{
		if (Global_10A95)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
			}
		}
	}
}

void func_94(var uParam0)//Position - 0x97E6
{
	if (uParam0->f_260)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_260.f_1);
		uParam0->f_260 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2))
	{
		PED::DELETE_PED(&(uParam0->f_260.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_26CC0B))
	{
		PED::DELETE_PED(&Global_26CC0B);
	}
}

void func_95(int iParam0)//Position - 0x9833
{
	char cVar0[64];
	
	StringCopy(&cVar0, func_96(iParam0), 64);
	if (MISC::GET_HASH_KEY(&cVar0) != 0)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
	}
}

char* func_96(int iParam0)//Position - 0x9855
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
	}
	return "";
}

void func_97(var uParam0)//Position - 0x9A22
{
	func_98(&(uParam0->f_246));
	func_98(&(uParam0->f_250));
}

void func_98(var uParam0)//Position - 0x9A3C
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_99(bool bParam0, int iParam1)//Position - 0x9A65
{
	int iVar0;
	
	if (!func_100(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_4354.f_1C27)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_4354.f_1C27 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_4354.f_1316[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_4354.f_1316[iVar0] = 0;
	}
	if (Global_4354.f_130F[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_4354.f_130F[iVar0] = 0;
	}
	if (bParam0)
	{
		func_98(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

int func_100(var uParam0, bool bParam1, int iParam2)//Position - 0x9B03
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_4354.f_1373[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_4354.f_1373[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_4354.f_1373[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_101()//Position - 0x9BA0
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1) && func_613(1))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
		ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_56.f_1), false, 0);
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_56.f_1), true);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x9BE5
{
	if (func_614(0) || iParam1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(func_106(uParam0, iParam1), 2106541073) != 1)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(func_106(uParam0, iParam1), func_105(uParam0, iParam1), 1f, 20000, func_104(uParam0, iParam1), 1056964608);
		}
		if (iParam1 == 0)
		{
			func_103(uParam0, 0);
		}
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x9C44
{
	if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1EF))
		{
			uParam0->f_1EF = OBJECT::CREATE_OBJECT(joaat("p_cs_scissors_s"), uParam0->f_C.f_2, 0, 0, 0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1EF))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1EF));
	}
}

var func_104(var uParam0, int iParam1)//Position - 0x9C90
{
	if (iParam1 == 1)
	{
		return uParam0->f_1AC.f_5;
	}
	return uParam0->f_C.f_5;
}

Vector3 func_105(var uParam0, int iParam1)//Position - 0x9CB1
{
	if (iParam1 == 1)
	{
		return uParam0->f_1AC.f_2;
	}
	return uParam0->f_C.f_2;
}

var func_106(var uParam0, int iParam1)//Position - 0x9CD6
{
	if (iParam1 == 1)
	{
		return uParam0->f_1AC;
	}
	return uParam0->f_C;
}

void func_107(var uParam0)//Position - 0x9CF3
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_108(uParam0);
			if (uParam0->f_202 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_202);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
			if (uParam0->f_203 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(8);
				Stack.Push(uParam0->f_203);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
			if (uParam0->f_204 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(9);
				Stack.Push(uParam0->f_204);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
			if (uParam0->f_205 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(2);
				Stack.Push(uParam0->f_205);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (uParam0->f_206 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(uParam0->f_206);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
				}
				if (uParam0->f_207 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(uParam0->f_207);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
				}
				if (uParam0->f_208 != -1 && uParam0->f_209 != -1)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), func_83(5), uParam0->f_208, uParam0->f_209, 0);
				}
			}
		}
	}
	uParam0->f_201 = -99;
	uParam0->f_202 = -99;
	uParam0->f_206 = -99;
	uParam0->f_207 = -99;
	uParam0->f_208 = -1;
	uParam0->f_209 = -1;
	uParam0->f_203 = -99;
	uParam0->f_204 = -99;
	uParam0->f_205 = -99;
}

void func_108(var uParam0)//Position - 0x9E72
{
	var uVar0;
	
	if (uParam0->f_201 != -99)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uVar0 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
			{
				uVar0 = uParam0->f_260.f_2;
			}
			if (func_109(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_201, func_81(uVar0, 2)))
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_201);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
		}
		else
		{
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(14);
			Stack.Push(uParam0->f_201);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_1C0);
		}
	}
}

int func_109(int iParam0, int iParam1, int iParam2)//Position - 0x9F28
{
	int iVar0;
	
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if ((iParam2 >= 60 && iParam2 <= 66) || (iParam2 >= 18 && iParam2 <= 23))
		{
			if (((((((((iParam1 >= 19 && iParam1 <= 26) || (iParam1 >= 27 && iParam1 <= 34)) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 50)) || (iParam1 >= 59 && iParam1 <= 66)) || (iParam1 >= 75 && iParam1 <= 82)) || (iParam1 >= 91 && iParam1 <= 98)) || (iParam1 >= 99 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 114))
			{
				return 0;
			}
			if (iParam1 >= func_87(iParam0))
			{
				func_816(iParam0, 14, iParam1);
				if (Global_280005 == joaat("CU_XMAS_CLOTHES"))
				{
					return 0;
				}
			}
			if (iParam1 >= 327)
			{
				iVar0 = -1;
				iVar0 = func_85(iParam0, iParam1, 14, 3);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 1))
				{
					return 0;
				}
				switch (Global_280004)
				{
					case joaat("DLC_MP_BEACH_F_HEAD2_0"):
					case joaat("DLC_MP_BEACH_F_HEAD2_1"):
					case joaat("DLC_MP_BEACH_F_HEAD2_2"):
					case joaat("DLC_MP_BEACH_F_HEAD2_3"):
					case joaat("DLC_MP_BEACH_F_HEAD2_4"):
					case joaat("DLC_MP_BEACH_F_HEAD2_5"):
					case joaat("DLC_MP_BEACH_F_HEAD2_6"):
						return 0;
						break;
					
					case joaat("DLC_MP_BEACH_F_HEAD4_0"):
					case joaat("DLC_MP_BEACH_F_HEAD4_1"):
					case joaat("DLC_MP_BEACH_F_HEAD4_2"):
					case joaat("DLC_MP_BEACH_F_HEAD4_3"):
					case joaat("DLC_MP_BEACH_F_HEAD4_4"):
					case joaat("DLC_MP_BEACH_F_HEAD4_5"):
					case joaat("DLC_MP_BEACH_F_HEAD4_6"):
						return 0;
						break;
					}
			}
		}
		else if ((iParam2 >= 85 && iParam2 <= 91) || (iParam2 >= 30 && iParam2 <= 34))
		{
			if (iParam1 >= 131 && iParam1 <= 154)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_110(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xA129
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_115(iParam0);
	sVar1 = func_113(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_112())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_112())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_111(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_111(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_4353)
			{
				*fParam4 = (*fParam4 * (Global_4353 / *fParam3));
				*fParam3 = Global_4353;
			}
		}
		return 1;
	}
	return 0;
}

float func_111(int iParam0)//Position - 0xA290
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_112()//Position - 0xA329
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_113(int iParam0, bool bParam1)//Position - 0xA35B
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_114(&(Global_4354.f_17A0[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_114(var uParam0)//Position - 0xA739
{
	return uParam0;
}

char* func_115(int iParam0)//Position - 0xA743
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_114(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

float func_116()//Position - 0xA772
{
	return Global_4354.f_1408;
}

int func_117(var uParam0)//Position - 0xA780
{
	if (uParam0->f_25E && uParam0->f_1EE == 6)
	{
		return 1;
	}
	return 0;
}

void func_118(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xA7A1
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	float fVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	int iVar55;
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	
	if (!func_100(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_137(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_110(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar53 = fVar36;
			fVar53 = (fVar53 + 0f);
		}
		else
		{
			Global_4354 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar54 = Global_4352;
	}
	else
	{
		fVar54 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_4353;
	}
	fVar57 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar55, &iVar56);
		fVar58 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_112())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_112())
		{
			fVar57 = 1f;
		}
		iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar55) / fVar57));
		iVar56 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) / fVar57));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar55, &iVar56);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_4354.f_137A)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar47 = Global_4352;
			}
			else
			{
				if (Global_4354)
				{
					GRAPHICS::DRAW_SPRITE(func_115(29), func_113(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_4354.f_1C09)
				{
					iVar1 = Global_4354.f_1C05;
					iVar2 = Global_4354.f_1C06;
					iVar3 = Global_4354.f_1C07;
					iVar4 = Global_4354.f_1C08;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_136(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_135();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_4354.f_44)
					{
						if (Global_4354.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_4354.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E[iVar16], Global_4354.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_4354.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_4351 + 0.00390625f), ((Global_4352 + fVar53) + 0.00416664f), 0);
				}
				if (Global_4354.f_137D > Global_4354.f_1193)
				{
					if (Global_4354.f_1380 != 0)
					{
						func_135();
						func_133((((Global_4351 + fParam5) - 0.00390625f) - func_134("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
					}
				}
			}
			iVar6 = Global_4354.f_1381;
			iVar9 = 0;
			fVar60 = fVar47;
			if (Global_4354.f_1C13)
			{
				iVar1 = Global_4354.f_1C0F;
				iVar2 = Global_4354.f_1C10;
				iVar3 = Global_4354.f_1C11;
				iVar4 = Global_4354.f_1C12;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_4354.f_1193 && iVar6 <= Global_4354.f_118C)
			{
				if (iVar6 >= 0)
				{
					if (Global_4354.f_1291[iVar6])
					{
						if (Global_4354.f_1213[iVar6] && iVar6 != Global_4354.f_1381)
						{
							fVar47 = (fVar47 + 0.00277776f);
						}
						fVar52 = 0.034722f;
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar52 = Global_4354.f_1388[iVar6];
						}
						fVar47 = (fVar47 + fVar52);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar52 = 0.034722f;
					fVar47 = (fVar47 + fVar52);
					iVar9++;
					if (Global_4354.f_118C <= 1)
					{
						Global_4354.f_118C++;
					}
					iVar50 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar60 + ((fVar47 - fVar60) * 0.5f)) - 0.00138888f), fParam5, (fVar47 - fVar60), 0f, 255, 255, 255, 255, 0);
			if (Global_4354.f_137D > Global_4354.f_1193)
			{
				if (Global_4354.f_1C18)
				{
					iVar1 = Global_4354.f_1C14;
					iVar2 = Global_4354.f_1C15;
					iVar3 = Global_4354.f_1C16;
					iVar4 = Global_4354.f_1C17;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_136(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar57));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar57));
				if (Global_4354.f_1C25)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar55)), (Var37.f_1 / IntToFloat(iVar56)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar47 = (fVar47 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_4354.f_F81)) != 0 && Global_4354.f_FCB != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_4354.f_FCD != 0)
				{
					func_110(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_132(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_4354.f_FCD != 0)
				{
					func_110(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_131(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_FCD), func_113(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4354.f_FCB > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4354.f_FCC) > Global_4354.f_FCB)
					{
						StringCopy(&(Global_4354.f_F81), "", 16);
						Global_4354.f_FCB = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_15)) != 0 && Global_26CEC9.f_41 != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_26CEC9.f_43 != 0)
				{
					func_110(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_132(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_26CEC9.f_43 != 0)
				{
					func_110(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_131(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_115(Global_26CEC9.f_43), func_113(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_26CEC9.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_26CEC9.f_42) > Global_26CEC9.f_41)
					{
						StringCopy(&(Global_26CEC9.f_15), "", 16);
						Global_26CEC9.f_41 = -1;
					}
				}
			}
			func_126(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_4354.f_137A)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar61 = Global_4354.f_118C;
			if (Global_4354.f_137B)
			{
				iVar61 = (Global_4354.f_137E - 1);
			}
			fVar62 = 0f;
			fVar63 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar61)
			{
				fVar52 = 0.034722f;
				if (Global_4354.f_1388[iVar6] != 0f)
				{
					fVar52 = Global_4354.f_1388[iVar6];
				}
				if (Global_4354.f_137B)
				{
					iVar6 = Global_4354.f_1AB1[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_4354.f_1381 && iVar9 < Global_4354.f_1193)
				{
					bVar32 = true;
					if (Global_4354.f_1382 == iVar6)
					{
						fVar63 = fVar62;
					}
					if (Global_4354.f_1213[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_4354.f_140B[iVar6] = fVar34;
				fVar33 = (Global_4351 + 0.0046875f);
				bVar38 = false;
				bVar31 = Global_4354.f_1382 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar64 = 255;
					iVar65 = 255;
					iVar66 = 255;
					iVar67 = 255;
					if (Global_4354.f_1C1F)
					{
						HUD::GET_HUD_COLOUR(Global_4354.f_1C1E, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_4351 + (fParam5 * 0.5f)), (((fVar54 + fVar63) + (0.00277776f * IntToFloat(iVar12))) + (fVar52 * 0.5f)), fParam5, fVar52, 0f, iVar64, iVar65, iVar66, iVar67, 0);
					Global_4354.f_1409 = fVar34;
				}
				if (iVar50 && iVar7 == iVar61)
				{
					func_124(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar38 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_4354.f_1194)
					{
						if (MISC::IS_BIT_SET(Global_4354.f_110E[iVar6], iVar8) || Global_4354.f_10ED[iVar8] == 5)
						{
							if (Global_4354.f_137B)
							{
								iVar19 = Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar20 = Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar21 = Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar22 = Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar23 = Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)];
							}
							else
							{
								Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar19;
								Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar20;
								Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar21;
								Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar22;
								Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar23;
							}
							iVar68 = 0;
							bVar51 = false;
							if (Global_4354.f_148C[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[0])
								{
									bVar51 = true;
									iVar68 = 0;
								}
							}
							if (Global_4354.f_148C[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[1])
								{
									bVar51 = true;
									iVar68 = 1;
								}
							}
							if (Global_4354.f_10F3[iVar8] != -1f)
							{
								fVar33 = ((Global_4351 + 0.0046875f) + Global_4354.f_10F3[iVar8]);
							}
							if ((iVar8 < 4 && Global_4354.f_10F3[iVar8 + 1] != -1f) && fVar33 < Global_4354.f_10F3[iVar8 + 1])
							{
								fVar43 = (Global_4354.f_10F3[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar43 = (((Global_4351 + Global_4353) - 0.0046875f) - fVar33);
							}
							if ((Global_4354.f_1100[iVar8] && Global_4354.f_1406) && bVar31)
							{
								bVar49 = true;
							}
							else
							{
								bVar49 = false;
							}
							switch (Global_4354.f_10ED[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											fVar40 = 0f;
											fVar41 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												bVar48 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
													{
														bVar48 = true;
													}
													iVar14++;
												}
												func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_4354.f_49[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_110(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + fVar35);
														if (iVar14 > 0)
														{
															fVar41 = (fVar41 - (0.00078125f * 4f));
														}
														if (Global_4354.f_F03[(iVar22 + iVar14)] == 2)
														{
															fVar41 = (fVar41 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - (fVar40 + fVar41)) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - ((fVar40 + fVar41) * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
											Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_110(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_110(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(26), func_113(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_110(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_110(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(27), func_113(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											bVar48 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													bVar48 = true;
												}
												iVar14++;
											}
											func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_123(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_49[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_4354.f_F03[(iVar22 + iVar28)] == 2)
												{
													if (func_110(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_110(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_131(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[(iVar22 + iVar28)]), func_113(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[(iVar22 + iVar28)]), func_113(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															fVar39 = (fVar39 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_4354.f_1108[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar39) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar39), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar39 = (fVar39 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_4354.f_F03[(iVar22 + iVar14)] != 2)
												{
													if (func_110(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_110(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_131(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[(iVar22 + iVar14)]), func_113(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[(iVar22 + iVar14)]), func_113(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[(iVar22 + iVar14)]), func_113(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
														}
														fVar39 = (fVar39 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar38 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_123(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[iVar20]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_110(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_110(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(26), func_113(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_110(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_110(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(27), func_113(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_122((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_123(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_110(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_110(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(26), func_113(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_110(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_110(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_131(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_115(27), func_113(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_124(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_121((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_110(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_4354.f_137B)
											{
												fVar41 = fVar35;
												fVar39 = 0f;
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 + ((fVar43 - fVar41) + (0.00078125f * 1f)));
												}
												else if (Global_4354.f_1108[iVar8] == 0)
												{
													fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar41 * 0.5f)));
												}
												Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
												Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
											}
											else
											{
												fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
												fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
											}
											if (bVar49)
											{
												if (func_110(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_110(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_131(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_115(26), func_113(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_110(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_110(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_131(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_115(27), func_113(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_110(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_131(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_115(Global_4354.f_F03[iVar22]), func_113(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_120(Global_4354.f_F03[iVar22])), (fVar36 * func_120(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
											}
										}
									}
									bVar38 = true;
									iVar22++;
									break;
								
								case 5:
									bVar38 = true;
									break;
							}
							if (Global_4354.f_10ED[iVar8] == 5)
							{
								if (Global_4354.f_10F9[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								if (Global_4354.f_1100[iVar8])
								{
									if (func_110(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar38)
				{
					if (bVar32)
					{
						Global_4354.f_1AB1[iVar9] = iVar6;
						Global_4354.f_1383 = iVar6;
						iVar9++;
						if (Global_4354.f_1213[iVar6])
						{
							iVar13++;
						}
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar62 = (fVar62 + Global_4354.f_1388[iVar6]);
						}
						else
						{
							fVar62 = (fVar62 + 0.034722f);
						}
					}
					if (!Global_4354.f_137A)
					{
						Global_4354.f_1291[iVar6] = 1;
						if (Global_4354.f_1195[iVar6])
						{
							if (bVar31)
							{
								Global_4354.f_1380 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_4354.f_1380 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_4354.f_137A)
			{
				Global_4354.f_137C = ((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12)));
				Global_4354.f_137F = iVar11;
				Global_4354.f_137D = iVar10;
				Global_4354.f_137A = 1;
			}
		}
		iVar5++;
	}
	if (!Global_4354.f_137B)
	{
		Global_4354.f_137E = iVar9;
		Global_4354.f_137B = 1;
	}
	Global_4354.f_1408 = fVar47;
	Global_4354.f_140A = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_4354.f_1408);
	if (!Global_4354.f_1C04)
	{
		func_592();
	}
	Global_4354.f_1C04 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_119(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_119(int iParam0)//Position - 0xD0B1
{
	Global_1446E8.f_2F4 = iParam0;
}

float func_120(int iParam0)//Position - 0xD0C2
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_121(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xD12B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_122(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xD14A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_123(bool bParam0)//Position - 0xD168
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xD1AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_125(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_125(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xD345
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xD5CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_100(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_137(bParam4, bParam8))
	{
		return;
	}
	if (func_129())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_31(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_4354.f_FCE != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (Global_4354.f_10CF[iVar1] != 332)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10CF[iVar1], 1), 64);
				}
				else if (Global_4354.f_10DC[iVar1] != 31)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10DC[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_4354.f_FCF = 0;
		}
		if (!Global_4354.f_FCF)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_4354.f_1106 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_128(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_128(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_127(&(Global_4354.f_1091[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_4354.f_10CF[iVar1] != 332 && MISC::IS_BIT_SET(Global_4354.f_10E9, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_10CF[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_FCE);
				func_128(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_127(&(Global_26CEC9.f_10));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_4354.f_1107)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_4354.f_FCF = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_4354.f_FCE)
		{
			if (Global_4354.f_10C2[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_26CEC9.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_4354.f_1C27)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_4354.f_1C27 = 1;
			}
		}
		else if (Global_4354.f_1C27)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_4354.f_1C27 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_4354.f_10EC)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_4354.f_1336[iVar0 /*10*/], Global_4354.f_10EA, Global_4354.f_10EB, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_4354.f_1336[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_127(char* sParam0)//Position - 0xDAA9
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_128(var uParam0)//Position - 0xDABB
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_129()//Position - 0xDAC9
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_130())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_3802 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_130()//Position - 0xDB37
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDB51
{
	var uVar0;
	
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_132(float fParam0)//Position - 0xDC05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_133(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xDC64
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_134(char* sParam0, int iParam1, int iParam2)//Position - 0xDC87
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_135();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_135()//Position - 0xDCC9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_4354.f_1C0E)
	{
		iVar0 = Global_4354.f_1C0A;
		iVar1 = Global_4354.f_1C0B;
		iVar2 = Global_4354.f_1C0C;
		iVar3 = Global_4354.f_1C0D;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_4351 + 0.0046875f), ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_136(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDD53
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_137(bool bParam0, bool bParam1)//Position - 0xDD82
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_139(8, -1) && func_138() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_138()//Position - 0xDE1F
{
	return Global_1413F8;
}

bool func_139(int iParam0, int iParam1)//Position - 0xDE2B
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

int func_140(char* sParam0)//Position - 0xDE66
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::_GET_TEXT_SUBSTRING(sParam0, 0, 6));
	switch (iVar0)
	{
		case -680965302:
		case 436097115:
		case 927511879:
			return 1;
			break;
	}
	return 0;
}

int func_141(char* sParam0)//Position - 0xDEAA
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::_GET_TEXT_SUBSTRING(sParam0, 0, 6));
	switch (iVar0)
	{
		case 2070857446:
			return 1;
			break;
	}
	return 0;
}

void func_142(char* sParam0)//Position - 0xDEE2
{
	if (Global_4354.f_FCA >= 3 || Global_4354.f_FC7 >= 4)
	{
		return;
	}
	Global_4354.f_F85[Global_4354.f_FC7] = 1;
	Global_4354.f_FC7++;
	StringCopy(&(Global_4354.f_F96[Global_4354.f_FCA /*16*/]), sParam0, 64);
	Global_4354.f_FCA++;
}

char* func_143(char* sParam0, bool bParam1)//Position - 0xDF43
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return "";
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::_GET_TEXT_SUBSTRING(sParam0, 0, 6));
	switch (iVar0)
	{
		case -272077744:
		case -217636000:
			return "SHOP_CONTENT_1";
			break;
		
		case -291739204:
		case -1724452987:
			return "SHOP_CONTENT_2";
			break;
		
		case -680965302:
		case 436097115:
		case 927511879:
			if (!bParam1)
			{
				return "SHOP_CONTENT_3";
			}
			else
			{
				return "SHOP_CONTENT_3b";
			}
			break;
		
		case -1376583914:
			return "SHOP_CONTENT_4";
			break;
		
		case 753969907:
			return "SHOP_CONTENT_5";
			break;
		
		case -1461214493:
		case 469261390:
		case 1454369070:
			if (!bParam1)
			{
				return "SHOP_CONTENT_6";
			}
			else
			{
				return "SHOP_CONTENT_6b";
			}
			break;
		
		case -1497129317:
			if (!bParam1)
			{
				return "SHOP_CONTENT_7";
			}
			else
			{
				return "SHOP_CONTENT_7b";
			}
			break;
		
		case 2070857446:
			if (!bParam1)
			{
				return "SHOP_CONTENT_8";
			}
			else
			{
				return "SHOP_CONTENT_8b";
			}
			break;
		
		case 790660019:
			return "SHOP_CONTENT_9";
			break;
		
		case -1899372144:
			if (!bParam1)
			{
				return "SHOP_CONTENT_10";
			}
			else
			{
				return "SHOP_CONTENT_10b";
			}
			break;
		
		case 2009248638:
		case -434342601:
			return "SHOP_CONTENT_12";
			break;
		
		case 1759048931:
			return "SHOP_CONTENT_13";
			break;
	}
	return "";
}

int func_144(char* sParam0)//Position - 0xE0AA
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::_GET_TEXT_SUBSTRING(sParam0, 0, 6));
	switch (iVar0)
	{
		case -272077744:
		case -217636000:
			return 1;
			break;
		
		case -291739204:
		case -1724452987:
			return 0;
			break;
		
		case -680965302:
		case 436097115:
		case 927511879:
			return 0;
			break;
		
		case -1376583914:
			return 1;
			break;
		
		case 753969907:
			return 0;
			break;
		
		case -1461214493:
		case 469261390:
		case 1454369070:
			return 0;
			break;
		
		case 2070857446:
			return 0;
			break;
		
		case 790660019:
			return 0;
			break;
		
		case -1899372144:
			return 0;
			break;
		
		case -1497129317:
			return 0;
			break;
		
		case 1759048931:
			return 0;
			break;
		
		case 2009248638:
		case -434342601:
			return 0;
			break;
	}
	return 1;
}

int func_145(var uParam0, int iParam1, int iParam2)//Position - 0xE19B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 1)
	{
		func_178(&(uParam0->f_1C6), &Global_26C92B, 1, func_490(uParam0), -1, &(uParam0->f_2AB), &(uParam0->f_2AE));
		iVar0 = 0;
		while (iVar0 < Global_26C92B.f_DE)
		{
			Stack.Push(iParam1);
			Stack.Push(Global_26C92B.f_6F[iVar0]);
			Stack.Push(Global_26C92B[iVar0]);
			Call_Loc(uParam0->f_1C4);
			Stack.Push(iParam1);
			Stack.Push(Global_26C92B.f_6F[iVar0]);
			Stack.Push(Global_26C92B[iVar0]);
			Call_Loc(uParam0->f_1C1);
			if (StackVal && StackVal)
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (iParam2 == 2)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_178(&(uParam0->f_1C6), &Global_26C92B, 0, func_490(uParam0), -1, &(uParam0->f_2AB), &(uParam0->f_2AE));
			iVar1 = 0;
			while (iVar1 < Global_26C92B.f_DE)
			{
				Stack.Push(iParam1);
				Stack.Push(Global_26C92B.f_6F[iVar1]);
				Stack.Push(Global_26C92B[iVar1]);
				Call_Loc(uParam0->f_1C4);
				Stack.Push(iParam1);
				Stack.Push(Global_26C92B.f_6F[iVar1]);
				Stack.Push(Global_26C92B[iVar1]);
				Call_Loc(uParam0->f_1C1);
				if (StackVal && StackVal)
				{
					return 1;
				}
				iVar1++;
			}
		}
		else
		{
			iVar3 = func_177();
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (func_176(iVar2) && !func_175(iVar2))
				{
					return 1;
				}
				iVar2++;
			}
		}
	}
	else if (iParam2 == 3)
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_244)
		{
			if (func_169(iVar4))
			{
				if (func_168(iVar4) && !func_165(iVar4))
				{
					return 1;
				}
			}
			iVar4++;
		}
	}
	else if (func_475(iParam2))
	{
		iVar5 = 0;
		while (iVar5 < func_164(iParam1, iParam2))
		{
			if (func_150(uParam0, iParam1, iParam2, iVar5) && !func_146(uParam0, iParam1, iParam2, iVar5))
			{
				return 1;
			}
			iVar5++;
		}
		return 0;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE36B
{
	struct<12> Var0;
	
	if (func_393(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_147(Var0.f_B, 2, -1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

int func_147(int iParam0, int iParam1, int iParam2)//Position - 0xE399
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_10A08;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = func_17(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_148(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE3D7
{
	int iVar0;
	
	*uParam2 = 2903;
	iVar0 = func_149(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 2333;
					break;
				
				case 1:
					*uParam2 = 2334;
					break;
				
				case 2:
					*uParam2 = 2335;
					break;
				
				case 3:
					*uParam2 = 2336;
					break;
				
				case 4:
					*uParam2 = 2337;
					break;
				
				case 5:
					*uParam2 = 2338;
					break;
				
				case 6:
					*uParam2 = 2339;
					break;
				
				case 7:
					*uParam2 = 2340;
					break;
				
				case 8:
					*uParam2 = 2341;
					break;
				
				case 9:
					*uParam2 = 2342;
					break;
				
				case 10:
					*uParam2 = 2343;
					break;
				
				case 11:
					*uParam2 = 2344;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 2321;
					break;
				
				case 1:
					*uParam2 = 2322;
					break;
				
				case 2:
					*uParam2 = 2323;
					break;
				
				case 3:
					*uParam2 = 2324;
					break;
				
				case 4:
					*uParam2 = 2325;
					break;
				
				case 5:
					*uParam2 = 2326;
					break;
				
				case 6:
					*uParam2 = 2327;
					break;
				
				case 7:
					*uParam2 = 2328;
					break;
				
				case 8:
					*uParam2 = 2329;
					break;
				
				case 9:
					*uParam2 = 2330;
					break;
				
				case 10:
					*uParam2 = 2331;
					break;
				
				case 11:
					*uParam2 = 2332;
					break;
				
				default:
					return 0;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 2903;
}

int func_149(int iParam0)//Position - 0xE5BF
{
	switch (iParam0)
	{
		case 2086722024:
			return 0;
			break;
		
		case -1911587515:
			return 1;
			break;
		
		case -1882357567:
			return 2;
			break;
		
		case -969019995:
			return 3;
			break;
		
		case -411291615:
			return 4;
			break;
		
		case -82979004:
			return 5;
			break;
		
		case 218692410:
			return 6;
			break;
		
		case 511680047:
			return 7;
			break;
		
		case 558867407:
			return 8;
			break;
		
		case 808796570:
			return 9;
			break;
		
		case -1605550121:
			return 10;
			break;
		
		case -1378886948:
			return 11;
			break;
		
		case -1142819072:
			return 12;
			break;
		
		case -899836937:
			return 13;
			break;
		
		case 1454746793:
			return 14;
			break;
		
		case 1677117227:
			return 15;
			break;
		
		case 1931240822:
			return 16;
			break;
		
		case -2125331999:
			return 17;
			break;
		
		case -2146762937:
			return 18;
			break;
		
		case -1919575460:
			return 19;
			break;
		
		case 1867669166:
			return 20;
			break;
		
		case 1562425931:
			return 21;
			break;
		
		case 1271240597:
			return 22;
			break;
		
		case -43115055:
			return 23;
			break;
		
		case -1731373935:
			return 24;
			break;
		
		case -1422100113:
			return 25;
			break;
		
		case -463508556:
			return 26;
			break;
		
		case -963301344:
			return 27;
			break;
		
		case 2063210751:
			return 28;
			break;
		
		case -2003094463:
			return 29;
			break;
		
		case -1888632346:
			return 30;
			break;
		
		case -1384776202:
			return 31;
			break;
		
		case 1107568404:
			return 32;
			break;
		
		case -412069578:
			return 33;
			break;
		
		case 1236833733:
			return 34;
			break;
		
		case 2004250944:
			return 35;
			break;
		
		case 544883529:
			return 36;
			break;
		
		case 1446293181:
			return 37;
			break;
		
		case -1964074960:
			return 38;
			break;
		
		case -1565538382:
			return 39;
			break;
		
		case 1752814407:
			return 40;
			break;
		
		case -1662501853:
			return 41;
			break;
		
		case -1216122527:
			return 42;
			break;
		
		case 1668958248:
			return 43;
			break;
		
		case 813687348:
			return 44;
			break;
		
		case 1121027799:
			return 45;
			break;
		
		case -1437018652:
			return 46;
			break;
		
		case -1133250022:
			return 47;
			break;
		
		case 1974922401:
			return 48;
			break;
		
		case -1751830435:
			return 49;
			break;
		
		case -737105609:
			return 50;
			break;
		
		case -1044282215:
			return 51;
			break;
		
		case 128880754:
			return 52;
			break;
		
		case -1214833480:
			return 53;
			break;
		
		case -853522486:
			return 54;
			break;
		
		case -1811655273:
			return 55;
			break;
		
		case -1040961166:
			return 56;
			break;
		
		case 1888456366:
			return 57;
			break;
		
		case -1639552485:
			return 58;
			break;
		
		case 1348226632:
			return 59;
			break;
		
		case 2125933309:
			return 60;
			break;
		
		case 754026355:
			return 61;
			break;
		
		case 1526948758:
			return 62;
			break;
		
		case -902969915:
			return 63;
			break;
		
		case -69457631:
			return 64;
			break;
		
		case -312701918:
			return 65;
			break;
		
		case 824579000:
			return 66;
			break;
		
		case 585856831:
			return 67;
			break;
		
		case 1226458016:
			return 68;
			break;
		
		case 987998003:
			return 69;
			break;
		
		case 1819413071:
			return 70;
			break;
		
		case 1583246888:
			return 71;
			break;
		
		case -1577847470:
			return 72;
			break;
		
		case -2026650806:
			return 73;
			break;
		
		case -1429665160:
			return 74;
			break;
		
		case -1185994876:
			return 75;
			break;
		
		case -2142554759:
			return 76;
			break;
		
		case -589631845:
			return 77;
			break;
		
		case -1637322333:
			return 78;
			break;
		
		case -1876568802:
			return 79;
			break;
		
		case -851292326:
			return 80;
			break;
		
		case 1859818120:
			return 81;
			break;
		
		case -1515880415:
			return 82;
			break;
		
		case -432930795:
			return 83;
			break;
		
		case 796201630:
			return 84;
			break;
		
		case 1170095920:
			return 85;
			break;
		
		case 1259981287:
			return 86;
			break;
		
		case 1632499279:
			return 87;
			break;
		
		case -1208917743:
			return 88;
			break;
		
		case -1245356871:
			return 89;
			break;
		
		case -567923298:
			return 90;
			break;
		
		case -932249040:
			return 91;
			break;
		
		case -221587773:
			return 92;
			break;
		
		case -845116305:
			return 93;
			break;
		
		case 381918900:
			return 94;
			break;
		
		case 83032851:
			return 95;
			break;
		
		case 705709389:
			return 96;
			break;
		
		case 410559006:
			return 97;
			break;
		
		case -850926612:
			return 98;
			break;
		
		case -1093056753:
			return 99;
			break;
		
		case 1258643301:
			return 100;
			break;
		
		case 865874067:
			return 101;
			break;
		
		case 627151902:
			return 102;
			break;
		
		case -2142352902:
			return 103;
			break;
		
		case -407070503:
			return 104;
			break;
		
		case 1502608510:
			return 105;
			break;
		
		case 827528886:
			return 106;
			break;
		
		case -781461791:
			return 107;
			break;
		
		case -474875027:
			return 108;
			break;
		
		case -1242030086:
			return 109;
			break;
		
		case 137348200:
			return 110;
			break;
		
		case -2121779449:
			return 111;
			break;
		
		case 1876005786:
			return 112;
			break;
		
		case -1641844675:
			return 113;
			break;
		
		case -1939452733:
			return 114;
			break;
		
		case 1595175476:
			return 115;
			break;
		
		case 1888141884:
			return 116;
			break;
		
		case 859096981:
			return 117;
			break;
		
		case 551756530:
			return 118;
			break;
		
		case 1439272126:
			return 119;
			break;
		
		case 1158474565:
			return 120;
			break;
		
		case -109358053:
			return 121;
			break;
		
		case -406605652:
			return 122;
			break;
		
		case 509746672:
			return 123;
			break;
		
		case 244809299:
			return 124;
			break;
		
		case -651750537:
			return 125;
			break;
		
		case 1816410231:
			return 126;
			break;
		
		case -2059015562:
			return 127;
			break;
		
		case 1945094090:
			return 128;
			break;
		
		case -1458261485:
			return 129;
			break;
		
		case -1755738467:
			return 130;
			break;
		
		case -846234872:
			return 131;
			break;
		
		case -1144170620:
			return 132;
			break;
		
		case -251641367:
			return 133;
			break;
		
		case -566158229:
			return 134;
			break;
		
		case -859506285:
			return 135;
			break;
		
		case 1823490339:
			return 136;
			break;
		
		case -2074414980:
			return 137;
			break;
		
		case 748741188:
			return 138;
			break;
		
		case 664000554:
			return 139;
			break;
		
		case 374125980:
			return 140;
			break;
		
		case 1933864846:
			return 141;
			break;
		
		case 1620822589:
			return 142;
			break;
		
		case 1304536201:
			return 143;
			break;
		
		case 1024459558:
			return 144;
			break;
		
		case -1167196704:
			return 145;
			break;
		
		case -1484564469:
			return 146;
			break;
		
		case -1728267522:
			return 147;
			break;
		
		case -2059818253:
			return 148;
			break;
		
		case 1995902574:
			return 149;
			break;
		
		case 1639965688:
			return 150;
			break;
		
		case 1397114629:
			return 151;
			break;
		
		case -1985437042:
			return 152;
			break;
		
		case 2060125395:
			return 153;
			break;
		
		case 1845619521:
			return 154;
			break;
		
		case 1352314995:
			return 155;
			break;
		
		case 1121916156:
			return 156;
			break;
		
		case 890173784:
			return 157;
			break;
		
		case 646995035:
			return 158;
			break;
		
		case 885782742:
			return 159;
			break;
		
		case 645225513:
			return 160;
			break;
		
		case 173548527:
			return 161;
			break;
		
		case -421803070:
			return 162;
			break;
		
		case 1299978497:
			return 163;
			break;
		
		case 1529427035:
			return 164;
			break;
		
		case 342566624:
			return 165;
			break;
		
		case 575062679:
			return 166;
			break;
		
		case -2035840169:
			return 167;
			break;
		
		case -1807833467:
			return 168;
			break;
		
		case 1762447394:
			return 169;
			break;
		
		case 2001923246:
			return 170;
			break;
		
		case 178590600:
			return 171;
			break;
		
		case 1262851572:
			return 172;
			break;
		
		case 537411450:
			return 173;
			break;
		
		case 785046783:
			return 174;
			break;
		
		case -2080536733:
			return 175;
			break;
		
		case -1640317987:
			return 176;
			break;
		
		case 1737477768:
			return 177;
			break;
		
		case 162597385:
			return 178;
			break;
		
		case 223154493:
			return 179;
			break;
		
		case 2140763608:
			return 180;
			break;
		
		case 1886967703:
			return 181;
			break;
		
		case 1237289509:
			return 182;
			break;
		
		case -1236704457:
			return 183;
			break;
		
		case -1467824214:
			return 184;
			break;
		
		case -1595623314:
			return 185;
			break;
		
		case -1829299053:
			return 186;
			break;
		
		case -1581270496:
			return 187;
			break;
		
		case -736238561:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 1479840145:
			return 189;
			break;
		
		case 356387741:
			return 190;
			break;
		
		case 653766416:
			return 191;
			break;
		
		case -1922761743:
			return 192;
			break;
		
		case -1625383068:
			return 193;
			break;
		
		case 1758409414:
			return 194;
			break;
		
		case 2048251219:
			return 195;
			break;
		
		case -1001100849:
			return 196;
			break;
		
		case -711848886:
			return 197;
			break;
		
		case -1614503760:
			return 198;
			break;
		
		case -1060874703:
			return 199;
			break;
		
		case -1669067343:
			return 200;
			break;
		
		case -1505615571:
			return 201;
			break;
		
		case -136756130:
			return 202;
			break;
		
		case 1503430607:
			return 203;
			break;
		
		case 1909897283:
			return 204;
			break;
		
		case -1005003578:
			return 205;
			break;
		
		case -734266100:
			return 206;
			break;
		
		case 1360852708:
			return 207;
			break;
		
		case 729066388:
			return 208;
			break;
		
		case 914374215:
			return 209;
			break;
		
		case 558502875:
			return 210;
			break;
		
		case -1591241840:
			return 211;
			break;
		
		case -1827014795:
			return 212;
			break;
		
		case -876282585:
			return 213;
			break;
		
		case -1180870440:
			return 214;
			break;
		
		case -1502662020:
			return 215;
			break;
		
		case -1785163569:
			return 216;
			break;
		
		case 80113449:
			return 217;
			break;
		
		case -216740922:
			return 218;
			break;
		
		case -533027310:
			return 219;
			break;
		
		case -829553991:
			return 220;
			break;
		
		case -531257788:
			return 221;
			break;
		
		case -827784469:
			return 222;
			break;
		
		case 744660972:
			return 223;
			break;
		
		case 899625573:
			return 224;
			break;
		
		case 266299110:
			return 225;
			break;
		
		case -1641282671:
			return 226;
			break;
		
		case -195383331:
			return 227;
			break;
		
		case 33245982:
			return 228;
			break;
		
		case -686033552:
			return 229;
			break;
		
		case 1700172263:
			return 230;
			break;
		
		case -1163314037:
			return 231;
			break;
		
		case -939239615:
			return 232;
			break;
		
		case -1579861681:
			return 233;
			break;
		
		case -1237032403:
			return 234;
			break;
		
		case 1942740285:
			return 235;
			break;
		
		case 558544952:
			return 236;
			break;
		
		case 1335891174:
			return 237;
			break;
		
		case 2129064819:
			return 238;
			break;
		
		case -699850186:
			return 239;
			break;
		
		case -864874870:
			return 240;
			break;
		
		case 333978995:
			return 241;
			break;
		
		case 1109522918:
			return 242;
			break;
		
		case -635535959:
			return 243;
			break;
		
		case -966961625:
			return 244;
			break;
		
		case -595983772:
			return 245;
			break;
		
		case 1319397047:
			return 246;
			break;
		
		case 15059771:
			return 247;
			break;
		
		case -679880450:
			return 248;
			break;
		
		case -1968193685:
			return 249;
			break;
		
		case 1656811402:
			return 250;
			break;
		
		case 1409143300:
			return 251;
			break;
		
		case 1047930613:
			return 252;
			break;
		
		case 834145657:
			return 253;
			break;
		
		case 1301103915:
			return 254;
			break;
		
		case 5679807:
			return 255;
			break;
		
		case 1241824794:
			return 256;
			break;
		
		case 1558963176:
			return 257;
			break;
		
		case 1466156191:
			return 258;
			break;
		
		case 1713299989:
			return 259;
			break;
		
		case 1415036551:
			return 260;
			break;
		
		case 1153834856:
			return 261;
			break;
		
		case 1360836629:
			return 262;
			break;
		
		case -1622780825:
			return 263;
			break;
		
		case -1374686726:
			return 264;
			break;
		
		case 2040629534:
			return 265;
			break;
		
		case -1973146973:
			return 266;
			break;
		
		case -657864855:
			return 267;
			break;
		
		case 1377860065:
			return 268;
			break;
		
		case 113042203:
			return 269;
			break;
		
		case -712703828:
			return 270;
			break;
		
		case 200109448:
			return 271;
			break;
		
		case -705035870:
			return 272;
			break;
		
		case -1340787251:
			return 273;
			break;
		
		case -107624231:
			return 274;
			break;
		
		case -784730090:
			return 275;
			break;
		
		case -1628925068:
			return 276;
			break;
		
		case 1496156159:
			return 277;
			break;
		
		case -1247690782:
			return 278;
			break;
		
		case -1569777283:
			return 279;
			break;
		
		case 1939083358:
			return 280;
			break;
		
		case -2050050861:
			return 281;
			break;
		
		case -1086019650:
			return 282;
			break;
		
		case -796734918:
			return 283;
			break;
		
		case -2051001154:
			return 284;
			break;
		
		case -1753327558:
			return 285;
			break;
		
		case -778482577:
			return 286;
			break;
		
		case -487919854:
			return 287;
			break;
		
		case 1063167984:
			return 288;
			break;
		
		case 1352190564:
			return 289;
			break;
		
		case 1918883225:
			return 290;
			break;
		
		case 2140499972:
			return 291;
			break;
		
		case -1622298764:
			return 292;
			break;
		
		case -1384887359:
			return 293;
			break;
		
		case -1451684059:
			return 294;
			break;
		
		case -675288142:
			return 295;
			break;
		
		case -984234274:
			return 296;
			break;
		
		case -258728614:
			return 297;
			break;
		
		case 516356543:
			return 298;
			break;
		
		case 200791073:
			return 299;
			break;
		
		case 976334996:
			return 300;
			break;
		
		case 743642327:
			return 301;
			break;
		
		case 1511583842:
			return 302;
			break;
		
		case 1238290382:
			return 303;
			break;
		
		case -587327163:
			return 304;
			break;
		
		case -1009457421:
			return 305;
			break;
		
		case 1852062739:
			return 306;
			break;
		
		case 1561958782:
			return 307;
			break;
		
		case -1779135693:
			return 308;
			break;
		
		case 2022396001:
			return 309;
			break;
		
		case -1277868344:
			return 310;
			break;
		
		case -1046224283:
			return 311;
			break;
		
		case -1992232544:
			return 312;
			break;
		
		case -1511904542:
			return 313;
			break;
		
		case 338954980:
			return 314;
			break;
		
		case 644853595:
			return 315;
			break;
		
		case 928043293:
			return 316;
			break;
		
		case 1233483142:
			return 317;
			break;
		
		case 455547074:
			return 318;
			break;
		
		case 753187901:
			return 319;
			break;
		
		case -1381379572:
			return 320;
			break;
		
		case -978746865:
			return 321;
			break;
		
		case 946792344:
			return 322;
			break;
		
		case -366195948:
			return 323;
			break;
		
		case -722394978:
			return 324;
			break;
		
		case 216207489:
			return 325;
			break;
		
		case 2124706822:
			return 326;
			break;
		
		case 832559610:
			return 327;
			break;
		
		case -791212145:
			return 328;
			break;
		
		case 1426003941:
			return 329;
			break;
		
		case -2062125037:
			return 330;
			break;
		
		case 2002508958:
			return 331;
			break;
		
		case -1983118982:
			return 332;
			break;
		
		case 825938009:
			return 333;
			break;
		
		case 1670231294:
			return 334;
			break;
		
		case 1439144306:
			return 335;
			break;
		
		case -2008613264:
			return 336;
			break;
		
		case 137657929:
			return 337;
			break;
		
		case 850282205:
			return 338;
			break;
	}
	return -1;
}

int func_150(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF8AB
{
	struct<11> Var0;
	struct<14> Var1;
	
	if (func_393(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_158(iParam1, iParam2, iParam3))
		{
			return 0;
		}
		if (Var0.f_9 == 0)
		{
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Call_Loc(uParam0->f_1C5);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (!MISC::IS_BIT_SET(Var1.f_6, 1))
			{
				return 0;
			}
			return 1;
		}
		else if (Var0.f_9 == 1 || Var0.f_9 == 2)
		{
			if (Var0.f_A == -1)
			{
				return 1;
			}
			if (Var0.f_5 == 1)
			{
				if (!func_151(Var0.f_A))
				{
					return 0;
				}
				return 1;
			}
			else if (Var0.f_5 == 4)
			{
				if (!func_151(Var0.f_A))
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 1;
}

bool func_151(var uParam0)//Position - 0xF96A
{
	var uVar0;
	int iVar1;
	
	if (func_157())
	{
		return 0;
	}
	uVar0 = func_153(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(uVar0, func_152(iVar1));
}

int func_152(int iParam0)//Position - 0xF995
{
	return (iParam0 % 32);
}

int func_153(var uParam0)//Position - 0xF9A2
{
	int iVar0;
	
	iVar0 = func_17(func_154(uParam0), -1, 0);
	return iVar0;
}

int func_154(var uParam0)//Position - 0xF9BA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_156(iVar0);
	if ((func_21() == 0 || func_155() == 0) || (func_21() == 999 && func_155() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 728;
				break;
			
			case 1:
				return 729;
				break;
			
			case 2:
				return 730;
				break;
			
			case 3:
				return 731;
				break;
			
			case 4:
				return 732;
				break;
			
			case 5:
				return 733;
				break;
			
			case 6:
				return 734;
				break;
			
			case 7:
				return 735;
				break;
			
			case 8:
				return 736;
				break;
			
			case 9:
				return 737;
				break;
			
			case 10:
				return 738;
				break;
			}
	}
	return 2903;
}

int func_155()//Position - 0xFAAD
{
	return Global_5F7D;
}

int func_156(int iParam0)//Position - 0xFAB8
{
	return (iParam0 / 32);
}

bool func_157()//Position - 0xFAC5
{
	return Global_141424;
}

int func_158(int iParam0, int iParam1, int iParam2)//Position - 0xFAD1
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 22)
				{
					if (func_163() && (Global_40001.f_17E2 || func_160(3606, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			
			case 9:
				if (iParam2 == 17)
				{
					return 0;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (func_163() && (Global_40001.f_17E2 || func_160(3607, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 20)
				{
					if (func_159() && Global_40001.f_1349)
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 == 23)
				{
					if (func_163() && (Global_40001.f_17E2 || func_160(3606, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (func_163() && (Global_40001.f_17E2 || func_160(3607, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			}
	}
	return 1;
}

var func_159()//Position - 0xFC20
{
	return DLC::IS_DLC_PRESENT(-1357982869);
}

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0xFC31
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_162(iParam0, iParam1);
	uVar2 = func_161(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_161(int iParam0)//Position - 0xFC6E
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_162(int iParam0, int iParam1)//Position - 0xFDCE
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

var func_163()//Position - 0xFF19
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_164(int iParam0, int iParam1)//Position - 0xFF2A
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 23;
				break;
			
			case 7:
				return 30;
				break;
			
			case 8:
				return 35;
				break;
			
			case 9:
				return 19;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 14;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 24;
				break;
			
			case 8:
				return 35;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 14;
				break;
			
			case 13:
				return 8;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
			}
	}
	return 0;
}

bool func_165(int iParam0)//Position - 0x1002C
{
	return func_166(func_196(iParam0));
}

bool func_166(int iParam0)//Position - 0x1003E
{
	if (iParam0 == -1 || iParam0 == 102)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_200000[func_167() /*8053*/].f_167C.f_27[(iParam0 / 32)], (iParam0 % 32));
}

int func_167()//Position - 0x1007C
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_168(int iParam0)//Position - 0x10089
{
	return func_151(func_196(iParam0));
	return 1;
}

int func_169(int iParam0)//Position - 0x1009F
{
	if (func_174(iParam0))
	{
		if (!func_173())
		{
			return 0;
		}
	}
	else if (func_172(iParam0))
	{
		if (!func_171())
		{
			return 0;
		}
	}
	else if (func_170(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)//Position - 0x100E5
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if ((((((((iVar0 == 93 || iVar0 == 94) || iVar0 == 95) || iVar0 == 96) || iVar0 == 97) || iVar0 == 98) || iVar0 == 99) || iVar0 == 100) || iVar0 == 101)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x1015A
{
	if (func_163() && (Global_40001.f_17E2 || func_160(3607, -1, -1)))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x10189
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if (iVar0 == 92)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x101A5
{
	return 0;
}

int func_174(int iParam0)//Position - 0x101AE
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if (((iVar0 == 51 || iVar0 == 52) || iVar0 == 53) || iVar0 == 54)
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)//Position - 0x101EC
{
	return func_166(func_198(iParam0));
}

int func_176(int iParam0)//Position - 0x101FE
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return func_151(func_198(iParam0));
	return 1;
}

int func_177()//Position - 0x10237
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		return 30;
	}
	return 19;
}

void func_178(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)//Position - 0x1025A
{
	struct<355> Var0;
	
	Var0 = 110;
	Var0.f_6F = 110;
	Var0.f_DF = 110;
	Var0.f_14E = 6;
	Var0.f_155 = 6;
	Var0.f_15C = 6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_185(uParam0, &Var0, func_195(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, iParam4, uParam5, uParam6);
	}
	else if (iParam2 == 1)
	{
		func_181(uParam0, &Var0, func_195(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	else
	{
		func_179(uParam0, &Var0, func_195(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	*uParam1 = { Var0 };
}

void func_179(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x102F5
{
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}

int func_180(bool bParam0, bool bParam1)//Position - 0x10531
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_29C.f_2AB, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

void func_181(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1059D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	FILES::INIT_SHOP_PED_COMPONENT(&uVar0);
	switch (func_182())
	{
		case 0:
			iVar3 = 6;
			break;
		
		case 1:
			iVar3 = 21;
			break;
		
		case 2:
			iVar3 = 9;
			break;
	}
	iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uParam2, 6, -1, 0, 0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &uVar0);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(uVar0))
		{
			iVar4 = (iVar3 + iVar1);
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(iVar4);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		iVar1++;
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(12);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_180(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}

int func_182()//Position - 0x10A0E
{
	func_183();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_183()//Position - 0x10A27
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_184(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_41(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_184(int iParam0)//Position - 0x10B24
{
	return Global_8861 == iParam0;
}

void func_185(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x10B32
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	FILES::INIT_SHOP_PED_COMPONENT(&Var0);
	switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		case joaat("mp_m_freemode_01"):
			iVar3 = 91;
			break;
		
		case joaat("mp_f_freemode_01"):
			iVar3 = 92;
			break;
	}
	iVar6 = 1;
	iVar7 = 0;
	while (iVar7 < *uParam5)
	{
		(*uParam5)[iVar7] = 0;
		(*uParam6)[iVar7] = 0;
		iVar7++;
	}
	Global_280003 = iParam3;
	Global_26CE93 = iParam4 == -1;
	iVar8 = 0;
	iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uParam2, 6, -1, 0, 0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &Var0);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
		{
			if (!func_190(Var0, Var0.f_1, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var0.f_1, joaat("NIGHT_VISION"), 0))
			{
				iVar5 = func_189(&(Var0.f_9));
				if (func_188(iParam4, iVar5))
				{
					MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
					if (!func_186(Var0.f_1, 2, 1, 1, -1))
					{
						MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
					}
					iVar4 = (iVar3 + iVar8);
					Stack.Push(uParam1);
					Stack.Push(iParam2);
					Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
					Stack.Push(iParam3);
					Stack.Push(0);
					Stack.Push(iVar4);
					Stack.Push(2);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(iVar6);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(*uParam0);
				}
			}
			iVar8++;
		}
		iVar1++;
	}
	iVar5 = 14;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 15;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 16;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 17;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 18;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(23);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 19;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(29);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 20;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 21;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(40);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 22;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(46);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 23;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(52);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 24;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(58);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(59);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 25;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(65);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(66);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 26;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(72);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 27;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(78);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 28;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(84);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 29;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 30;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 31;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 32;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 33;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 34;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 35;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(24);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(25);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 36;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(31);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 37;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(37);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 38;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(43);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(44);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 39;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 40;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(55);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(56);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 41;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(62);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 42;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(68);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 43;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 44;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(79);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 45;
	Global_26C92A = 0;
	Global_26C929 = 0;
	if (func_188(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_26C929)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_26C92A)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
}

int func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x1248E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_10A08;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_187(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_17(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(uVar3, iVar1);
	}
	return 0;
}

bool func_187(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x124D0
{
	int iVar0;
	
	*uParam2 = 2903;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_26CA8E)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1745;
					break;
				
				case 1:
					*uParam2 = 1746;
					break;
				
				case 2:
					*uParam2 = 1747;
					break;
				
				case 3:
					*uParam2 = 1748;
					break;
				
				case 4:
					*uParam2 = 1749;
					break;
				
				case 5:
					*uParam2 = 1750;
					break;
				
				case 6:
					*uParam2 = 1757;
					break;
				
				case 7:
					*uParam2 = 1758;
					break;
				
				case 8:
					*uParam2 = 1759;
					break;
				
				case 9:
					*uParam2 = 1760;
					break;
				
				case 10:
					*uParam2 = 1761;
					break;
				
				case 11:
					*uParam2 = 1762;
					break;
				
				case 12:
					*uParam2 = 1763;
					break;
				
				case 13:
					*uParam2 = 1771;
					break;
				
				case 14:
					*uParam2 = 1772;
					break;
				
				case 15:
					*uParam2 = 1873;
					break;
				
				case 16:
					*uParam2 = 1874;
					break;
				
				case 17:
					*uParam2 = 1905;
					break;
				
				case 18:
					*uParam2 = 1917;
					break;
				
				case 19:
					*uParam2 = 1918;
					break;
				
				case 20:
					*uParam2 = 1919;
					break;
				
				case 21:
					*uParam2 = 1920;
					break;
				
				case 22:
					*uParam2 = 1921;
					break;
				
				case 23:
					*uParam2 = 2025;
					break;
				
				case 24:
					*uParam2 = 2026;
					break;
				
				case 25:
					*uParam2 = 2052;
					break;
				
				case 26:
					*uParam2 = 2053;
					break;
				
				case 27:
					*uParam2 = 2054;
					break;
				
				case 28:
					*uParam2 = 2055;
					break;
				
				case 29:
					*uParam2 = 2056;
					break;
				
				case 30:
					*uParam2 = 2057;
					break;
				
				case 31:
					*uParam2 = 2058;
					break;
				
				case 32:
					*uParam2 = 2059;
					break;
				
				case 33:
					*uParam2 = 2060;
					break;
				
				case 34:
					*uParam2 = 2061;
					break;
				
				case 35:
					*uParam2 = 2308;
					break;
				
				case 36:
					*uParam2 = 2309;
					break;
				
				case 37:
					*uParam2 = 2345;
					break;
				
				case 38:
					*uParam2 = 2346;
					break;
				
				case 39:
					*uParam2 = 2347;
					break;
				
				case 40:
					*uParam2 = 2348;
					break;
				
				case 41:
					*uParam2 = 2407;
					break;
				
				case 42:
					*uParam2 = 2408;
					break;
				
				case 43:
					*uParam2 = 2409;
					break;
				
				case 44:
					*uParam2 = 2410;
					break;
				
				case 45:
					*uParam2 = 2411;
					break;
				
				case 46:
					*uParam2 = 2412;
					break;
				
				case 47:
					*uParam2 = 2413;
					break;
				
				case 48:
					*uParam2 = 2414;
					break;
				
				case 49:
					*uParam2 = 2415;
					break;
				
				case 50:
					*uParam2 = 2416;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1764;
					break;
				
				case 7:
					*uParam2 = 1765;
					break;
				
				case 8:
					*uParam2 = 1766;
					break;
				
				case 9:
					*uParam2 = 1767;
					break;
				
				case 10:
					*uParam2 = 1768;
					break;
				
				case 11:
					*uParam2 = 1769;
					break;
				
				case 12:
					*uParam2 = 1770;
					break;
				
				case 13:
					*uParam2 = 1773;
					break;
				
				case 14:
					*uParam2 = 1774;
					break;
				
				case 15:
					*uParam2 = 1875;
					break;
				
				case 16:
					*uParam2 = 1876;
					break;
				
				case 17:
					*uParam2 = 1906;
					break;
				
				case 18:
					*uParam2 = 1922;
					break;
				
				case 19:
					*uParam2 = 1923;
					break;
				
				case 20:
					*uParam2 = 1924;
					break;
				
				case 21:
					*uParam2 = 1925;
					break;
				
				case 22:
					*uParam2 = 1926;
					break;
				
				case 23:
					*uParam2 = 2027;
					break;
				
				case 24:
					*uParam2 = 2028;
					break;
				
				case 25:
					*uParam2 = 2062;
					break;
				
				case 26:
					*uParam2 = 2063;
					break;
				
				case 27:
					*uParam2 = 2064;
					break;
				
				case 28:
					*uParam2 = 2065;
					break;
				
				case 29:
					*uParam2 = 2066;
					break;
				
				case 30:
					*uParam2 = 2067;
					break;
				
				case 31:
					*uParam2 = 2068;
					break;
				
				case 32:
					*uParam2 = 2069;
					break;
				
				case 33:
					*uParam2 = 2070;
					break;
				
				case 34:
					*uParam2 = 2071;
					break;
				
				case 35:
					*uParam2 = 2310;
					break;
				
				case 36:
					*uParam2 = 2311;
					break;
				
				case 37:
					*uParam2 = 2349;
					break;
				
				case 38:
					*uParam2 = 2350;
					break;
				
				case 39:
					*uParam2 = 2351;
					break;
				
				case 40:
					*uParam2 = 2352;
					break;
				
				case 41:
					*uParam2 = 2417;
					break;
				
				case 42:
					*uParam2 = 2418;
					break;
				
				case 43:
					*uParam2 = 2419;
					break;
				
				case 44:
					*uParam2 = 2420;
					break;
				
				case 45:
					*uParam2 = 2421;
					break;
				
				case 46:
					*uParam2 = 2422;
					break;
				
				case 47:
					*uParam2 = 2423;
					break;
				
				case 48:
					*uParam2 = 2424;
					break;
				
				case 49:
					*uParam2 = 2425;
					break;
				
				case 50:
					*uParam2 = 2426;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 2903;
}

int func_188(int iParam0, int iParam1)//Position - 0x12B71
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_189(char* sParam0)//Position - 0x12B8F
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return -2;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 1577121865:
		case 884057515:
		case 2055188806:
		case 1362452146:
		case -1761842625:
		case 665775322:
		case 618391324:
		case 497473714:
		case 123808807:
		case -231538229:
			return 0;
			break;
		
		case 396231341:
		case 1312059353:
		case 980600918:
		case 2040481470:
		case -1485364627:
			return 1;
			break;
		
		case 785834208:
		case 544621599:
		case 1398581739:
		case 1157565744:
		case 1052836024:
			return 2;
			break;
		
		case 885914480:
		case 1110382134:
		case -2025250711:
		case -1223458819:
		case 1806133542:
			return 3;
			break;
		
		case 119592333:
		case -1585051047:
		case -1278497052:
		case -1109736702:
		case -1316574634:
			return 4;
			break;
		
		case -743251029:
		case -1459843521:
		case -283075962:
		case -997243548:
		case -1711837131:
			return 5;
			break;
		
		case 1346719200:
		case -231468525:
		case 76461768:
		case 382786380:
		case 690257907:
			return 6;
			break;
		
		case -529982912:
		case -425711954:
		case -184040579:
		case 187822033:
		case -1722577898:
			return 7;
			break;
		
		case 5888009:
		case 312966308:
		case -672463060:
		case -231851086:
		case -1527144118:
			return 8;
			break;
		
		case 288802011:
		case 1057005678:
		case 901877232:
		case 1679059605:
		case 1510233717:
		case -2016005616:
			return 9;
			break;
		
		case 239253137:
		case 1536545078:
		case 834633098:
		case -10053415:
		case -782254908:
			return 10;
			break;
		
		case 526112963:
		case -655766568:
		case -431298918:
		case 2082181693:
		case -1982485071:
			return 11;
			break;
		
		case -14781889:
		case -2044526518:
		case -1737906985:
		case 1701920483:
		case -1222188463:
			return 12;
			break;
		
		case -2145651656:
		case 1407032252:
		case 478784789:
		case 1849774211:
		case 992406095:
			return 13;
			break;
	}
	return -2;
}

int func_190(int iParam0, int iParam1, int iParam2)//Position - 0x12DE8
{
	switch (iParam0)
	{
		case joaat("CU_XMAS_CLOTHES"):
		case joaat("CU_XMAS2_CLOTHES"):
			if (Global_40001.f_1BFF)
			{
				return 1;
			}
			break;
		
		case joaat("CU_XMAS2_MASKS"):
			switch (iParam1)
			{
				case -970054678:
				case -840010097:
					return !func_160(3750, -1, -1);
					break;
			}
			if (Global_40001.f_1C00)
			{
				return 1;
			}
			break;
		
		case joaat("CU_VAL_CLOTHES"):
			if (func_194())
			{
				switch (iParam1)
				{
					case joaat("DLC_MP_VAL_F_JBIB2_0"):
					case joaat("DLC_MP_VAL_F_JBIB2_1"):
					case joaat("DLC_MP_VAL_F_JBIB2_2"):
					case joaat("DLC_MP_VAL_F_ACCS0_0"):
					case joaat("DLC_MP_VAL_F_ACCS0_1"):
					case joaat("DLC_MP_VAL_F_ACCS0_2"):
					case joaat("DLC_MP_VAL_F_ACCS1_0"):
					case joaat("DLC_MP_VAL_F_ACCS1_1"):
					case joaat("DLC_MP_VAL_F_ACCS1_2"):
						return 1;
						break;
					}
			}
			if ((!Global_40001.f_1349 && !func_186(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_VALENTINE_TATTOOS"):
			if (!Global_40001.f_1349 && !func_191(iParam1, -1))
			{
				return 1;
			}
			break;
		
		case joaat("CU_INDI_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IND_F_PHEAD_6_0"):
				case joaat("DLC_MP_IND_M_PHEAD_6_0"):
					return !func_160(3594, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_1"):
				case joaat("DLC_MP_IND_M_PHEAD_6_1"):
					return !func_160(3595, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_2"):
				case joaat("DLC_MP_IND_M_PHEAD_6_2"):
					return !func_160(3596, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_3"):
				case joaat("DLC_MP_IND_M_PHEAD_6_3"):
					return !func_160(3597, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_4"):
				case joaat("DLC_MP_IND_M_PHEAD_6_4"):
					return !func_160(3598, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_5"):
				case joaat("DLC_MP_IND_M_PHEAD_6_5"):
					return !func_160(3599, -1, -1);
					break;
				
				case joaat("DLC_MP_IND_F_HAIR0_0"):
				case joaat("DLC_MP_IND_F_HAIR0_1"):
				case joaat("DLC_MP_IND_F_HAIR0_2"):
				case joaat("DLC_MP_IND_F_HAIR0_3"):
				case joaat("DLC_MP_IND_F_HAIR0_4"):
				case joaat("DLC_MP_IND_M_HAIR0_0"):
				case joaat("DLC_MP_IND_M_HAIR0_1"):
				case joaat("DLC_MP_IND_M_HAIR0_2"):
				case joaat("DLC_MP_IND_M_HAIR0_3"):
				case joaat("DLC_MP_IND_M_HAIR0_4"):
					if (((!Global_40001.f_17E2 && !func_186(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2)) && !func_160(3606, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if ((!Global_40001.f_17E2 && !func_186(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_INDI_TATTOOS"):
			if (!Global_40001.f_17E2 && !func_191(iParam1, -1))
			{
				return 1;
			}
			break;
		
		case joaat("CU_LTS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LTS_M_BERD_2_0"):
				case joaat("DLC_MP_LTS_F_BERD_2_0"):
					return !func_160(3616, -1, -1);
					break;
			}
			break;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)//Position - 0x130BC
{
	var uVar0;
	int iVar1;
	
	if (func_193(iParam0) == 2903)
	{
		return 0;
	}
	uVar0 = func_192(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_152(iVar1));
}

var func_192(var uParam0, int iParam1)//Position - 0x130EE
{
	var uVar0;
	
	uVar0 = func_17(func_193(uParam0), iParam1, 0);
	return uVar0;
}

int func_193(var uParam0)//Position - 0x13107
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_156(iVar0);
	if ((func_21() == 0 || func_155() == 0) || (func_21() == 999 && func_155() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1026;
				break;
			
			case 1:
				return 1027;
				break;
			
			case 2:
				return 1028;
				break;
			
			case 3:
				return 1029;
				break;
			
			case 4:
				return 1030;
				break;
			
			case 5:
				return 1489;
				break;
			
			case 6:
				return 1742;
				break;
			
			case 7:
				return 1934;
				break;
			
			case 8:
				return 1935;
				break;
			
			case 9:
				return 1936;
				break;
			
			case 10:
				return 1937;
				break;
			
			case 11:
				return 1938;
				break;
			
			case 12:
				return 1939;
				break;
			
			case 13:
				return 2378;
				break;
			
			case 14:
				return 2398;
				break;
			
			case 15:
				return 2401;
				break;
			
			case 16:
				return 2404;
				break;
			}
	}
	return 2903;
}

bool func_194()//Position - 0x13254
{
	return DLC::IS_DLC_PRESENT(-204307980);
}

int func_195(int iParam0)//Position - 0x13265
{
	if (iParam0 == joaat("player_zero"))
	{
		return 0;
	}
	if (iParam0 == joaat("player_one"))
	{
		return 1;
	}
	if (iParam0 == joaat("player_two"))
	{
		return 2;
	}
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		return 3;
	}
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		return 4;
	}
	return 5;
}

int func_196(int iParam0)//Position - 0x132C3
{
	switch (iParam0)
	{
		case 0:
			return 29;
		
		case 1:
			return 28;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 39;
		
		case 12:
			return 40;
		
		case 13:
			return 41;
		
		case 14:
			return 42;
		
		case 15:
			return 43;
		
		case 16:
			return 44;
		
		case 17:
			return 45;
		
		case 18:
			return 46;
		
		case 19:
			return 47;
		
		case 20:
			return 48;
		
		case 21:
			return 49;
		
		case 22:
			return 50;
		
		case 23:
			return 51;
		
		case 24:
			return 52;
		
		case 25:
			return 53;
		
		case 26:
			return 54;
		
		case 27:
			return 55;
		
		case 28:
			return 56;
		
		case 29:
			return 57;
		
		case 30:
			return 58;
		
		case 31:
			return 59;
		
		case 32:
			return 60;
		
		case 33:
			return 91;
		
		case 34:
			return 92;
		
		case 35:
			return 93;
		
		case 36:
			return 94;
		
		case 37:
			return 95;
		
		case 38:
			return 96;
		
		case 39:
			return 97;
		
		case 40:
			return 98;
		
		case 41:
			return 99;
		
		case 42:
			return 100;
		
		case 43:
			return 101;
		
		default:
	}
	return 29;
}

int func_197(int iParam0)//Position - 0x134B8
{
	switch (iParam0)
	{
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
			return 4;
			break;
		
		case 32:
			return 6;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 10;
			break;
		
		case 36:
			return 1;
			break;
		
		case 37:
			return 1;
			break;
		
		case 38:
			return 12;
			break;
		
		case 39:
			return 14;
			break;
		
		case 40:
			return 16;
			break;
		
		case 41:
			return 18;
			break;
		
		case 42:
			return 20;
			break;
		
		case 43:
			return 8;
			break;
		
		case 44:
			return 1;
			break;
		
		case 45:
			return 1;
			break;
		
		case 46:
			return 7;
			break;
		
		case 47:
			return 5;
			break;
		
		case 48:
			return 21;
			break;
		
		case 49:
			return 19;
			break;
		
		case 50:
			return 17;
			break;
		
		case 51:
			return 0;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 0;
			break;
		
		case 54:
			return 0;
			break;
		
		case 55:
			return 9;
			break;
		
		case 56:
			return 13;
			break;
		
		case 57:
			return 11;
			break;
		
		case 58:
			return 15;
			break;
		
		case 59:
			return 23;
			break;
		
		case 60:
			return 25;
			break;
		
		case 91:
			return 1;
			break;
		
		case 92:
			return 1;
			break;
		
		case 93:
			return 1;
			break;
		
		case 94:
			return 1;
			break;
		
		case 95:
			return 1;
			break;
		
		case 96:
			return 1;
			break;
		
		case 97:
			return 1;
			break;
		
		case 98:
			return 1;
			break;
		
		case 99:
			return 1;
			break;
		
		case 100:
			return 1;
			break;
		
		case 101:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		case 63:
			return 6;
			break;
		
		case 64:
			return 1;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 22;
			break;
		
		case 67:
			return 14;
			break;
		
		case 68:
			return 8;
			break;
		
		case 69:
			return 1;
			break;
		
		case 70:
			return 20;
			break;
		
		case 71:
			return 10;
			break;
		
		case 72:
			return 1;
			break;
		
		case 73:
			return 1;
			break;
		
		case 74:
			return 18;
			break;
		
		case 75:
			return 16;
			break;
		
		case 76:
			return 12;
			break;
		
		case 77:
			return 24;
			break;
		
		case 78:
			return 26;
			break;
		
		case 80:
			return 1;
			break;
		
		case 81:
			return 1;
			break;
		
		case 82:
			return 1;
			break;
		
		case 83:
			return 1;
			break;
		
		case 84:
			return 1;
			break;
		
		case 85:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 87:
			return 1;
			break;
		
		case 88:
			return 1;
			break;
		
		case 89:
			return 1;
			break;
		
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x13897
{
	switch (iParam0)
	{
		case 0:
			return 61;
		
		case 1:
			return 69;
		
		case 2:
			return 63;
		
		case 3:
			return 64;
		
		case 4:
			return 65;
		
		case 5:
			return 66;
		
		case 6:
			return 67;
		
		case 7:
			return 68;
		
		case 8:
			return 69;
		
		case 9:
			return 70;
		
		case 10:
			return 71;
		
		case 11:
			return 72;
		
		case 12:
			return 73;
		
		case 13:
			return 74;
		
		case 14:
			return 75;
		
		case 15:
			return 76;
		
		case 16:
			return 77;
		
		case 17:
			return 78;
		
		case 18:
			return 79;
		
		case 19:
			return 80;
		
		case 20:
			return 80;
		
		case 27:
			return 81;
		
		case 28:
			return 82;
		
		case 29:
			return 83;
		
		case 30:
			return 84;
		
		case 31:
			return 85;
		
		case 32:
			return 86;
		
		case 33:
			return 87;
		
		case 36:
			return 88;
		
		case 34:
			return 89;
		
		case 35:
			return 90;
		
		default:
	}
	return 61;
}

void func_199(var uParam0)//Position - 0x139FD
{
	if (Global_4354.f_FC8 >= 3 || Global_4354.f_FC7 >= 4)
	{
		return;
	}
	Global_4354.f_F85[Global_4354.f_FC7] = 2;
	Global_4354.f_FC7++;
	Global_4354.f_F8A[Global_4354.f_FC8] = uParam0;
	Global_4354.f_FC8++;
}

int func_200(int iParam0)//Position - 0x13A5C
{
	if (!func_201())
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			
			case 1:
				return 1;
			
			case 2:
				return 1;
			
			case 3:
				return 1;
			
			case 4:
				return 1;
			
			case 5:
				return 1;
			
			case 7:
				return 1;
			
			case 8:
				return 1;
			
			case 9:
				return 1;
			
			case 10:
				return 1;
			
			case 11:
				return 1;
			
			case 13:
				return 12;
			
			case 14:
				return 12;
			
			case 15:
				return 12;
			
			case 16:
				return 12;
			
			case 17:
				return 12;
			
			case 19:
				return 1;
			
			case 20:
				return 1;
			
			case 21:
				return 1;
			
			case 22:
				return 1;
			
			case 23:
				return 1;
			
			case 26:
				return 8;
			
			case 27:
				return 8;
			
			case 28:
				return 8;
			
			case 29:
				return 8;
			
			case 30:
				return 8;
			
			case 32:
				return 18;
			
			case 33:
				return 18;
			
			case 34:
				return 18;
			
			case 35:
				return 18;
			
			case 36:
				return 18;
			
			case 38:
				return 1;
			
			case 39:
				return 1;
			
			case 40:
				return 1;
			
			case 41:
				return 1;
			
			case 42:
				return 1;
			
			case 45:
				return 1;
			
			case 46:
				return 1;
			
			case 47:
				return 1;
			
			case 48:
				return 1;
			
			case 49:
				return 1;
			
			case 50:
				return 14;
			
			case 51:
				return 14;
			
			case 52:
				return 14;
			
			case 53:
				return 14;
			
			case 54:
				return 14;
			
			case 57:
				return 16;
			
			case 58:
				return 16;
			
			case 59:
				return 16;
			
			case 60:
				return 16;
			
			case 61:
				return 16;
			
			case 63:
				return 24;
			
			case 64:
				return 24;
			
			case 65:
				return 24;
			
			case 66:
				return 24;
			
			case 67:
				return 24;
			
			case 69:
				return 22;
			
			case 70:
				return 22;
			
			case 71:
				return 22;
			
			case 72:
				return 22;
			
			case 73:
				return 22;
			
			case 74:
				return 1;
			
			case 75:
				return 1;
			
			case 76:
				return 1;
			
			case 77:
				return 1;
			
			case 78:
				return 1;
			
			case 80:
				return 20;
			
			case 81:
				return 20;
			
			case 82:
				return 20;
			
			case 83:
				return 20;
			
			case 84:
				return 20;
			
			case 85:
				return 6;
			
			case 86:
				return 6;
			
			case 87:
				return 6;
			
			case 88:
				return 6;
			
			case 89:
				return 6;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 1;
			
			case 3:
				return 1;
			
			case 4:
				return 1;
			
			case 5:
				return 1;
			
			case 7:
				return 1;
			
			case 8:
				return 1;
			
			case 9:
				return 1;
			
			case 10:
				return 1;
			
			case 11:
				return 1;
			
			case 13:
				return 1;
			
			case 14:
				return 1;
			
			case 15:
				return 1;
			
			case 16:
				return 1;
			
			case 17:
				return 1;
			
			case 24:
				return 1;
			
			case 25:
				return 1;
			
			case 26:
				return 1;
			
			case 27:
				return 1;
			
			case 28:
				return 1;
			
			case 35:
				return 1;
			
			case 36:
				return 1;
			
			case 37:
				return 1;
			
			case 38:
				return 1;
			
			case 39:
				return 1;
			
			case 60:
				return 1;
			
			case 61:
				return 1;
			
			case 62:
				return 1;
			
			case 63:
				return 1;
			
			case 64:
				return 1;
			
			case 85:
				return 1;
			
			case 86:
				return 1;
			
			case 87:
				return 1;
			
			case 88:
				return 1;
			
			case 89:
				return 1;
			
			case 41:
				return 6;
			
			case 42:
				return 6;
			
			case 43:
				return 6;
			
			case 44:
				return 6;
			
			case 45:
				return 6;
			
			case joaat("mpsv_lp0_31"):
				return 8;
			
			case 80:
				return 8;
			
			case 81:
				return 8;
			
			case 82:
				return 8;
			
			case 83:
				return 8;
			
			case 18:
				return 10;
			
			case 19:
				return 10;
			
			case 20:
				return 10;
			
			case 21:
				return 10;
			
			case 22:
				return 10;
			
			case 67:
				return 12;
			
			case 68:
				return 12;
			
			case 69:
				return 12;
			
			case 70:
				return 12;
			
			case 71:
				return 12;
			
			case 53:
				return 14;
			
			case 54:
				return 14;
			
			case 55:
				return 14;
			
			case 56:
				return 14;
			
			case 57:
				return 14;
			
			case 47:
				return 16;
			
			case 48:
				return 16;
			
			case 49:
				return 16;
			
			case 50:
				return 16;
			
			case 51:
				return 16;
			
			case 30:
				return 18;
			
			case 31:
				return 18;
			
			case 32:
				return 18;
			
			case 33:
				return 18;
			
			case 34:
				return 18;
			
			case 73:
				return 20;
			
			case 74:
				return 20;
			
			case 75:
				return 20;
			
			case 76:
				return 20;
			
			case 77:
				return 20;
			
			case 0:
				return 25;
			}
		
		default:
	}
	return 0;
}

bool func_201()//Position - 0x140BB
{
	return func_202(PLAYER::PLAYER_ID());
}

int func_202(int iParam0)//Position - 0x140CB
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_203(char* sParam0, int iParam1, int iParam2)//Position - 0x140EA
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_F81), sParam0, 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = iParam1;
	Global_4354.f_FCC = MISC::GET_GAME_TIMER();
	Global_4354.f_FCD = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
}

void func_204(var uParam0)//Position - 0x1414F
{
	*uParam0 = { Global_4354.f_F81 };
}

void func_205(var uParam0, int iParam1)//Position - 0x14163
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	struct<12> Var8;
	struct<2> Var9;
	float fVar10;
	struct<2> Var11;
	struct<2> Var12;
	int iVar13;
	
	if (PED::IS_PED_INJURED(iParam1))
	{
		return;
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
	{
		func_310(iParam1, uParam0);
		func_308(uParam0);
		if ((uParam0->f_1EE == 5 || uParam0->f_1EE == 12) || uParam0->f_1EE == 9)
		{
			uParam0->f_2A5 = 1;
		}
		else
		{
			uParam0->f_2A5 = 0;
		}
		func_282(iParam1, uParam0->f_1EE);
		return;
	}
	iVar0 = 0;
	fVar1 = -1f;
	iVar7 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_27(&(uParam0->f_DA), 300);
	switch (uParam0->f_1EE)
	{
		case 5:
			uParam0->f_67.f_F = 0;
			func_279(0, 0, 0, 1);
			if (func_278())
			{
				if (Global_26CF15 == uParam0->f_67.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_67.f_1 = Global_26CF15;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || func_277(uParam0->f_DA.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_8 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				while (uParam0->f_67.f_1 >= 0 && !func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				if (!func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = 6;
				}
				while (uParam0->f_67.f_1 >= 0 && !func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				func_382(uParam0->f_67.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || func_274(uParam0->f_DA.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_9 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1++;
				while (uParam0->f_67.f_1 <= 6 && !func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1++;
				}
				if (!func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = 0;
				}
				while (uParam0->f_67.f_1 <= 6 && !func_275(iVar7, func_276(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1++;
				}
				func_382(uParam0->f_67.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_2AA = -1;
				uParam0->f_1EE = func_276(uParam0->f_67.f_1);
				uParam0->f_22E = 1;
				uParam0->f_67.f_1 = 0;
				uParam0->f_25E = 0;
				if (uParam0->f_1EE == 9)
				{
					func_282(iParam1, uParam0->f_1EE);
				}
				if ((uParam0->f_1EE == 5 || uParam0->f_1EE == 12) || uParam0->f_1EE == 9)
				{
					uParam0->f_2A5 = 1;
				}
				else
				{
					uParam0->f_2A5 = 0;
				}
				if (uParam0->f_1EE == 12)
				{
					while (uParam0->f_67.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_67.f_1)))
					{
						uParam0->f_67.f_1++;
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_67.f_F = 0;
			func_279(0, 0, 0, 1);
			if (func_278())
			{
				if (Global_26CF15 == uParam0->f_67.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_67.f_1 = Global_26CF15;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || func_277(uParam0->f_DA.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_8 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				while (uParam0->f_67.f_1 >= 0 && !func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				if (!func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = 2;
				}
				while (uParam0->f_67.f_1 >= 0 && !func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				func_382(uParam0->f_67.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || func_274(uParam0->f_DA.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_9 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1++;
				while (uParam0->f_67.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1++;
				}
				if (!func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = 0;
				}
				while (uParam0->f_67.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1++;
				}
				func_382(uParam0->f_67.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_1EE = func_273(uParam0->f_67.f_1);
				if ((uParam0->f_1EE == 5 || uParam0->f_1EE == 12) || uParam0->f_1EE == 9)
				{
					uParam0->f_2A5 = 1;
				}
				else
				{
					uParam0->f_2A5 = 0;
				}
				uParam0->f_22E = 1;
				uParam0->f_67.f_1 = 0;
			}
			break;
		
		default:
			if ((uParam0->f_67.f_1 != -1 && uParam0->f_1CE) && !uParam0->f_1CD)
			{
				if (func_393(iVar7, uParam0->f_1EE, uParam0->f_67.f_1, &Var8))
				{
					func_272(Var8.f_B, 2, -1);
				}
			}
			uParam0->f_67.f_F = 0;
			func_279(0, 0, 0, 1);
			if (func_278())
			{
				if (Global_26CF15 == uParam0->f_67.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_67.f_1 = Global_26CF15;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (uParam0->f_1CE)
					{
						uParam0->f_22E = 1;
						uParam0->f_232 = 1;
						uParam0->f_233 = func_271();
					}
					uParam0->f_1CD = !func_150(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
					uParam0->f_1CE = (!uParam0->f_1CD && !func_146(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1));
					uParam0->f_1CF = 0;
					func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
					if (uParam0->f_22E)
					{
						uParam0->f_2A4 = 1;
						func_250(uParam0, iParam1, 0, 0);
						uParam0->f_22E = 0;
					}
					else
					{
						func_240(uParam0, iVar7, 1);
					}
					func_382(uParam0->f_67.f_1, 1, 1);
					if (func_393(iVar7, uParam0->f_1EE, uParam0->f_67.f_1, &Var9))
					{
						uParam0->f_216 = { Var9.f_1 };
					}
					func_238(iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				if (func_117(uParam0))
				{
					if (HUD::_0x632B2940C67F4EA9(uParam0->f_250, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_25B = func_237(iVar7, uParam0->f_1EE, iVar5);
								uParam0->f_2A4 = 1;
								func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
								if (uParam0->f_2A4)
								{
									uParam0->f_2A4 = 1;
									func_250(uParam0, iParam1, 0, 0);
									uParam0->f_22E = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::_SET_CONTROL_NORMAL(2, 205, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::_SET_CONTROL_NORMAL(2, 206, 1f);
							}
						}
					}
				}
				if (func_236(uParam0, iVar7))
				{
					if (HUD::_0x632B2940C67F4EA9(uParam0->f_246, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_25A = func_237(iVar7, uParam0->f_1EE, iVar5);
								uParam0->f_2A4 = 1;
								func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
								if (uParam0->f_2A4)
								{
									uParam0->f_2A4 = 1;
									func_250(uParam0, iParam1, 0, 0);
									uParam0->f_22E = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::_SET_CONTROL_NORMAL(2, 207, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::_SET_CONTROL_NORMAL(2, 208, 1f);
							}
						}
					}
				}
				if (func_235(uParam0, iVar7))
				{
					fVar2 = (fLocal_64 - (Global_4353 / 2f));
					fVar3 = (func_116() + (fLocal_67 - (fLocal_66 / 2f)));
					fVar1 = func_232(4, fVar2, fVar3, Global_4353, 0.15f, 1f);
					if (fVar1 >= 0f && fVar1 != fLocal_62)
					{
						if (uParam0->f_1EE != 6)
						{
							uParam0->f_25F = fVar1;
							uParam0->f_2A4 = 1;
							func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
							func_240(uParam0, iVar7, 1);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_61, "CONTINUOUS_SLIDER", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					}
					else
					{
						if (uParam0->f_2A4)
						{
							uParam0->f_2A4 = 1;
							func_250(uParam0, iParam1, 0, 0);
							uParam0->f_22E = 0;
						}
						AUDIO::STOP_SOUND(iLocal_61);
					}
					fLocal_62 = fVar1;
				}
			}
			fVar10 = ((1f - 0.15f) / 20f);
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || func_277(uParam0->f_DA.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_8 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				while (uParam0->f_67.f_1 >= 0 && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				if (!func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (func_164(iVar7, uParam0->f_1EE) - 1);
				}
				while (uParam0->f_67.f_1 >= 0 && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				if (uParam0->f_67.f_1 < 0)
				{
					uParam0->f_67.f_1 = (func_164(iVar7, uParam0->f_1EE) - 1);
				}
				while (uParam0->f_67.f_1 >= 0 && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
				if (uParam0->f_1CE)
				{
					uParam0->f_22E = 1;
					uParam0->f_232 = 1;
					uParam0->f_233 = func_271();
				}
				uParam0->f_1CD = !func_150(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
				uParam0->f_1CE = (!uParam0->f_1CD && !func_146(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1));
				uParam0->f_1CF = 0;
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_22E)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
				else
				{
					func_240(uParam0, iVar7, 1);
				}
				func_382(uParam0->f_67.f_1, 1, 1);
				if (func_393(iVar7, uParam0->f_1EE, uParam0->f_67.f_1, &Var11))
				{
					uParam0->f_216 = { Var11.f_1 };
				}
				func_238(iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || func_274(uParam0->f_DA.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_9 = 0;
				uParam0->f_DA.f_4 = 0;
				uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_67.f_1++;
				while (uParam0->f_67.f_1 <= (func_164(iVar7, uParam0->f_1EE) - 1) && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1++;
				}
				if (!func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = 0;
				}
				while (uParam0->f_67.f_1 <= (func_164(iVar7, uParam0->f_1EE) - 1) && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1++;
				}
				if (uParam0->f_67.f_1 >= func_164(iVar7, uParam0->f_1EE))
				{
					uParam0->f_67.f_1 = 0;
				}
				while (uParam0->f_67.f_1 <= (func_164(iVar7, uParam0->f_1EE) - 1) && !func_158(iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1++;
				}
				if (uParam0->f_1CE)
				{
					uParam0->f_22E = 1;
					uParam0->f_232 = 1;
					uParam0->f_233 = func_271();
				}
				uParam0->f_1CD = !func_150(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
				uParam0->f_1CE = (!uParam0->f_1CD && !func_146(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1));
				uParam0->f_1CF = 0;
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_22E)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
				else
				{
					func_240(uParam0, iVar7, 1);
				}
				func_382(uParam0->f_67.f_1, 1, 1);
				if (func_393(iVar7, uParam0->f_1EE, uParam0->f_67.f_1, &Var12))
				{
					uParam0->f_216 = { Var12.f_1 };
				}
				func_238(iVar7, uParam0->f_1EE, uParam0->f_67.f_1);
			}
			else if ((func_230(uParam0, iVar7) && !(uParam0->f_1EE == 11 || uParam0->f_1EE == 14)) && (PAD::IS_CONTROL_JUST_PRESSED(2, 207) || (PAD::IS_CONTROL_PRESSED(2, 207) && uParam0->f_DA.f_E)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_E = 0;
				uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_25A = (uParam0->f_25A - 1);
				while (uParam0->f_25A >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A = (uParam0->f_25A - 1);
				}
				if (!func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A = (func_228(iVar7, uParam0->f_1EE) - 1);
				}
				while (uParam0->f_25A >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A = (uParam0->f_25A - 1);
				}
				if (uParam0->f_25A < 0)
				{
					uParam0->f_25A = (func_228(iVar7, uParam0->f_1EE) - 1);
				}
				while (uParam0->f_25A >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A = (uParam0->f_25A - 1);
				}
				if (!uParam0->f_25E)
				{
					uParam0->f_25B = PED::_0xAAA6A3698A69E048(uParam0->f_25A);
				}
				else
				{
					uParam0->f_25C = uParam0->f_25B;
				}
				uParam0->f_2A4 = 1;
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_2A4)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
			}
			else if ((func_230(uParam0, iVar7) && !(uParam0->f_1EE == 11 || uParam0->f_1EE == 14)) && (PAD::IS_CONTROL_JUST_PRESSED(2, 208) || (PAD::IS_CONTROL_PRESSED(2, 208) && uParam0->f_DA.f_F)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_DA.f_F = 0;
				uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_25A++;
				while (uParam0->f_25A <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A++;
				}
				if (!func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A = 0;
				}
				while (uParam0->f_25A <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A++;
				}
				if (uParam0->f_25A >= func_228(iVar7, uParam0->f_1EE))
				{
					uParam0->f_25A = 0;
				}
				while (uParam0->f_25A <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25A))
				{
					uParam0->f_25A++;
				}
				if (!uParam0->f_25E)
				{
					uParam0->f_25B = PED::_0xAAA6A3698A69E048(uParam0->f_25A);
				}
				else
				{
					uParam0->f_25C = uParam0->f_25B;
				}
				uParam0->f_2A4 = 1;
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_2A4)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
			}
			else if (func_230(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2, 205) || (PAD::IS_CONTROL_PRESSED(2, 205) && uParam0->f_DA.f_C)))
			{
				if (uParam0->f_1EE == 6)
				{
					if (uParam0->f_25E)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam0->f_DA.f_C = 0;
						uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_25B = (uParam0->f_25B - 1);
						while (uParam0->f_25B >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B = (uParam0->f_25B - 1);
						}
						if (!func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B = (func_228(iVar7, uParam0->f_1EE) - 1);
						}
						while (uParam0->f_25B >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B = (uParam0->f_25B - 1);
						}
						if (uParam0->f_25B < 0)
						{
							uParam0->f_25B = (func_228(iVar7, uParam0->f_1EE) - 1);
						}
						while (uParam0->f_25B >= 0 && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B = (uParam0->f_25B - 1);
						}
						uParam0->f_2A4 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					uParam0->f_DA.f_C = 0;
					uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_25F = (uParam0->f_25F - fVar10);
					if (uParam0->f_25F < 0.15f)
					{
						uParam0->f_25F = 0.15f;
					}
					uParam0->f_2A4 = 1;
				}
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_2A4)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
			}
			else if (func_230(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2, 206) || (PAD::IS_CONTROL_PRESSED(2, 206) && uParam0->f_DA.f_D)))
			{
				if (uParam0->f_1EE == 6)
				{
					if (uParam0->f_25E)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam0->f_DA.f_D = 0;
						uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_25B++;
						while (uParam0->f_25B <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B++;
						}
						if (!func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B = 0;
						}
						while (uParam0->f_25B <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B++;
						}
						if (uParam0->f_25B >= func_228(iVar7, uParam0->f_1EE))
						{
							uParam0->f_25B = 0;
						}
						while (uParam0->f_25B <= (func_228(iVar7, uParam0->f_1EE) - 1) && !func_229(uParam0->f_1EE, uParam0->f_25B))
						{
							uParam0->f_25B++;
						}
						uParam0->f_2A4 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					uParam0->f_DA.f_D = 0;
					uParam0->f_DA.f_10 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_DA.f_11 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_25F = (uParam0->f_25F + fVar10);
					if (uParam0->f_25F > 1f)
					{
						uParam0->f_25F = 1f;
					}
					uParam0->f_2A4 = 1;
				}
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_2A4)
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_22E = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_25E = !uParam0->f_25E;
				if (uParam0->f_1EE == 6)
				{
					if (!uParam0->f_25E)
					{
						uParam0->f_25C = uParam0->f_25B;
						uParam0->f_25B = PED::_0xAAA6A3698A69E048(uParam0->f_25A);
					}
					else
					{
						uParam0->f_25B = uParam0->f_25C;
					}
				}
				uParam0->f_2A4 = 1;
				func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				if (uParam0->f_2A4)
				{
					func_240(uParam0, iVar7, 1);
					uParam0->f_2A4 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_393(iVar7, uParam0->f_1EE, uParam0->f_67.f_1, &iVar13);
				if (func_392(iVar7, &iVar13, uParam0))
				{
					switch (uParam0->f_1EE)
					{
						case 7:
							func_203("HAIR_CUR_1", 4000, 0);
							break;
						
						case 6:
							func_203("HAIR_CUR_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							func_203("HAIR_CUR_3", 4000, 0);
							break;
						
						default:
							func_203("HAIR_CUR_9", 4000, 0);
							break;
					}
					uParam0->f_100 = func_404(uParam0->f_67.f_1);
				}
				else if (!func_150(uParam0, iVar7, uParam0->f_1EE, uParam0->f_67.f_1))
				{
					func_203("HAIR_LOCK", 4000, 0);
				}
				else if (!func_226(iVar13))
				{
					switch (uParam0->f_1EE)
					{
						case 7:
							func_203("HAIR_AFF_1", 4000, 0);
							break;
						
						case 6:
							func_203("HAIR_AFF_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							func_203("HAIR_AFF_3", 4000, 0);
							break;
						
						default:
							func_203("HAIR_AFF_9", 4000, 0);
							break;
					}
					func_224(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(*uParam0)));
					func_220(0, 10, 3);
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500()) && !func_211(78225582, func_219(uParam0->f_1EE), func_216(uParam0->f_1EE, uParam0->f_216, 0), 478352891, 1, iVar13, 1, 4, func_215(uParam0->f_1EE), 3))
				{
					func_206(func_209());
					func_203("CSHOP_FAIL", 4000, 0);
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
					{
						uParam0->f_67.f_19 = 1;
						uParam0->f_67.f_1A = 0;
					}
					uParam0->f_67.f_F = 1;
					func_310(iParam1, uParam0);
				}
			}
			break;
	}
}

void func_206(int iParam0)//Position - 0x15A6E
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_208())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_207(iParam0))
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

int func_207(int iParam0)//Position - 0x15ACF
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

int func_208()//Position - 0x15AF7
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

int func_209()//Position - 0x15B0B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_210(iVar0) != 2147483647)
		{
			if (func_207(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210(int iParam0)//Position - 0x15B45
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/];
	}
	return -1;
}

int func_211(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x15B69
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_208())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_26C40D = 1;
			return 0;
		}
		if (Global_252B28)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_26C40E = 1;
				return 0;
			}
		}
	}
	iVar1 = func_209();
	if (iVar1 == -1)
	{
		if (!func_213(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_212(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = uParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = uParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_26C240[iVar1 /*69*/].f_42 = Var2;
		Global_26C240[iVar1 /*69*/].f_43 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0)//Position - 0x15C6D
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)//Position - 0x15CD2
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_208())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_26C40D = 1;
			return 0;
		}
		if (Global_252B28)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
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
		else if (Global_26C240[iVar1 /*69*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_214(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_214(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)//Position - 0x15DB5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_26C240[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_208())
			{
				uParam0 = iVar0 + 900;
			}
			Global_26C240[iVar0 /*69*/].f_2 = 1;
			Global_26C240[iVar0 /*69*/].f_1 = iParam5;
			Global_26C240[iVar0 /*69*/].f_3 = uParam1;
			Global_26C240[iVar0 /*69*/].f_4 = iParam2;
			Global_26C240[iVar0 /*69*/].f_7 = uParam3;
			Global_26C240[iVar0 /*69*/].f_5 = 0;
			Global_26C240[iVar0 /*69*/] = uParam0;
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

int func_215(int iParam0)//Position - 0x15E89
{
	switch (iParam0)
	{
		case 6:
			return -427320424;
			break;
		
		case 7:
			return -812946581;
			break;
		
		case 8:
			return -1013875689;
			break;
		
		case 9:
			return 2031936565;
			break;
		
		case 10:
			return 521542439;
			break;
		
		case 11:
			return 29169062;
			break;
		
		case 13:
			return -1571138826;
			break;
		
		case 14:
			return 29169062;
			break;
		
		case 15:
			return -702756854;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_216(int iParam0, struct<4> Param1, int iParam2)//Position - 0x15F35
{
	char* sVar0;
	
	func_217(&sVar0, iParam0, Param1, iParam2);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_217(char* sParam0, int iParam1, struct<4> Param2, int iParam3)//Position - 0x15F51
{
	int iVar0;
	
	iVar0 = 999;
	switch (iParam1)
	{
		case 6:
			iVar0 = 0;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 3;
			break;
		
		case 10:
			iVar0 = 4;
			break;
		
		case 11:
			iVar0 = 5;
			break;
		
		case 13:
			iVar0 = 6;
			break;
		
		case 14:
			iVar0 = 7;
			break;
		
		case 15:
			iVar0 = 8;
			break;
		
		case 5:
		case 12:
			return;
			break;
		
		default:
			break;
	}
	if (iParam3 != 0)
	{
		func_218(sParam0, Param2, iParam3, 0, iVar0, 0, -1, -1);
	}
	else
	{
		func_218(sParam0, Param2, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 0, iVar0, 0, -1, -1);
	}
}

void func_218(char* sParam0, char[8] cParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1601A
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 4:
			if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam4)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam4)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			break;
	}
}

int func_219(int iParam0)//Position - 0x16458
{
	switch (iParam0)
	{
		case 6:
			return -1796535835;
			break;
		
		case 7:
			return -2052814106;
			break;
		
		case 8:
			return -1928802392;
			break;
		
		case 9:
			return 581564040;
			break;
		
		case 10:
			return 23048035;
			break;
		
		case 11:
			return 2117376854;
			break;
		
		case 13:
			return -1377881127;
			break;
		
		case 14:
			return 1701289268;
			break;
		
		case 15:
			return -504675202;
			break;
		
		default:
			break;
	}
	return -1796535835;
}

void func_220(int iParam0, int iParam1, int iParam2)//Position - 0x16508
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_72(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_223())
	{
		return;
	}
	if (!func_221())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_15F9E.f_526 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_252B13 = iParam1;
			Global_15F9E.f_526 = 1;
			Global_15F9E.f_527 = iParam2;
		}
	}
}

int func_221()//Position - 0x165E1
{
	if (func_222())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_222()//Position - 0x16601
{
	return Global_2528EC;
}

bool func_223()//Position - 0x1660D
{
	return Global_252B28;
}

void func_224(int iParam0, var uParam1, int iParam2)//Position - 0x16619
{
	Global_15F9E.f_528 = iParam0;
	Global_15F9E.f_529 = uParam1;
	Global_15F9E.f_52A = iParam2;
}

char* func_225(int iParam0)//Position - 0x1663C
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_226(int iParam0)//Position - 0x1691F
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (func_590(1))
	{
		if (Global_10A95)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, 0, 1, 0, -1))
			{
				return 1;
			}
		}
		else if (func_227(func_182()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x16966
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_228(int iParam0, int iParam1)//Position - 0x169BE
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 7:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 8:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 9:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 8:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 13:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
			}
	}
	return 0;
}

int func_229(int iParam0, int iParam1)//Position - 0x16ACA
{
	if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 9) || iParam0 == 8)
	{
		if (!PED::_IS_PED_HAIR_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 15)
	{
		if (!PED::_IS_PED_LIPSTICK_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 13)
	{
		if (!PED::_IS_PED_BLUSH_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_230(var uParam0, int iParam1)//Position - 0x16B38
{
	switch (uParam0->f_1EE)
	{
		case 6:
			switch (func_231(iParam1, uParam0->f_67.f_1))
			{
				case 0:
					break;
				
				case -1:
					return 0;
					break;
				
				default:
					break;
			}
			break;
		
		case 10:
			return 0;
			break;
		
		case 14:
		case 11:
			if (uParam0->f_67.f_1 == 0)
			{
				return 0;
			}
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (uParam0->f_67.f_1 == 0)
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 1;
}

int func_231(int iParam0, int iParam1)//Position - 0x16BDA
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			default:
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			case 23:
				return 0;
			}
		
		default:
	}
	return -1;
}

float func_232(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x16DDE
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
	struct<3> Var10;
	
	fVar5 = fParam4;
	fVar6 = fParam5;
	fVar7 = 0f;
	fVar8 = PAD::GET_CONTROL_NORMAL(2, 239);
	fVar9 = PAD::GET_CONTROL_NORMAL(2, 240);
	if (Global_26CF15 == -6)
	{
		return -1f;
	}
	switch (iParam0)
	{
		case 0:
			Var10 = { HUD::_0x5BFF36D6ED83E0AE() };
			fParam1 = (Var10.x + func_234(0.005f));
			fParam2 = (Var10.f_1 + 0.518f);
			fParam3 = func_234(0.21f);
			fVar2 = 0.025f;
			fVar5 = (fParam4 + func_234(0.05f));
			fVar6 = (fParam5 - func_234(0.05f));
			fVar7 = func_234(0.005f);
			break;
		
		case 1:
			Var10 = { HUD::_0x5BFF36D6ED83E0AE() };
			fParam1 = (Var10.x + func_234(0.145f));
			fParam2 = (Var10.f_1 + 0.417f);
			fParam3 = func_234(0.042f);
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = (fParam3 / 2f);
			break;
		
		case 2:
			Var10 = { HUD::_0x5BFF36D6ED83E0AE() };
			fParam1 = (Var10.x + func_234(0.145f));
			fParam2 = (Var10.f_1 + 0.457f);
			fParam3 = func_234(0.042f);
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = (fParam3 / 2f);
			break;
		
		case 4:
			fParam3 = (fParam3 * 0.95f);
			fParam2 = (fParam2 + 0.035f);
			fParam1 = (fParam1 + (fParam3 * 0.025f));
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::_GET_SCRIPT_GFX_POSITION(fParam1, fParam2, &fParam1, &fParam2);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = 0.005f;
			break;
	}
	fVar0 = (fParam1 + fParam3);
	fVar1 = (fParam2 + fVar2);
	if (fVar9 >= fParam2 && fVar9 <= fVar1)
	{
		if (fVar8 >= fParam1 && fVar8 <= fVar0)
		{
			fVar3 = ((fVar8 - fParam1) / fParam3);
			fVar4 = (fParam4 + ((fParam5 - fParam4) * fVar3));
			if (PAD::IS_CONTROL_PRESSED(2, 237))
			{
				fVar4 = func_233(fVar4, fVar5, fVar6);
				return fVar4;
			}
		}
		if (fVar7 > 0f)
		{
			if (fVar8 > (fParam1 - fVar7) && fVar8 < fParam1)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 237))
				{
					return fParam4;
				}
			}
			if (fVar8 < (fVar0 + fVar7) && fVar8 > fVar0)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 237))
				{
					return fParam5;
				}
			}
		}
	}
	return -1f;
}

float func_233(float fParam0, float fParam1, float fParam2)//Position - 0x17025
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

float func_234(float fParam0)//Position - 0x1704C
{
	fParam0 = (fParam0 * (1.777778f / GRAPHICS::_GET_ASPECT_RATIO(0)));
	return fParam0;
}

int func_235(var uParam0, int iParam1)//Position - 0x17066
{
	if ((((((uParam0->f_1EE == 13 || uParam0->f_1EE == 14) || uParam0->f_1EE == 15) || uParam0->f_1EE == 7) || uParam0->f_1EE == 8) || uParam0->f_1EE == 9) || uParam0->f_1EE == 11)
	{
		if (func_230(uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(var uParam0, int iParam1)//Position - 0x170DC
{
	if (!(uParam0->f_1EE == 11 || uParam0->f_1EE == 14))
	{
		if (func_230(uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0x1710E
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_228(iParam0, iParam1))
	{
		if (func_229(iParam1, iVar0))
		{
			iVar1++;
			if (iVar1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_238(int iParam0, int iParam1, int iParam2)//Position - 0x1715A
{
	struct<2> Var0;
	
	if (func_393(iParam0, iParam1, iParam2, &Var0))
	{
		func_239(Var0.f_1, Var0, 0, 1, 0);
	}
}

void func_239(char[16] cParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17183
{
	Global_15F9E.f_4EB = { cParam0 };
	Global_15F9E.f_4EF = uParam1;
	Global_15F9E.f_4F0 = iParam2;
	Global_15F9E.f_4F1 = iParam3;
	Global_15F9E.f_4F2 = iParam4;
}

void func_240(var uParam0, int iParam1, bool bParam2)//Position - 0x171BC
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	
	func_586(uParam0);
	sVar0 = "FACE_OPAC";
	sVar1 = "FACE_COLOUR";
	fVar2 = ((uParam0->f_25F - 0.15f) * (1f / (1f - 0.15f)));
	if (fVar2 >= 1f)
	{
		fVar2 = 1f;
	}
	else if (fVar2 <= 0f)
	{
		fVar2 = 0f;
	}
	fVar2 = (fVar2 * 100f);
	iVar3 = func_249(iParam1, uParam0->f_1EE, uParam0->f_25A);
	uParam0->f_2A6 = 0;
	iVar4 = 0;
	while (iVar4 < func_228(iParam1, uParam0->f_1EE))
	{
		if (func_229(uParam0->f_1EE, iVar4))
		{
			uParam0->f_2A6++;
		}
		iVar4++;
	}
	sVar5 = "";
	iVar6 = -1;
	switch (uParam0->f_1EE)
	{
		case 6:
			sVar0 = "";
			fVar2 = -1f;
			sVar5 = "FACE_COLHILI";
			if (func_230(uParam0, iParam1))
			{
				if (uParam0->f_25A == -1)
				{
					uParam0->f_25A = func_79(2135, -1, 0);
				}
				if (uParam0->f_25B == -1)
				{
					uParam0->f_25B = func_79(2142, -1, 0);
					uParam0->f_25C = uParam0->f_25B;
				}
				uParam0->f_25F = 1f;
				sVar5 = "FACE_COLHILI";
				iVar3 = func_249(iParam1, uParam0->f_1EE, uParam0->f_25A);
				iVar6 = func_249(iParam1, uParam0->f_1EE, uParam0->f_25B);
			}
			else
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				sVar5 = "";
				iVar6 = -1;
				uParam0->f_2A6 = -1;
			}
			break;
		
		case 10:
			sVar0 = "";
			fVar2 = -1f;
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_2A6 = -1;
			uParam0->f_25A = func_237(iParam1, uParam0->f_1EE, iVar3);
			uParam0->f_25B = func_237(iParam1, uParam0->f_1EE, iVar6);
			uParam0->f_25C = uParam0->f_25B;
			uParam0->f_25F = 1f;
			break;
		
		case 14:
		case 11:
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_2A6 = -1;
			if (uParam0->f_67.f_1 == 0)
			{
				sVar0 = "";
				fVar2 = -1f;
			}
			uParam0->f_25A = func_237(iParam1, uParam0->f_1EE, iVar3);
			uParam0->f_25B = func_237(iParam1, uParam0->f_1EE, iVar6);
			uParam0->f_25C = uParam0->f_25B;
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (!func_230(uParam0, iParam1))
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				uParam0->f_2A6 = -1;
			}
			else
			{
				uParam0->f_25A = func_237(iParam1, uParam0->f_1EE, iVar3);
				if (uParam0->f_25A == -1)
				{
					uParam0->f_25A = func_245(func_248(uParam0->f_1EE), &(uParam0->f_25D), -1);
					iVar3 = func_249(iParam1, uParam0->f_1EE, uParam0->f_25A);
				}
			}
			break;
		
		default:
			break;
	}
	func_244(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_TITLE"))
	{
		func_127(sVar0);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
		if (iVar3 != -1 && uParam0->f_2A6 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3 + 1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_2A6);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (fVar2 != -1f)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar7 = 0;
		while (iVar7 < uParam0->f_2A6)
		{
			uVar11 = func_237(iParam1, uParam0->f_1EE, iVar7);
			if (((uParam0->f_1EE == 6 || uParam0->f_1EE == 7) || uParam0->f_1EE == 9) || uParam0->f_1EE == 8)
			{
				PED::_GET_PED_HAIR_RGB_COLOR(uVar11, &iVar8, &iVar9, &iVar10);
			}
			else if (uParam0->f_1EE == 13 || uParam0->f_1EE == 15)
			{
				PED::_GET_PED_MAKEUP_RGB_COLOR(uVar11, &iVar8, &iVar9, &iVar10);
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_DATA_SLOT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar7++;
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_HIGHLIGHT"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (fVar2 == -1f)
	{
		iVar12 = 0;
		if (!uParam0->f_25E)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 0;
		}
	}
	else
	{
		iVar12 = 1;
		iVar13 = 0;
	}
	if (fVar2 == -1f)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SHOW_OPACITY"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar13);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar5) || !uParam0->f_25E)
	{
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_IS_PC");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_TITLE"))
		{
			func_127(sVar0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar5);
			if (iVar6 != -1 && uParam0->f_2A6 != -1)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(iVar6 + 1);
				HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_2A6);
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			if (fVar2 != -1f)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_DATA_SLOT_EMPTY"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			iVar14 = 0;
			while (iVar14 < uParam0->f_2A6)
			{
				uVar18 = func_237(iParam1, uParam0->f_1EE, iVar14);
				if (((uParam0->f_1EE == 6 || uParam0->f_1EE == 7) || uParam0->f_1EE == 9) || uParam0->f_1EE == 8)
				{
					PED::_GET_PED_HAIR_RGB_COLOR(uVar18, &iVar15, &iVar16, &iVar17);
				}
				else if (uParam0->f_1EE == 13 || uParam0->f_1EE == 15)
				{
					PED::_GET_PED_MAKEUP_RGB_COLOR(uVar18, &iVar15, &iVar16, &iVar17);
				}
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar15);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar17);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar14++;
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "DISPLAY_VIEW"))
			{
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_HIGHLIGHT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
	if (bParam2)
	{
		func_243(-1);
	}
	if (!func_475(uParam0->f_1EE))
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_2A5)
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || !MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			if (uParam0->f_25E)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_241(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					func_242(203, "ITEM_X_TINT", -1);
					func_241(14, "ITEM_B_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					func_241(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					func_241(15, "ITEM_T_COL", -1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_241(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					func_242(203, "ITEM_X_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					func_241(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					func_241(15, "ITEM_T_COL", -1);
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_241(14, "ITEM_B_OPACITY", -1);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
	}
}

void func_241(int iParam0, char* sParam1, int iParam2)//Position - 0x17942
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_4354.f_FCE >= 12)
	{
		StringCopy(&Global_26CEC9, sVar0, 64);
		StringCopy(&(Global_26CEC9.f_10), sParam1, 16);
		Global_26CEC9.f_14 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = 332;
	Global_4354.f_10DC[Global_4354.f_FCE] = iParam0;
	Global_4354.f_FCE++;
}

void func_242(int iParam0, char* sParam1, int iParam2)//Position - 0x179F2
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_4354.f_FCE >= 12)
	{
		StringCopy(&Global_26CEC9, sVar0, 64);
		StringCopy(&(Global_26CEC9.f_10), sParam1, 16);
		Global_26CEC9.f_14 = iParam2;
		return;
		return;
	}
	MISC::SET_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = iParam0;
	Global_4354.f_10DC[Global_4354.f_FCE] = 31;
	Global_4354.f_FCE++;
}

void func_243(int iParam0)//Position - 0x17AA1
{
	int iVar0;
	int iVar1;
	
	Global_4354.f_FCE = 0;
	Global_4354.f_FCF = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_4354.f_1091[iVar0 /*4*/]), "", 16);
		Global_4354.f_10C2[iVar0] = -1;
		Global_4354.f_10CF[iVar0] = 332;
		Global_4354.f_10DC[iVar0] = 31;
		iVar0++;
	}
	Global_4354.f_10E9 = 0;
	StringCopy(&(Global_26CEC9.f_10), "", 16);
	Global_26CEC9.f_14 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_100(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_244(var uParam0)//Position - 0x17B47
{
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_246, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_250, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_245(int iParam0, int iParam1, int iParam2)//Position - 0x17BDB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_247(iParam0);
	if (iVar0 == -1)
	{
		*iParam1 = 0;
		return -1;
	}
	iVar1 = func_17(iVar0, iParam2, 0);
	func_246(iVar1, &uVar2, iParam1);
	return uVar2;
}

void func_246(int iParam0, var uParam1, var uParam2)//Position - 0x17C10
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_247(int iParam0)//Position - 0x17C31
{
	switch (iParam0)
	{
		case 2:
			return 2136;
		
		case 1:
			return 2137;
		
		case 5:
			return 2138;
		
		case 8:
			return 2139;
		
		case 10:
			return 2140;
		
		default:
	}
	return -1;
}

int func_248(int iParam0)//Position - 0x17C7D
{
	switch (iParam0)
	{
		case 7:
			return 1;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 7;
			break;
		
		case 11:
			return 4;
			break;
		
		case 13:
			return 5;
			break;
		
		case 14:
			return 4;
			break;
		
		case 15:
			return 8;
			break;
	}
	return -1;
}

int func_249(int iParam0, int iParam1, int iParam2)//Position - 0x17CF7
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_228(iParam0, iParam1))
	{
		if (func_229(iParam1, iVar0))
		{
			iVar1++;
			if (iVar0 == iParam2)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_250(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x17D43
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	struct<10> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	func_267(uParam0, 0);
	func_266(0);
	func_263(*uParam0);
	func_262(1, 1, 0, 0, 0);
	func_261(1, 2, 1, 1, 1);
	func_259(func_260(uParam0->f_1EE, 1));
	uParam0->f_1CD = 0;
	uParam0->f_1CE = 0;
	uParam0->f_1D5 = 0;
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (uParam0->f_2A4 && iParam3)
	{
		if (!(!uParam0->f_67.f_16 && uParam0->f_67.f_F))
		{
			if (func_393(iVar2, uParam0->f_1EE, uParam0->f_67.f_1, &Var3))
			{
				if (Var1.f_B != 0 && func_147(Var1.f_B, 2, -1))
				{
				}
				else if (Var3.f_9 == 0)
				{
					uParam0->f_25A = func_79(2135, -1, 0);
					uParam0->f_25B = func_79(2142, -1, 0);
					uParam0->f_25C = uParam0->f_25B;
					uParam0->f_25F = 1f;
				}
				else if (Var3.f_9 == 1)
				{
					if (Var3.f_5 == 4)
					{
						uParam0->f_25A = -1;
						uParam0->f_25D = 0;
					}
					else
					{
						uParam0->f_25A = func_245(Var3.f_5, &(uParam0->f_25D), -1);
					}
					iVar4 = func_388(Var3.f_5);
					iVar5 = func_397(Var3.f_5);
					if (iVar4 != -1)
					{
						uParam0->f_25B = func_79(iVar4, -1, 0);
					}
					else
					{
						uParam0->f_25B = 0;
					}
					uParam0->f_25C = uParam0->f_25B;
					if (iVar5 != -1)
					{
						uParam0->f_25F = func_258(iVar5, -1);
						if (uParam0->f_67.f_1 == 0 && uParam0->f_25F == 0f)
						{
							uParam0->f_25F = Var3.f_7;
						}
					}
					else
					{
						uParam0->f_25F = Var3.f_7;
					}
				}
				else if (Var3.f_9 == 2)
				{
					uParam0->f_25A = -1;
					uParam0->f_25D = 0;
					uParam0->f_25B = -1;
					uParam0->f_25C = uParam0->f_25B;
					uParam0->f_25F = Var3.f_7;
				}
			}
		}
	}
	bVar6 = false;
	while (func_393(iVar2, uParam0->f_1EE, iVar0, &Var1))
	{
		if (func_158(iVar2, uParam0->f_1EE, iVar0))
		{
			if (func_150(uParam0, iVar2, uParam0->f_1EE, iVar0) && !func_146(uParam0, iVar2, uParam0->f_1EE, iVar0))
			{
				func_255(iVar0, &(Var1.f_1), 1, 1, 0, 0);
				func_254(2, 0);
				if (iVar0 == uParam0->f_67.f_1)
				{
					uParam0->f_1CE = 1;
				}
			}
			else
			{
				func_255(iVar0, &(Var1.f_1), 0, 1, 0, 0);
			}
			if (iVar0 == uParam0->f_67.f_1)
			{
				uParam0->f_216 = { Var1.f_1 };
			}
			if (func_392(iVar2, &Var1, uParam0))
			{
				bVar6 = true;
				if (bParam2)
				{
					if (!(!uParam0->f_67.f_16 && uParam0->f_67.f_F))
					{
						uParam0->f_67.f_1 = iVar0;
					}
				}
				func_255(iVar0, "", 1, 1, 0, 0);
				if (((uParam0->f_1EE == 11 || uParam0->f_1EE == 13) || uParam0->f_1EE == 14) || uParam0->f_1EE == 15)
				{
					func_254(20, 0);
				}
				else
				{
					func_254(14, 0);
				}
			}
			else if (!func_150(uParam0, iVar2, uParam0->f_1EE, iVar0))
			{
				func_255(iVar0, "", 1, 1, 0, 0);
				func_254(15, 0);
				if (iVar0 == uParam0->f_67.f_1)
				{
					uParam0->f_1CD = 1;
				}
			}
			else if (Var1 > 0)
			{
				func_255(iVar0, "ITEM_COST", 1, 1, 0, 0);
				func_251(Var1, 0);
			}
			else
			{
				func_255(iVar0, "ITEM_FREE", 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
	if (iVar0 == 0)
	{
		func_255(0, "HAIR_NONE", 0, 1, 0, 0);
	}
	else if (!bVar6)
	{
		if (bParam2)
		{
			if (!(!uParam0->f_67.f_16 && uParam0->f_67.f_F))
			{
				if (uParam0->f_1EE == 11 || uParam0->f_1EE == 14)
				{
					uParam0->f_25F = 1f;
					uParam0->f_67.f_1 = 0;
					func_269(uParam0, iParam1, uParam0->f_1EE, uParam0->f_67.f_1);
				}
				else
				{
					uParam0->f_25F = 1f;
					uParam0->f_67.f_1 = 0;
					if (func_393(iVar2, uParam0->f_1EE, uParam0->f_67.f_1, &Var1))
					{
						if (Var1.f_9 == 0)
						{
							iVar7 = func_398(385, -1, -1);
							Global_10A0A[1 /*14*/] = { func_816(iVar2, 2, iVar7) };
							uParam0->f_67.f_1 = Global_10A0A[1 /*14*/].f_3;
						}
						else if (Var1.f_9 == 1)
						{
						}
						else if (Var1.f_9 == 2)
						{
						}
					}
				}
			}
		}
	}
	func_382(uParam0->f_67.f_1, 1, 1);
	func_238(iVar2, uParam0->f_1EE, uParam0->f_67.f_1);
	if (!func_475(uParam0->f_1EE))
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_2A5)
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
	if (uParam0->f_2A4)
	{
		func_240(uParam0, iVar2, 1);
		uParam0->f_2A4 = 0;
	}
}

void func_251(int iParam0, bool bParam1)//Position - 0x1824D
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_4354.f_1190 >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 >= 4)
	{
		return;
	}
	if (Global_4354.f_1387 != 1)
	{
		return;
	}
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		return;
	}
	Global_4354.f_D0C[Global_4354.f_1190] = iParam0;
	Global_4354.f_1190++;
	Global_4354.f_628[Global_4354.f_1385 /*5*/][Global_4354.f_1386] = 2;
	Global_4354.f_1386++;
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		fVar0 = func_253();
		if (Global_4354.f_1100[Global_4354.f_118D] && Global_4354.f_1386 == Global_4354.f_1384)
		{
			func_110(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_4354.f_10F9[(Global_4354.f_118D - 1)])
		{
			Global_4354.f_10F9[(Global_4354.f_118D - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_4354.f_1386 >= Global_4354.f_1384)
		{
			fVar3 = func_252();
			if (fVar3 > Global_4354.f_1388[Global_4354.f_118C])
			{
				Global_4354.f_1388[Global_4354.f_118C] = fVar3;
			}
		}
	}
}

float func_252()//Position - 0x18387
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_4354.f_F03[((Global_4354.f_1192 - iVar1) + iVar0)] != 0)
		{
			if (func_110(Global_4354.f_F03[((Global_4354.f_1192 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_253()//Position - 0x1843A
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_124(0, 1, 0, 0, 0, iVar6 > 0);
	if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_4354.f_49[Global_4354.f_1385 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_4354.f_1386)
	{
		if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(Global_4354.f_1385 + iVar8) /*4*/]));
			}
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(Global_4354.f_1385 + iVar8) /*4*/]));
			}
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[((Global_4354.f_1190 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[((Global_4354.f_1191 - iVar4) + iVar10)], Global_4354.f_E85[((Global_4354.f_1191 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_4354.f_628[Global_4354.f_1385 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[((Global_4354.f_118F - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_4354.f_49[Global_4354.f_1385 /*4*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_4354.f_F03[((Global_4354.f_1192 - iVar5) + iVar7)] != 0)
		{
			func_110(Global_4354.f_F03[((Global_4354.f_1192 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_254(int iParam0, bool bParam1)//Position - 0x18815
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_4354.f_1192 >= 125)
	{
		return;
	}
	if (Global_4354.f_1386 >= 4)
	{
		return;
	}
	if (Global_4354.f_1387 != 1)
	{
		return;
	}
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		return;
	}
	Global_4354.f_F03[Global_4354.f_1192] = iParam0;
	Global_4354.f_1192++;
	Global_4354.f_628[Global_4354.f_1385 /*5*/][Global_4354.f_1386] = 4;
	Global_4354.f_1386++;
	if (Global_4354.f_1386 >= Global_4354.f_1384)
	{
		fVar0 = func_253();
		if (Global_4354.f_1100[Global_4354.f_118D] && Global_4354.f_1386 == Global_4354.f_1384)
		{
			func_110(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_4354.f_10F9[(Global_4354.f_118D - 1)])
		{
			Global_4354.f_10F9[(Global_4354.f_118D - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_4354.f_1386 >= Global_4354.f_1384)
		{
			fVar3 = func_252();
			if (fVar3 > Global_4354.f_1388[Global_4354.f_118C])
			{
				Global_4354.f_1388[Global_4354.f_118C] = fVar3;
			}
		}
	}
}

void func_255(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1894F
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_4354.f_118C > iParam0)
	{
		return;
	}
	if (Global_4354.f_118C >= 125)
	{
		return;
	}
	if (Global_4354.f_118E >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 < Global_4354.f_1384)
	{
		return;
	}
	if (Global_4354.f_118C != iParam0)
	{
		Global_4354.f_118C = iParam0;
		Global_4354.f_118D = 0;
	}
	iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
	if (iVar0 != 1)
	{
		while (Global_4354.f_118D < 4 && iVar0 != 1)
		{
			Global_4354.f_118D++;
			iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_4354.f_49[Global_4354.f_118E /*4*/]), sParam1, 16);
	Global_4354.f_432[Global_4354.f_118E] = iParam3;
	Global_4354.f_52D[Global_4354.f_118E] = iParam4;
	Global_4354.f_118E++;
	if (iParam2 == 0)
	{
		fVar1 = func_257(sParam1);
		if (Global_4354.f_1100[Global_4354.f_118D])
		{
			func_110(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_4354.f_10F9[Global_4354.f_118D])
		{
			Global_4354.f_10F9[Global_4354.f_118D] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_256(sParam1);
			if (fVar4 > Global_4354.f_1388[iParam0])
			{
				Global_4354.f_1388[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_4354.f_110E[iParam0]), Global_4354.f_118D);
	Global_4354.f_118D++;
	Global_4354.f_1387 = 1;
	Global_4354.f_1385 = (Global_4354.f_118E - 1);
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = iParam2;
}

float func_256(char* sParam0)//Position - 0x18B0F
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_257(char* sParam0)//Position - 0x18B2B
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_124(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

float func_258(int iParam0, int iParam1)//Position - 0x18B67
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25B858[iParam0 /*6*/][func_18(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

void func_259(char* sParam0)//Position - 0x18B93
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_1), sParam0, 16);
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
}

char* func_260(int iParam0, bool bParam1)//Position - 0x18BDE
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				return "HAIR_NG_T0";
			}
			else
			{
				return "HAIR_NG_O0";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "HAIR_NG_T1";
			}
			else
			{
				return "HAIR_NG_O1";
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return "HAIR_NG_T2";
			}
			else
			{
				return "HAIR_NG_O2";
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return "HAIR_NG_T3";
			}
			else
			{
				return "HAIR_NG_O3";
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return "HAIR_NG_T4";
			}
			else
			{
				return "HAIR_NG_O4";
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return "HAIR_NG_T5";
			}
			else
			{
				return "HAIR_NG_O5";
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return "HAIR_NG_T6";
			}
			else
			{
				return "HAIR_NG_O6";
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return "HAIR_NG_T7";
			}
			else
			{
				return "HAIR_NG_O7";
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return "HAIR_NG_T8";
			}
			else
			{
				return "HAIR_NG_O8";
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return "HAIR_NG_T9";
			}
			else
			{
				return "HAIR_NG_O9";
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return "HAIR_NG_T10";
			}
			else
			{
				return "HAIR_NG_O10";
			}
			break;
	}
	return "";
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18D44
{
	Global_4354.f_1108[0] = iParam0;
	Global_4354.f_1108[1] = iParam1;
	Global_4354.f_1108[2] = iParam2;
	Global_4354.f_1108[3] = iParam3;
	Global_4354.f_1108[4] = iParam4;
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18D83
{
	Global_4354.f_10ED[0] = iParam0;
	Global_4354.f_10ED[1] = iParam1;
	Global_4354.f_10ED[2] = iParam2;
	Global_4354.f_10ED[3] = iParam3;
	Global_4354.f_10ED[4] = iParam4;
	Global_4354.f_1194 = 0;
	if (iParam0 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam1 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam2 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam3 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam4 != 0)
	{
		Global_4354.f_1194++;
	}
}

void func_263(int iParam0)//Position - 0x18E2D
{
	char* sVar0;
	
	sVar0 = func_96(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_264(1, sVar0, sVar0);
	}
}

void func_264(int iParam0, char* sParam1, char* sParam2)//Position - 0x18E50
{
	Global_4354 = iParam0;
	func_265(29, sParam1, sParam2);
}

void func_265(int iParam0, char* sParam1, char* sParam2)//Position - 0x18E67
{
	StringCopy(&(Global_4354.f_148F[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_4354.f_17A0[iParam0 /*16*/]), sParam2, 64);
}

void func_266(bool bParam0)//Position - 0x18E8B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_4354.f_49[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_4354.f_628[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_252911[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_4354.f_D0C[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_E07[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_F03[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_110E[iVar0] = 0;
		Global_4354.f_1195[iVar0] = 0;
		Global_4354.f_1213[iVar0] = 0;
		Global_4354.f_140B[iVar0] = 0f;
		Global_4354.f_1291[iVar0] = 0;
		Global_4354.f_1388[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_4354.f_10ED[iVar0] = 0;
		Global_4354.f_10F9[iVar0] = 0f;
		Global_4354.f_10F3[iVar0] = -1f;
		Global_4354.f_1100[iVar0] = 0;
		Global_4354.f_1108[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_4354.f_1091[iVar0 /*4*/]), "", 16);
		Global_4354.f_10C2[iVar0] = -1;
		Global_4354.f_10CF[iVar0] = 332;
		Global_4354.f_10DC[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_4354.f_148F[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4354.f_17A0[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_26CEC9.f_10), "", 16);
	Global_26CEC9.f_14 = -1;
	Global_4354 = 0;
	Global_4354.f_118C = 0;
	Global_4354.f_118D = 0;
	Global_4354.f_118E = 0;
	Global_4354.f_1190 = 0;
	Global_4354.f_1191 = 0;
	Global_4354.f_1192 = 0;
	Global_4354.f_118F = 0;
	Global_4354.f_1406 = 0;
	Global_4354.f_1382 = 0;
	Global_4354.f_1381 = 0;
	Global_4354.f_1383 = 0;
	StringCopy(&(Global_4354.f_F81), "", 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = 0;
	Global_4354.f_FCC = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_FCD = 0;
	StringCopy(&(Global_26CEC9.f_15), "", 16);
	Global_26CEC9.f_3D = 0;
	Global_26CEC9.f_3E = 0;
	Global_26CEC9.f_3F = 0;
	Global_26CEC9.f_40 = 0;
	Global_26CEC9.f_41 = 0;
	Global_26CEC9.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_26CEC9.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_26CEC9.f_43 = 0;
	StringCopy(&(Global_4354.f_1), "", 16);
	Global_4354.f_10FF = 0f;
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_1387 = 0;
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = 0;
	Global_4354.f_1385 = 0;
	Global_4354.f_FCE = 0;
	Global_4354.f_FCF = 0;
	Global_4354.f_1193 = 10;
	Global_4354.f_1194 = 0;
	Global_4354.f_1408 = 0f;
	Global_4354.f_1409 = 0f;
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	Global_4354.f_137C = 0f;
	Global_4354.f_137D = 0;
	Global_4354.f_137F = 0;
	Global_4354.f_137E = 0;
	Global_4354.f_1380 = 0;
	Global_4354.f_1C23 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_4354.f_1489[iVar0] = -1;
		Global_4354.f_148C[iVar0] = -1;
		iVar0++;
	}
	Global_4354.f_1106 = 0f;
	Global_4354.f_10E9 = 0;
	Global_4354.f_1107 = 0;
	Global_4354.f_1C0E = 0;
	Global_4354.f_1C09 = 0;
	Global_4354.f_1C13 = 0;
	Global_4354.f_1C18 = 0;
	Global_4354.f_1C1D = 0;
	Global_4354.f_1C1F = 0;
	Global_4354.f_1C25 = 0;
	Global_4351 = 0.05f;
	Global_4352 = 0.05f;
	Global_4353 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_4353 = 0.225f;
	}
}

void func_267(var uParam0, bool bParam1)//Position - 0x19313
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	
	if (func_590(1))
	{
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
		{
			iVar2 = uParam0->f_260.f_2;
		}
		iVar0 = ENTITY::GET_ENTITY_MODEL(iVar2);
		if (uParam0->f_1EE == 1)
		{
			if (uParam0->f_FE == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				uParam0->f_FE = StackVal;
			}
		}
		else if (uParam0->f_1EE == 2)
		{
			if (uParam0->f_FF == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				uParam0->f_FF = StackVal;
			}
		}
		else if (func_475(uParam0->f_1EE))
		{
			if (func_393(ENTITY::GET_ENTITY_MODEL(iVar2), uParam0->f_1EE, uParam0->f_67.f_1, &Var3))
			{
				if (Var3.f_9 == 0)
				{
					uParam0->f_FE = func_398(385, -1, -1);
					if (bParam1)
					{
						uParam0->f_25A = func_79(2135, -1, 0);
						uParam0->f_25B = func_79(2142, -1, 0);
						uParam0->f_25C = uParam0->f_25B;
					}
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					uParam0->f_FF = func_398(func_391(Var3.f_5), -1, -1);
					if (bParam1)
					{
						uParam0->f_25A = func_245(Var3.f_5, &(uParam0->f_25D), -1);
						uParam0->f_25B = func_268(Var3.f_5, -1);
						uParam0->f_25C = uParam0->f_25B;
						uParam0->f_25F = func_258(func_397(Var3.f_5), -1);
					}
				}
			}
			if (bParam1)
			{
			}
		}
		if (bParam1)
		{
			iVar1 = 0;
			while (iVar1 < Global_26C92B.f_DE)
			{
				Stack.Push(iVar0);
				Stack.Push(Global_26C92B.f_6F[iVar1]);
				Stack.Push(Global_26C92B[iVar1]);
				Call_Loc(uParam0->f_1C1);
				if (StackVal)
				{
					uParam0->f_67.f_1 = iVar1;
					return;
				}
				iVar1++;
			}
			uParam0->f_67.f_1 = 0;
		}
	}
}

int func_268(int iParam0, int iParam1)//Position - 0x194C2
{
	int iVar0;
	
	iVar0 = func_388(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_17(iVar0, iParam1, 0);
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x194E5
{
	struct<10> Var0;
	
	func_393(ENTITY::GET_ENTITY_MODEL(iParam1), iParam2, iParam3, &Var0);
	switch (Var0.f_9)
	{
		case 0:
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(uParam0->f_25A);
			Stack.Push(uParam0->f_25B);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_1C0);
			break;
		
		case 1:
			func_270(Var0.f_5, &(uParam0->f_25D));
			func_403(iParam1, Var0.f_5, Var0.f_6, uParam0->f_25A, uParam0->f_25B, uParam0->f_25D, uParam0->f_25F, 1);
			break;
		
		case 2:
			func_270(Var0.f_5, &(uParam0->f_25D));
			func_403(iParam1, Var0.f_5, Var0.f_6, uParam0->f_25A, uParam0->f_25B, uParam0->f_25D, uParam0->f_25F, 1);
			break;
	}
	func_282(iParam1, iParam2);
}

void func_270(int iParam0, var uParam1)//Position - 0x195A9
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			if (*uParam1 != 1)
			{
				*uParam1 = 1;
			}
			break;
		
		case 5:
		case 8:
			if (*uParam1 != 2)
			{
				*uParam1 = 2;
			}
			break;
	}
}

var func_271()//Position - 0x195F2
{
	return Global_4354.f_1381;
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0x19600
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_10A08;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = func_17(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_406(iVar2, iVar3, iVar0, 1);
	}
}

int func_273(int iParam0)//Position - 0x19645
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		
		case 1:
			return 14;
			break;
		
		case 2:
			return 15;
			break;
	}
	return -1;
}

int func_274(var uParam0, int iParam1, int iParam2)//Position - 0x1967F
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && uParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1)//Position - 0x196E4
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return 1;
				break;
			
			case 6:
				return 1;
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
				return 0;
				break;
			
			case 14:
				return 1;
				break;
			
			case 15:
				return 1;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
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
			}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0x19830
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 7;
			break;
		
		case 2:
			return 8;
			break;
		
		case 3:
			return 9;
			break;
		
		case 4:
			return 10;
			break;
		
		case 5:
			return 11;
			break;
		
		case 6:
			return 12;
			break;
	}
	return -1;
}

int func_277(var uParam0, int iParam1, int iParam2)//Position - 0x198A0
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && uParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_278()//Position - 0x19905
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1992C
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_26CF15 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_4351;
	fVar2 = (fVar0 + Global_4353);
	fVar3 = Global_4354.f_137C;
	fVar1 = (Global_4354.f_137C - (IntToFloat(Global_4354.f_137E) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_4354.f_137E < 1)
	{
		fVar1 = (Global_4354.f_137C - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_281();
	if (Global_26CF15 == -6)
	{
		return;
	}
	Global_26CF15 = -1;
	fVar7 = Global_26CF0F;
	fVar8 = Global_26CF10;
	if (Global_4354.f_137F > Global_4354.f_137E)
	{
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= fVar3) && Global_26CF10 < (fVar3 + fVar6))
		{
			Global_26CF15 = -2;
			if (bParam3)
			{
				func_280(0);
			}
			return;
		}
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= (fVar3 + fVar6)) && Global_26CF10 < (fVar3 + 0.034722f))
		{
			Global_26CF15 = -3;
			if (bParam3)
			{
				func_280(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_4354.f_137F == -1)
		{
			Global_26CF15 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_4354.f_137E);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_136(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_4353, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_26CF15 = Global_4354.f_1AB1[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_26CF15 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_26CF15 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_26CF15 = -4;
		return;
	}
	Global_26CF15 = -1;
}

void func_280(bool bParam0)//Position - 0x19BD8
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_4351;
	fVar1 = Global_4354.f_137C;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_26CF15 == -2)
	{
		func_136(fVar0, fVar1, Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_26CF15 == -3)
	{
		func_136(fVar0, (fVar1 + fVar2), Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_281()//Position - 0x19C61
{
	Global_26CF11 = Global_26CF0F;
	Global_26CF12 = Global_26CF10;
	Global_26CF0F = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_26CF10 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_26CF13 = (Global_26CF0F - Global_26CF11);
	Global_26CF14 = (Global_26CF10 - Global_26CF12);
}

void func_282(int iParam0, int iParam1)//Position - 0x19CA9
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != PLAYER::PLAYER_PED_ID())
	{
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (iParam1 == 9)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != 15)
				{
					iLocal_68 = func_81(iParam0, 11);
					func_860(iParam0, 11, func_307(ENTITY::GET_ENTITY_MODEL(iParam0), 11, -1), 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					func_299(iParam0, 0, 0);
					func_284(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
				}
			}
			else
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8))
				{
					iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8);
					if (iVar1 == func_283(iParam0, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, func_283(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_68 != -99)
					{
						func_860(iParam0, 11, iLocal_68, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iLocal_68 = -99;
					func_299(iParam0, 0, 0);
				}
			}
		}
	}
}

int func_283(int iParam0, bool bParam1)//Position - 0x19F99
{
	struct<4> Var0;
	bool bVar1;
	
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar1)
	{
		if (bParam1)
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var0);
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var0);
		}
	}
	else if (bParam1)
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var0);
	}
	return Var0.f_3;
}

void func_284(int iParam0, int iParam1)//Position - 0x19FFC
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = func_298(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_293(13, 0, Global_10A08);
					func_293(14, 0, Global_10A08);
					func_293(15, 0, Global_10A08);
					func_293(16, 0, Global_10A08);
					func_293(71, 0, Global_10A08);
					func_293(72, 0, Global_10A08);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar1 == 3)
					{
						func_293(73, 0, Global_10A08);
						func_293(74, 0, Global_10A08);
						func_293(75, 0, Global_10A08);
						func_293(76, 0, Global_10A08);
						func_293(77, 0, Global_10A08);
						func_293(78, 0, Global_10A08);
						func_293(79, 0, Global_10A08);
						func_293(80, 0, Global_10A08);
						func_293(81, 0, Global_10A08);
						func_293(82, 0, Global_10A08);
						func_293(83, 0, Global_10A08);
						func_293(84, 0, Global_10A08);
						func_293(85, 0, Global_10A08);
						func_293(86, 0, Global_10A08);
						func_293(90, 0, Global_10A08);
						func_293(91, 0, Global_10A08);
						func_293(124, 0, Global_10A08);
						func_293(125, 0, Global_10A08);
						func_293(87, 0, Global_10A08);
						func_293(88, 0, Global_10A08);
						func_293(89, 0, Global_10A08);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == 277073536)
								{
									func_293((129 + iVar2), 0, Global_10A08);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_293(73, 0, Global_10A08);
						func_293(74, 0, Global_10A08);
						func_293(75, 0, Global_10A08);
						func_293(76, 0, Global_10A08);
						func_293(77, 0, Global_10A08);
						func_293(78, 0, Global_10A08);
						func_293(79, 0, Global_10A08);
						func_293(80, 0, Global_10A08);
						func_293(81, 0, Global_10A08);
						func_293(82, 0, Global_10A08);
						func_293(83, 0, Global_10A08);
						func_293(84, 0, Global_10A08);
						func_293(85, 0, Global_10A08);
						func_293(92, 0, Global_10A08);
						func_293(87, 0, Global_10A08);
						func_293(88, 0, Global_10A08);
						func_293(89, 0, Global_10A08);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == 277073536)
								{
									func_293((129 + iVar5), 0, Global_10A08);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar1 == 3)
					{
						func_293(93, 0, Global_10A08);
						func_293(94, 0, Global_10A08);
						func_293(95, 0, Global_10A08);
						func_293(96, 0, Global_10A08);
						func_293(97, 0, Global_10A08);
						func_293(98, 0, Global_10A08);
						func_293(99, 0, Global_10A08);
						func_293(100, 0, Global_10A08);
						func_293(101, 0, Global_10A08);
						func_293(102, 0, Global_10A08);
						func_293(103, 0, Global_10A08);
						func_293(104, 0, Global_10A08);
						func_293(105, 0, Global_10A08);
						func_293(106, 0, Global_10A08);
						func_293(107, 0, Global_10A08);
						func_293(108, 0, Global_10A08);
						func_293(109, 0, Global_10A08);
						func_293(110, 0, Global_10A08);
						func_293(111, 0, Global_10A08);
						func_293(112, 0, Global_10A08);
						func_293(113, 0, Global_10A08);
						func_293(114, 0, Global_10A08);
						func_293(115, 0, Global_10A08);
						func_293(116, 0, Global_10A08);
						func_293(117, 0, Global_10A08);
						func_293(123, 0, Global_10A08);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_293((129 + iVar8), 0, Global_10A08);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_293(93, 0, Global_10A08);
						func_293(94, 0, Global_10A08);
						func_293(95, 0, Global_10A08);
						func_293(96, 0, Global_10A08);
						func_293(97, 0, Global_10A08);
						func_293(98, 0, Global_10A08);
						func_293(99, 0, Global_10A08);
						func_293(100, 0, Global_10A08);
						func_293(101, 0, Global_10A08);
						func_293(102, 0, Global_10A08);
						func_293(103, 0, Global_10A08);
						func_293(104, 0, Global_10A08);
						func_293(105, 0, Global_10A08);
						func_293(106, 0, Global_10A08);
						func_293(107, 0, Global_10A08);
						func_293(108, 0, Global_10A08);
						func_293(109, 0, Global_10A08);
						func_293(110, 0, Global_10A08);
						func_293(111, 0, Global_10A08);
						func_293(112, 0, Global_10A08);
						func_293(113, 0, Global_10A08);
						func_293(114, 0, Global_10A08);
						func_293(115, 0, Global_10A08);
						func_293(116, 0, Global_10A08);
						func_293(117, 0, Global_10A08);
						func_293(118, 0, Global_10A08);
						func_293(119, 0, Global_10A08);
						func_293(120, 0, Global_10A08);
						func_293(121, 0, Global_10A08);
						func_293(122, 0, Global_10A08);
						func_293(123, 0, Global_10A08);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_293((129 + iVar11), 0, Global_10A08);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (func_285(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_293(Var0.f_B, 0, Global_10A08);
					}
				}
				iVar14++;
			}
		}
	}
}

bool func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A5F9
{
	int iVar0;
	int iVar1;
	
	func_292(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_291() || func_290())
					{
						iVar1 = 400;
						if (func_289() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_292(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_292(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_291() || func_290())
					{
						iVar1 = 450;
						if (func_289() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_292(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_292(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_291() || func_290())
					{
						iVar1 = 380;
						if (func_289() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_292(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_292(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_B3D)), 0);
					break;
				
				case 1:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_40001.f_B3E)), 2);
					break;
				
				case 2:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_40001.f_B3F)), 3);
					break;
				
				case 3:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_40001.f_B40)), 0);
					break;
				
				case 4:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B41)), 0);
					break;
				
				case 54:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_40001.f_B42)), 1);
					break;
				
				case 5:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B43)), 0);
					break;
				
				case 6:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B44)), 2);
					break;
				
				case 55:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_40001.f_B45)), 1);
					break;
				
				case 7:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_40001.f_B46)), 0);
					break;
				
				case 8:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_40001.f_B47)), 7);
					break;
				
				case 9:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_40001.f_B48)), 0);
					break;
				
				case 10:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_40001.f_B49)), 0);
					break;
				
				case 11:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_40001.f_B4A)), 0);
					break;
				
				case 56:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B4B)), 1);
					break;
				
				case 12:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B4C)), 2);
					break;
				
				case 57:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B4D)), 1);
					break;
				
				case 58:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B4E)), 1);
					break;
				
				case 59:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_40001.f_B4F)), 1);
					break;
				
				case 60:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B50)), 1);
					break;
				
				case 17:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B55)), 2);
					break;
				
				case 18:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B56)), 2);
					break;
				
				case 19:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_40001.f_B57)), 2);
					break;
				
				case 20:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B58)), 3);
					break;
				
				case 21:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_40001.f_B59)), 3);
					break;
				
				case 22:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B5A)), 3);
					break;
				
				case 23:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B5B)), 3);
					break;
				
				case 24:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B5C)), 3);
					break;
				
				case 25:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5D)), 2);
					break;
				
				case 26:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5E)), 3);
					break;
				
				case 27:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_40001.f_B5F)), 3);
					break;
				
				case 28:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B60)), 3);
					break;
				
				case 61:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_40001.f_B61)), 1);
					break;
				
				case 62:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B62)), 1);
					break;
				
				case 63:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_40001.f_B63)), 1);
					break;
				
				case 64:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B64)), 1);
					break;
				
				case 65:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_40001.f_B65)), 1);
					break;
				
				case 29:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B66)), 0);
					break;
				
				case 30:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B67)), 0);
					break;
				
				case 31:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B68)), 0);
					break;
				
				case 66:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B69)), 1);
					break;
				
				case 32:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6A)), 2);
					break;
				
				case 33:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B6B)), 3);
					break;
				
				case 34:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_40001.f_B6C)), 2);
					break;
				
				case 35:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_40001.f_B6D)), 0);
					break;
				
				case 36:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_40001.f_B6E)), 0);
					break;
				
				case 37:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_40001.f_B6F)), 0);
					break;
				
				case 38:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B70)), 3);
					break;
				
				case 39:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_40001.f_B71)), 2);
					break;
				
				case 40:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_B72)), 0);
					break;
				
				case 67:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B73)), 1);
					break;
				
				case 41:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B74)), 2);
					break;
				
				case 68:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B75)), 1);
					break;
				
				case 42:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_40001.f_B76)), 0);
					break;
				
				case 43:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_40001.f_B77)), 2);
					break;
				
				case 44:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B78)), 0);
					break;
				
				case 45:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B79)), 0);
					break;
				
				case 46:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B7A)), 0);
					break;
				
				case 47:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_B7B)), 3);
					break;
				
				case 48:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B7C)), 3);
					break;
				
				case 49:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_40001.f_B7D)), 3);
					break;
				
				case 50:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_40001.f_B7E)), 2);
					break;
				
				case 51:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B7F)), 3);
					break;
				
				case 52:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_40001.f_B80)), 3);
					break;
				
				case 53:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B81)), 0);
					break;
				
				case 69:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B82)), 1);
					break;
				
				case 70:
					func_292(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B83)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_292(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B54)), 0);
						break;
					
					case 71:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					
					case 72:
						func_292(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_292(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_292(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_286(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_B != -1;
}

void func_286(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D5A1
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				sParam0->f_B = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_A = (iParam2 % 32);
				sParam0->f_C = Var2.f_5;
			}
		}
	}
}

int func_287()//Position - 0x1D633
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (MISC::IS_BIT_SET(Global_18, 1) || MISC::IS_BIT_SET(Global_18, 3))
	{
		return 1;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		uVar0 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(uVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
		{
			return 1;
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_20259.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (MISC::IS_BIT_SET(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar3 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar3, 1);
					MISC::SET_BIT(&uVar3, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar3);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_288()//Position - 0x1D6F3
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (MISC::IS_BIT_SET(Global_18, 2) || MISC::IS_BIT_SET(Global_18, 4))
	{
		return 1;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		uVar0 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(uVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
		{
			return 1;
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_20259.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (MISC::IS_BIT_SET(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_289()//Position - 0x1D777
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

int func_290()//Position - 0x1D7FA
{
	return 1;
}

int func_291()//Position - 0x1D803
{
	return 1;
}

void func_292(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1D80C
{
	char cVar0[32];
	
	sParam0->f_B = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_A = (iParam1 % 32);
	sParam0->f_C = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_B == 13 || sParam0->f_B == 14) || sParam0->f_B == 15) || sParam0->f_B == 16) || sParam0->f_B == 71) || sParam0->f_B == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_B == 0 || sParam0->f_B == 1) || sParam0->f_B == 2) || sParam0->f_B == 4) || sParam0->f_B == 3) || sParam0->f_B == 54) || sParam0->f_B == 5) || sParam0->f_B == 6) || sParam0->f_B == 55) || sParam0->f_B == 7) || sParam0->f_B == 8) || sParam0->f_B == 9) || sParam0->f_B == 10) || sParam0->f_B == 11) || sParam0->f_B == 56) || sParam0->f_B == 12) || sParam0->f_B == 57) || sParam0->f_B == 58) || sParam0->f_B == 59) || sParam0->f_B == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_B == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_B = -1;
			}
		}
	}
}

void func_293(int iParam0, bool bParam1, int iParam2)//Position - 0x1DAC1
{
	if (bParam1)
	{
		if (!func_297(iParam0, iParam2))
		{
			func_294(iParam0, 1, iParam2);
		}
	}
	else if (func_297(iParam0, iParam2))
	{
		func_294(iParam0, 0, iParam2);
	}
}

void func_294(int iParam0, bool bParam1, int iParam2)//Position - 0x1DAFA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_296(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_152(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_152(iVar1));
		}
		func_406(func_295(iParam0), iVar0, iParam2, 1);
	}
}

int func_295(var uParam0)//Position - 0x1DB48
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_156(iVar0);
	if ((func_21() == 0 || func_155() == 0) || (func_21() == 999 && func_155() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1036;
				break;
			
			case 1:
				return 1037;
				break;
			
			case 2:
				return 1038;
				break;
			
			case 3:
				return 1039;
				break;
			
			case 4:
				return 1040;
				break;
			
			case 5:
				return 1041;
				break;
			
			case 6:
				return 1474;
				break;
			
			case 7:
				return 1475;
				break;
			
			case 8:
				return 1476;
				break;
			
			case 9:
				return 1477;
				break;
			
			case 10:
				return 1931;
				break;
			
			case 11:
				return 1932;
				break;
			
			case 12:
				return 1933;
				break;
			
			case 13:
				return 2379;
				break;
			
			case 14:
				return 2399;
				break;
			
			case 15:
				return 2402;
				break;
			
			case 16:
				return 2405;
				break;
			}
	}
	return 2903;
}

int func_296(var uParam0, int iParam1)//Position - 0x1DC95
{
	int iVar0;
	
	iVar0 = func_17(func_295(uParam0), iParam1, 0);
	return iVar0;
}

bool func_297(int iParam0, int iParam1)//Position - 0x1DCAE
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_296(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_152(iVar1));
}

int func_298(int iParam0)//Position - 0x1DCD0
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

void func_299(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DD25
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_10A08;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = func_298(iParam0);
		bVar3 = func_305(iParam0);
		bVar4 = func_303(iParam0);
		bVar5 = func_302(iParam0);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_297(iVar6, iVar0))
			{
				if (func_285(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_301(&Var1, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_297(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_297(iVar10, iVar0))
					{
						if (func_301(&(Var9.f_7), Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
							func_300(iParam0, Var9.f_2, Var9.f_3);
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_300(int iParam0, int iParam1, int iParam2)//Position - 0x1DE68
{
	switch (iParam1)
	{
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_301(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1DF1B
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iParam1)
	{
		case joaat("CHEST_MID"):
		case -454273031:
		case joaat("STOMACH_RIGHT"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_FULL"):
		case joaat("STOMACH_LEFT"):
		case 1361645381:
		case -1238079313:
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("STOMACH_FULL"):
			if (bParam2)
			{
				return 0;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if ((iParam1 == joaat("CHEST_FULL") || iParam1 == joaat("CHEST_MID")) || iParam1 == joaat("CHEST_LEFT"))
				{
					if (func_297(13, -1))
					{
						return 0;
					}
				}
			}
			break;
		
		case 1484379715:
			if (bParam5)
			{
				return 0;
			}
			break;
		
		case 1019352240:
			if (bParam3)
			{
				return 0;
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
				{
					switch (MISC::GET_HASH_KEY(sParam0))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (Global_26CE9D == -1)
				{
					if (func_297(13, -1))
					{
					}
					else if (func_297(14, -1))
					{
					}
					else if (func_297(15, -1))
					{
					}
					else if (func_297(16, -1))
					{
					}
					else if (func_297(71, -1))
					{
					}
					else if (func_297(72, -1))
					{
					}
				}
				else if (Global_26CE9D == 13)
				{
					return 0;
				}
				else if (Global_26CE9D == 14)
				{
				}
				else if (Global_26CE9D == 15)
				{
					return 0;
				}
				else if (Global_26CE9D == 16)
				{
				}
				else if (Global_26CE9D == 71)
				{
				}
				else if (Global_26CE9D == 72)
				{
				}
			}
			break;
		
		case 277073536:
			if (bParam4)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_302(int iParam0)//Position - 0x1E16D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = func_17(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_904(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = func_85(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = func_17(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_904(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = func_85(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
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

int func_303(int iParam0)//Position - 0x1E29F
{
	int iVar0;
	
	iVar0 = Global_182604[PLAYER::PLAYER_ID() /*324*/].f_4C.f_1C;
	if (iVar0 != -1 && iVar0 < 4)
	{
		if (func_304(iVar0) != -1 && func_304(iVar0) != 0)
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(int iParam0)//Position - 0x1E314
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_250FDB.f_1582[iParam0];
}

int func_305(int iParam0)//Position - 0x1E33C
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
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_904(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = func_85(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_904(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = func_85(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_904(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = func_85(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_904(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = func_85(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_306(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x1E8EA
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	if (bVar1)
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_JBIB_12_0"), &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_JBIB_13_0"), &Var0);
	}
	if (iVar2 == Var0.f_3 && iVar3 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0x1E94D
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_92(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_17C49.f_6C1.f_21B[0 /*65*/].f_3B;
					break;
				
				case 3:
					if (Global_17C49.f_1CAD.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_17C49.f_1CAD.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_17C49.f_6C1.f_21B[1 /*65*/].f_3B;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_17C49.f_6C1.f_21B[2 /*65*/].f_3B;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

void func_308(var uParam0)//Position - 0x1ED67
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	uParam0->f_67.f_F = 0;
	uParam0->f_67.f_17 = 0;
	uParam0->f_67.f_16 = 0;
	uParam0->f_22E = 1;
	switch (uParam0->f_1EE)
	{
		case 5:
			uParam0->f_67.f_1F = 5;
			uParam0->f_67.f_5 = 0;
			break;
		
		case 6:
		case 7:
		case 9:
		case 8:
		case 10:
		case 11:
		case 12:
			uParam0->f_67.f_1 = func_309(uParam0->f_1EE);
			uParam0->f_1EE = 5;
			break;
		
		case 14:
		case 13:
		case 15:
			uParam0->f_67.f_1 = func_309(uParam0->f_1EE);
			uParam0->f_1EE = 12;
			break;
	}
}

int func_309(int iParam0)//Position - 0x1EE26
{
	switch (iParam0)
	{
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
			return 2;
			break;
		
		case 9:
			return 3;
			break;
		
		case 10:
			return 4;
			break;
		
		case 11:
			return 5;
			break;
		
		case 12:
			return 6;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 2;
			break;
	}
	return -1;
}

void func_310(int iParam0, var uParam1)//Position - 0x1EEC5
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	else if (iParam0 == Global_26CC0B)
	{
	}
	Stack.Push(iParam0);
	Stack.Push(2);
	Stack.Push(func_398(385, -1, -1));
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Call_Loc(uParam1->f_1C0);
	func_311(&iParam0, -1, 0);
}

void func_311(int iParam0, int iParam1, bool bParam2)//Position - 0x1EF09
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_317(iVar1);
		if (!bParam2)
		{
			fVar3 = func_258(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_316(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(*iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_315(iVar4);
		iVar6 = func_391(iVar5);
		iVar7 = func_397(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_398(iVar6, iParam1, -1);
				fVar11 = func_258(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_314(iVar6, iParam1);
				fVar11 = func_316(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(*iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_247(iVar5);
			iVar9 = func_388(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_17(iVar8, iParam1, 0);
					iVar14 = func_17(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_313(iVar8, iParam1);
					iVar14 = func_313(iVar9, iParam1);
				}
				func_246(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(*iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_312(iParam0, iParam1, bParam2);
}

void func_312(var uParam0, int iParam1, bool bParam2)//Position - 0x1F03E
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_258(157, iParam1);
	}
	else
	{
		fVar0 = func_316(157, iParam1);
	}
	if (*uParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	PED::_SET_PED_EYE_COLOR(*uParam0, SYSTEM::ROUND(fVar0));
}

int func_313(int iParam0, int iParam1)//Position - 0x1F07D
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25744D[iParam0 /*6*/][func_18(iParam1)];
	if (HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)//Position - 0x1F0A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	if (!HUD::GET_MENU_PED_MASKED_INT_STAT(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_315(int iParam0)//Position - 0x1F2D3
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_316(int iParam0, int iParam1)//Position - 0x1F36A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25B858[iParam0 /*6*/][func_18(iParam1)];
	if (HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_317(int iParam0)//Position - 0x1F395
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

int func_318()//Position - 0x1F481
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_319(var uParam0, int iParam1)//Position - 0x1F4A0
{
	int iVar0;
	
	iVar0 = 0;
	func_27(&(uParam0->f_DA), 300);
	if ((uParam0->f_67.f_1 != -1 && uParam0->f_1CE) && !uParam0->f_1CD)
	{
		func_320(uParam0->f_67.f_1);
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_67.f_F = 0;
		func_279(0, 0, 0, 1);
		if (func_278())
		{
			if (Global_26CF15 == uParam0->f_67.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_67.f_1 = Global_26CF15;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_403(iParam1, 4, uParam0->f_67.f_1, uParam0->f_25A, 0, 0, 1f, 1);
				if ((uParam0->f_67.f_1 - 1) == -1 || (uParam0->f_67.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
				}
				if (uParam0->f_22E)
				{
					func_467(uParam0, iParam1);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || func_277(uParam0->f_DA.f_8, 0, 0)) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_8 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 > 0)
			{
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				while (!func_169(uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_67.f_1 = (uParam0->f_244 - 1);
				while (!func_169(uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
			}
			if (uParam0->f_1CE)
			{
				uParam0->f_22E = 1;
				uParam0->f_232 = 1;
				uParam0->f_233 = func_271();
			}
			uParam0->f_1CD = !func_168(uParam0->f_67.f_1);
			uParam0->f_1CE = (!uParam0->f_1CD && !func_165(uParam0->f_67.f_1));
			uParam0->f_1CF = 0;
			if (uParam0->f_67.f_1 != -1)
			{
				func_403(iParam1, 4, (uParam0->f_67.f_1 - 1), uParam0->f_25A, 0, 0, 1f, 1);
				if ((uParam0->f_67.f_1 - 1) == -1 || (uParam0->f_67.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
				}
				if (uParam0->f_22E)
				{
					func_467(uParam0, iParam1);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || func_274(uParam0->f_DA.f_9, 0, 0)) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_9)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_9 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 < (uParam0->f_244 - 1))
			{
				uParam0->f_67.f_1++;
				while (!func_169(uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1++;
				}
				if (!func_169(uParam0->f_67.f_1) || uParam0->f_67.f_1 >= uParam0->f_244)
				{
					uParam0->f_67.f_1 = 0;
					while (!func_169(uParam0->f_67.f_1))
					{
						uParam0->f_67.f_1++;
					}
				}
			}
			else
			{
				uParam0->f_67.f_1 = 0;
				while (!func_169(uParam0->f_67.f_1))
				{
					uParam0->f_67.f_1++;
				}
			}
			if (uParam0->f_1CE)
			{
				uParam0->f_22E = 1;
				uParam0->f_232 = 1;
				uParam0->f_233 = func_271();
			}
			uParam0->f_1CD = !func_168(uParam0->f_67.f_1);
			uParam0->f_1CE = (!uParam0->f_1CD && !func_165(uParam0->f_67.f_1));
			uParam0->f_1CF = 0;
			if (uParam0->f_67.f_1 != -1)
			{
				func_403(iParam1, 4, (uParam0->f_67.f_1 - 1), uParam0->f_25A, 0, 0, 1f, 1);
				if ((uParam0->f_67.f_1 - 1) == -1 || (uParam0->f_67.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
				}
				if (uParam0->f_22E)
				{
					func_467(uParam0, iParam1);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_59 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (uParam0->f_67.f_1 == uParam0->f_243)
			{
				func_203("HAIR_CUR_3", 4000, 0);
				uParam0->f_242 = uParam0->f_67.f_1;
			}
			else if (!func_168(uParam0->f_67.f_1))
			{
				func_203("HAIR_LOCK", 4000, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
			{
				func_206(func_209());
				func_203("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
				{
					uParam0->f_67.f_19 = 1;
					uParam0->f_67.f_1A = 0;
				}
				func_403(iParam1, 4, (uParam0->f_243 - 1), uParam0->f_25A, 0, 0, 1f, 1);
				if ((uParam0->f_243 - 1) == -1 || (uParam0->f_243 - 1) > 15)
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
				}
				uParam0->f_67.f_F = 1;
				uParam0->f_242 = uParam0->f_67.f_1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_403(iParam1, 4, (uParam0->f_242 - 1), uParam0->f_25A, 0, 0, 1f, 1);
			if ((uParam0->f_242 - 1) == -1 || (uParam0->f_242 - 1) > 15)
			{
				func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
			}
			else
			{
				func_403(iParam1, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
			}
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_16 = 0;
			if (func_477())
			{
				uParam0->f_67.f_1 = 2;
			}
			else
			{
				uParam0->f_67.f_1 = 1;
			}
			uParam0->f_1EE = 0;
			uParam0->f_22E = 1;
		}
	}
}

void func_320(int iParam0)//Position - 0x1FBC9
{
	func_321(func_196(iParam0));
}

void func_321(int iParam0)//Position - 0x1FBDB
{
	if (iParam0 == -1 || iParam0 == 102)
	{
		return;
	}
	MISC::SET_BIT(&(Global_200000[func_167() /*8053*/].f_167C.f_27[(iParam0 / 32)]), (iParam0 % 32));
}

void func_322(var uParam0, int iParam1)//Position - 0x1FC18
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var2;
	
	iVar0 = 0;
	func_27(&(uParam0->f_DA), 300);
	if ((uParam0->f_67.f_1 != -1 && uParam0->f_1CE) && !uParam0->f_1CD)
	{
		func_363(func_404(uParam0->f_67.f_1));
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_67.f_F = 0;
		func_279(0, 0, 0, 1);
		if (func_278())
		{
			if (Global_26CF15 == uParam0->f_67.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_67.f_1 = Global_26CF15;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_1CD = !func_176(uParam0->f_67.f_1);
				uParam0->f_1CE = (!uParam0->f_1CD && !func_175(uParam0->f_67.f_1));
				uParam0->f_1CF = 0;
				func_403(iParam1, 1, func_404(uParam0->f_67.f_1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
				func_326(uParam0);
				if (uParam0->f_22E)
				{
					func_467(uParam0, iParam1);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || func_277(uParam0->f_DA.f_8, 0, 0)) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_8 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 > 0)
			{
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				while (func_325(func_404(uParam0->f_67.f_1)) && !func_324(func_404(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_67.f_1 = (func_177() - 1);
			}
			if (uParam0->f_1CE)
			{
				uParam0->f_22E = 1;
				uParam0->f_232 = 1;
				uParam0->f_233 = func_271();
			}
			uParam0->f_1CD = !func_176(func_404(uParam0->f_67.f_1));
			uParam0->f_1CE = (!uParam0->f_1CD && !func_175(func_404(uParam0->f_67.f_1)));
			StringCopy(&Var1, "HAIR_BEARD", 16);
			StringIntConCat(&Var1, func_404(uParam0->f_67.f_1), 16);
			uParam0->f_1CF = func_323(&Var1, func_404(uParam0->f_67.f_1));
			uParam0->f_216 = { Var1 };
			func_403(iParam1, 1, (func_404(uParam0->f_67.f_1) - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
			func_326(uParam0);
			if (uParam0->f_22E)
			{
				func_467(uParam0, iParam1);
				uParam0->f_22E = 0;
			}
			else
			{
				func_382(uParam0->f_67.f_1, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || func_274(uParam0->f_DA.f_9, 0, 0)) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_9 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 < (func_177() - 1))
			{
				uParam0->f_67.f_1++;
				while (func_325(func_404(uParam0->f_67.f_1)) && !func_324(func_404(uParam0->f_67.f_1)))
				{
					uParam0->f_67.f_1++;
				}
			}
			else
			{
				uParam0->f_67.f_1 = 0;
			}
			if (uParam0->f_1CE)
			{
				uParam0->f_22E = 1;
				uParam0->f_232 = 1;
				uParam0->f_233 = func_271();
			}
			uParam0->f_1CD = !func_176(func_404(uParam0->f_67.f_1));
			uParam0->f_1CE = (!uParam0->f_1CD && !func_175(func_404(uParam0->f_67.f_1)));
			StringCopy(&Var2, "HAIR_BEARD", 16);
			StringIntConCat(&Var2, func_404(uParam0->f_67.f_1), 16);
			uParam0->f_1CF = func_323(&Var2, func_404(uParam0->f_67.f_1));
			uParam0->f_216 = { Var2 };
			func_403(iParam1, 1, (func_404(uParam0->f_67.f_1) - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
			func_326(uParam0);
			if (uParam0->f_22E)
			{
				func_467(uParam0, iParam1);
				uParam0->f_22E = 0;
			}
			else
			{
				func_382(uParam0->f_67.f_1, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_59 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (func_404(uParam0->f_67.f_1) == uParam0->f_FF)
			{
				func_203("HAIR_CUR_1", 4000, 0);
				uParam0->f_100 = func_404(uParam0->f_67.f_1);
			}
			else if (!func_176(func_404(uParam0->f_67.f_1)))
			{
				func_203("HAIR_LOCK", 4000, 0);
			}
			else if (!func_226(uParam0->f_67.f_2))
			{
				func_203("HAIR_AFF_1", 4000, 0);
				func_224(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(*uParam0)));
				func_220(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500()) && !func_211(78225582, func_219(uParam0->f_1EE), func_216(uParam0->f_1EE, uParam0->f_216, 0), 478352891, 1, uParam0->f_67.f_2, 1, 4, func_215(uParam0->f_1EE), 3))
			{
				func_206(func_209());
				func_203("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
				{
					uParam0->f_67.f_19 = 1;
					uParam0->f_67.f_1A = 0;
				}
				func_403(iParam1, 1, (uParam0->f_FF - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
				uParam0->f_67.f_F = 1;
				uParam0->f_100 = func_404(uParam0->f_67.f_1);
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_403(iParam1, 1, (uParam0->f_100 - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
			}
			else
			{
				func_403(iParam1, 1, uParam0->f_FF + 1, uParam0->f_25A, 0, 0, uParam0->f_101, 1);
			}
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_16 = 0;
			uParam0->f_67.f_1 = 1;
			uParam0->f_1EE = 0;
			uParam0->f_22E = 1;
		}
	}
}

int func_323(char* sParam0, int iParam1)//Position - 0x2029B
{
	if (iParam1 >= 19 + 1)
	{
		if (iParam1 >= 27 && iParam1 <= 36)
		{
			StringCopy(sParam0, "BRD_HP_", 16);
			StringIntConCat(sParam0, (iParam1 - 27), 16);
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x202D4
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_325(int iParam0)//Position - 0x20300
{
	int iVar0;
	
	iVar0 = func_198(iParam0);
	if (iVar0 == 79)
	{
		return 1;
	}
	if (iParam0 >= 19 + 1)
	{
		return 1;
	}
	return 0;
}

void func_326(var uParam0)//Position - 0x20329
{
	struct<4> Var0;
	
	if (func_590(1))
	{
		StringCopy(&Var0, "HAIR_BEARD", 16);
		StringIntConCat(&Var0, func_404(uParam0->f_67.f_1), 16);
		func_323(&Var0, func_404(uParam0->f_67.f_1));
		uParam0->f_67.f_2 = func_327(uParam0, func_404(uParam0->f_67.f_1), &Var0, 1);
		func_239(Var0, uParam0->f_67.f_2, 0, 1, 0);
	}
}

int func_327(var uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x2038A
{
	int iVar0;
	
	iVar0 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A36));
				break;
			
			case 1:
				iVar0 = 150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A37));
				break;
			
			case 2:
				iVar0 = 430;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A38));
				break;
			
			case 3:
				iVar0 = 325;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A39));
				break;
			
			case 4:
				iVar0 = 465;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3A));
				break;
			
			case 5:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3B));
				break;
			
			case 6:
				iVar0 = 350;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3C));
				break;
			
			case 7:
				iVar0 = 600;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3D));
				break;
			
			case 8:
				iVar0 = 220;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3E));
				break;
			
			case 9:
				iVar0 = 1425;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A3F));
				break;
			
			case 10:
				iVar0 = 1700;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A40));
				break;
			
			case 11:
				iVar0 = 290;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A41));
				break;
			
			case 12:
				iVar0 = 185;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A42));
				break;
			
			case 13:
				iVar0 = 255;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A43));
				break;
			
			case 14:
				iVar0 = 1150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A44));
				break;
			
			case 15:
				iVar0 = 1975;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A45));
				break;
			
			case 16:
				iVar0 = 875;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A46));
				break;
			
			case 17:
				iVar0 = 2000;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A47));
				break;
			
			case 18:
				iVar0 = 725;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A48));
				break;
			
			case 19:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A49));
				break;
			
			case 20:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_A49));
				break;
			
			case 27:
				iVar0 = Global_40001.f_10C7;
				break;
			
			case 28:
				iVar0 = Global_40001.f_10C8;
				break;
			
			case 29:
				iVar0 = Global_40001.f_10C9;
				break;
			
			case 30:
				iVar0 = Global_40001.f_10CA;
				break;
			
			case 31:
				iVar0 = Global_40001.f_10CB;
				break;
			
			case 32:
				iVar0 = Global_40001.f_10CC;
				break;
			
			case 33:
				iVar0 = Global_40001.f_10CD;
				break;
			
			case 36:
				iVar0 = Global_40001.f_10CE;
				break;
			
			case 34:
				iVar0 = Global_40001.f_10CF;
				break;
			
			case 35:
				iVar0 = Global_40001.f_10D0;
				break;
			}
	}
	if (bParam3)
	{
		func_328(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(func_216(uParam0->f_1EE, *sParam2, 0), 1886717078, 1);
	}
	return iVar0;
}

void func_328(var uParam0, int iParam1)//Position - 0x20756
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_331())
		{
			iVar0 = (iVar0 + Global_40001.f_68);
		}
	}
	if (func_330(*uParam0, func_182()))
	{
		iVar0 += 100;
	}
	iVar0 = func_329(iVar0, 0, 100);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f))));
}

int func_329(int iParam0, int iParam1, int iParam2)//Position - 0x207B6
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

int func_330(int iParam0, int iParam1)//Position - 0x207DB
{
	switch (iParam1)
	{
		case 0:
			return func_16(iParam0, 5, 0);
			break;
		
		case 1:
			return func_16(iParam0, 7, 0);
			break;
		
		case 2:
			return func_16(iParam0, 6, 0);
			break;
	}
	return 0;
}

int func_331()//Position - 0x20827
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_360())
	{
		if (func_335())
		{
			iVar0 = func_333();
			iVar1 = func_332();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_67) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_332()//Position - 0x20885
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	return iVar0;
}

int func_333()//Position - 0x208A1
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C9);
	iVar0 = (iVar0 + Global_1460CA);
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	iVar0 = (iVar0 + Global_1460CD);
	iVar0 = (iVar0 + Global_1460CC);
	iVar0 = (iVar0 + func_334(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_334(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_334(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_334(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_334(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_334(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_334(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_334(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_334(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_334(int iParam0)//Position - 0x2095F
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_335()//Position - 0x2097D
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_359(joaat("mpply_started_mp")) };
	if (func_336(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_336(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x209C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_357(Param1);
	iVar1 = func_347(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_337(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0, int iParam1)//Position - 0x209FC
{
	int iVar0;
	int iVar1;
	
	if (!func_345(iParam1) || !func_345(iParam0))
	{
		return 1;
	}
	iVar0 = func_343(iParam0);
	iVar1 = func_343(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_342(iParam0);
	iVar1 = func_342(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_341(iParam0);
	iVar1 = func_341(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_338(int iParam0)//Position - 0x20B08
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_339(int iParam0)//Position - 0x20B1B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_340(int iParam0)//Position - 0x20B2E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_341(int iParam0)//Position - 0x20B41
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_342(int iParam0)//Position - 0x20B53
{
	return iParam0 & 15;
}

var func_343(int iParam0)//Position - 0x20B60
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_344(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_344(bool bParam0, int iParam1, int iParam2)//Position - 0x20B85
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_345(int iParam0)//Position - 0x20B9C
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
	iVar0 = func_338(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_339(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_340(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_343(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_342(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_341(iParam0);
	if (iVar5 < 1 || iVar5 > func_346(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_346(int iParam0, int iParam1)//Position - 0x20C78
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

var func_347(struct<7> Param0, int iParam1)//Position - 0x20D1A
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_356(Param0) == 0)
	{
		uVar0 = func_357(Param0);
		uVar1 = uVar0;
		func_348(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_348(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x20D5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_343(*uParam0);
	iVar1 = func_342(*uParam0);
	iVar2 = func_341(*uParam0);
	iVar3 = func_340(*uParam0);
	iVar4 = func_339(*uParam0);
	iVar5 = func_338(*uParam0);
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
	iVar6 = func_346(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_346(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_349(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x20EDC
{
	func_355(uParam0, iParam1);
	func_354(uParam0, iParam2);
	func_353(uParam0, iParam3);
	func_352(uParam0, iParam4);
	func_351(uParam0, iParam5);
	func_350(uParam0, iParam6);
}

void func_350(var uParam0, int iParam1)//Position - 0x20F14
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

void func_351(var uParam0, int iParam1)//Position - 0x20F9A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_352(var uParam0, int iParam1)//Position - 0x20FCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_342(*uParam0);
	iVar1 = func_343(*uParam0);
	if (iParam1 < 1 || iParam1 > func_346(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_353(var uParam0, int iParam1)//Position - 0x2101E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_354(var uParam0, int iParam1)//Position - 0x21058
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_355(var uParam0, int iParam1)//Position - 0x21093
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_356(struct<7> Param0)//Position - 0x210CF
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_357(struct<6> Param0, var uParam1)//Position - 0x21125
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_350(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_351(&uVar0, func_358(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_352(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_353(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_354(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_355(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_358(int iParam0)//Position - 0x2119B
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_359(int iParam0)//Position - 0x21260
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var2, 7, -1))
	{
		return Var2;
	}
	return Var1;
}

int func_360()//Position - 0x21284
{
	if (func_362() && func_361(0))
	{
		return 1;
	}
	return 0;
}

var func_361(int iParam0)//Position - 0x212A2
{
	return Global_140671[iParam0];
}

var func_362()//Position - 0x212B2
{
	return func_361(func_19() + 1);
}

void func_363(int iParam0)//Position - 0x212C4
{
	func_321(func_198(iParam0));
}

void func_364(var uParam0, int iParam1)//Position - 0x212D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	func_27(&(uParam0->f_DA), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_67.f_F = 0;
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (MISC::IS_PC_VERSION())
		{
			func_279(0, 0, 0, 1);
			if (func_278())
			{
				if (Global_26CF15 == uParam0->f_67.f_1)
				{
					iVar1 = 1;
				}
				else
				{
					uParam0->f_67.f_1 = Global_26CF15;
					if (func_379(&Global_26C92B, 0, uParam0->f_67.f_1))
					{
						if (uParam0->f_1CE)
						{
							uParam0->f_22E = 1;
							uParam0->f_232 = 1;
							uParam0->f_233 = func_271();
						}
						Stack.Push(iVar0);
						Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
						Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
						Call_Loc(uParam0->f_1C1);
						uParam0->f_1CD = !StackVal;
						Stack.Push(!uParam0->f_1CD);
						Stack.Push(iVar0);
						Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
						Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
						Call_Loc(uParam0->f_1C4);
						uParam0->f_1CE = (StackVal && StackVal);
						uParam0->f_1CF = MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6);
						uParam0->f_216 = { Global_10A0A[1 /*14*/].f_8 };
						Stack.Push(iParam1);
						Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
						Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_1C0);
						func_378(uParam0);
						if (uParam0->f_22E)
						{
							func_370(uParam0, iParam1, uParam0->f_1CE);
							uParam0->f_22E = 0;
						}
						else
						{
							func_382(uParam0->f_67.f_1, 1, 1);
						}
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				}
			}
		}
		if ((((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || func_277(uParam0->f_DA.f_8, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_8 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (func_369(&Global_26C92B, 0, uParam0->f_67.f_1, &(uParam0->f_67.f_1), 1))
			{
				if (uParam0->f_1CE)
				{
					uParam0->f_22E = 1;
					uParam0->f_232 = 1;
					uParam0->f_233 = func_271();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Call_Loc(uParam0->f_1C1);
				uParam0->f_1CD = !StackVal;
				Stack.Push(!uParam0->f_1CD);
				Stack.Push(iVar0);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Call_Loc(uParam0->f_1C4);
				uParam0->f_1CE = (StackVal && StackVal);
				uParam0->f_1CF = MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6);
				uParam0->f_216 = { Global_10A0A[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
				func_378(uParam0);
				if (uParam0->f_22E)
				{
					func_370(uParam0, iParam1, uParam0->f_1CE);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		else if ((((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || func_274(uParam0->f_DA.f_9, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_9 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (func_366(&Global_26C92B, 0, uParam0->f_67.f_1, &(uParam0->f_67.f_1), 1))
			{
				if (uParam0->f_1CE)
				{
					uParam0->f_22E = 1;
					uParam0->f_232 = 1;
					uParam0->f_233 = func_271();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Call_Loc(uParam0->f_1C1);
				uParam0->f_1CD = !StackVal;
				Stack.Push(!uParam0->f_1CD);
				Stack.Push(iVar0);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Call_Loc(uParam0->f_1C4);
				uParam0->f_1CE = (StackVal && StackVal);
				uParam0->f_1CF = MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6);
				uParam0->f_216 = { Global_10A0A[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
				func_378(uParam0);
				if (uParam0->f_22E)
				{
					func_370(uParam0, iParam1, uParam0->f_1CE);
					uParam0->f_22E = 0;
				}
				else
				{
					func_382(uParam0->f_67.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1)
		{
			iVar1 = 0;
			iLocal_59 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			Stack.Push(iVar0);
			Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
			Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
			Call_Loc(uParam0->f_1C1);
			if (!StackVal)
			{
				func_203("HAIR_LOCK", 4000, 0);
			}
			else if (func_365(uParam0, uParam0->f_67.f_1))
			{
				if (uParam0->f_1CF && !MISC::IS_STRING_NULL_OR_EMPTY(func_143(&(uParam0->f_216), 0)))
				{
					func_203("HAIR_CUR_2_DLC", 4000, 0);
					func_142(func_143(&(uParam0->f_216), 0));
				}
				else
				{
					func_203("HAIR_CUR_2", 4000, 0);
				}
			}
			else if (!func_226(uParam0->f_67.f_2))
			{
				func_203("HAIR_AFF_2", 4000, 0);
				func_224(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(*uParam0)));
				func_220(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500()) && !func_211(78225582, func_219(uParam0->f_1EE), func_216(uParam0->f_1EE, uParam0->f_216, 0), 478352891, 1, uParam0->f_67.f_2, 1, 4, func_215(uParam0->f_1EE), 3))
			{
				func_206(func_209());
				func_203("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
				{
					uParam0->f_67.f_19 = 1;
					uParam0->f_67.f_1A = 0;
				}
				if (uParam0->f_1EE == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_FE);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					uParam0->f_67.f_F = 1;
				}
				else if (uParam0->f_1EE == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_FF);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					uParam0->f_67.f_F = 1;
				}
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_16 = 0;
			if (func_477() || func_476())
			{
				if (uParam0->f_1EE == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_FE);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
				}
				else if (uParam0->f_1EE == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_FF);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1EE = 4;
					uParam0->f_232 = 1;
					func_178(&(uParam0->f_1C6), &Global_26C92B, 1, func_490(uParam0), -1, &(uParam0->f_2AB), &(uParam0->f_2AE));
				}
				else
				{
					uParam0->f_1EE = 0;
				}
				uParam0->f_67.f_1 = 0;
				uParam0->f_22E = 1;
			}
			else
			{
				uParam0->f_67.f_1F = 6;
				uParam0->f_67.f_5 = 0;
			}
		}
	}
}

int func_365(var uParam0, int iParam1)//Position - 0x21A62
{
	if (uParam0->f_1EE == 1 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_26C92B[iParam1] == uParam0->f_FE)
		{
			return 1;
		}
	}
	else if (Global_26C92B[iParam1] == uParam0->f_FF)
	{
		return 1;
	}
	return 0;
}

int func_366(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x21AA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 == 1)
	{
		func_368(&iVar0, &iVar1);
		iVar2 = iParam2 + 1;
		while (iVar2 <= iVar1)
		{
			if (func_367(uParam0, Global_26CB8D[iVar2]))
			{
				*uParam3 = iVar2;
				return 1;
			}
			iVar2++;
		}
		if (bParam4)
		{
			iVar2 = iVar0;
			while (iVar2 <= (iParam2 - 1))
			{
				if (func_367(uParam0, Global_26CB8D[iVar2]))
				{
					*uParam3 = iVar2;
					return 1;
				}
				iVar2++;
			}
		}
	}
	else
	{
		iVar3 = iParam2 + 1;
		while (iVar3 <= (uParam0->f_DE - 1))
		{
			if ((*uParam0)[iVar3] != -99)
			{
				*uParam3 = iVar3;
				return 1;
			}
			iVar3++;
		}
		if (bParam4)
		{
			iVar3 = 0;
			while (iVar3 <= (iParam2 - 1))
			{
				if ((*uParam0)[iVar3] != -99)
				{
					*uParam3 = iVar3;
					return 1;
				}
				iVar3++;
			}
		}
	}
	return 0;
}

bool func_367(var uParam0, int iParam1)//Position - 0x21B85
{
	return MISC::IS_BIT_SET(uParam0->f_14E[(iParam1 / 32)], (iParam1 % 32));
}

void func_368(var uParam0, var uParam1)//Position - 0x21BA2
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("wardrobe_sp") || MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("wardrobe_mp"))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*uParam0 = 0;
			*uParam1 = (Global_26CB8D - 1);
		}
		else
		{
			*uParam0 = 0;
			*uParam1 = (Global_26CB8D - 1);
		}
	}
	else
	{
		*uParam0 = 0;
		*uParam1 = (Global_26CB8D - 1);
	}
}

int func_369(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x21C03
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 == 1)
	{
		func_368(&iVar0, &iVar1);
		iVar2 = (iParam2 - 1);
		while (iVar2 >= iVar0)
		{
			if (func_367(uParam0, Global_26CB8D[iVar2]))
			{
				*uParam3 = iVar2;
				return 1;
			}
			iVar2 = (iVar2 + -1);
		}
		if (bParam4)
		{
			iVar2 = iVar1;
			while (iVar2 >= iParam2 + 1)
			{
				if (func_367(uParam0, Global_26CB8D[iVar2]))
				{
					*uParam3 = iVar2;
					return 1;
				}
				iVar2 = (iVar2 + -1);
			}
		}
	}
	else
	{
		iVar3 = (iParam2 - 1);
		while (iVar3 >= 0)
		{
			if ((*uParam0)[iVar3] != -99)
			{
				*uParam3 = iVar3;
				return 1;
			}
			iVar3 = (iVar3 + -1);
		}
		if (bParam4)
		{
			iVar3 = (uParam0->f_DE - 1);
			while (iVar3 >= iParam2 + 1)
			{
				if ((*uParam0)[iVar3] != -99)
				{
					*uParam3 = iVar3;
					return 1;
				}
				iVar3 = (iVar3 + -1);
			}
		}
	}
	return 0;
}

void func_370(var uParam0, int iParam1, int iParam2)//Position - 0x21CE0
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<14> Var7;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_232);
	func_266(0);
	func_263(*uParam0);
	func_262(1, 1, 0, 0, 0);
	func_261(1, 2, 1, 1, 1);
	if (uParam0->f_1EE == 2)
	{
		func_259("HAIR_TITLE_1");
	}
	else
	{
		func_259("HAIR_TITLE_2");
	}
	uParam0->f_1CD = 0;
	uParam0->f_1CE = 0;
	uParam0->f_1CF = 0;
	uParam0->f_1D5 = 0;
	if (Global_26C92B.f_DE == 0)
	{
		func_255(0, "HAIR_NONE", 0, 1, 0, 0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Global_26C92B.f_DE)
		{
			iVar5 = Global_26C92B[iVar2];
			uVar6 = Global_26C92B.f_6F[iVar2];
			Stack.Push(iVar0);
			Stack.Push(uVar6);
			Stack.Push(iVar5);
			Call_Loc(uParam0->f_1C5);
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (func_374(Global_26C92B.f_DF[iVar2], &Var1))
			{
				Var7.f_8 = { Var1 };
			}
			if (uParam0->f_67.f_1 == iVar2)
			{
				uParam0->f_216 = { Var7.f_8 };
			}
			if (!MISC::IS_BIT_SET(Var7.f_6, 1))
			{
				func_255(iVar2, &(Var7.f_8), 0, 1, 0, 0);
				func_255(iVar2, "", 1, 1, 0, 0);
				func_254(15, 0);
				if (iVar2 == uParam0->f_67.f_1)
				{
					uParam0->f_1CD = 1;
				}
			}
			else if (func_365(uParam0, iVar2))
			{
				func_255(iVar2, &(Var7.f_8), 0, 1, 0, 0);
				func_255(iVar2, "", 1, 1, 0, 0);
				func_254(14, 0);
				iVar3 = iVar2;
			}
			else
			{
				if (MISC::IS_BIT_SET(Var7.f_6, 4) || (iParam2 && iVar2 == uParam0->f_67.f_1))
				{
					func_255(iVar2, &(Var7.f_8), 1, 1, 0, 0);
					func_254(2, 0);
					if (iVar2 == uParam0->f_67.f_1)
					{
						uParam0->f_1CE = 1;
					}
				}
				else
				{
					func_255(iVar2, &(Var7.f_8), 0, 1, 0, 0);
				}
				iVar4 = func_372(uParam0, &Var7, iVar0, iVar5, 0);
				if (iVar4 > 0)
				{
					func_255(iVar2, "ITEM_COST", 1, 1, 0, 0);
					func_251(iVar4, 0);
				}
				else
				{
					func_255(iVar2, "ITEM_FREE", 0, 1, 0, 0);
				}
			}
			iVar2++;
		}
	}
	if (uParam0->f_232)
	{
		uParam0->f_232 = 0;
		func_371(uParam0->f_233);
	}
	else
	{
		uParam0->f_67.f_1 = iVar3;
	}
	func_382(uParam0->f_67.f_1, 1, 1);
	Stack.Push(iParam1);
	Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
	Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Call_Loc(uParam0->f_1C0);
	uParam0->f_1CF = MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6);
	func_378(uParam0);
	if (uParam0->f_2A5)
	{
		func_242(201, "ITEM_BUY", -1);
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
}

void func_371(var uParam0)//Position - 0x21FBB
{
	Global_4354.f_1381 = uParam0;
}

int func_372(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x21FCB
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = uParam1->f_7;
		if (uParam0->f_1EE == 1)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_42055.f_5));
		}
		else if (uParam0->f_1EE == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_42055.f_1));
		}
		else if (uParam0->f_1EE == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_42055.f_3));
		}
		switch (MISC::GET_HASH_KEY(&(uParam1->f_8)))
		{
			case 526112963:
				iVar0 = Global_40001.f_14EF;
				break;
			
			case -655766568:
				iVar0 = Global_40001.f_14F0;
				break;
			
			case -431298918:
				iVar0 = Global_40001.f_14F1;
				break;
			
			case 2082181693:
				iVar0 = Global_40001.f_14F2;
				break;
			
			case -1982485071:
				iVar0 = Global_40001.f_14F3;
				break;
			
			case 239253137:
				iVar0 = Global_40001.f_14F4;
				break;
			
			case 1536545078:
				iVar0 = Global_40001.f_14F5;
				break;
			
			case 834633098:
				iVar0 = Global_40001.f_14F6;
				break;
			
			case -10053415:
				iVar0 = Global_40001.f_14F7;
				break;
			
			case -782254908:
				iVar0 = Global_40001.f_14F8;
				break;
			
			case 5888009:
				iVar0 = Global_40001.f_14F9;
				break;
			
			case 312966308:
				iVar0 = Global_40001.f_14FA;
				break;
			
			case -672463060:
				iVar0 = Global_40001.f_14FB;
				break;
			
			case -231851086:
				iVar0 = Global_40001.f_14FC;
				break;
			
			case -1527144118:
				iVar0 = Global_40001.f_14FD;
				break;
			
			case 187822033:
				iVar0 = Global_40001.f_14FE;
				break;
			
			case -1722577898:
				iVar0 = Global_40001.f_14FF;
				break;
			
			case -184040579:
				iVar0 = Global_40001.f_1500;
				break;
			
			case -529982912:
				iVar0 = Global_40001.f_1501;
				break;
			
			case -425711954:
				iVar0 = Global_40001.f_1502;
				break;
			
			case -2145651656:
				iVar0 = Global_40001.f_1503;
				break;
			
			case 1407032252:
				iVar0 = Global_40001.f_1504;
				break;
			
			case 478784789:
				iVar0 = Global_40001.f_1505;
				break;
			
			case 1849774211:
				iVar0 = Global_40001.f_1506;
				break;
			
			case 992406095:
				iVar0 = Global_40001.f_1507;
				break;
			
			case -14781889:
				iVar0 = Global_40001.f_1508;
				break;
			
			case -2044526518:
				iVar0 = Global_40001.f_1509;
				break;
			
			case -1737906985:
				iVar0 = Global_40001.f_150A;
				break;
			
			case 1701920483:
				iVar0 = Global_40001.f_150B;
				break;
			
			case -1222188463:
				iVar0 = Global_40001.f_150C;
				break;
			
			case 1346719200:
				iVar0 = Global_40001.f_150D;
				break;
			
			case -231468525:
				iVar0 = Global_40001.f_150E;
				break;
			
			case 76461768:
				iVar0 = Global_40001.f_150F;
				break;
			
			case 382786380:
				iVar0 = Global_40001.f_1510;
				break;
			
			case 690257907:
				iVar0 = Global_40001.f_1511;
				break;
			
			case -743251029:
				iVar0 = Global_40001.f_1512;
				break;
			
			case -1459843521:
				iVar0 = Global_40001.f_1513;
				break;
			
			case -283075962:
				iVar0 = Global_40001.f_1514;
				break;
			
			case -997243548:
				iVar0 = Global_40001.f_1515;
				break;
			
			case -1711837131:
				iVar0 = Global_40001.f_1516;
				break;
			
			case 885914480:
				iVar0 = Global_40001.f_1742[0];
				break;
			
			case 1110382134:
				iVar0 = Global_40001.f_1742[1];
				break;
			
			case -2025250711:
				iVar0 = Global_40001.f_1742[2];
				break;
			
			case -1223458819:
				iVar0 = Global_40001.f_1742[3];
				break;
			
			case 1806133542:
				iVar0 = Global_40001.f_1742[4];
				break;
			
			case 119592333:
				iVar0 = Global_40001.f_1742[5];
				break;
			
			case -1585051047:
				iVar0 = Global_40001.f_1742[6];
				break;
			
			case -1278497052:
				iVar0 = Global_40001.f_1742[7];
				break;
			
			case -1109736702:
				iVar0 = Global_40001.f_1742[8];
				break;
			
			case -1316574634:
				iVar0 = Global_40001.f_1742[9];
				break;
			
			case 396231341:
				iVar0 = Global_40001.f_1742[10];
				break;
			
			case 1312059353:
				iVar0 = Global_40001.f_1742[11];
				break;
			
			case 980600918:
				iVar0 = Global_40001.f_1742[12];
				break;
			
			case 2040481470:
				iVar0 = Global_40001.f_1742[13];
				break;
			
			case -1485364627:
				iVar0 = Global_40001.f_1742[14];
				break;
			
			case 785834208:
				iVar0 = Global_40001.f_1742[15];
				break;
			
			case 544621599:
				iVar0 = Global_40001.f_1742[16];
				break;
			
			case 1398581739:
				iVar0 = Global_40001.f_1742[17];
				break;
			
			case 1157565744:
				iVar0 = Global_40001.f_1742[18];
				break;
			
			case 1052836024:
				iVar0 = Global_40001.f_1742[19];
				break;
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_3C));
		if (MISC::IS_BIT_SET(uParam1->f_6, 6))
		{
			switch (Global_280005)
			{
				case joaat("CU_VAL_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1348));
					break;
				
				case joaat("CU_INDI_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_17F2));
					break;
				}
		}
	}
	else if (uParam0->f_1EE == 1)
	{
		iVar0 = func_373(uParam0, iParam2, iParam3, 1);
	}
	else if (uParam0->f_1EE == 2)
	{
		iVar0 = func_373(uParam0, iParam2, iParam3, 0);
	}
	if (bParam4)
	{
		func_328(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(func_216(uParam0->f_1EE, uParam1->f_8, 0), 1068386274, 1);
	}
	return iVar0;
}

int func_373(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22599
{
	int iVar0;
	
	iVar0 = 1;
	if (func_490(uParam0))
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 180;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 200;
							break;
						
						case 3:
							iVar0 = 290;
							break;
						
						case 4:
							iVar0 = 350;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 1:
							iVar0 = 80;
							break;
						
						case 3:
							iVar0 = 100;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
			
			case joaat("player_one"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 2:
							iVar0 = 200;
							break;
						
						case 6:
							iVar0 = 400;
							break;
						
						case 8:
							iVar0 = 250;
							break;
						
						case 9:
							iVar0 = 450;
							break;
						
						case 14:
							iVar0 = 300;
							break;
						
						case 15:
							iVar0 = 350;
							break;
						
						case 17:
							iVar0 = 0;
							break;
						
						case 19:
							iVar0 = 180;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 100;
							break;
						}
				}
				break;
			
			case joaat("player_two"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 200;
							break;
						
						case 2:
							iVar0 = 200;
							break;
						
						case 3:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 300;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 2:
							iVar0 = 60;
							break;
						
						case 3:
							iVar0 = 80;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 40;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 50;
							break;
						
						case 3:
							iVar0 = 60;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 2:
							iVar0 = 30;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
			
			case joaat("player_one"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 25;
							break;
						
						case 1:
							iVar0 = 28;
							break;
						
						case 3:
							iVar0 = 30;
							break;
						
						case 4:
							iVar0 = 28;
							break;
						
						case 5:
							iVar0 = 25;
							break;
						
						case 7:
							iVar0 = 35;
							break;
						
						case 10:
							iVar0 = 38;
							break;
						
						case 11:
							iVar0 = 40;
							break;
						
						case 12:
							iVar0 = 45;
							break;
						
						case 13:
							iVar0 = 50;
							break;
						
						case 16:
							iVar0 = 95;
							break;
						
						case 17:
							iVar0 = 0;
							break;
						
						case 18:
							iVar0 = 150;
							break;
						
						case 19:
							iVar0 = 20;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 3:
							iVar0 = 65;
							break;
						
						case 4:
							iVar0 = 30;
							break;
						}
				}
				break;
			
			case joaat("player_two"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 3:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 30;
							break;
						
						case 6:
							iVar0 = 60;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 65;
							break;
						}
				}
				break;
			}
	}
	return iVar0;
}

bool func_374(int iParam0, char* sParam1)//Position - 0x22987
{
	StringCopy(sParam1, "", 16);
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "CSHOP_OVR_0", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "CSHOP_OVR_1", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "CSHOP_OVR_2", 16);
			break;
		
		case 6:
			StringCopy(sParam1, "CSHOP_OVR_3", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "CSHOP_OVR_4", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "CSHOP_OVR_5", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "CSHOP_OVR_6", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "CSHOP_OVR_7", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "CSHOP_OVR_8", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "CSHOP_OVR_9", 16);
			break;
		
		case 11:
			StringCopy(sParam1, "CSHOP_OVR_10", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "CSHOP_OVR_11", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "CSHOP_OVR_12", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "CSHOP_OVR_13", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "CSHOP_OVR_14", 16);
			break;
		
		case 16:
			StringCopy(sParam1, "CSHOP_OVR_15", 16);
			break;
		
		case 17:
			StringCopy(sParam1, "CSHOP_OVR_16", 16);
			break;
		
		case 18:
			StringCopy(sParam1, "CSHOP_OVR_17", 16);
			break;
		
		case 19:
			StringCopy(sParam1, "CSHOP_OVR_18", 16);
			break;
		
		case 20:
			StringCopy(sParam1, "CSHOP_OVR_19", 16);
			break;
		
		case 21:
			StringCopy(sParam1, "CSHOP_OVR_20", 16);
			break;
		
		case 23:
		case 24:
		case 27:
		case 25:
		case 22:
		case 26:
		case 30:
		case 28:
		case 29:
		case 32:
		case 31:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
			StringCopy(sParam1, func_375(func_377(iParam0), 0, 0), 16);
			break;
	}
	return MISC::GET_HASH_KEY(sParam1) != 0;
}

char* func_375(int iParam0, bool bParam1, int iParam2)//Position - 0x22B7C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_376(iParam0, bParam1, iParam2);
	}
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "CSHOP_TITLE1";
			}
			else
			{
				return "CSHOP_ITEM1";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "CSHOP_TITLE36";
			}
			else
			{
				return "CSHOP_ITEM36";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "CSHOP_TITLE49";
			}
			else
			{
				return "CSHOP_ITEM49";
			}
			break;
		
		case 36:
			if (bParam1)
			{
				return "CSHOP_TITLE37";
			}
			else
			{
				return "CSHOP_ITEM37";
			}
			break;
		
		case 17:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "CSHOP_TITLE79";
			}
			else
			{
				return "CSHOP_ITEM79";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "CSHOP_TITLE80";
			}
			else
			{
				return "CSHOP_ITEM80";
			}
			break;
		
		case 28:
			if (bParam1)
			{
				return "CSHOP_TITLE46";
			}
			else
			{
				return "CSHOP_ITEM46";
			}
			break;
		
		case 31:
			if (bParam1)
			{
				return "CSHOP_TITLE78";
			}
			else
			{
				return "CSHOP_ITEM78";
			}
			break;
		
		case 35:
			if (bParam1)
			{
				return "CSHOP_TITLE81";
			}
			else
			{
				return "CSHOP_ITEM81";
			}
			break;
		
		case 30:
			if (bParam1)
			{
				return "CSHOP_TITLE50";
			}
			else
			{
				return "CSHOP_ITEM50";
			}
			break;
		
		case 37:
			if (bParam1)
			{
				return "CSHOP_TITLE82";
			}
			else
			{
				return "CSHOP_ITEM82";
			}
			break;
		
		case 16:
			if (bParam1)
			{
				return "CSHOP_TITLE5";
			}
			else
			{
				return "CSHOP_ITEM5";
			}
			break;
		
		case 24:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		
		case 22:
			if (bParam1)
			{
				return "CSHOP_TITLE72";
			}
			else
			{
				return "CSHOP_ITEM72";
			}
			break;
		
		case 33:
			if (bParam1)
			{
				return "CSHOP_TITLE73";
			}
			else
			{
				return "CSHOP_ITEM73";
			}
			break;
		
		case 25:
			if (bParam1)
			{
				return "CSHOP_TITLE51";
			}
			else
			{
				return "CSHOP_ITEM51";
			}
			break;
		
		case 32:
			if (bParam1)
			{
				return "CSHOP_TITLE3";
			}
			else
			{
				return "CSHOP_ITEM3";
			}
			break;
		
		case 20:
			if (bParam1)
			{
				return "CSHOP_TITLE8";
			}
			else
			{
				return "CSHOP_ITEM8";
			}
			break;
		
		case 34:
			if (bParam1)
			{
				return "CSHOP_TITLE45";
			}
			else
			{
				return "CSHOP_ITEM45";
			}
			break;
		
		case 19:
			if (bParam1)
			{
				return "CSHOP_TITLE38";
			}
			else
			{
				return "CSHOP_ITEM38";
			}
			break;
		
		case 29:
			if (bParam1)
			{
				return "CSHOP_TITLE47";
			}
			else
			{
				return "CSHOP_ITEM47";
			}
			break;
		
		case 21:
			if (bParam1)
			{
				return "CSHOP_TITLE39";
			}
			else
			{
				return "CSHOP_ITEM39";
			}
			break;
		
		case 26:
			if (bParam1)
			{
				return "CSHOP_TITLE48";
			}
			else
			{
				return "CSHOP_ITEM48";
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return "CSHOP_TITLE40";
			}
			else
			{
				return "CSHOP_ITEM40";
			}
			break;
		
		case 18:
			if (bParam1)
			{
				return "CSHOP_TITLE41";
			}
			else
			{
				return "CSHOP_ITEM41";
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return "CSHOP_TITLE70";
			}
			else
			{
				return "CSHOP_ITEM70";
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return "CSHOP_TITLE71";
			}
			else
			{
				return "CSHOP_ITEM71";
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return "CSHOP_TITLE74";
			}
			else
			{
				return "CSHOP_ITEM74";
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return "CSHOP_TITLE125";
			}
			else
			{
				return "CSHOP_ITEM125";
			}
			break;
		
		case 27:
			if (bParam1)
			{
				return "CSHOP_TITLE126";
			}
			else
			{
				return "CSHOP_ITEM126";
			}
			break;
		
		case 23:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return "CSHOP_TITLE127";
			}
			else
			{
				return "CSHOP_ITEM127";
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return "CSHOP_TITLE128";
			}
			else
			{
				return "CSHOP_ITEM128";
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
	}
	return "INVALID_MENU";
}

char* func_376(int iParam0, bool bParam1, int iParam2)//Position - 0x2301E
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (iParam2 == joaat("CSHOP_TRY_MASK"))
				{
					return "CSHOP_TITLE41";
				}
				else if (iParam2 == joaat("CSHOP_TRY_GEAR"))
				{
					return "CSHOP_TITLE159";
				}
				else
				{
					return "CSHOP_TITLE0";
				}
			}
			else
			{
				return "CSHOP_ITEM0";
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return "CSHOP_TITLE1";
			}
			else
			{
				return "CSHOP_ITEM1";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "CSHOP_TITLE114";
			}
			else
			{
				return "CSHOP_ITEM114";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "CSHOP_TITLE113";
			}
			else
			{
				return "CSHOP_ITEM113";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "CSHOP_TITLE113";
			}
			else
			{
				return "CSHOP_ITEM113";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return "CSHOP_TITLE46";
			}
			else
			{
				return "CSHOP_ITEM46";
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return "CSHOP_TITLE92";
			}
			else
			{
				return "CSHOP_ITEM92";
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return "CSHOP_TITLE111";
			}
			else
			{
				return "CSHOP_ITEM111";
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return "CSHOP_TITLE93";
			}
			else
			{
				return "CSHOP_ITEM93";
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return "CSHOP_TITLE3";
			}
			else
			{
				return "CSHOP_ITEM3";
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return "CSHOP_TITLE5";
			}
			else
			{
				return "CSHOP_ITEM5";
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return "CSHOP_TITLE6";
			}
			else
			{
				return "CSHOP_ITEM6";
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return "CSHOP_TITLE7";
			}
			else
			{
				return "CSHOP_ITEM7";
			}
			break;
		
		case 16:
			if (bParam1)
			{
				return "CSHOP_TITLE8";
			}
			else
			{
				return "CSHOP_ITEM8";
			}
			break;
		
		case 17:
			if (bParam1)
			{
				return "CSHOP_TITLE9";
			}
			else
			{
				return "CSHOP_ITEM9";
			}
			break;
		
		case 18:
			if (bParam1)
			{
				return "CSHOP_TITLE10";
			}
			else
			{
				return "CSHOP_ITEM10";
			}
			break;
		
		case 19:
			if (bParam1)
			{
				return "CSHOP_TITLE11";
			}
			else
			{
				return "CSHOP_ITEM11";
			}
			break;
		
		case 28:
			if (bParam1)
			{
				return "CSHOP_TITLE12";
			}
			else
			{
				return "CSHOP_ITEM12";
			}
			break;
		
		case 29:
			if (bParam1)
			{
				return "CSHOP_TITLE76";
			}
			else
			{
				return "CSHOP_ITEM76";
			}
			break;
		
		case 30:
			if (bParam1)
			{
				return "CSHOP_TITLE13";
			}
			else
			{
				return "CSHOP_ITEM13";
			}
			break;
		
		case 31:
			if (bParam1)
			{
				return "CSHOP_TITLE14";
			}
			else
			{
				return "CSHOP_ITEM14";
			}
			break;
		
		case 32:
			if (bParam1)
			{
				return "CSHOP_TITLE15";
			}
			else
			{
				return "CSHOP_ITEM15";
			}
			break;
		
		case 33:
			if (bParam1)
			{
				return "CSHOP_TITLE16";
			}
			else
			{
				return "CSHOP_ITEM16";
			}
			break;
		
		case 34:
			if (bParam1)
			{
				return "CSHOP_TITLE94";
			}
			else
			{
				return "CSHOP_ITEM94";
			}
			break;
		
		case 35:
			if (bParam1)
			{
				return "CSHOP_TITLE17";
			}
			else
			{
				return "CSHOP_ITEM17";
			}
			break;
		
		case 36:
			if (bParam1)
			{
				return "CSHOP_TITLE96";
			}
			else
			{
				return "CSHOP_ITEM96";
			}
			break;
		
		case 37:
			if (bParam1)
			{
				return "CSHOP_TITLE95";
			}
			else
			{
				return "CSHOP_ITEM95";
			}
			break;
		
		case 38:
			if (bParam1)
			{
				return "CSHOP_TITLE18";
			}
			else
			{
				return "CSHOP_ITEM18";
			}
			break;
		
		case 39:
			if (bParam1)
			{
				return "CSHOP_TITLE19";
			}
			else
			{
				return "CSHOP_ITEM19";
			}
			break;
		
		case 44:
			if (bParam1)
			{
				return "CSHOP_TITLE21";
			}
			else
			{
				return "CSHOP_ITEM21";
			}
			break;
		
		case 45:
			if (bParam1)
			{
				return "CSHOP_TITLE77";
			}
			else
			{
				return "CSHOP_ITEM77";
			}
			break;
		
		case 46:
			if (bParam1)
			{
				return "CSHOP_TITLE22";
			}
			else
			{
				return "CSHOP_ITEM22";
			}
			break;
		
		case 47:
			if (bParam1)
			{
				return "CSHOP_TITLE90";
			}
			else
			{
				return "CSHOP_ITEM90";
			}
			break;
		
		case 48:
			if (bParam1)
			{
				return "CSHOP_TITLE91";
			}
			else
			{
				return "CSHOP_ITEM91";
			}
			break;
		
		case 49:
			if (bParam1)
			{
				return "CSHOP_TITLE23";
			}
			else
			{
				return "CSHOP_ITEM23";
			}
			break;
		
		case 50:
			if (bParam1)
			{
				return "CSHOP_TITLE24";
			}
			else
			{
				return "CSHOP_ITEM24";
			}
			break;
		
		case 51:
			if (bParam1)
			{
				return "CSHOP_TITLE25";
			}
			else
			{
				return "CSHOP_ITEM25";
			}
			break;
		
		case 52:
			if (bParam1)
			{
				return "CSHOP_TITLE27";
			}
			else
			{
				return "CSHOP_ITEM27";
			}
			break;
		
		case 53:
			if (bParam1)
			{
				return "CSHOP_TITLE28";
			}
			else
			{
				return "CSHOP_ITEM28";
			}
			break;
		
		case 54:
			if (bParam1)
			{
				return "CSHOP_TITLE29";
			}
			else
			{
				return "CSHOP_ITEM29";
			}
			break;
		
		case 55:
			if (bParam1)
			{
				return "CSHOP_TITLE75";
			}
			else
			{
				return "CSHOP_ITEM75";
			}
			break;
		
		case 56:
			if (bParam1)
			{
				return "CSHOP_TITLE30";
			}
			else
			{
				return "CSHOP_ITEM30";
			}
			break;
		
		case 57:
			if (bParam1)
			{
				return "CSHOP_TITLE31";
			}
			else
			{
				return "CSHOP_ITEM31";
			}
			break;
		
		case 58:
			if (bParam1)
			{
				return "CSHOP_TITLE32";
			}
			else
			{
				return "CSHOP_ITEM32";
			}
			break;
		
		case 110:
			if (bParam1)
			{
				return "CSHOP_TITLE112";
			}
			else
			{
				return "CSHOP_ITEM112";
			}
			break;
		
		case 59:
			if (bParam1)
			{
				return "CSHOP_TITLE33";
			}
			else
			{
				return "CSHOP_ITEM33";
			}
			break;
		
		case 40:
			if (bParam1)
			{
				return "CSHOP_TITLE34";
			}
			else
			{
				return "CSHOP_ITEM34";
			}
			break;
		
		case 41:
			if (bParam1)
			{
				return "CSHOP_TITLE35";
			}
			else
			{
				return "CSHOP_ITEM35";
			}
			break;
		
		case 20:
			if (bParam1)
			{
				return "CSHOP_TITLE52";
			}
			else
			{
				return "CSHOP_ITEM52";
			}
			break;
		
		case 21:
			if (bParam1)
			{
				return "CSHOP_TITLE53";
			}
			else
			{
				return "CSHOP_ITEM53";
			}
			break;
		
		case 22:
			if (bParam1)
			{
				return "CSHOP_TITLE54";
			}
			else
			{
				return "CSHOP_ITEM54";
			}
			break;
		
		case 42:
			if (bParam1)
			{
				return "CSHOP_TITLE55";
			}
			else
			{
				return "CSHOP_ITEM55";
			}
			break;
		
		case 60:
			if (bParam1)
			{
				return "CSHOP_TITLE56";
			}
			else
			{
				return "CSHOP_ITEM56";
			}
			break;
		
		case 23:
			if (bParam1)
			{
				return "CSHOP_TITLE57";
			}
			else
			{
				return "CSHOP_ITEM57";
			}
			break;
		
		case 25:
			if (bParam1)
			{
				return "CSHOP_TITLE129";
			}
			else
			{
				return "CSHOP_ITEM129";
			}
			break;
		
		case 26:
			if (bParam1)
			{
				return "CSHOP_TITLE50";
			}
			else
			{
				return "CSHOP_ITEM50";
			}
			break;
		
		case 27:
			if (bParam1)
			{
				return "CSHOP_TITLE130";
			}
			else
			{
				return "CSHOP_ITEM130";
			}
			break;
		
		case 99:
			if (bParam1)
			{
				return "CSHOP_TITLE49";
			}
			else
			{
				return "CSHOP_ITEM49";
			}
			break;
		
		case 87:
			if (bParam1)
			{
				return "CSHOP_TITLE60";
			}
			else
			{
				return "CSHOP_ITEM60";
			}
			break;
		
		case 80:
			if (bParam1)
			{
				return "CSHOP_TITLE83";
			}
			else
			{
				return "CSHOP_ITEM83";
			}
			break;
		
		case 81:
			if (bParam1)
			{
				return "CSHOP_TITLE84";
			}
			else
			{
				return "CSHOP_ITEM84";
			}
			break;
		
		case 82:
			if (bParam1)
			{
				return "CSHOP_TITLE85";
			}
			else
			{
				return "CSHOP_ITEM85";
			}
			break;
		
		case 83:
			if (bParam1)
			{
				return "CSHOP_TITLE86";
			}
			else
			{
				return "CSHOP_ITEM86";
			}
			break;
		
		case 84:
			if (bParam1)
			{
				return "CSHOP_TITLE87";
			}
			else
			{
				return "CSHOP_ITEM87";
			}
			break;
		
		case 85:
			if (bParam1)
			{
				return "CSHOP_TITLE88";
			}
			else
			{
				return "CSHOP_ITEM88";
			}
			break;
		
		case 86:
			if (bParam1)
			{
				return "CSHOP_TITLE89";
			}
			else
			{
				return "CSHOP_ITEM89";
			}
			break;
		
		case 78:
			if (bParam1)
			{
				return "CSHOP_TITLE41";
			}
			else
			{
				return "CSHOP_ITEM41";
			}
			break;
		
		case 88:
			if (bParam1)
			{
				return "CSHOP_TITLE115";
			}
			else
			{
				return "CSHOP_ITEM115";
			}
			break;
		
		case 90:
			if (bParam1)
			{
				return "CSHOP_TITLE116";
			}
			else
			{
				return "CSHOP_ITEM116";
			}
			break;
		
		case 91:
			if (bParam1)
			{
				return "CSHOP_TITLE117";
			}
			else
			{
				return "CSHOP_ITEM117";
			}
			break;
		
		case 92:
			if (bParam1)
			{
				return "CSHOP_TITLE81";
			}
			else
			{
				return "CSHOP_ITEM81";
			}
			break;
		
		case 93:
			if (bParam1)
			{
				return "CSHOP_TITLE119";
			}
			else
			{
				return "CSHOP_ITEM119";
			}
			break;
		
		case 94:
			if (bParam1)
			{
				return "CSHOP_TITLE120";
			}
			else
			{
				return "CSHOP_ITEM120";
			}
			break;
		
		case 95:
			if (bParam1)
			{
				return "CSHOP_TITLE121";
			}
			else
			{
				return "CSHOP_ITEM121";
			}
			break;
		
		case 96:
			if (bParam1)
			{
				return "CSHOP_TITLE122";
			}
			else
			{
				return "CSHOP_ITEM122";
			}
			break;
		
		case 97:
			if (bParam1)
			{
				return "CSHOP_TITLE123";
			}
			else
			{
				return "CSHOP_ITEM123";
			}
			break;
		
		case 98:
			if (bParam1)
			{
				return "CSHOP_TITLE124";
			}
			else
			{
				return "CSHOP_ITEM124";
			}
			break;
		
		case 100:
			if (bParam1)
			{
				return "CSHOP_TITLE59";
			}
			else
			{
				return "CSHOP_ITEM59";
			}
			break;
		
		case 101:
			if (bParam1)
			{
				return "CSHOP_TITLE61";
			}
			else
			{
				return "CSHOP_ITEM61";
			}
			break;
		
		case 102:
			if (bParam1)
			{
				return "CSHOP_TITLE62";
			}
			else
			{
				return "CSHOP_ITEM62";
			}
			break;
		
		case 103:
			if (bParam1)
			{
				return "CSHOP_TITLE63";
			}
			else
			{
				return "CSHOP_ITEM63";
			}
			break;
		
		case 104:
			if (bParam1)
			{
				return "CSHOP_TITLE64";
			}
			else
			{
				return "CSHOP_ITEM64";
			}
			break;
		
		case 105:
			if (bParam1)
			{
				return "CSHOP_TITLE65";
			}
			else
			{
				return "CSHOP_ITEM65";
			}
			break;
		
		case 106:
			if (bParam1)
			{
				return "CSHOP_TITLE66";
			}
			else
			{
				return "CSHOP_ITEM66";
			}
			break;
		
		case 107:
			if (bParam1)
			{
				return "CSHOP_TITLE67";
			}
			else
			{
				return "CSHOP_ITEM67";
			}
			break;
		
		case 108:
			if (bParam1)
			{
				return "CSHOP_TITLE68";
			}
			else
			{
				return "CSHOP_ITEM68";
			}
			break;
		
		case 109:
			if (bParam1)
			{
				return "CSHOP_TITLE69";
			}
			else
			{
				return "CSHOP_ITEM69";
			}
			break;
		
		case 89:
			if (bParam1)
			{
				return "CSHOP_TITLE74";
			}
			else
			{
				return "CSHOP_ITEM74";
			}
			break;
		
		case 24:
			if (bParam1)
			{
				return "CSHOP_TITLE37";
			}
			else
			{
				return "CSHOP_ITEM37";
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return "CSHOP_TITLE38";
			}
			else
			{
				return "CSHOP_ITEM38";
			}
			break;
		
		case 61:
			if (bParam1)
			{
				return "CSHOP_TITLE40";
			}
			else
			{
				return "CSHOP_ITEM40";
			}
			break;
		
		case 62:
			if (bParam1)
			{
				return "CSHOP_TITLE97";
			}
			else
			{
				return "CSHOP_ITEM97";
			}
			break;
		
		case 63:
			if (bParam1)
			{
				return "CSHOP_TITLE98";
			}
			else
			{
				return "CSHOP_ITEM98";
			}
			break;
		
		case 64:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1)
				{
					return "CSHOP_TITLE131";
				}
				else
				{
					return "CSHOP_ITEM131";
				}
			}
			else if (bParam1)
			{
				return "CSHOP_TITLE127";
			}
			else
			{
				return "CSHOP_ITEM127";
			}
			break;
		
		case 65:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1)
				{
					return "CSHOP_TITLE132";
				}
				else
				{
					return "CSHOP_ITEM132";
				}
			}
			else
			{
				if (bParam1)
				{
					return "CSHOP_TITLE128";
				}
				else
				{
					return "CSHOP_ITEM128";
				}
				break;
			}
			break;
		
		case 66:
			if (bParam1)
			{
				return "CSHOP_TITLE100";
			}
			else
			{
				return "CSHOP_ITEM100";
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return "CSHOP_TITLE110";
			}
			else
			{
				return "CSHOP_ITEM110";
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return "CSHOP_TITLE101";
			}
			else
			{
				return "CSHOP_ITEM101";
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return "CSHOP_TITLE102";
			}
			else
			{
				return "CSHOP_ITEM102";
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return "CSHOP_TITLE103";
			}
			else
			{
				return "CSHOP_ITEM103";
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return "CSHOP_TITLE104";
			}
			else
			{
				return "CSHOP_ITEM104";
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return "CSHOP_TITLE108";
			}
			else
			{
				return "CSHOP_ITEM108";
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return "CSHOP_TITLE109";
			}
			else
			{
				return "CSHOP_ITEM109";
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return "CSHOP_TITLE105";
			}
			else
			{
				return "CSHOP_ITEM105";
			}
			break;
		
		case 75:
			if (bParam1)
			{
				return "CSHOP_TITLE106";
			}
			else
			{
				return "CSHOP_ITEM106";
			}
			break;
		
		case 76:
			if (bParam1)
			{
				return "CSHOP_TITLE107";
			}
			else
			{
				return "CSHOP_ITEM107";
			}
			break;
		
		case 77:
			if (bParam1)
			{
				return "CSHOP_TITLE58";
			}
			else
			{
				return "CSHOP_ITEM58";
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		
		case 111:
			if (bParam1)
			{
				return "CSHOP_TITLE150";
			}
			else
			{
				return "CSHOP_ITEM150";
			}
			break;
		
		case 112:
			if (bParam1)
			{
				return "CSHOP_TITLE151";
			}
			else
			{
				return "CSHOP_ITEM151";
			}
			break;
		
		case 113:
			if (bParam1)
			{
				return "CSHOP_TITLE152";
			}
			else
			{
				return "CSHOP_ITEM152";
			}
			break;
		
		case 114:
			if (bParam1)
			{
				return "CSHOP_TITLE153";
			}
			else
			{
				return "CSHOP_ITEM153";
			}
			break;
		
		case 115:
			if (bParam1)
			{
				return "CSHOP_TITLE154";
			}
			else
			{
				return "CSHOP_ITEM154";
			}
			break;
		
		case 116:
			if (bParam1)
			{
				return "CSHOP_TITLE155";
			}
			else
			{
				return "CSHOP_ITEM155";
			}
			break;
		
		case 117:
			if (bParam1)
			{
				return "CSHOP_TITLE156";
			}
			else
			{
				return "CSHOP_ITEM156";
			}
			break;
		
		case 119:
			if (bParam1)
			{
				return "CSHOP_TITLE157";
			}
			else
			{
				return "CSHOP_ITEM157";
			}
			break;
		
		case 118:
			if (bParam1)
			{
				return "CSHOP_TITLE158";
			}
			else
			{
				return "CSHOP_ITEM158";
			}
			break;
		
		case 120:
			if (bParam1)
			{
				return "CSHOP_TITLE160";
			}
			else
			{
				return "CSHOP_ITEM160";
			}
			break;
		
		case 124:
			if (bParam1)
			{
				return "CSHOP_TITLE159";
			}
			else
			{
				return "CSHOP_ITEM159";
			}
			break;
		
		case 122:
			if (bParam1)
			{
				return "CSHOP_TITLE161";
			}
			else
			{
				return "CSHOP_ITEM161";
			}
			break;
		
		case 121:
			if (bParam1)
			{
				return "CSHOP_TITLE162";
			}
			else
			{
				return "CSHOP_ITEM162";
			}
			break;
		
		case 123:
			if (bParam1)
			{
				return "CSHOP_TITLE163";
			}
			else
			{
				return "CSHOP_ITEM163";
			}
			break;
		
		case 125:
			if (bParam1)
			{
				return "CSHOP_TITLE164";
			}
			else
			{
				return "CSHOP_ITEM164";
			}
			break;
		
		case 126:
			if (bParam1)
			{
				return "CSHOP_TITLE165";
			}
			else
			{
				return "CSHOP_ITEM165";
			}
			break;
		
		case 127:
			if (bParam1)
			{
				return "CSHOP_TITLE166";
			}
			else
			{
				return "CSHOP_ITEM166";
			}
			break;
		
		case 128:
			if (bParam1)
			{
				return "CSHOP_TITLE167";
			}
			else
			{
				return "CSHOP_ITEM167";
			}
			break;
		
		case 129:
			if (bParam1)
			{
				return "CSHOP_TITLE168";
			}
			else
			{
				return "CSHOP_ITEM168";
			}
			break;
		
		case 130:
			if (bParam1)
			{
				return "CSHOP_TITLE169";
			}
			else
			{
				return "CSHOP_ITEM169";
			}
			break;
		
		case 131:
			if (bParam1)
			{
				return "CSHOP_TITLE170";
			}
			else
			{
				return "CSHOP_ITEM170";
			}
			break;
		
		case 132:
			if (bParam1)
			{
				return "CSHOP_TITLE171";
			}
			else
			{
				return "CSHOP_ITEM171";
			}
			break;
		
		case 133:
			if (bParam1)
			{
				return "CSHOP_TITLE172";
			}
			else
			{
				return "CSHOP_ITEM172";
			}
			break;
		
		case 134:
			if (bParam1)
			{
				return "CSHOP_TITLE173";
			}
			else
			{
				return "CSHOP_ITEM173";
			}
			break;
		
		case 135:
			if (bParam1)
			{
				return "CSHOP_TITLE174";
			}
			else
			{
				return "CSHOP_ITEM174";
			}
			break;
		
		case 136:
			if (bParam1)
			{
				return "CSHOP_TITLE175";
			}
			else
			{
				return "CSHOP_ITEM175";
			}
			break;
		
		case 137:
			if (bParam1)
			{
				return "CSHOP_TITLE176";
			}
			else
			{
				return "CSHOP_ITEM176";
			}
			break;
		
		case 138:
			if (bParam1)
			{
				return "CSHOP_TITLE177";
			}
			else
			{
				return "CSHOP_ITEM177";
			}
			break;
		
		case 139:
			if (bParam1)
			{
				return "CSHOP_TITLE178";
			}
			else
			{
				return "CSHOP_ITEM178";
			}
			break;
		
		case 140:
			if (bParam1)
			{
				return "CSHOP_TITLE179";
			}
			else
			{
				return "CSHOP_ITEM179";
			}
			break;
		
		case 141:
			if (bParam1)
			{
				return "CSHOP_TITLE180";
			}
			else
			{
				return "CSHOP_ITEM180";
			}
			break;
		
		case 142:
			if (bParam1)
			{
				return "CSHOP_TITLE181";
			}
			else
			{
				return "CSHOP_ITEM181";
			}
			break;
		
		case 143:
			if (bParam1)
			{
				return "CSHOP_TITLE182";
			}
			else
			{
				return "CSHOP_ITEM182";
			}
			break;
		
		case 144:
			if (bParam1)
			{
				return "CSHOP_TITLE183";
			}
			else
			{
				return "CSHOP_ITEM183";
			}
			break;
		
		case 145:
			if (bParam1)
			{
				return "CSHOP_TITLE184";
			}
			else
			{
				return "CSHOP_ITEM184";
			}
			break;
		
		case 146:
			if (bParam1)
			{
				return "CSHOP_TITLE185";
			}
			else
			{
				return "CSHOP_ITEM185";
			}
			break;
		
		case 147:
			if (bParam1)
			{
				return "CSHOP_TITLE186";
			}
			else
			{
				return "CSHOP_ITEM186";
			}
			break;
		
		case 148:
			if (bParam1)
			{
				return "CSHOP_TITLE187";
			}
			else
			{
				return "CSHOP_ITEM187";
			}
			break;
		
		case 149:
			if (bParam1)
			{
				return "CSHOP_TITLE188";
			}
			else
			{
				return "CSHOP_ITEM188";
			}
			break;
		
		case 150:
			if (bParam1)
			{
				return "CSHOP_TITLE189";
			}
			else
			{
				return "CSHOP_ITEM189";
			}
			break;
		
		case 151:
			if (bParam1)
			{
				return "CSHOP_TITLE190";
			}
			else
			{
				return "CSHOP_ITEM190";
			}
			break;
		
		case 152:
			if (bParam1)
			{
				return "CSHOP_TITLE191";
			}
			else
			{
				return "CSHOP_ITEM191";
			}
			break;
		
		case 153:
			if (bParam1)
			{
				return "CSHOP_TITLE192";
			}
			else
			{
				return "CSHOP_ITEM192";
			}
			break;
		
		case 154:
			if (bParam1)
			{
				return "CSHOP_TITLE193";
			}
			else
			{
				return "CSHOP_ITEM193";
			}
			break;
		
		case 155:
			if (bParam1)
			{
				return "CSHOP_TITLE194";
			}
			else
			{
				return "CSHOP_ITEM194";
			}
			break;
		
		case 156:
			if (bParam1)
			{
				return "CSHOP_TITLE195";
			}
			else
			{
				return "CSHOP_ITEM195";
			}
			break;
		
		case 157:
			if (bParam1)
			{
				return "CSHOP_TITLE196";
			}
			else
			{
				return "CSHOP_ITEM196";
			}
			break;
		
		case 158:
			if (bParam1)
			{
				return "CSHOP_TITLE197";
			}
			else
			{
				return "CSHOP_ITEM197";
			}
			break;
		
		case 159:
			if (bParam1)
			{
				return "CSHOP_TITLE198";
			}
			else
			{
				return "CSHOP_ITEM198";
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return "CSHOP_TITLE199";
			}
			else
			{
				return "CSHOP_ITEM199";
			}
			break;
		
		case 160:
			if (bParam1)
			{
				return "CSHOP_TITLE200";
			}
			else
			{
				return "CSHOP_ITEM200";
			}
			break;
		
		case 165:
			if (bParam1)
			{
				return "CSHOP_TITLE205";
			}
			else
			{
				return "CSHOP_ITEM205";
			}
			break;
		
		case 166:
			if (bParam1)
			{
				return "CSHOP_TITLE206";
			}
			else
			{
				return "CSHOP_ITEM206";
			}
			break;
		
		case 167:
			if (bParam1)
			{
				return "CSHOP_TITLE207";
			}
			else
			{
				return "CSHOP_ITEM207";
			}
			break;
		
		case 168:
			if (bParam1)
			{
				return "CSHOP_TITLE208";
			}
			else
			{
				return "CSHOP_ITEM208";
			}
			break;
		
		case 169:
			if (bParam1)
			{
				return "CSHOP_TITLE209";
			}
			else
			{
				return "CSHOP_ITEM209";
			}
			break;
		
		case 170:
			if (bParam1)
			{
				return "CSHOP_TITLE210";
			}
			else
			{
				return "CSHOP_ITEM210";
			}
			break;
	}
	return "INVALID_MENU";
}

int func_377(int iParam0)//Position - 0x244D6
{
	if (iParam0 == 22)
	{
		return 10;
	}
	else if (iParam0 == 23)
	{
		return 28;
	}
	else if (iParam0 == 24)
	{
		return 27;
	}
	else if (iParam0 == 27)
	{
		return 29;
	}
	else if (iParam0 == 25)
	{
		return 30;
	}
	else if (iParam0 == 26)
	{
		return 35;
	}
	else if (iParam0 == 28)
	{
		return 6;
	}
	else if (iParam0 == 29)
	{
		return 5;
	}
	else if (iParam0 == 30)
	{
		return 31;
	}
	else if (iParam0 == 32)
	{
		return 33;
	}
	else if (iParam0 == 31)
	{
		return 23;
	}
	else if (iParam0 == 33)
	{
		return 8;
	}
	else if (iParam0 == 34)
	{
		return 9;
	}
	else if (iParam0 == 35)
	{
		return 12;
	}
	else if (iParam0 == 36)
	{
		return 13;
	}
	else if (iParam0 == 37)
	{
		return 14;
	}
	return 0;
}

void func_378(var uParam0)//Position - 0x245CA
{
	int iVar0;
	struct<14> Var1;
	
	if (func_590(1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Stack.Push(iVar0);
		Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
		Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
		Call_Loc(uParam0->f_1C5);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
		uParam0->f_67.f_2 = func_372(uParam0, &Var1, iVar0, Global_26C92B[uParam0->f_67.f_1], 1);
		func_239(Var1.f_8, uParam0->f_67.f_2, 0, 1, 0);
	}
}

int func_379(var uParam0, int iParam1, int iParam2)//Position - 0x2463B
{
	if (iParam1 == 1)
	{
		if (func_367(uParam0, iParam2))
		{
			return 1;
		}
	}
	else if ((*uParam0)[iParam2] != -99)
	{
		return 1;
	}
	return 0;
}

void func_380(var uParam0, int iParam1)//Position - 0x2466C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = 0;
	func_27(&(uParam0->f_DA), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_67.f_F = 0;
		func_279(0, 0, 0, 1);
		if (func_278())
		{
			if (Global_26CF15 == uParam0->f_2AA)
			{
				iVar0 = 1;
			}
			else if (MISC::IS_BIT_SET(uParam0->f_2AB[(Global_26CF15 / 32)], (Global_26CF15 % 32)))
			{
				uParam0->f_2AA = Global_26CF15;
				func_382(Global_26CF15, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || func_277(uParam0->f_DA.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_8 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			bVar1 = false;
			iVar2 = (uParam0->f_2AA - 1);
			while (iVar2 >= 0)
			{
				if (MISC::IS_BIT_SET(uParam0->f_2AB[(iVar2 / 32)], (iVar2 % 32)))
				{
					bVar1 = true;
					uParam0->f_2AA = iVar2;
					iVar2 = -1;
				}
				iVar2 = (iVar2 + -1);
			}
			if (!bVar1)
			{
				iVar2 = 45;
				while (iVar2 >= uParam0->f_2AA + 1)
				{
					if (MISC::IS_BIT_SET(uParam0->f_2AB[(iVar2 / 32)], (iVar2 % 32)))
					{
						bVar1 = true;
						uParam0->f_2AA = iVar2;
						iVar2 = -1;
					}
					iVar2 = (iVar2 + -1);
				}
			}
			if (bVar1)
			{
				func_382(uParam0->f_2AA, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || func_274(uParam0->f_DA.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_9 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			bVar3 = false;
			iVar4 = uParam0->f_2AA + 1;
			while (iVar4 <= 45)
			{
				if (MISC::IS_BIT_SET(uParam0->f_2AB[(iVar4 / 32)], (iVar4 % 32)))
				{
					bVar3 = true;
					uParam0->f_2AA = iVar4;
					iVar4 = 47;
				}
				iVar4++;
			}
			if (!bVar3)
			{
				iVar4 = 0;
				while (iVar4 <= (uParam0->f_2AA - 1))
				{
					if (MISC::IS_BIT_SET(uParam0->f_2AB[(iVar4 / 32)], (iVar4 % 32)))
					{
						bVar3 = true;
						uParam0->f_2AA = iVar4;
						iVar4 = 47;
					}
					iVar4++;
				}
			}
			if (bVar3)
			{
				func_382(uParam0->f_2AA, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_1EE = 1;
			uParam0->f_22E = 1;
			func_178(&(uParam0->f_1C6), &Global_26C92B, 1, func_490(uParam0), uParam0->f_2AA, &(uParam0->f_2AB), &(uParam0->f_2AE));
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_16 = 0;
			if (func_477() || func_476())
			{
				uParam0->f_1EE = 0;
				uParam0->f_67.f_1 = 0;
				uParam0->f_22E = 1;
				func_467(uParam0, iParam1);
			}
			else
			{
				uParam0->f_67.f_1F = 6;
				uParam0->f_67.f_5 = 0;
			}
		}
	}
}

void func_381(var uParam0, int iParam1)//Position - 0x24A01
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_27(&(uParam0->f_DA), 300);
	iVar1 = 0;
	if (func_477())
	{
		iVar1++;
	}
	if (func_476())
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_67.f_F = 0;
		func_279(0, 0, 0, 1);
		if (func_278())
		{
			if (Global_26CF15 == uParam0->f_67.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_67.f_1 = Global_26CF15;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_382(uParam0->f_67.f_1, 1, 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_DA.f_1 < -100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_DA.f_8)) || func_277(uParam0->f_DA.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_8 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 > 0)
			{
				uParam0->f_67.f_1 = (uParam0->f_67.f_1 - 1);
			}
			else
			{
				uParam0->f_67.f_1 = iVar1;
			}
			func_382(uParam0->f_67.f_1, 1, 1);
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_DA.f_1 > 100 && uParam0->f_DA.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_DA.f_9)) || func_274(uParam0->f_DA.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_DA.f_9 = 0;
			uParam0->f_DA.f_4 = 0;
			uParam0->f_DA.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_DA.f_18 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_67.f_1 < iVar1)
			{
				uParam0->f_67.f_1++;
			}
			else
			{
				uParam0->f_67.f_1 = 0;
			}
			func_382(uParam0->f_67.f_1, 1, 1);
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (uParam0->f_67.f_1 == 0)
			{
				uParam0->f_1EE = 1;
				uParam0->f_22E = 1;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1EE = 4;
					uParam0->f_2AA = -1;
				}
				func_178(&(uParam0->f_1C6), &Global_26C92B, 1, func_490(uParam0), uParam0->f_2AA, &(uParam0->f_2AB), &(uParam0->f_2AE));
			}
			else if (uParam0->f_67.f_1 == 1)
			{
				if (func_477())
				{
					uParam0->f_1EE = 2;
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_178(&(uParam0->f_1C6), &Global_26C92B, 0, func_490(uParam0), uParam0->f_2AA, &(uParam0->f_2AB), &(uParam0->f_2AE));
					}
				}
				else if (func_476())
				{
					uParam0->f_1EE = 3;
				}
				uParam0->f_22E = 1;
			}
			else if (uParam0->f_67.f_1 == 2)
			{
				uParam0->f_1EE = 3;
				uParam0->f_22E = 1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_318())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_16 = 0;
			uParam0->f_67.f_1F = 5;
			uParam0->f_67.f_5 = 0;
		}
	}
}

void func_382(var uParam0, bool bParam1, int iParam2)//Position - 0x24D34
{
	int iVar0;
	int iVar1;
	
	Global_4354.f_1382 = uParam0;
	Global_4354.f_1406 = iParam2;
	if (Global_4354.f_1382 < Global_4354.f_1381)
	{
		Global_4354.f_1381 = Global_4354.f_1382;
	}
	else if ((Global_4354.f_137B && Global_4354.f_1382 > Global_4354.f_1383) || (!Global_4354.f_137B && Global_4354.f_1382 >= (Global_4354.f_1381 + Global_4354.f_1193)))
	{
		iVar0 = Global_4354.f_1381;
		while (iVar0 <= Global_4354.f_1382)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_4354.f_110E[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_4354.f_1193 && Global_4354.f_1381 < 125)
		{
			Global_4354.f_1381++;
			iVar1 = 0;
			iVar0 = Global_4354.f_1381;
			while (iVar0 <= Global_4354.f_1382)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_4354.f_110E[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	if (bParam1)
	{
		StringCopy(&(Global_4354.f_F81), "", 16);
		StringCopy(&(Global_26CEC9.f_15), "", 16);
	}
}

void func_383(int iParam0)//Position - 0x24E82
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_10A95)
		{
			func_387(&iParam0, -1, 0, 0);
		}
		else
		{
			func_384(iParam0);
		}
	}
}

void func_384(int iParam0)//Position - 0x24EAD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	
	iVar0 = func_42(iParam0);
	if (func_41(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS(iParam0);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_6C1.f_1ED[iVar0 /*15*/].f_A[iVar1], iVar2))
				{
					if (func_285(&Var3, func_386(iVar1, iVar2), func_385(iVar0), iParam0, -1))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

int func_385(int iParam0)//Position - 0x24F42
{
	switch (iParam0)
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
	}
	return 0;
}

int func_386(int iParam0, int iParam1)//Position - 0x24F79
{
	if (iParam0 < 0 || iParam0 > 3)
	{
	}
	if (iParam1 < 0 || iParam1 > 31)
	{
	}
	return (iParam0 * 32 + iParam1);
}

void func_387(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x24FAB
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	}
	iVar1 = func_298(*iParam0);
	bVar2 = func_305(*iParam0);
	bVar3 = func_303(*iParam0);
	bVar4 = func_302(*iParam0);
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (func_297(iVar5, iParam1))
		{
			if (func_285(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (func_301(&Var0, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar5++;
	}
	if (func_297(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
	}
	iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8))
			{
				iVar9 = (129 + iVar6);
				if (func_297(iVar9, iParam1))
				{
					if (func_301(&(Var8.f_7), Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
							func_300(*iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

int func_388(int iParam0)//Position - 0x250FB
{
	switch (iParam0)
	{
		case 2:
			return 2143;
		
		case 1:
			return 2144;
		
		case 5:
			return 2145;
		
		case 8:
			return 2146;
		
		case 10:
			return 2141;
		
		default:
	}
	return -1;
}

void func_389(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x25147
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_247(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = func_390(iParam1, uParam2);
		func_406(iVar0, iVar1, iParam3, iParam4);
	}
}

var func_390(int iParam0, var uParam1)//Position - 0x25176
{
	var uVar0;
	
	uVar0 = (SYSTEM::SHIFT_LEFT(iParam0, 16) || uParam1);
	return uVar0;
}

int func_391(int iParam0)//Position - 0x2518D
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_392(int iParam0, int iParam1, var uParam2)//Position - 0x25239
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	switch (iParam1->f_9)
	{
		case 0:
			if (iParam1->f_6 == func_398(385, -1, -1))
			{
				if (!func_230(uParam2, iParam0))
				{
					return 1;
				}
				if (uParam2->f_25A == func_17(2135, -1, 0) && uParam2->f_25B == func_17(2142, -1, 0))
				{
					return 1;
				}
			}
			break;
		
		case 1:
			iVar0 = iParam1->f_6;
			if (iVar0 == -1)
			{
				iVar0 = 255;
			}
			iVar1 = func_391(iParam1->f_5);
			if (iParam1->f_5 == func_248(9))
			{
				if (iVar0 == 18)
				{
					iVar0 = 16;
				}
			}
			if (iVar1 != -1 && iVar0 == func_398(func_391(iParam1->f_5), -1, -1))
			{
				if (!func_230(uParam2, iParam0))
				{
					return 1;
				}
				iVar2 = func_245(iParam1->f_5, &(uParam2->f_25D), -1);
				iVar3 = func_388(iParam1->f_5);
				iVar4 = func_397(iParam1->f_5);
				if (iVar4 != -1)
				{
					if (uParam2->f_25F != func_258(iVar4, -1) && uParam2->f_25F == 0f)
					{
						uParam2->f_25F = func_258(iVar4, -1);
					}
				}
				if (((iVar2 == -1 || uParam2->f_25A == iVar2) && (iVar3 == -1 || uParam2->f_25B == func_17(iVar3, -1, 0))) && (iVar4 == -1 || uParam2->f_25F == func_258(iVar4, -1)))
				{
					return 1;
				}
				else if (iVar0 == 255)
				{
					return 1;
				}
				else
				{
					bVar5 = false;
					if (iVar3 != -1)
					{
						bVar5 = true;
					}
					else
					{
						bVar5 = true;
					}
					if (iVar4 != -1)
					{
						bVar5 = true;
					}
					else
					{
						bVar5 = true;
					}
					if (!bVar5)
					{
						bVar5 = true;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1->f_6 == SYSTEM::ROUND(func_258(157, -1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_393(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25410
{
	char* sVar0;
	int iVar1;
	
	*iParam3 = 0;
	StringCopy(&(iParam3->f_1), "", 16);
	iParam3->f_5 = -1;
	iParam3->f_6 = 0;
	iParam3->f_7 = 0f;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				switch (iParam2)
				{
					case 0:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_9C7[0])), "CC_M_HS_0", 0, 2086722024);
						break;
					
					case 1:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(170) * Global_40001.f_9C7[5])), "CC_M_HS_1", 1, -1911587515);
						break;
					
					case 2:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(560) * Global_40001.f_9C7[10])), "CC_M_HS_2", 7, -1882357567);
						break;
					
					case 3:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1080) * Global_40001.f_9C7[15])), "CC_M_HS_3", 13, -969019995);
						break;
					
					case 4:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_9C7[20])), "CC_M_HS_4", 19, -411291615);
						break;
					
					case 5:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_40001.f_9C7[25])), "CC_M_HS_5", 26, -82979004);
						break;
					
					case 6:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(930) * Global_40001.f_9C7[30])), "CC_M_HS_6", 32, 218692410);
						break;
					
					case 7:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(420) * Global_40001.f_9C7[35])), "CC_M_HS_7", 38, 511680047);
						break;
					
					case 8:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1130) * Global_40001.f_9C7[40])), "CC_M_HS_8", 45, 558867407);
						break;
					
					case 9:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(375) * Global_40001.f_9C7[45])), "CC_M_HS_9", 50, 808796570);
						break;
					
					case 10:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_40001.f_9C7[50])), "CC_M_HS_10", 57, -1605550121);
						break;
					
					case 11:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1030) * Global_40001.f_9C7[55])), "CC_M_HS_11", 63, -1378886948);
						break;
					
					case 12:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(530) * Global_40001.f_9C7[60])), "CC_M_HS_12", 69, -1142819072);
						break;
					
					case 13:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1180) * Global_40001.f_9C7[65])), "CC_M_HS_13", 74, -899836937);
						break;
					
					case 14:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1980) * Global_40001.f_9C7[70])), "CC_M_HS_14", 80, 1454746793);
						break;
					
					case 15:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(455) * Global_40001.f_9C7[75])), "CC_M_HS_15", 85, 1677117227);
						break;
					
					case 16:
						func_396(iParam3, Global_40001.f_150C, "CC_M_HS_16", func_91(iParam0, joaat("DLC_MP_BEACH_M_HAIR00"), 2, 3), 1931240822);
						break;
					
					case 17:
						func_396(iParam3, Global_40001.f_1507, "CC_M_HS_17", func_91(iParam0, joaat("DLC_MP_BEACH_M_HAIR05"), 2, 3), -2125331999);
						break;
					
					case 18:
						func_396(iParam3, Global_40001.f_1516, "CC_M_HS_18", func_91(iParam0, joaat("DLC_MP_BUSI_M_HAIR0_0"), 2, 3), -2146762937);
						break;
					
					case 19:
						func_396(iParam3, Global_40001.f_1511, "CC_M_HS_19", func_91(iParam0, joaat("DLC_MP_BUSI_M_HAIR1_0"), 2, 3), -1919575460);
						break;
					
					case 20:
						func_396(iParam3, Global_40001.f_1742[14], "CC_M_HS_20", func_91(iParam0, joaat("DLC_MP_HIPS_M_HAIR0_0"), 2, 3), 1867669166);
						break;
					
					case 21:
						func_396(iParam3, Global_40001.f_1742[19], "CC_M_HS_21", func_91(iParam0, joaat("DLC_MP_HIPS_M_HAIR1_0"), 2, 3), 1562425931);
						break;
					
					case 22:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4960) * Global_40001.f_17F2)), "CC_M_HS_22", func_91(iParam0, joaat("DLC_MP_IND_M_HAIR0_0"), 2, 3), 1271240597);
						break;
					
					case 23:
						return 0;
						break;
				}
				break;
			
			case 7:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_A36)), "HAIR_BEARD0", 1, -1, 1f, 61, -43115055);
						break;
					
					case 1:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_40001.f_A37)), "HAIR_BEARD1", 1, 0, 1f, 62, -1731373935);
						break;
					
					case 2:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(430) * Global_40001.f_A38)), "HAIR_BEARD2", 1, 1, 1f, 63, -1422100113);
						break;
					
					case 3:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(325) * Global_40001.f_A39)), "HAIR_BEARD3", 1, 2, 1f, 64, -463508556);
						break;
					
					case 4:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(465) * Global_40001.f_A3A)), "HAIR_BEARD4", 1, 3, 1f, 65, -963301344);
						break;
					
					case 5:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_A3B)), "HAIR_BEARD5", 1, 4, 1f, 66, 2063210751);
						break;
					
					case 6:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(350) * Global_40001.f_A3C)), "HAIR_BEARD6", 1, 5, 1f, 67, -2003094463);
						break;
					
					case 7:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(600) * Global_40001.f_A3D)), "HAIR_BEARD7", 1, 6, 1f, 68, -1888632346);
						break;
					
					case 8:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(220) * Global_40001.f_A3E)), "HAIR_BEARD8", 1, 7, 1f, 69, -1384776202);
						break;
					
					case 9:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1425) * Global_40001.f_A3F)), "HAIR_BEARD9", 1, 8, 1f, 70, 1107568404);
						break;
					
					case 10:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1700) * Global_40001.f_A40)), "HAIR_BEARD10", 1, 9, 1f, 71, -412069578);
						break;
					
					case 11:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(290) * Global_40001.f_A41)), "HAIR_BEARD11", 1, 10, 1f, 72, 1236833733);
						break;
					
					case 12:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(185) * Global_40001.f_A42)), "HAIR_BEARD12", 1, 11, 1f, 73, 2004250944);
						break;
					
					case 13:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(255) * Global_40001.f_A43)), "HAIR_BEARD13", 1, 12, 1f, 74, 544883529);
						break;
					
					case 14:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_A44)), "HAIR_BEARD14", 1, 13, 1f, 75, 1446293181);
						break;
					
					case 15:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1975) * Global_40001.f_A45)), "HAIR_BEARD15", 1, 14, 1f, 76, -1964074960);
						break;
					
					case 16:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(875) * Global_40001.f_A46)), "HAIR_BEARD16", 1, 15, 1f, 77, -1565538382);
						break;
					
					case 17:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_40001.f_A47)), "HAIR_BEARD17", 1, 16, 1f, 78, 1752814407);
						break;
					
					case 18:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(725) * Global_40001.f_A48)), "HAIR_BEARD18", 1, 17, 1f, 79, -1662501853);
						break;
					
					case 19:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(395) * Global_40001.f_A49)), "HAIR_BEARD19", 1, 18, 1f, 80, -1216122527);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_10C7, "BRD_HP_0", 1, 19, 1f, 81, 1668958248);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_10C8, "BRD_HP_1", 1, 20, 1f, 82, 813687348);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_10C9, "BRD_HP_2", 1, 21, 1f, 83, 1121027799);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_10CA, "BRD_HP_3", 1, 22, 1f, 84, -1437018652);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_10CB, "BRD_HP_4", 1, 23, 1f, 85, -1133250022);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_10CC, "BRD_HP_5", 1, 24, 1f, 86, 1974922401);
						break;
					
					case 26:
						func_395(iParam3, Global_40001.f_10CD, "BRD_HP_6", 1, 25, 1f, 87, -1751830435);
						break;
					
					case 27:
						func_395(iParam3, Global_40001.f_10CF, "BRD_HP_7", 1, 26, 1f, 89, -737105609);
						break;
					
					case 28:
						func_395(iParam3, Global_40001.f_10D0, "BRD_HP_8", 1, 27, 1f, 90, -1044282215);
						break;
					
					case 29:
						func_395(iParam3, Global_40001.f_10CE, "BRD_HP_9", 1, 28, 1f, 88, 128880754);
						break;
					
					case 30:
						return 0;
						break;
				}
				break;
			
			case 8:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1B58, "NONE", 2, -1, 1f, -1, -1214833480);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1B59, "CC_EYEBRW_0", 2, 0, 1f, -1, -853522486);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1B5A, "CC_EYEBRW_1", 2, 1, 1f, -1, -1811655273);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1B5B, "CC_EYEBRW_2", 2, 2, 1f, -1, -1040961166);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1B5C, "CC_EYEBRW_3", 2, 3, 1f, -1, 1888456366);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1B5D, "CC_EYEBRW_4", 2, 4, 1f, -1, -1639552485);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1B5E, "CC_EYEBRW_5", 2, 5, 1f, -1, 1348226632);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1B5F, "CC_EYEBRW_6", 2, 6, 1f, -1, 2125933309);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1B60, "CC_EYEBRW_7", 2, 7, 1f, -1, 754026355);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1B61, "CC_EYEBRW_8", 2, 8, 1f, -1, 1526948758);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1B62, "CC_EYEBRW_9", 2, 9, 1f, -1, -902969915);
						break;
					
					case 11:
						func_395(iParam3, Global_40001.f_1B63, "CC_EYEBRW_10", 2, 10, 1f, -1, -69457631);
						break;
					
					case 12:
						func_395(iParam3, Global_40001.f_1B64, "CC_EYEBRW_11", 2, 11, 1f, -1, -312701918);
						break;
					
					case 13:
						func_395(iParam3, Global_40001.f_1B65, "CC_EYEBRW_12", 2, 12, 1f, -1, 824579000);
						break;
					
					case 14:
						func_395(iParam3, Global_40001.f_1B66, "CC_EYEBRW_13", 2, 13, 1f, -1, 585856831);
						break;
					
					case 15:
						func_395(iParam3, Global_40001.f_1B67, "CC_EYEBRW_14", 2, 14, 1f, -1, 1226458016);
						break;
					
					case 16:
						func_395(iParam3, Global_40001.f_1B68, "CC_EYEBRW_15", 2, 15, 1f, -1, 987998003);
						break;
					
					case 17:
						func_395(iParam3, Global_40001.f_1B69, "CC_EYEBRW_16", 2, 16, 1f, -1, 1819413071);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B6A, "CC_EYEBRW_17", 2, 17, 1f, -1, 1583246888);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B6B, "CC_EYEBRW_18", 2, 18, 1f, -1, -1577847470);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B6C, "CC_EYEBRW_19", 2, 19, 1f, -1, -2026650806);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B6D, "CC_EYEBRW_20", 2, 20, 1f, -1, -1429665160);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B6E, "CC_EYEBRW_21", 2, 21, 1f, -1, -1185994876);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1B6F, "CC_EYEBRW_22", 2, 22, 1f, -1, -2142554759);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1B70, "CC_EYEBRW_23", 2, 23, 1f, -1, -589631845);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1B71, "CC_EYEBRW_24", 2, 24, 1f, -1, -1637322333);
						break;
					
					case 26:
						func_395(iParam3, Global_40001.f_1B72, "CC_EYEBRW_25", 2, 25, 1f, -1, -1876568802);
						break;
					
					case 27:
						func_395(iParam3, Global_40001.f_1B73, "CC_EYEBRW_26", 2, 26, 1f, -1, -851292326);
						break;
					
					case 28:
						func_395(iParam3, Global_40001.f_1B74, "CC_EYEBRW_27", 2, 27, 1f, -1, 1859818120);
						break;
					
					case 29:
						func_395(iParam3, Global_40001.f_1B75, "CC_EYEBRW_28", 2, 28, 1f, -1, -1515880415);
						break;
					
					case 30:
						func_395(iParam3, Global_40001.f_1B76, "CC_EYEBRW_29", 2, 29, 1f, -1, -432930795);
						break;
					
					case 31:
						func_395(iParam3, Global_40001.f_1B77, "CC_EYEBRW_30", 2, 30, 1f, -1, 796201630);
						break;
					
					case 32:
						func_395(iParam3, Global_40001.f_1B78, "CC_EYEBRW_31", 2, 31, 1f, -1, 1170095920);
						break;
					
					case 33:
						func_395(iParam3, Global_40001.f_1B79, "CC_EYEBRW_32", 2, 32, 1f, -1, 1259981287);
						break;
					
					case 34:
						func_395(iParam3, Global_40001.f_1B7A, "CC_EYEBRW_33", 2, 33, 1f, -1, 1632499279);
						break;
					
					case 35:
						return 0;
						break;
				}
				break;
			
			case 9:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1BB6, "CC_BODY_1_0", 10, -1, 1f, -1, -1208917743);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1BB7, "CC_BODY_1_1", 10, 0, 1f, -1, -1245356871);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1BB8, "CC_BODY_1_2", 10, 1, 1f, -1, -567923298);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1BB9, "CC_BODY_1_3", 10, 2, 1f, -1, -932249040);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1BBA, "CC_BODY_1_4", 10, 3, 1f, -1, -221587773);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1BBB, "CC_BODY_1_5", 10, 4, 1f, -1, -845116305);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1BBC, "CC_BODY_1_6", 10, 5, 1f, -1, 381918900);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1BBD, "CC_BODY_1_7", 10, 6, 1f, -1, 83032851);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1BBE, "CC_BODY_1_8", 10, 7, 1f, -1, 705709389);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1BBF, "CC_BODY_1_9", 10, 8, 1f, -1, 410559006);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1BC0, "CC_BODY_1_10", 10, 9, 1f, -1, -850926612);
						break;
					
					case 11:
						func_395(iParam3, Global_40001.f_1BC1, "CC_BODY_1_11", 10, 10, 1f, -1, -1093056753);
						break;
					
					case 12:
						func_395(iParam3, Global_40001.f_1BC2, "CC_BODY_1_12", 10, 11, 1f, -1, 1258643301);
						break;
					
					case 13:
						func_395(iParam3, Global_40001.f_1BC3, "CC_BODY_1_13", 10, 12, 1f, -1, 865874067);
						break;
					
					case 14:
						func_395(iParam3, Global_40001.f_1BC4, "CC_BODY_1_14", 10, 13, 1f, -1, 627151902);
						break;
					
					case 15:
						func_395(iParam3, Global_40001.f_1BC5, "CC_BODY_1_15", 10, 14, 1f, -1, -2142352902);
						break;
					
					case 16:
						func_395(iParam3, Global_40001.f_1BC6, "CC_BODY_1_16", 10, 15, 1f, -1, -407070503);
						break;
					
					case 17:
						return 1;
						break;
					
					case 18:
						func_395(iParam3, 1100, "CC_BODY_1_17", 10, 17, 1f, -1, 1502608510);
						break;
					
					case 19:
						return 0;
						break;
				}
				break;
			
			case 10:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1B7B, "FACE_E_C_0", 7, 0, 1f, -1, 827528886);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1B7C, "FACE_E_C_1", 7, 1, 1f, -1, -781461791);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1B7D, "FACE_E_C_2", 7, 2, 1f, -1, -474875027);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1B7E, "FACE_E_C_3", 7, 3, 1f, -1, -1242030086);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1B7F, "FACE_E_C_4", 7, 4, 1f, -1, 137348200);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1B80, "FACE_E_C_5", 7, 5, 1f, -1, -2121779449);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1B81, "FACE_E_C_6", 7, 6, 1f, -1, 1876005786);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1B82, "FACE_E_C_7", 7, 7, 1f, -1, -1641844675);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1B83, "FACE_E_C_8", 7, 8, 1f, -1, -1939452733);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1B84, "FACE_E_C_9", 7, 9, 1f, -1, 1595175476);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1B85, "FACE_E_C_10", 7, 10, 1f, -1, 1888141884);
						break;
					
					case 11:
						func_395(iParam3, Global_40001.f_1B86, "FACE_E_C_11", 7, 11, 1f, -1, 859096981);
						break;
					
					case 12:
						func_395(iParam3, Global_40001.f_1B87, "FACE_E_C_12", 7, 12, 1f, -1, 551756530);
						break;
					
					case 13:
						func_395(iParam3, Global_40001.f_1B88, "FACE_E_C_13", 7, 13, 1f, -1, 1439272126);
						break;
					
					case 14:
						func_395(iParam3, Global_40001.f_1B89, "FACE_E_C_14", 7, 14, 1f, -1, 1158474565);
						break;
					
					case 15:
						func_395(iParam3, Global_40001.f_1B8A, "FACE_E_C_15", 7, 15, 1f, -1, -109358053);
						break;
					
					case 16:
						func_395(iParam3, Global_40001.f_1B8B, "FACE_E_C_16", 7, 16, 1f, -1, -406605652);
						break;
					
					case 17:
						func_395(iParam3, Global_40001.f_1B8C, "FACE_E_C_17", 7, 17, 1f, -1, 509746672);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B8D, "FACE_E_C_18", 7, 18, 1f, -1, 244809299);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B8E, "FACE_E_C_19", 7, 19, 1f, -1, -651750537);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B8F, "FACE_E_C_20", 7, 20, 1f, -1, 1816410231);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B90, "FACE_E_C_21", 7, 21, 1f, -1, -2059015562);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B91, "FACE_E_C_22", 7, 22, 1f, -1, 1945094090);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1B92, "FACE_E_C_23", 7, 23, 1f, -1, -1458261485);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1B93, "FACE_E_C_24", 7, 24, 1f, -1, -1755738467);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1B94, "FACE_E_C_25", 7, 25, 1f, -1, -846234872);
						break;
					
					case 26:
						func_395(iParam3, Global_40001.f_1B95, "FACE_E_C_26", 7, 26, 1f, -1, -1144170620);
						break;
					
					case 27:
						func_395(iParam3, Global_40001.f_1B96, "FACE_E_C_27", 7, 27, 1f, -1, -251641367);
						break;
					
					case 28:
						func_395(iParam3, Global_40001.f_1B97, "FACE_E_C_28", 7, 28, 1f, -1, -566158229);
						break;
					
					case 29:
						func_395(iParam3, Global_40001.f_1B98, "FACE_E_C_29", 7, 29, 1f, -1, -859506285);
						break;
					
					case 30:
						func_395(iParam3, Global_40001.f_1B99, "FACE_E_C_30", 7, 30, 1f, -1, 1823490339);
						break;
					
					case 31:
						func_395(iParam3, Global_40001.f_1B9A, "FACE_E_C_31", 7, 31, 1f, -1, -2074414980);
						break;
					
					case 32:
						return 0;
						break;
				}
				break;
			
			case 11:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_A14)), "NONE", 4, -1, 1f, 28, 748741188);
						break;
					
					case 1:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_A25)), "CC_MKUP_16", 4, 16, 1f, 45, 664000554);
						break;
					
					case 2:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_A26)), "CC_MKUP_17", 4, 17, 1f, 46, 374125980);
						break;
					
					case 3:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(750) * Global_40001.f_A27)), "CC_MKUP_18", 4, 18, 1f, 47, 1933864846);
						break;
					
					case 4:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5750) * Global_40001.f_A28)), "CC_MKUP_19", 4, 19, 1f, 48, 1620822589);
						break;
					
					case 5:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_A29)), "CC_MKUP_20", 4, 20, 1f, 49, 1304536201);
						break;
					
					case 6:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(6000) * Global_40001.f_A2A)), "CC_MKUP_21", 4, 21, 1f, 50, 1024459558);
						break;
					
					case 7:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_A2F)), "CC_MKUP_26", 4, 26, 1f, 55, -1167196704);
						break;
					
					case 8:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5500) * Global_40001.f_A30)), "CC_MKUP_27", 4, 27, 1f, 56, -1484564469);
						break;
					
					case 9:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_40001.f_A31)), "CC_MKUP_28", 4, 28, 1f, 57, -1728267522);
						break;
					
					case 10:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_40001.f_A32)), "CC_MKUP_29", 4, 29, 1f, 58, -2059818253);
						break;
					
					case 11:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(15000) * Global_40001.f_A33)), "CC_MKUP_30", 4, 30, 1f, 59, 1995902574);
						break;
					
					case 12:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_A34)), "CC_MKUP_31", 4, 31, 1f, 60, 1639965688);
						break;
					
					case 13:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(25000) * Global_40001.f_17F2)), "CC_MKUP_33", 4, 33, 1f, 92, 1397114629);
						break;
					
					case 14:
						return 0;
						break;
				}
				break;
			
			case 14:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_A14)), "NONE", 4, -1, 1f, 28, -1985437042);
						break;
					
					case 1:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(225) * Global_40001.f_A15)), "CC_MKUP_0", 4, 0, 1f, 29, 2060125395);
						break;
					
					case 2:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(250) * Global_40001.f_A16)), "CC_MKUP_1", 4, 1, 1f, 30, 1845619521);
						break;
					
					case 3:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_40001.f_A17)), "CC_MKUP_2", 4, 2, 1f, 31, 1352314995);
						break;
					
					case 4:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(610) * Global_40001.f_A18)), "CC_MKUP_3", 4, 3, 1f, 32, 1121916156);
						break;
					
					case 5:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_40001.f_A19)), "CC_MKUP_4", 4, 4, 1f, 33, 890173784);
						break;
					
					case 6:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(200) * Global_40001.f_A1A)), "CC_MKUP_5", 4, 5, 1f, 34, 646995035);
						break;
					
					case 7:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(870) * Global_40001.f_A1B)), "CC_MKUP_6", 4, 6, 1f, 35, 885782742);
						break;
					
					case 8:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_40001.f_A1C)), "CC_MKUP_7", 4, 7, 1f, 36, 645225513);
						break;
					
					case 9:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_40001.f_A1D)), "CC_MKUP_8", 4, 8, 1f, 37, 173548527);
						break;
					
					case 10:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_40001.f_A1E)), "CC_MKUP_9", 4, 9, 1f, 38, -421803070);
						break;
					
					case 11:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(740) * Global_40001.f_A1F)), "CC_MKUP_10", 4, 10, 1f, 39, 1299978497);
						break;
					
					case 12:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_40001.f_A20)), "CC_MKUP_11", 4, 11, 1f, 40, 1529427035);
						break;
					
					case 13:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(675) * Global_40001.f_A21)), "CC_MKUP_12", 4, 12, 1f, 41, 342566624);
						break;
					
					case 14:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_A22)), "CC_MKUP_13", 4, 13, 1f, 42, 575062679);
						break;
					
					case 15:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(805) * Global_40001.f_A23)), "CC_MKUP_14", 4, 14, 1f, 43, -2035840169);
						break;
					
					case 16:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(545) * Global_40001.f_A24)), "CC_MKUP_15", 4, 15, 1f, 44, -1807833467);
						break;
					
					case 17:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(300) * Global_40001.f_A35)), "CC_MKUP_32", 4, 32, 1f, 91, 1762447394);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B9B, "CC_MKUP_34", 4, 34, 1f, -1, 2001923246);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B9C, "CC_MKUP_35", 4, 35, 1f, -1, 178590600);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B9D, "CC_MKUP_36", 4, 36, 1f, -1, 1262851572);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B9E, "CC_MKUP_37", 4, 37, 1f, -1, 537411450);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B9F, "CC_MKUP_38", 4, 38, 1f, -1, 785046783);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1BA0, "CC_MKUP_39", 4, 39, 1f, -1, -2080536733);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1BA1, "CC_MKUP_40", 4, 40, 1f, -1, -1640317987);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1BA2, "CC_MKUP_41", 4, 41, 1f, -1, 1737477768);
						break;
					
					case 26:
						return 0;
						break;
				}
				break;
			
			case 15:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1BAB, "NONE", 8, -1, 1f, -1, 162597385);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1BAC, "CC_LIPSTICK_0", 8, 0, 1f, -1, 223154493);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1BAD, "CC_LIPSTICK_1", 8, 1, 1f, -1, 2140763608);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1BAE, "CC_LIPSTICK_2", 8, 2, 1f, -1, 1886967703);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1BAF, "CC_LIPSTICK_3", 8, 3, 1f, -1, 1237289509);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1BB0, "CC_LIPSTICK_4", 8, 4, 1f, -1, -1236704457);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1BB1, "CC_LIPSTICK_5", 8, 5, 1f, -1, -1467824214);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1BB2, "CC_LIPSTICK_6", 8, 6, 1f, -1, -1595623314);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1BB3, "CC_LIPSTICK_7", 8, 7, 1f, -1, -1829299053);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1BB4, "CC_LIPSTICK_8", 8, 8, 1f, -1, -1581270496);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1BB5, "CC_LIPSTICK_9", 8, 9, 1f, -1, -736238561);
						break;
					
					case 11:
						return 0;
						break;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				switch (iParam2)
				{
					case 0:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_97A[0])), "CC_F_HS_0", 0, 1479840145);
						break;
					
					case 1:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(485) * Global_40001.f_97A[4])), "CC_F_HS_1", 1, 356387741);
						break;
					
					case 2:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(425) * Global_40001.f_97A[9])), "CC_F_HS_2", 7, 653766416);
						break;
					
					case 3:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_40001.f_97A[14])), "CC_F_HS_3", 13, -1922761743);
						break;
					
					case 4:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(280) * Global_40001.f_97A[19])), "CC_F_HS_4", 18, -1625383068);
						break;
					
					case 5:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1985) * Global_40001.f_97A[24])), "CC_F_HS_5", 24, 1758409414);
						break;
					
					case 6:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1135) * Global_40001.f_97A[29])), "CC_F_HS_6", 30, 2048251219);
						break;
					
					case 7:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(535) * Global_40001.f_97A[34])), "CC_F_HS_7", 35, -1001100849);
						break;
					
					case 8:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(565) * Global_40001.f_97A[39])), "CC_F_HS_8", 41, -711848886);
						break;
					
					case 9:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1085) * Global_40001.f_97A[44])), "CC_F_HS_9", 47, -1614503760);
						break;
					
					case 10:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(505) * Global_40001.f_97A[49])), "CC_F_HS_10", 53, -1060874703);
						break;
					
					case 11:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(380) * Global_40001.f_97A[54])), "CC_F_HS_11", 60, -1669067343);
						break;
					
					case 12:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1035) * Global_40001.f_97A[59])), "CC_F_HS_12", 67, -1505615571);
						break;
					
					case 13:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1185) * Global_40001.f_97A[64])), "CC_F_HS_13", 73, -136756130);
						break;
					
					case 14:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(460) * Global_40001.f_97A[69])), "CC_F_HS_14", 79, 1503430607);
						break;
					
					case 15:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_40001.f_97A[74])), "CC_F_HS_15", 85, 1909897283);
						break;
					
					case 16:
						func_396(iParam3, Global_40001.f_14F2, "CC_F_HS_17", func_91(iParam0, joaat("DLC_MP_BEACH_F_HAIR05"), 2, 4), -1005003578);
						break;
					
					case 17:
						func_396(iParam3, Global_40001.f_14F7, "CC_F_HS_16", func_91(iParam0, joaat("DLC_MP_BEACH_F_HAIR00"), 2, 4), -734266100);
						break;
					
					case 18:
						func_396(iParam3, Global_40001.f_1501, "CC_F_HS_18", func_91(iParam0, joaat("DLC_MP_BUSI_F_HAIR0_0"), 2, 4), 1360852708);
						break;
					
					case 19:
						func_396(iParam3, Global_40001.f_14FA, "CC_F_HS_19", func_91(iParam0, joaat("DLC_MP_BUSI_F_HAIR1_0"), 2, 4), 729066388);
						break;
					
					case 20:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(980) * Global_40001.f_1348)), "CC_F_HS_23", func_91(iParam0, joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4), 914374215);
						break;
					
					case 21:
						func_396(iParam3, Global_40001.f_1742[3], "CC_F_HS_20", func_91(iParam0, joaat("DLC_MP_HIPS_F_HAIR0_0"), 2, 4), 558502875);
						break;
					
					case 22:
						func_396(iParam3, Global_40001.f_1742[8], "CC_F_HS_21", func_91(iParam0, joaat("DLC_MP_HIPS_F_HAIR1_0"), 2, 4), -1591241840);
						break;
					
					case 23:
						func_396(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4965) * Global_40001.f_17F2)), "CC_F_HS_22", func_91(iParam0, joaat("DLC_MP_IND_F_HAIR0_0"), 2, 4), -1827014795);
						break;
					
					case 24:
						return 0;
						break;
				}
				break;
			
			case 8:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1B58, "NONE", 2, -1, 1f, -1, -876282585);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1B59, "CC_EYEBRW_0", 2, 0, 1f, -1, -1180870440);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1B5A, "CC_EYEBRW_1", 2, 1, 1f, -1, -1502662020);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1B5B, "CC_EYEBRW_2", 2, 2, 1f, -1, -1785163569);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1B5C, "CC_EYEBRW_3", 2, 3, 1f, -1, 80113449);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1B5D, "CC_EYEBRW_4", 2, 4, 1f, -1, -216740922);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1B5E, "CC_EYEBRW_5", 2, 5, 1f, -1, -533027310);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1B5F, "CC_EYEBRW_6", 2, 6, 1f, -1, -829553991);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1B60, "CC_EYEBRW_7", 2, 7, 1f, -1, -531257788);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1B61, "CC_EYEBRW_8", 2, 8, 1f, -1, -827784469);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1B62, "CC_EYEBRW_9", 2, 9, 1f, -1, 744660972);
						break;
					
					case 11:
						func_395(iParam3, Global_40001.f_1B63, "CC_EYEBRW_10", 2, 10, 1f, -1, 899625573);
						break;
					
					case 12:
						func_395(iParam3, Global_40001.f_1B64, "CC_EYEBRW_11", 2, 11, 1f, -1, 266299110);
						break;
					
					case 13:
						func_395(iParam3, Global_40001.f_1B65, "CC_EYEBRW_12", 2, 12, 1f, -1, -1641282671);
						break;
					
					case 14:
						func_395(iParam3, Global_40001.f_1B66, "CC_EYEBRW_13", 2, 13, 1f, -1, -195383331);
						break;
					
					case 15:
						func_395(iParam3, Global_40001.f_1B67, "CC_EYEBRW_14", 2, 14, 1f, -1, 33245982);
						break;
					
					case 16:
						func_395(iParam3, Global_40001.f_1B68, "CC_EYEBRW_15", 2, 15, 1f, -1, -686033552);
						break;
					
					case 17:
						func_395(iParam3, Global_40001.f_1B69, "CC_EYEBRW_16", 2, 16, 1f, -1, 1700172263);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B6A, "CC_EYEBRW_17", 2, 17, 1f, -1, -1163314037);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B6B, "CC_EYEBRW_18", 2, 18, 1f, -1, -939239615);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B6C, "CC_EYEBRW_19", 2, 19, 1f, -1, -1579861681);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B6D, "CC_EYEBRW_20", 2, 20, 1f, -1, -1237032403);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B6E, "CC_EYEBRW_21", 2, 21, 1f, -1, 1942740285);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1B6F, "CC_EYEBRW_22", 2, 22, 1f, -1, 558544952);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1B70, "CC_EYEBRW_23", 2, 23, 1f, -1, 1335891174);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1B71, "CC_EYEBRW_24", 2, 24, 1f, -1, 2129064819);
						break;
					
					case 26:
						func_395(iParam3, Global_40001.f_1B72, "CC_EYEBRW_25", 2, 25, 1f, -1, -699850186);
						break;
					
					case 27:
						func_395(iParam3, Global_40001.f_1B73, "CC_EYEBRW_26", 2, 26, 1f, -1, -864874870);
						break;
					
					case 28:
						func_395(iParam3, Global_40001.f_1B74, "CC_EYEBRW_27", 2, 27, 1f, -1, 333978995);
						break;
					
					case 29:
						func_395(iParam3, Global_40001.f_1B75, "CC_EYEBRW_28", 2, 28, 1f, -1, 1109522918);
						break;
					
					case 30:
						func_395(iParam3, Global_40001.f_1B76, "CC_EYEBRW_29", 2, 29, 1f, -1, -635535959);
						break;
					
					case 31:
						func_395(iParam3, Global_40001.f_1B77, "CC_EYEBRW_30", 2, 30, 1f, -1, -966961625);
						break;
					
					case 32:
						func_395(iParam3, Global_40001.f_1B78, "CC_EYEBRW_31", 2, 31, 1f, -1, -595983772);
						break;
					
					case 33:
						func_395(iParam3, Global_40001.f_1B79, "CC_EYEBRW_32", 2, 32, 1f, -1, 1319397047);
						break;
					
					case 34:
						func_395(iParam3, Global_40001.f_1B7A, "CC_EYEBRW_33", 2, 33, 1f, -1, 15059771);
						break;
					
					case 35:
						return 0;
						break;
				}
				break;
			
			case 10:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1B7B, "FACE_E_C_0", 7, 0, 1f, -1, -679880450);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1B7C, "FACE_E_C_1", 7, 1, 1f, -1, -1968193685);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1B7D, "FACE_E_C_2", 7, 2, 1f, -1, 1656811402);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1B7E, "FACE_E_C_3", 7, 3, 1f, -1, 1409143300);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1B7F, "FACE_E_C_4", 7, 4, 1f, -1, 1047930613);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1B80, "FACE_E_C_5", 7, 5, 1f, -1, 834145657);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1B81, "FACE_E_C_6", 7, 6, 1f, -1, 1301103915);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1B82, "FACE_E_C_7", 7, 7, 1f, -1, 5679807);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1B83, "FACE_E_C_8", 7, 8, 1f, -1, 1241824794);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1B84, "FACE_E_C_9", 7, 9, 1f, -1, 1558963176);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1B85, "FACE_E_C_10", 7, 10, 1f, -1, 1466156191);
						break;
					
					case 11:
						func_395(iParam3, Global_40001.f_1B86, "FACE_E_C_11", 7, 11, 1f, -1, 1713299989);
						break;
					
					case 12:
						func_395(iParam3, Global_40001.f_1B87, "FACE_E_C_12", 7, 12, 1f, -1, 1415036551);
						break;
					
					case 13:
						func_395(iParam3, Global_40001.f_1B88, "FACE_E_C_13", 7, 13, 1f, -1, 1153834856);
						break;
					
					case 14:
						func_395(iParam3, Global_40001.f_1B89, "FACE_E_C_14", 7, 14, 1f, -1, 1360836629);
						break;
					
					case 15:
						func_395(iParam3, Global_40001.f_1B8A, "FACE_E_C_15", 7, 15, 1f, -1, -1622780825);
						break;
					
					case 16:
						func_395(iParam3, Global_40001.f_1B8B, "FACE_E_C_16", 7, 16, 1f, -1, -1374686726);
						break;
					
					case 17:
						func_395(iParam3, Global_40001.f_1B8C, "FACE_E_C_17", 7, 17, 1f, -1, 2040629534);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B8D, "FACE_E_C_18", 7, 18, 1f, -1, -1973146973);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B8E, "FACE_E_C_19", 7, 19, 1f, -1, -657864855);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B8F, "FACE_E_C_20", 7, 20, 1f, -1, 1377860065);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B90, "FACE_E_C_21", 7, 21, 1f, -1, 113042203);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B91, "FACE_E_C_22", 7, 22, 1f, -1, -712703828);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1B92, "FACE_E_C_23", 7, 23, 1f, -1, 200109448);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1B93, "FACE_E_C_24", 7, 24, 1f, -1, -705035870);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1B94, "FACE_E_C_25", 7, 25, 1f, -1, -1340787251);
						break;
					
					case 26:
						func_395(iParam3, Global_40001.f_1B95, "FACE_E_C_26", 7, 26, 1f, -1, -107624231);
						break;
					
					case 27:
						func_395(iParam3, Global_40001.f_1B96, "FACE_E_C_27", 7, 27, 1f, -1, -784730090);
						break;
					
					case 28:
						func_395(iParam3, Global_40001.f_1B97, "FACE_E_C_28", 7, 28, 1f, -1, -1628925068);
						break;
					
					case 29:
						func_395(iParam3, Global_40001.f_1B98, "FACE_E_C_29", 7, 29, 1f, -1, 1496156159);
						break;
					
					case 30:
						func_395(iParam3, Global_40001.f_1B99, "FACE_E_C_30", 7, 30, 1f, -1, -1247690782);
						break;
					
					case 31:
						func_395(iParam3, Global_40001.f_1B9A, "FACE_E_C_31", 7, 31, 1f, -1, -1569777283);
						break;
					
					case 32:
						return 0;
						break;
				}
				break;
			
			case 11:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_A14)), "NONE", 4, -1, 1f, 28, 1939083358);
						break;
					
					case 1:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_40001.f_A25)), "CC_MKUP_16", 4, 16, 1f, 45, -2050050861);
						break;
					
					case 2:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_A26)), "CC_MKUP_17", 4, 17, 1f, 46, -1086019650);
						break;
					
					case 3:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(750) * Global_40001.f_A27)), "CC_MKUP_18", 4, 18, 1f, 47, -796734918);
						break;
					
					case 4:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5750) * Global_40001.f_A28)), "CC_MKUP_19", 4, 19, 1f, 48, -2051001154);
						break;
					
					case 5:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_A29)), "CC_MKUP_20", 4, 20, 1f, 49, -1753327558);
						break;
					
					case 6:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(6000) * Global_40001.f_A2A)), "CC_MKUP_21", 4, 21, 1f, 50, -778482577);
						break;
					
					case 7:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_A2F)), "CC_MKUP_26", 4, 26, 1f, 55, -487919854);
						break;
					
					case 8:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5500) * Global_40001.f_A30)), "CC_MKUP_27", 4, 27, 1f, 56, 1063167984);
						break;
					
					case 9:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_40001.f_A31)), "CC_MKUP_28", 4, 28, 1f, 57, 1352190564);
						break;
					
					case 10:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_40001.f_A32)), "CC_MKUP_29", 4, 29, 1f, 58, 1918883225);
						break;
					
					case 11:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(15000) * Global_40001.f_A33)), "CC_MKUP_30", 4, 30, 1f, 59, 2140499972);
						break;
					
					case 12:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_A34)), "CC_MKUP_31", 4, 31, 1f, 60, -1622298764);
						break;
					
					case 13:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(25000) * Global_40001.f_17F2)), "CC_MKUP_33", 4, 33, 1f, 92, -1384887359);
						break;
					
					case 14:
						return 0;
						break;
				}
				break;
			
			case 14:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_A14)), "NONE", 4, -1, 1f, 28, -1451684059);
						break;
					
					case 1:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(225) * Global_40001.f_A15)), "CC_MKUP_0", 4, 0, 1f, 29, -675288142);
						break;
					
					case 2:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(250) * Global_40001.f_A16)), "CC_MKUP_1", 4, 1, 1f, 30, -984234274);
						break;
					
					case 3:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_40001.f_A17)), "CC_MKUP_2", 4, 2, 1f, 31, -258728614);
						break;
					
					case 4:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(610) * Global_40001.f_A18)), "CC_MKUP_3", 4, 3, 1f, 32, 516356543);
						break;
					
					case 5:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_40001.f_A19)), "CC_MKUP_4", 4, 4, 1f, 33, 200791073);
						break;
					
					case 6:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(200) * Global_40001.f_A1A)), "CC_MKUP_5", 4, 5, 1f, 34, 976334996);
						break;
					
					case 7:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(870) * Global_40001.f_A1B)), "CC_MKUP_6", 4, 6, 1f, 35, 743642327);
						break;
					
					case 8:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_40001.f_A1C)), "CC_MKUP_7", 4, 7, 1f, 36, 1511583842);
						break;
					
					case 9:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_40001.f_A1D)), "CC_MKUP_8", 4, 8, 1f, 37, 1238290382);
						break;
					
					case 10:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_40001.f_A1E)), "CC_MKUP_9", 4, 9, 1f, 38, -587327163);
						break;
					
					case 11:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(740) * Global_40001.f_A1F)), "CC_MKUP_10", 4, 10, 1f, 39, -1009457421);
						break;
					
					case 12:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_40001.f_A20)), "CC_MKUP_11", 4, 11, 1f, 40, 1852062739);
						break;
					
					case 13:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(675) * Global_40001.f_A21)), "CC_MKUP_12", 4, 12, 1f, 41, 1561958782);
						break;
					
					case 14:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_A22)), "CC_MKUP_13", 4, 13, 1f, 42, -1779135693);
						break;
					
					case 15:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(805) * Global_40001.f_A23)), "CC_MKUP_14", 4, 14, 1f, 43, 2022396001);
						break;
					
					case 16:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(545) * Global_40001.f_A24)), "CC_MKUP_15", 4, 15, 1f, 44, -1277868344);
						break;
					
					case 17:
						func_395(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(300) * Global_40001.f_A35)), "CC_MKUP_32", 4, 32, 1f, 91, -1046224283);
						break;
					
					case 18:
						func_395(iParam3, Global_40001.f_1B9B, "CC_MKUP_34", 4, 34, 1f, -1, -1992232544);
						break;
					
					case 19:
						func_395(iParam3, Global_40001.f_1B9C, "CC_MKUP_35", 4, 35, 1f, -1, -1511904542);
						break;
					
					case 20:
						func_395(iParam3, Global_40001.f_1B9D, "CC_MKUP_36", 4, 36, 1f, -1, 338954980);
						break;
					
					case 21:
						func_395(iParam3, Global_40001.f_1B9E, "CC_MKUP_37", 4, 37, 1f, -1, 644853595);
						break;
					
					case 22:
						func_395(iParam3, Global_40001.f_1B9F, "CC_MKUP_38", 4, 38, 1f, -1, 928043293);
						break;
					
					case 23:
						func_395(iParam3, Global_40001.f_1BA0, "CC_MKUP_39", 4, 39, 1f, -1, 1233483142);
						break;
					
					case 24:
						func_395(iParam3, Global_40001.f_1BA1, "CC_MKUP_40", 4, 40, 1f, -1, 455547074);
						break;
					
					case 25:
						func_395(iParam3, Global_40001.f_1BA2, "CC_MKUP_41", 4, 41, 1f, -1, 753187901);
						break;
					
					case 26:
						return 0;
						break;
				}
				break;
			
			case 13:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1BA3, "NONE", 5, -1, 1f, -1, -1381379572);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1BA4, "CC_BLUSH_0", 5, 0, 1f, -1, -978746865);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1BA5, "CC_BLUSH_1", 5, 1, 1f, -1, 946792344);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1BA6, "CC_BLUSH_2", 5, 2, 1f, -1, -366195948);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1BA7, "CC_BLUSH_3", 5, 3, 1f, -1, -722394978);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1BA8, "CC_BLUSH_4", 5, 4, 1f, -1, 216207489);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1BA9, "CC_BLUSH_5", 5, 5, 1f, -1, 2124706822);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1BAA, "CC_BLUSH_6", 5, 6, 1f, -1, 832559610);
						break;
					
					case 8:
						return 0;
						break;
				}
				break;
			
			case 15:
				switch (iParam2)
				{
					case 0:
						func_395(iParam3, Global_40001.f_1BAB, "NONE", 8, -1, 1f, -1, -791212145);
						break;
					
					case 1:
						func_395(iParam3, Global_40001.f_1BAC, "CC_LIPSTICK_0", 8, 0, 1f, -1, 1426003941);
						break;
					
					case 2:
						func_395(iParam3, Global_40001.f_1BAD, "CC_LIPSTICK_1", 8, 1, 1f, -1, -2062125037);
						break;
					
					case 3:
						func_395(iParam3, Global_40001.f_1BAE, "CC_LIPSTICK_2", 8, 2, 1f, -1, 2002508958);
						break;
					
					case 4:
						func_395(iParam3, Global_40001.f_1BAF, "CC_LIPSTICK_3", 8, 3, 1f, -1, -1983118982);
						break;
					
					case 5:
						func_395(iParam3, Global_40001.f_1BB0, "CC_LIPSTICK_4", 8, 4, 1f, -1, 825938009);
						break;
					
					case 6:
						func_395(iParam3, Global_40001.f_1BB1, "CC_LIPSTICK_5", 8, 5, 1f, -1, 1670231294);
						break;
					
					case 7:
						func_395(iParam3, Global_40001.f_1BB2, "CC_LIPSTICK_6", 8, 6, 1f, -1, 1439144306);
						break;
					
					case 8:
						func_395(iParam3, Global_40001.f_1BB3, "CC_LIPSTICK_7", 8, 7, 1f, -1, -2008613264);
						break;
					
					case 9:
						func_395(iParam3, Global_40001.f_1BB4, "CC_LIPSTICK_8", 8, 8, 1f, -1, 137657929);
						break;
					
					case 10:
						func_395(iParam3, Global_40001.f_1BB5, "CC_LIPSTICK_9", 8, 9, 1f, -1, 850282205);
						break;
					
					case 11:
						return 0;
						break;
				}
				break;
			}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_500()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1)))
	{
		func_217(&sVar0, iParam1, iParam3->f_1, 0);
		if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
			{
			}
			return !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1));
		}
		iVar1 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar0), func_394(iParam1), 1);
		if (*iParam3 == iVar1)
		{
		}
		*iParam3 = iVar1;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1));
}

int func_394(int iParam0)//Position - 0x28C6E
{
	switch (iParam0)
	{
		case 6:
			return 1068386274;
			break;
		
		case 7:
			return 1886717078;
			break;
		
		case 8:
			return 787976403;
			break;
		
		case 9:
			return 2088247134;
			break;
		
		case 10:
			return -690908953;
			break;
		
		case 11:
			return -1002762706;
			break;
		
		case 13:
			return 1538653240;
			break;
		
		case 14:
			return -1741723414;
			break;
		
		case 15:
			return 1047734949;
			break;
		
		default:
			break;
	}
	return 1068386274;
}

void func_395(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)//Position - 0x28D1E
{
	uParam0->f_9 = 1;
	if (iParam3 == 7)
	{
		uParam0->f_9 = 2;
	}
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_1), sParam2, 16);
	uParam0->f_5 = iParam3;
	uParam0->f_6 = iParam4;
	uParam0->f_7 = fParam5;
	uParam0->f_A = iParam6;
	uParam0->f_B = iParam7;
}

void func_396(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x28D61
{
	uParam0->f_9 = 0;
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_1), sParam2, 16);
	uParam0->f_8 = iParam3;
	uParam0->f_6 = iParam3;
	uParam0->f_A = -1;
	uParam0->f_B = iParam4;
}

int func_397(int iParam0)//Position - 0x28D92
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_398(int iParam0, int iParam1, int iParam2)//Position - 0x28E31
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_400(iParam0, iParam1);
	uVar2 = func_399(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_399(int iParam0)//Position - 0x28E77
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	return iVar0;
}

int func_400(int iParam0, int iParam1)//Position - 0x28FF1
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	return iVar0;
}

void func_401(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0x29143
{
	int iVar0;
	
	if (func_402())
	{
		iVar0 = Global_25B858[iParam0 /*6*/][func_18(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_FLOAT(iVar0, fParam1, iParam3);
		}
	}
}

int func_402()//Position - 0x29175
{
	return 1;
	return 0;
}

void func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x29182
{
	if (iParam7 == 1)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
	}
	if (iParam1 == 7)
	{
		PED::_SET_PED_EYE_COLOR(iParam0, iParam2);
	}
	else
	{
		if (iParam5 == 1)
		{
		}
		PED::SET_PED_HEAD_OVERLAY(iParam0, iParam1, iParam2, fParam6);
		if (iParam5 != 0)
		{
			if (iParam3 == -1)
			{
				iParam3 = func_245(iParam1, &iParam5, -1);
			}
			if (iParam4 == -1)
			{
				iParam4 = func_268(iParam1, -1);
			}
			PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iParam1, iParam5, iParam3, iParam4);
		}
	}
}

int func_404(int iParam0)//Position - 0x291F5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	if (!func_405())
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 27;
		
		case 2:
			return 28;
		
		case 3:
			return 29;
		
		case 4:
			return 30;
		
		case 5:
			return 31;
		
		case 6:
			return 32;
		
		case 7:
			return 33;
		
		case 8:
			return 34;
		
		case 9:
			return 35;
		
		case 10:
			return 36;
		
		case 11:
			return 1;
		
		case 12:
			return 2;
		
		case 13:
			return 3;
		
		case 14:
			return 4;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 7;
		
		case 18:
			return 8;
		
		case 19:
			return 9;
		
		case 20:
			return 10;
		
		case 21:
			return 11;
		
		case 22:
			return 12;
		
		case 23:
			return 13;
		
		case 24:
			return 14;
		
		case 25:
			return 15;
		
		case 26:
			return 16;
		
		case 27:
			return 17;
		
		case 28:
			return 18;
		
		case 29:
			return 19;
		
		default:
	}
	return -1;
}

bool func_405()//Position - 0x29361
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

void func_406(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29372
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_407(int iParam0)//Position - 0x2939D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_10A95)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!func_360())
	{
		return 0;
	}
	iVar2 = func_17(744, -1, 0);
	MISC::SET_BIT(&iVar2, iParam0);
	func_406(744, iVar2, -1, 1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_420(iVar2, iVar0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_408(45, 1);
	}
	return 1;
}

int func_408(int iParam0, int iParam1)//Position - 0x2941D
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_409(iParam0, iParam1);
}

int func_409(int iParam0, int iParam1)//Position - 0x29438
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_419(&Global_26D4DB))
	{
		if (func_417(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_410(&Global_26D4DB, iParam0))
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

int func_410(var uParam0, int iParam1)//Position - 0x294BC
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_417(uParam0, iParam1))
	{
		return 0;
	}
	func_413(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_411(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_411(var uParam0, int iParam1)//Position - 0x29542
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_417(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_412(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_412(var uParam0, int iParam1)//Position - 0x29592
{
	return (*uParam0)[iParam1] == 61;
}

void func_413(var uParam0)//Position - 0x295A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_416(uParam0, iVar0);
		iVar0++;
	}
	func_414(&(uParam0->f_3E), (8f - 0.5f));
}

void func_414(var uParam0, float fParam1)//Position - 0x295DA
{
	uParam0->f_1 = (func_415(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_415(bool bParam0)//Position - 0x29608
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

void func_416(var uParam0, int iParam1)//Position - 0x29650
{
	(*uParam0)[iParam1] = 61;
}

bool func_417(var uParam0, int iParam1)//Position - 0x29660
{
	return func_418(uParam0, iParam1) != -1;
}

int func_418(var uParam0, int iParam1)//Position - 0x29672
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

bool func_419(var uParam0)//Position - 0x2969F
{
	return uParam0->f_44 == 1;
}

int func_420(int iParam0, int iParam1, bool bParam2)//Position - 0x296AD
{
	bool bVar0;
	
	bVar0 = MISC::IS_BIT_SET(iParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0:
			return bVar0;
		
		case 1:
			return bVar0;
		
		case 2:
			return bVar0;
		
		case 3:
			return bVar0;
		
		case 4:
			return bVar0;
		
		case 5:
			return bVar0;
		
		case 6:
			return bVar0;
		
		case 7:
			return bVar0;
		
		case 8:
			return bVar0;
		
		default:
	}
	return 0;
}

var func_421(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29735
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

void func_422(var uParam0)//Position - 0x2995C
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	struct<10> Var3;
	
	if (func_590(1))
	{
		if (Global_10A95)
		{
			if (uParam0->f_1EE == 2)
			{
			}
			else if (uParam0->f_1EE == 1)
			{
				func_455(27, 1, -1);
				if (uParam0->f_67.f_2 > 0)
				{
					func_451(joaat("mpply_ingamestore_moneyspent"), uParam0->f_67.f_2);
				}
				func_449(Global_26C92B[uParam0->f_67.f_1]);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Stack.Push(1);
				Stack.Push(1);
				Call_Loc(uParam0->f_1C3);
				iVar0 = MISC::GET_HASH_KEY(&(uParam0->f_216));
				if (((((((((iVar0 == 1577121865 || iVar0 == 884057515) || iVar0 == 2055188806) || iVar0 == 1362452146) || iVar0 == -1761842625) || iVar0 == 665775322) || iVar0 == 618391324) || iVar0 == 497473714) || iVar0 == 123808807) || iVar0 == -231538229)
				{
					func_448(3606, 1, -1, 1);
				}
				uParam0->f_1D6 = 1;
			}
			else if (uParam0->f_1EE == 3)
			{
				uParam0->f_1D6 = 1;
			}
			else if (func_475(uParam0->f_1EE))
			{
				if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_1EE, uParam0->f_67.f_1, &Var1))
				{
					if (Var1.f_9 == 0)
					{
						func_455(27, 1, -1);
						if (uParam0->f_67.f_2 > 0)
						{
							func_451(joaat("mpply_ingamestore_moneyspent"), uParam0->f_67.f_2);
						}
						func_449(Global_26C92B[uParam0->f_67.f_1]);
						Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
						Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
						Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
						Stack.Push(1);
						Stack.Push(1);
						Call_Loc(uParam0->f_1C3);
						if (Var1.f_B == 1271240597 || Var1.f_B == -1827014795)
						{
							func_448(3606, 1, -1, 1);
						}
						uParam0->f_1D6 = 1;
					}
					else if (Var1.f_9 == 1 || Var1.f_9 == 2)
					{
						if (((uParam0->f_1EE == 11 || uParam0->f_1EE == 13) || uParam0->f_1EE == 14) || uParam0->f_1EE == 15)
						{
							if (Var1.f_B == 1397114629 || Var1.f_B == -1384887359)
							{
								func_448(3607, 1, -1, 1);
							}
						}
						uParam0->f_1D6 = 1;
					}
				}
				uParam0->f_1D6 = 1;
			}
		}
		else
		{
			if (uParam0->f_67.f_2 > 0)
			{
				func_439(func_182(), func_447(*uParam0), uParam0->f_67.f_2);
			}
			iVar2 = func_182();
			if (uParam0->f_1EE == 1)
			{
				func_438();
				if (func_437(6, 0))
				{
					if (iVar2 == 1)
					{
						func_436(6, 1, 1);
					}
				}
				Global_17C49.f_6C1.f_21B[iVar2 /*65*/].f_3B = Global_26C92B[uParam0->f_67.f_1];
			}
			else if (uParam0->f_1EE == 2)
			{
				Global_17C49.f_6C1.f_21B[iVar2 /*65*/].f_3E = Global_26C92B[uParam0->f_67.f_1];
			}
		}
		Global_26C413 = 1;
		func_424(*uParam0, 1, 4);
		if (func_208())
		{
			func_206(func_209());
		}
		if (uParam0->f_1EE == 1)
		{
			uParam0->f_FE = Global_26C92B[uParam0->f_67.f_1];
		}
		else if (uParam0->f_1EE == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_FF = func_404(uParam0->f_67.f_1);
			}
			else
			{
				uParam0->f_FF = Global_26C92B[uParam0->f_67.f_1];
			}
			uParam0->f_101 = 1f;
		}
		else if (uParam0->f_1EE == 3)
		{
			uParam0->f_243 = uParam0->f_67.f_1;
		}
		else if (func_475(uParam0->f_1EE))
		{
			if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_1EE, uParam0->f_67.f_1, &Var3))
			{
				if (Var3.f_9 == 0)
				{
					uParam0->f_FE = uParam0->f_67.f_1;
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					uParam0->f_FF = uParam0->f_67.f_1;
					if (Var3.f_9 == 2)
					{
						PED::CLONE_PED_TO_TARGET(uParam0->f_260.f_2, PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			uParam0->f_FE = uParam0->f_67.f_1;
			uParam0->f_FF = uParam0->f_67.f_1;
		}
		uParam0->f_67.f_17 = 1;
		uParam0->f_22E = 1;
		func_423(136, 1);
	}
}

void func_423(int iParam0, int iParam1)//Position - 0x29D91
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

void func_424(int iParam0, bool bParam1, int iParam2)//Position - 0x29DEE
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam1)
	{
		if (!func_16(iParam0, 3, 0))
		{
			func_435(iParam0, 3, 0);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (func_434(iParam0))
			{
				case 4:
					func_429(305, 0, 0);
					break;
				
				case 1:
					func_429(304, 0, 0);
					break;
				
				case 3:
					func_429(308, 0, 0);
					break;
				
				case 0:
					func_429(306, 0, 0);
					break;
				
				case 2:
					func_429(307, 0, 0);
					break;
				}
		}
		if (Global_15F9E.f_4EF >= 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar0 = true;
				if (iParam2 == 6)
				{
					if (func_428(1))
					{
						func_426(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
					bVar2 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_15F9E.f_4EF;
					if (func_208())
					{
						if (func_210(func_209()) > 0)
						{
							NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_210(func_209()));
						}
					}
					if (Global_15F9E.f_4EF > 0)
					{
						if (iParam2 == 1 && Global_15F9E.f_4F0 == -61829581)
						{
							MONEY::NETWORK_BUY_ITEM(Global_15F9E.f_4EF, MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), 17, Global_15F9E.f_4F1, bVar1, &(Global_15F9E.f_4EB), MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2, bVar2);
						}
						else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
						{
							MONEY::NETWORK_BUY_ITEM(Global_15F9E.f_4EF, Global_15F9E.f_4F0, iParam2, Global_15F9E.f_4F1, bVar1, &(Global_15F9E.f_4EB), MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2, bVar2);
						}
						else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
						{
							MONEY::NETWORK_BUY_ITEM(Global_15F9E.f_4EF, Global_15F9E.f_4F0, iParam2, Global_15F9E.f_4F1, bVar1, &(Global_15F9E.f_4EB), MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2, bVar2);
						}
						else
						{
							MONEY::NETWORK_BUY_ITEM(Global_15F9E.f_4EF, MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), iParam2, Global_15F9E.f_4F1, bVar1, &(Global_15F9E.f_4EB), MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2, bVar2);
						}
					}
				}
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_15F9E.f_4EB)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_15F9E.f_4EF >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_15F9E.f_4EF >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(iParam0)), Global_15F9E.f_4F0, Global_15F9E.f_4F2);
					}
				}
				else if (Global_15F9E.f_4EF >= 0)
				{
					STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_225(iParam0)), 0, Global_15F9E.f_4F2);
				}
			}
		}
	}
	else if (func_16(iParam0, 3, 0))
	{
		func_425(iParam0, 3, 0);
	}
}

void func_425(int iParam0, int iParam1, bool bParam2)//Position - 0x2A196
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			uVar0 = func_17(func_20(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_406(func_20(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_426(int iParam0)//Position - 0x2A1FE
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_167() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_167() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_427(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_427(int iParam0)//Position - 0x2A2BF
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

bool func_428(int iParam0)//Position - 0x2A338
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_167() /*8053*/].f_167C.f_A, iParam0);
}

void func_429(int iParam0, int iParam1, int iParam2)//Position - 0x2A374
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
		func_448((891 + iParam0), 1, -1, 1);
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
		func_430();
	}
}

void func_430()//Position - 0x2A45C
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
		func_433(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_21() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_431();
				}
			}
		}
	}
}

int func_431()//Position - 0x2A91D
{
	if (func_432(0))
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

bool func_432(bool bParam0)//Position - 0x2A968
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_433(int iParam0, int iParam1)//Position - 0x2A993
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

int func_434(int iParam0)//Position - 0x2A9E4
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

void func_435(int iParam0, int iParam1, bool bParam2)//Position - 0x2AC3D
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_21() == 0)
		{
			uVar0 = func_17(func_20(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_406(func_20(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_436(int iParam0, int iParam1, bool bParam2)//Position - 0x2ACA5
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

bool func_437(int iParam0, int iParam1)//Position - 0x2AD2A
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

void func_438()//Position - 0x2AD77
{
	int iVar0;
	
	iVar0 = func_42(PLAYER::PLAYER_PED_ID());
	if (func_41(iVar0))
	{
		Global_17C49.f_6C1.f_21B.f_620[iVar0] = MISC::GET_GAME_TIMER();
	}
}

int func_439(int iParam0, int iParam1, int iParam2)//Position - 0x2ADAA
{
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_440(Global_17C49.f_744E[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_440(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2ADF3
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_446();
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
					func_423(99, 1);
					func_445(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_445(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_445(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_444(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_428(5))
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
							func_445(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_445(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_445(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_428(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_445(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_445(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_445(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_445(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_445(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_445(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_445(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_445(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_445(joaat("sp2_money_spent_property"), iParam3);
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
									func_445(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_445(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_445(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_445(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_445(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_445(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_428(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_445(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_445(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_445(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_445(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_445(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_445(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_443(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_423(95, iParam3);
					break;
				
				case 1:
					func_423(97, iParam3);
					break;
				
				case 2:
					func_423(96, iParam3);
					break;
			}
			func_423(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_426(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_426(iVar1);
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
					func_445(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_445(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_445(joaat("sp2_total_cash_earned"), iParam3);
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
	func_442(iParam0);
	if (Global_8861 == 15)
	{
		func_441(0);
	}
	return 1;
}

void func_441(bool bParam0)//Position - 0x2B3F2
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

void func_442(int iParam0)//Position - 0x2B674
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

void func_443(int iParam0)//Position - 0x2B6CE
{
	func_423(93, iParam0);
	func_423(29, iParam0);
	func_423(30, iParam0);
}

int func_444(bool bParam0)//Position - 0x2B6EE
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
		func_433(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_408(27, 1);
	return 1;
}

void func_445(int iParam0, int iParam1)//Position - 0x2B7A5
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_446()//Position - 0x2B7C8
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

int func_447(int iParam0)//Position - 0x2B83D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 - 0);
	iVar1 = 41;
	return (iVar0 + iVar1);
}

int func_448(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B854
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
	int iVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_449(int iParam0)//Position - 0x2BAB1
{
	func_406(740, iParam0, Global_10A08, 1);
	func_406(2035, iParam0, Global_10A08, 1);
	func_450(161, 1, -1, 1);
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BADE
{
	int iVar0;
	
	if (func_402())
	{
		iVar0 = Global_25BDB1[iParam0 /*6*/][func_18(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

void func_451(int iParam0, int iParam1)//Position - 0x2BB10
{
	int iVar0;
	
	iVar0 = func_334(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_454(iParam0))
	{
		func_453(iParam0, iVar0);
	}
	else
	{
		func_452(iParam0, iVar0);
	}
}

void func_452(int iParam0, int iParam1)//Position - 0x2BB44
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1460BD = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1460BF = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1460BF = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1460C0 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1460C1 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1460C2 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1460C3 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1460C4 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1460C5 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1460C6 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1460C7 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1460C8 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1460C9 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1460CA = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1460CB = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1460CC = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1460CD = iParam1;
			break;
		
		default:
			break;
	}
}

void func_453(int iParam0, int iParam1)//Position - 0x2BC69
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_454(int iParam0)//Position - 0x2BC85
{
	if (Global_1460BC)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_455(int iParam0, int iParam1, int iParam2)//Position - 0x2BD09
{
	int iVar0;
	
	iVar0 = func_457(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_456(iParam0, iVar0, iParam2);
}

void func_456(int iParam0, int iParam1, var uParam2)//Position - 0x2BD30
{
	int iVar0;
	
	iVar0 = Global_25C4E1[iParam0 /*6*/][func_18(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_457(int iParam0, int iParam1)//Position - 0x2BD54
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_25C4E1[iParam0 /*6*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_458(var uParam0, bool bParam1)//Position - 0x2BD80
{
	float fVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	if (!CAM::DOES_CAM_EXIST(uParam0->f_26[1 /*12*/]))
	{
		uParam0->f_26[1 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_26[1 /*12*/]))
	{
		if (func_490(uParam0))
		{
			uParam0->f_1FB = { 0.586f, -1.1006f, -0.1042f };
			uParam0->f_1F8 = { -816.306f, -182.914f, 37.8927f };
			uParam0->f_1F7 = 180f;
		}
		else
		{
			uParam0->f_1FB = { 1.0109f, -0.8391f, -0.1795f };
			uParam0->f_1F8 = { 138.4104f, -1709.326f, 29.8074f };
			uParam0->f_1F7 = 0f;
			func_465(1, uParam0->f_1EC, &(uParam0->f_1F8));
			func_462(1, uParam0->f_1EC, &(uParam0->f_1F7));
		}
		uParam0->f_1F6 = 0f;
		CAM::SET_CAM_COORD(uParam0->f_26[1 /*12*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1F8, uParam0->f_1F7, uParam0->f_1FB));
		CAM::POINT_CAM_AT_COORD(uParam0->f_26[1 /*12*/], uParam0->f_1F8);
		CAM::SET_CAM_FOV(uParam0->f_26[1 /*12*/], 47f);
		CAM::SET_CAM_ACTIVE(uParam0->f_26[1 /*12*/], 1);
		CAM::SET_CAM_ACTIVE(uParam0->f_26[0 /*12*/], 0);
		uParam0->f_1FF = (uParam0->f_1F7 + 120f);
		uParam0->f_1FE = (uParam0->f_1F7 - 150f);
		uParam0->f_200 = 0f;
		uParam0->f_2A5 = 1;
		fVar0 = 47f;
		if (func_475(uParam0->f_1EE))
		{
			if ((uParam0->f_1EE == 5 || uParam0->f_1EE == 12) || uParam0->f_1EE == 9)
			{
				uParam0->f_2A5 = 1;
			}
			else
			{
				uParam0->f_2A5 = 0;
			}
		}
	}
	if (bParam1)
	{
		func_28(&uVar1, &uVar2, &iVar3, &iVar4, 0);
		if ((iVar3 < 32 && iVar3 > -32) && (iVar4 < 32 && iVar4 > -32))
		{
			if (iVar3 < 32 && iVar3 > -32)
			{
				iVar3 = 0;
			}
			else if (iVar3 < 0)
			{
				iVar3 = (iVar3 - 32);
			}
			else
			{
				iVar3 += 32;
			}
			if (iVar4 < 32 && iVar4 > -32)
			{
				iVar4 = 0;
			}
			else if (iVar4 < 0)
			{
				iVar4 = (iVar4 - 32);
			}
			else
			{
				iVar4 += 32;
			}
		}
		iVar3 = (iVar3 * -1);
		if (PAD::IS_LOOK_INVERTED())
		{
			iVar4 = (iVar4 * -1);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (func_461(1, uParam0->f_67.f_1))
			{
				uParam0->f_1F7 = (uParam0->f_1F7 - (Global_26CF13 * 200f));
				uParam0->f_1F6 = (uParam0->f_1F6 + (Global_26CF14 * 2f));
			}
			else if (bLocal_63)
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(5);
			}
		}
		else
		{
			uParam0->f_1F7 = (uParam0->f_1F7 + (IntToFloat(iVar3) * 0.05f));
			uParam0->f_1F6 = (uParam0->f_1F6 + (IntToFloat(iVar4) * 0.0005f));
		}
		if (uParam0->f_1F7 < uParam0->f_1FE)
		{
			uParam0->f_1F7 = uParam0->f_1FE;
		}
		if (uParam0->f_1F7 > uParam0->f_1FF)
		{
			uParam0->f_1F7 = uParam0->f_1FF;
		}
		if (uParam0->f_1F6 > 0.8f)
		{
			uParam0->f_1F6 = 0.8f;
		}
		else if (uParam0->f_1F6 < -0.1f)
		{
			uParam0->f_1F6 = -0.1f;
		}
		fVar5 = 33f;
		if (uParam0->f_2A5)
		{
			if (!func_475(uParam0->f_1EE))
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (PAD::IS_CONTROL_JUST_RELEASED(2, iLocal_58))
					{
						iLocal_59 = !iLocal_59;
					}
				}
				else
				{
					iLocal_59 = 0;
				}
				if (PAD::IS_CONTROL_PRESSED(2, iLocal_58) || iLocal_59)
				{
					if (uParam0->f_200 < 1f)
					{
						uParam0->f_200 = (uParam0->f_200 + 0.05f);
					}
					if (uParam0->f_200 > 1f)
					{
						uParam0->f_200 = 1f;
					}
				}
				else
				{
					if (uParam0->f_200 > 0f)
					{
						uParam0->f_200 = (uParam0->f_200 - 0.05f);
					}
					if (uParam0->f_200 < 0f)
					{
						uParam0->f_200 = 0f;
					}
				}
			}
			else
			{
				if (uParam0->f_200 > 0f)
				{
					uParam0->f_200 = (uParam0->f_200 - 0.05f);
				}
				if (uParam0->f_200 < 0f)
				{
					uParam0->f_200 = 0f;
				}
			}
		}
		else
		{
			if (uParam0->f_200 < 1f)
			{
				uParam0->f_200 = (uParam0->f_200 + 0.05f);
			}
			if (uParam0->f_200 > 1f)
			{
				uParam0->f_200 = 1f;
			}
		}
		if (uParam0->f_200 != 0f && uParam0->f_67.f_1F == 2)
		{
			fVar0 = func_459(47f, fVar5, uParam0->f_200);
		}
		else
		{
			fVar0 = 47f;
		}
		CAM::SET_CAM_FOV(uParam0->f_26[1 /*12*/], fVar0);
		CAM::SET_CAM_COORD(uParam0->f_26[1 /*12*/], Vector(uParam0->f_1F6, 0f, 0f) + OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1F8, uParam0->f_1F7, uParam0->f_1FB));
	}
	else
	{
		fVar0 = 47f;
		CAM::SET_CAM_FOV(uParam0->f_26[1 /*12*/], fVar0);
	}
}

float func_459(float fParam0, float fParam1, float fParam2)//Position - 0x2C21E
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_460((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_460(float fParam0)//Position - 0x2C24D
{
	return (fParam0 * 57.29578f);
}

int func_461(int iParam0, var uParam1)//Position - 0x2C25D
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_26CF15 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_26CF15 = -1;
			return 0;
		}
	}
	if (((Global_26CF15 > -1 || Global_26CF15 == -3) || Global_26CF15 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_26CF15 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_26CF15 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_462(int iParam0, int iParam1, var uParam2)//Position - 0x2C338
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	
	func_463(iParam0, &uVar0, &Var1);
	func_463(iParam1, &uVar2, &Var3);
	*uParam2 = (*uParam2 + (Var3.f_2 - Var1.f_2));
}

int func_463(int iParam0, var uParam1, var uParam2)//Position - 0x2C366
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -1:
			break;
		
		case 0:
			*uParam1 = { -821.61f, -183.79f, 37.43f };
			*uParam2 = { 0f, 0f, func_460(-2.6f) };
			break;
		
		case 1:
			*uParam1 = { 133.97f, -1708.3f, 29.48f };
			*uParam2 = { 0f, 0f, func_460(-3.84f) };
			break;
		
		case 2:
			*uParam1 = { -1284.88f, -1115.09f, 7.18f };
			*uParam2 = { 0f, 0f, func_460(-4.71f) };
			break;
		
		case 3:
			*uParam1 = { 1930.9f, 3727.41f, 33.03f };
			*uParam2 = { 0f, 0f, func_460(-2.62f) };
			break;
		
		case 4:
			*uParam1 = { 1210.92f, -470.18f, 66.39f };
			*uParam2 = { 0f, 0f, func_460(-4.97f) };
			break;
		
		case 5:
			*uParam1 = { -30.28f, -151.18f, 57.26f };
			*uParam2 = { 0f, 0f, func_460(-0.35f) };
			break;
		
		case 6:
			*uParam1 = { -278.21f, 6231.15f, 31.88f };
			*uParam2 = { 0f, 0f, func_460(-5.49f) };
			break;
		
		case 7:
			*uParam1 = { 74.6f, -1392.09f, 29.53f };
			*uParam2 = { 0f, 0f, func_460(-1.57f) };
			break;
		
		case 8:
			*uParam1 = { 1694.87f, 4822.11f, 42.22f };
			*uParam2 = { 0f, 0f, func_460(-4.58f) };
			break;
		
		case 9:
			*uParam1 = { 426.35f, -807.12f, 29.65f };
			*uParam2 = { 0f, 0f, func_460(-4.71f) };
			break;
		
		case 10:
			*uParam1 = { -1101.41f, 2711.75f, 19.26f };
			*uParam2 = { 0f, 0f, func_460(-2.41f) };
			break;
		
		case 11:
			*uParam1 = { 1197.49f, 2711f, 38.38f };
			*uParam2 = { 0f, 0f, func_460(-3.14f) };
			break;
		
		case 12:
			*uParam1 = { -822.1f, -1072.44f, 11.48f };
			*uParam2 = { 0f, 0f, func_460(-2.62f) };
			break;
		
		case 13:
			*uParam1 = { 4.75f, 6511.3f, 32.03f };
			*uParam2 = { 0f, 0f, func_460(-5.54f) };
			break;
		
		case 14:
			*uParam1 = { -1193.51f, -767.47f, 17.33f };
			*uParam2 = { 0f, 0f, func_460(-2.5f) };
			break;
		
		case 15:
			*uParam1 = { 613.6f, 2762.76f, 42.1f };
			*uParam2 = { 0f, 0f, func_460(-1.5f) };
			break;
		
		case 16:
			*uParam1 = { 126.36f, -224.03f, 54.57f };
			*uParam2 = { 0f, 0f, func_460(1.22f) };
			break;
		
		case 17:
			*uParam1 = { -3170f, 1043.45f, 20.87f };
			*uParam2 = { 0f, 0f, func_460(1.16f) };
			break;
		
		case 18:
			*uParam1 = { -708.59f, -152.21f, 37.09f };
			*uParam2 = { 0f, 0f, func_460(-1.05f) };
			break;
		
		case 19:
			*uParam1 = { -164.82f, -302.45f, 39.41f };
			*uParam2 = { 0f, 0f, func_460(1.24f) };
			break;
		
		case 20:
			*uParam1 = { -1449.23f, -238.49f, 49.49f };
			*uParam2 = { 0f, 0f, func_460(-2.3f) };
			break;
		
		case 21:
			break;
		
		case 22:
			*uParam1 = { 320.59f, 181.43f, 103.79f };
			*uParam2 = { 0f, 0f, func_460(-1.92f) };
			break;
		
		case 23:
			*uParam1 = { 1861.29f, 3748.57f, 33.24f };
			*uParam2 = { 0f, 0f, func_460(-5.67f) };
			break;
		
		case 24:
			*uParam1 = { -290.83f, 6199.93f, 31.69f };
			*uParam2 = { 0f, 0f, func_460(-2.27f) };
			break;
		
		case 25:
			*uParam1 = { -1152.24f, -1424.77f, 5.16f };
			*uParam2 = { 0f, 0f, func_460(-4.1f) };
			break;
		
		case 26:
			*uParam1 = { 1324.44f, -1650.99f, 52.47f };
			*uParam2 = { 0f, 0f, func_460(-4.03f) };
			break;
		
		case 27:
			*uParam1 = { -3170.92f, 1073.84f, 21.04f };
			*uParam2 = { 0f, 0f, func_460(-0.41f) };
			break;
		
		case 28:
			*uParam1 = { 23.6862f, -1106.461f, 29.9159f };
			*uParam2 = { 0f, 0f, 160f };
			break;
		
		case 29:
			*uParam1 = { 1693.572f, 3761.601f, 34.8242f };
			*uParam2 = { 0f, 0f, -132.6081f };
			break;
		
		case 30:
			*uParam1 = { 252.8583f, -51.6284f, 70.06f };
			*uParam2 = { 0f, 0f, 69.9999f };
			break;
		
		case 31:
			*uParam1 = { 841.0564f, -1034.762f, 28.3137f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 32:
			*uParam1 = { -330.2908f, 6085.548f, 31.5737f };
			*uParam2 = { 0f, 0f, -135.0001f };
			break;
		
		case 33:
			*uParam1 = { -660.9294f, -934.1031f, 21.9481f };
			*uParam2 = { 0f, 0f, 180f };
			break;
		
		case 34:
			*uParam1 = { -1304.976f, -395.8181f, 36.8147f };
			*uParam2 = { 0f, 0f, 75.7783f };
			break;
		
		case 35:
			*uParam1 = { -1117.612f, 2700.264f, 18.673f };
			*uParam2 = { 0f, 0f, -138.1729f };
			break;
		
		case 36:
			*uParam1 = { -3172.511f, 1089.412f, 20.9576f };
			*uParam2 = { 0f, 0f, -113.4187f };
			break;
		
		case 37:
			*uParam1 = { 2566.592f, 293.1332f, 108.8538f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 38:
			*uParam1 = { 808.8609f, -2158.508f, 29.7379f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 39:
			*uParam1 = { -1148.15f, -2003.86f, 13.89f };
			*uParam2 = { 0f, 0f, func_460(2.36f) };
			break;
		
		case 40:
			*uParam1 = { 730.73f, -1073.13f, 23.02f };
			*uParam2 = { 0f, 0f, func_460(1.57f) };
			break;
		
		case 41:
			*uParam1 = { -343.62f, -131.44f, 39.71f };
			*uParam2 = { 0f, 0f, func_460(-1.92f) };
			break;
		
		case 42:
			*uParam1 = { 106.42f, 6623.02f, 33.52f };
			*uParam2 = { 0f, 0f, func_460(0.78f) };
			break;
		
		case 43:
			*uParam1 = { 1180.45f, 2639.85f, 39.48f };
			*uParam2 = { 0f, 0f, func_460(-3.14f) };
			break;
	}
	if (func_464(*uParam1, 0f, 0f, 0f) && func_464(*uParam2, 0f, 0f, 0f))
	{
		return 0;
	}
	return 1;
}

bool func_464(struct<3> Param0, struct<3> Param1)//Position - 0x2CAB9
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_465(int iParam0, int iParam1, var uParam2)//Position - 0x2CAE2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (func_464(*uParam2, 0f, 0f, 0f))
	{
		return;
	}
	func_463(iParam0, &Var0, &Var1);
	func_463(iParam1, &Var2, &Var3);
	Var4 = { *uParam2 - Var0 };
	Var4 = { func_466(Var4, -Var1.f_2) };
	Var4 = { func_466(Var4, Var3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, 0f, Var4) };
}

Vector3 func_466(struct<3> Param0, float fParam1)//Position - 0x2CB50
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_467(var uParam0, int iParam1)//Position - 0x2CB94
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!uParam0->f_22D || uParam0->f_22E)
	{
		switch (uParam0->f_1EE)
		{
			case 0:
				if (!uParam0->f_22E)
				{
					uParam0->f_67.f_1 = 0;
				}
				func_266(0);
				func_263(*uParam0);
				func_262(1, 0, 0, 0, 0);
				func_261(1, 1, 1, 1, 1);
				func_259("HAIR_TITLE_0");
				uParam0->f_1CD = 0;
				uParam0->f_1CE = 0;
				uParam0->f_1D5 = 0;
				if (func_145(uParam0, iVar1, 1))
				{
					func_255(0, "HAIR_OPTION_1", 1, 1, 0, 0);
					func_254(2, 0);
				}
				else
				{
					func_255(0, "HAIR_OPTION_1", 0, 1, 0, 0);
				}
				if (func_477())
				{
					if (func_145(uParam0, iVar1, 2))
					{
						func_255(1, "HAIR_OPTION_0", 1, 1, 0, 0);
						func_254(2, 0);
					}
					else
					{
						func_255(1, "HAIR_OPTION_0", 0, 1, 0, 0);
					}
					if (func_476())
					{
						if (func_145(uParam0, iVar1, 3))
						{
							func_255(2, "HAIR_OPTION_2", 1, 1, 0, 0);
							func_254(2, 0);
						}
						else
						{
							func_255(2, "HAIR_OPTION_2", 0, 1, 0, 0);
						}
					}
				}
				else if (func_476())
				{
					if (func_145(uParam0, iVar1, 3))
					{
						func_255(1, "HAIR_OPTION_2", 1, 1, 0, 0);
						func_254(2, 0);
					}
					else
					{
						func_255(1, "HAIR_OPTION_2", 0, 1, 0, 0);
					}
				}
				func_382(uParam0->f_67.f_1, 1, 1);
				if (!func_475(uParam0->f_1EE))
				{
					func_242(201, "ITEM_SELECT", -1);
				}
				else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
				{
					func_242(201, "ITEM_SELECT", -1);
				}
				else
				{
					func_242(201, "ITEM_BUY", -1);
				}
				if (uParam0->f_2A5)
				{
					func_242(202, "ITEM_BACK", -1);
					func_241(21, "ITEM_MOV_CAM", -1);
					if (!func_475(uParam0->f_1EE))
					{
						func_242(iLocal_58, "ITEM_ZOOM", -1);
					}
				}
				else
				{
					func_242(202, "ITEM_BACK", -1);
					func_241(21, "ITEM_MOV_CAM", -1);
				}
				break;
			
			case 4:
				func_473(uParam0);
				break;
			
			case 1:
				func_370(uParam0, iParam1, 0);
				break;
			
			case 2:
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_370(uParam0, iParam1, 0);
				}
				else
				{
					func_471(uParam0, !uParam0->f_232);
					func_326(uParam0);
					func_266(0);
					func_263(*uParam0);
					func_262(1, 1, 0, 0, 0);
					func_261(1, 2, 1, 1, 1);
					func_259("HAIR_TITLE_1");
					uParam0->f_1CD = 0;
					uParam0->f_1CE = 0;
					uParam0->f_1CF = 0;
					uParam0->f_1D5 = 0;
					iVar4 = func_177();
					iVar3 = 0;
					while (iVar3 < iVar4)
					{
						iVar2 = func_404(iVar3);
						StringCopy(&Var5, "HAIR_BEARD", 16);
						StringIntConCat(&Var5, iVar2, 16);
						if (func_323(&Var5, iVar2))
						{
							if (uParam0->f_67.f_1 == iVar3)
							{
								uParam0->f_1CF = 1;
							}
						}
						if (uParam0->f_67.f_1 == iVar3)
						{
							uParam0->f_216 = { Var5 };
						}
						if (!func_325(iVar2) || func_324(iVar2))
						{
							if (func_176(iVar2) && !func_175(iVar2))
							{
								func_255(iVar3, &Var5, 1, 1, 0, 0);
								func_254(2, 0);
								if (iVar3 == uParam0->f_67.f_1)
								{
									uParam0->f_1CE = 1;
								}
							}
							else
							{
								func_255(iVar3, &Var5, 0, 1, 0, 0);
							}
							if (iVar2 == uParam0->f_FF)
							{
								func_255(iVar3, "", 1, 1, 0, 0);
								func_254(14, 0);
							}
							else if (!func_176(iVar2))
							{
								func_255(iVar3, "", 1, 1, 0, 0);
								func_254(15, 0);
								if (iVar3 == uParam0->f_67.f_1)
								{
									uParam0->f_1CD = 1;
								}
							}
							else
							{
								func_255(iVar3, "ITEM_COST", 1, 1, 0, 0);
								func_251(func_327(uParam0, iVar2, &Var5, 1), 0);
							}
						}
						iVar3++;
					}
					if (uParam0->f_67.f_1 > iVar4 || uParam0->f_67.f_1 < 0)
					{
						uParam0->f_67.f_1 = 0;
					}
					func_403(iParam1, 1, (func_404(uParam0->f_67.f_1) - 1), uParam0->f_25A, 0, 0, 1f, 1);
					if (uParam0->f_2A5)
					{
						func_242(201, "ITEM_BUY", -1);
						func_242(202, "ITEM_BACK", -1);
						func_241(21, "ITEM_MOV_CAM", -1);
						if (!func_475(uParam0->f_1EE))
						{
							func_242(iLocal_58, "ITEM_ZOOM", -1);
						}
					}
					else
					{
						func_242(201, "ITEM_BUY", -1);
						func_242(202, "ITEM_BACK", -1);
						func_241(21, "ITEM_MOV_CAM", -1);
					}
					if (uParam0->f_232)
					{
						uParam0->f_232 = 0;
						func_371(uParam0->f_233);
					}
					func_382(uParam0->f_67.f_1, 1, 1);
				}
				break;
			
			case 3:
				func_266(0);
				func_263(*uParam0);
				func_262(1, 1, 0, 0, 0);
				func_261(1, 2, 1, 1, 1);
				func_259("HAIR_TITLE_3");
				func_470(uParam0, !uParam0->f_232);
				if (uParam0->f_243 < 0 || uParam0->f_243 >= uParam0->f_244)
				{
					uParam0->f_243 = 0;
				}
				uParam0->f_1CF = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_244)
				{
					iVar0++;
				}
				if (uParam0->f_232)
				{
					uParam0->f_232 = 0;
					func_371(uParam0->f_233);
				}
				else
				{
					uParam0->f_67.f_1 = uParam0->f_243;
				}
				func_382(uParam0->f_67.f_1, 1, 1);
				if (uParam0->f_2A5)
				{
					func_242(201, "ITEM_BUY", -1);
					func_242(202, "ITEM_BACK", -1);
					func_241(21, "ITEM_MOV_CAM", -1);
					if (!func_475(uParam0->f_1EE))
					{
						func_242(iLocal_58, "ITEM_ZOOM", -1);
					}
				}
				else
				{
					func_242(201, "ITEM_BUY", -1);
					func_242(202, "ITEM_BACK", -1);
					func_241(21, "ITEM_MOV_CAM", -1);
				}
				break;
			
			case 5:
				func_469(uParam0, iParam1);
				break;
			
			case 12:
				func_468(uParam0, iParam1);
				break;
			
			default:
				if (func_475(uParam0->f_1EE))
				{
					uParam0->f_2A4 = 1;
					func_250(uParam0, iParam1, 1, 1);
				}
				break;
		}
		uParam0->f_22D = 1;
		uParam0->f_22E = 0;
		uParam0->f_2A4 = 0;
	}
}

void func_468(var uParam0, int iParam1)//Position - 0x2D16E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_22E);
	func_266(0);
	func_263(*uParam0);
	uParam0->f_1CD = 0;
	uParam0->f_1CE = 0;
	uParam0->f_1D5 = 0;
	func_262(1, 0, 0, 0, 0);
	func_261(1, 1, 1, 1, 1);
	func_259(func_260(12, 1));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = func_273(iVar1);
		if (func_275(iVar0, iVar2))
		{
			if (func_145(uParam0, iVar0, iVar2))
			{
				func_255(iVar1, func_260(iVar2, 0), 1, 1, 0, 0);
				func_254(2, 0);
			}
			else
			{
				func_255(iVar1, func_260(iVar2, 0), 0, 1, 0, 0);
			}
		}
		iVar1++;
	}
	func_382(uParam0->f_67.f_1, 1, 1);
	if (!func_475(uParam0->f_1EE))
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_2A5)
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
	func_244(uParam0);
}

void func_469(var uParam0, int iParam1)//Position - 0x2D2CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_22E);
	func_266(0);
	func_263(*uParam0);
	func_262(1, 0, 0, 0, 0);
	func_261(1, 1, 1, 1, 1);
	func_259(func_260(5, 1));
	uParam0->f_1CD = 0;
	uParam0->f_1CE = 0;
	uParam0->f_1D5 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = func_276(iVar1);
		if (func_275(iVar0, iVar2))
		{
			bVar3 = false;
			if (iVar2 == 12)
			{
				if (!bVar3)
				{
					if (func_275(iVar0, 13))
					{
						if (func_145(uParam0, iVar0, 13))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (func_275(iVar0, 14))
					{
						if (func_145(uParam0, iVar0, 14))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (func_275(iVar0, 15))
					{
						if (func_145(uParam0, iVar0, 15))
						{
							bVar3 = true;
						}
					}
				}
			}
			else if (func_145(uParam0, iVar0, iVar2))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				func_255(iVar1, func_260(iVar2, 0), 1, 1, 0, 0);
				func_254(2, 0);
			}
			else
			{
				func_255(iVar1, func_260(iVar2, 0), 0, 1, 0, 0);
			}
		}
		iVar1++;
	}
	func_382(uParam0->f_67.f_1, 1, 1);
	if (!func_475(uParam0->f_1EE))
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_2A5)
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
	func_244(uParam0);
}

void func_470(var uParam0, bool bParam1)//Position - 0x2D4A7
{
	if (func_590(1))
	{
		if (uParam0->f_243 == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_243 = func_398(451, -1, -1) + 1;
				if (uParam0->f_243 == 256)
				{
					uParam0->f_243 = 0;
				}
			}
			uParam0->f_242 = uParam0->f_243;
		}
		if (bParam1)
		{
			uParam0->f_67.f_1 = uParam0->f_243;
		}
	}
}

void func_471(var uParam0, bool bParam1)//Position - 0x2D502
{
	if (func_590(1))
	{
		if (uParam0->f_FF == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_FF = func_398(448, -1, -1) + 1;
				if (uParam0->f_FF == 256)
				{
					uParam0->f_FF = 0;
				}
				uParam0->f_101 = func_258(88, -1);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				uParam0->f_FF = StackVal;
				uParam0->f_101 = 1f;
			}
			uParam0->f_100 = uParam0->f_FF;
		}
		if (bParam1)
		{
			uParam0->f_67.f_1 = func_472(uParam0->f_FF);
		}
	}
}

int func_472(int iParam0)//Position - 0x2D580
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	if (!func_405())
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 27:
			return 1;
		
		case 28:
			return 2;
		
		case 29:
			return 3;
		
		case 30:
			return 4;
		
		case 31:
			return 5;
		
		case 32:
			return 6;
		
		case 33:
			return 7;
		
		case 34:
			return 8;
		
		case 35:
			return 9;
		
		case 36:
			return 10;
		
		case 1:
			return 11;
		
		case 2:
			return 12;
		
		case 3:
			return 13;
		
		case 4:
			return 14;
		
		case 5:
			return 15;
		
		case 6:
			return 16;
		
		case 7:
			return 17;
		
		case 8:
			return 18;
		
		case 9:
			return 19;
		
		case 10:
			return 20;
		
		case 11:
			return 21;
		
		case 12:
			return 22;
		
		case 13:
			return 23;
		
		case 14:
			return 24;
		
		case 15:
			return 25;
		
		case 16:
			return 26;
		
		case 17:
			return 27;
		
		case 18:
			return 28;
		
		case 19:
			return 29;
		
		default:
	}
	return -1;
}

void func_473(var uParam0)//Position - 0x2D6EC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = -1;
	func_266(0);
	func_263(*uParam0);
	func_262(1, 1, 0, 0, 0);
	func_261(1, 2, 1, 1, 1);
	func_259("HAIR_TITLE_2");
	uParam0->f_1CD = 0;
	uParam0->f_1CE = 0;
	uParam0->f_1CF = 0;
	uParam0->f_1D5 = 0;
	iVar2 = 0;
	while (iVar2 < 46)
	{
		if (MISC::IS_BIT_SET(uParam0->f_2AB[(iVar2 / 32)], (iVar2 % 32)))
		{
			func_474(iVar2, &sVar1);
			if (MISC::IS_BIT_SET(uParam0->f_2AE[(iVar2 / 32)], (iVar2 % 32)))
			{
				func_255(iVar2, &sVar1, 1, 1, 0, 0);
				func_254(2, 0);
			}
			else
			{
				func_255(iVar2, &sVar1, 0, 1, 0, 0);
			}
			if (iVar0 == -1)
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	if (uParam0->f_232)
	{
		uParam0->f_232 = 0;
		func_371(uParam0->f_233);
	}
	else
	{
		uParam0->f_2AA = iVar0;
	}
	func_382(uParam0->f_2AA, 1, 1);
	if (!func_475(uParam0->f_1EE))
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_1EE == 5 || uParam0->f_1EE == 12)
	{
		func_242(201, "ITEM_SELECT", -1);
	}
	else
	{
		func_242(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_2A5)
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_1EE))
		{
			func_242(iLocal_58, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		func_242(202, "ITEM_BACK", -1);
		func_241(21, "ITEM_MOV_CAM", -1);
	}
}

void func_474(int iParam0, char* sParam1)//Position - 0x2D872
{
	StringCopy(sParam1, "HAIR_GROUP", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "HAIR_GROUP_IND1", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "HAIR_GROUP_HIP1", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "HAIR_GROUP_HIP2", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "HAIR_GROUP_HIP3", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "HAIR_GROUP_HIP4", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "HAIR_GROUP_BUS1", 16);
			break;
		
		case 6:
			StringCopy(sParam1, "HAIR_GROUP_BUS2", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "HAIR_GROUP_BUS3", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "HAIR_GROUP_BUS4", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "HAIR_GROUP_VAL1", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "HAIR_GROUP_BCH1", 16);
			break;
		
		case 11:
			StringCopy(sParam1, "HAIR_GROUP_BCH2", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "HAIR_GROUP_BCH3", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "HAIR_GROUP_BCH4", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "HAIR_GROUP_M0", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "HAIR_GROUP_M1", 16);
			break;
		
		case 16:
			StringCopy(sParam1, "HAIR_GROUP_M2", 16);
			break;
		
		case 17:
			StringCopy(sParam1, "HAIR_GROUP_M3", 16);
			break;
		
		case 18:
			StringCopy(sParam1, "HAIR_GROUP_M4", 16);
			break;
		
		case 19:
			StringCopy(sParam1, "HAIR_GROUP_M5", 16);
			break;
		
		case 20:
			StringCopy(sParam1, "HAIR_GROUP_M6", 16);
			break;
		
		case 21:
			StringCopy(sParam1, "HAIR_GROUP_M7", 16);
			break;
		
		case 22:
			StringCopy(sParam1, "HAIR_GROUP_M8", 16);
			break;
		
		case 23:
			StringCopy(sParam1, "HAIR_GROUP_M9", 16);
			break;
		
		case 24:
			StringCopy(sParam1, "HAIR_GROUP_M10", 16);
			break;
		
		case 25:
			StringCopy(sParam1, "HAIR_GROUP_M11", 16);
			break;
		
		case 26:
			StringCopy(sParam1, "HAIR_GROUP_M12", 16);
			break;
		
		case 27:
			StringCopy(sParam1, "HAIR_GROUP_M13", 16);
			break;
		
		case 28:
			StringCopy(sParam1, "HAIR_GROUP_M14", 16);
			break;
		
		case 29:
			StringCopy(sParam1, "HAIR_GROUP_M15", 16);
			break;
		
		case 30:
			StringCopy(sParam1, "HAIR_GROUP_F0", 16);
			break;
		
		case 31:
			StringCopy(sParam1, "HAIR_GROUP_F1", 16);
			break;
		
		case 32:
			StringCopy(sParam1, "HAIR_GROUP_F2", 16);
			break;
		
		case 33:
			StringCopy(sParam1, "HAIR_GROUP_F3", 16);
			break;
		
		case 34:
			StringCopy(sParam1, "HAIR_GROUP_F4", 16);
			break;
		
		case 35:
			StringCopy(sParam1, "HAIR_GROUP_F5", 16);
			break;
		
		case 36:
			StringCopy(sParam1, "HAIR_GROUP_F6", 16);
			break;
		
		case 37:
			StringCopy(sParam1, "HAIR_GROUP_F7", 16);
			break;
		
		case 38:
			StringCopy(sParam1, "HAIR_GROUP_F8", 16);
			break;
		
		case 39:
			StringCopy(sParam1, "HAIR_GROUP_F9", 16);
			break;
		
		case 40:
			StringCopy(sParam1, "HAIR_GROUP_F10", 16);
			break;
		
		case 41:
			StringCopy(sParam1, "HAIR_GROUP_F11", 16);
			break;
		
		case 42:
			StringCopy(sParam1, "HAIR_GROUP_F12", 16);
			break;
		
		case 43:
			StringCopy(sParam1, "HAIR_GROUP_F13", 16);
			break;
		
		case 44:
			StringCopy(sParam1, "HAIR_GROUP_F14", 16);
			break;
		
		case 45:
			StringCopy(sParam1, "HAIR_GROUP_F15", 16);
			break;
	}
}

bool func_475(int iParam0)//Position - 0x2DB97
{
	return iParam0 >= 5;
}

int func_476()//Position - 0x2DBA3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21() == 0)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_f_freemode_01") || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_477()//Position - 0x2DBE9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_21() == 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

float func_478(var uParam0, var uParam1)//Position - 0x2DC28
{
	float fVar0;
	
	fVar0 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(*uParam1);
		if (*uParam0 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
			}
			else
			{
				fVar0 = 1f;
			}
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
	}
	else
	{
		fVar0 = 1f;
	}
	return fVar0;
}

void func_479(var uParam0, var uParam1)//Position - 0x2DC88
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_491(*uParam0, &Var0, &Var1);
	if (CAM::DOES_CAM_EXIST(uParam0->f_26[1 /*12*/]))
	{
		CAM::DESTROY_CAM(uParam0->f_26[1 /*12*/], 0);
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_26[0 /*12*/]))
	{
		uParam0->f_26[0 /*12*/] = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	}
	CAM::PLAY_CAM_ANIM(uParam0->f_26[0 /*12*/], uParam1, uParam0->f_1C7, Var0, Var1, 0, 2);
	CAM::SET_CAM_ACTIVE(uParam0->f_26[0 /*12*/], 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

char* func_480(var uParam0, int iParam1, char* sParam2)//Position - 0x2DD0A
{
	char* sVar0;
	
	if (func_490(uParam0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "cam_enterchair";
				break;
			
			case 1:
				sVar0 = "cam_exitchair";
				break;
			
			case 2:
				sVar0 = "cam_intro_-_customer_-_keeper_-_player_-_assistant";
				break;
			
			case 3:
				if (MISC::ARE_STRINGS_EQUAL(sParam2, "keeper_hair_cut_a"))
				{
					sVar0 = "cam_hair_cut_a";
				}
				else
				{
					sVar0 = "cam_hair_cut_b";
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "enterchair_cam";
				break;
			
			case 1:
				sVar0 = "exitchair_cam";
				break;
			
			case 2:
				sVar0 = "tutorial_cam";
				break;
			
			case 3:
				if (MISC::ARE_STRINGS_EQUAL(sParam2, "keeper_idle_a"))
				{
					sVar0 = "idle_a_cam";
				}
				else
				{
					sVar0 = "idle_b_cam";
				}
				break;
			}
	}
	return sVar0;
}

void func_481(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x2DDD0
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	
	func_491(*uParam0, &Var0, &Var1);
	if (!PED::IS_PED_INJURED(uParam0->f_C) && func_614(0))
	{
		if (iParam2 == 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_C);
		}
		if (iParam4 == 1)
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uParam0->f_C);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_C);
		}
		uParam0->f_1C9 = sParam1;
		uVar2 = func_487(sParam1);
		if (MISC::IS_STRING_NULL_OR_EMPTY(uVar2))
		{
			func_103(uParam0, 0);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1EF))
		{
			func_103(uParam0, 1);
		}
		uParam0->f_1F2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_C, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_C, uParam0->f_1F2, uParam0->f_1C7, uParam0->f_1C9, 1000f, iParam5, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_1F2, !bParam3);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_1F2, bParam3);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_C, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1EF) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_1EF))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_1EF, uParam0->f_1F2, sVar2, uParam0->f_1C7, 1000f, -1000f, 0, 1148846080);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_1EF);
		}
	}
}

void func_482(var uParam0)//Position - 0x2DEFF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1F4);
	}
}

void func_483(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DF17
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1))
		{
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_1F4, uParam0->f_1C7, uParam2, iParam4, iParam5, iParam3);
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1);
		}
	}
}

void func_484(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DF5B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_1F4, uParam0->f_1C7, sParam2, iParam4, iParam5, iParam3, 0, 1148846080, 0);
		}
	}
}

void func_485(var uParam0, int iParam1, int iParam2)//Position - 0x2DF92
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_491(*uParam0, &Var0, &Var1);
		uParam0->f_1F4 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, iParam1, iParam2, 1065353216, 0, 1065353216);
		uParam0->f_1F5 = iParam2;
	}
}

void func_486(var uParam0)//Position - 0x2DFD5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_1F2 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_1F4);
		if (uParam0->f_1F2 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_1F2))
			{
				NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_1F4);
			}
		}
	}
}

char* func_487(char* sParam0)//Position - 0x2E010
{
	char* sVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_base"))
		{
			sVar0 = "scissors_base";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_enterchair"))
		{
			sVar0 = "scissors_enterchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_exitchair"))
		{
			sVar0 = "scissors_exitchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_a"))
		{
			sVar0 = "scissors_idle_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_b"))
		{
			sVar0 = "scissors_idle_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_c"))
		{
			sVar0 = "scissors_idle_c";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_a"))
		{
			sVar0 = "scissors_hair_cut_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_b"))
		{
			sVar0 = "scissors_hair_cut_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_intro"))
		{
			sVar0 = "scissors_intro";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial"))
		{
			sVar0 = "scissors_tutorial";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial_base"))
		{
			sVar0 = "scissors_tutorial_base";
		}
	}
	return sVar0;
}

char* func_488(var uParam0)//Position - 0x2E10F
{
	if (func_490(uParam0))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			return "keeper_hair_cut_a";
		}
		else
		{
			return "keeper_hair_cut_b";
		}
	}
	else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
	{
		return "keeper_idle_a";
	}
	else
	{
		return "keeper_idle_b";
	}
	return "keeper_idle_a";
}

char* func_489(var uParam0)//Position - 0x2E158
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			return "player_idle_a";
			break;
		
		case 1:
			return "player_idle_b";
			break;
		
		case 2:
			return "player_idle_c";
			break;
		
		default:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_490(uParam0))
			{
				return "player_idle_c";
			}
			else
			{
				return "player_idle_d";
			}
			break;
	}
	return "player_idle_a";
}

int func_490(var uParam0)//Position - 0x2E1C5
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0, var uParam1, var uParam2)//Position - 0x2E1D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	iVar0 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar1 = MISC::GET_HASH_KEY("v_barbers");
	iVar2 = MISC::GET_HASH_KEY(func_493(iParam0));
	if (iVar2 == iVar0)
	{
		iVar3 = 0;
		*uParam1 = { -816.22f, -182.97f, 36.57f };
		*uParam2 = { 0f, 0f, (func_460(-2.6f) - 90f) };
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 1;
		*uParam1 = { 138.3646f, -1709.252f, 28.3182f };
		*uParam2 = { 0f, 0f, (func_460(-5.41f) - 90f) };
	}
	if (!func_464(*uParam1, 0f, 0f, 0f) && !func_464(*uParam2, 0f, 0f, 0f))
	{
		func_465(iVar3, iParam0, uParam1);
		func_492(iVar3, iParam0, uParam2);
		return 1;
	}
	if (func_464(*uParam1, 0f, 0f, 0f))
	{
	}
	if (func_464(*uParam2, 0f, 0f, 0f))
	{
	}
	return 0;
}

void func_492(int iParam0, int iParam1, var uParam2)//Position - 0x2E2CB
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	
	func_463(iParam0, &uVar0, &Var1);
	func_463(iParam1, &uVar2, &Var3);
	while (Var3.f_2 > 180f)
	{
		Var3.f_2 = (Var3.f_2 - 360f);
	}
	while (Var3.f_2 < -180f)
	{
		Var3.f_2 = (Var3.f_2 + 360f);
	}
	while (Var1.f_2 > 180f)
	{
		Var1.f_2 = (Var1.f_2 - 360f);
	}
	while (Var1.f_2 < -180f)
	{
		Var1.f_2 = (Var1.f_2 + 360f);
	}
	uParam2->f_2 = (uParam2->f_2 + (Var3.f_2 - Var1.f_2));
	while (uParam2->f_2 > 180f)
	{
		uParam2->f_2 = (uParam2->f_2 - 360f);
	}
	while (uParam2->f_2 < -180f)
	{
		uParam2->f_2 = (uParam2->f_2 + 360f);
	}
}

char* func_493(int iParam0)//Position - 0x2E3AF
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
	}
	return "";
}

int func_494(var uParam0, char* sParam1)//Position - 0x2E68C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (func_490(uParam0))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_hair_cut_a") || MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_hair_cut_b"))
			{
				return 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_idle_a") || MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_idle_b"))
		{
			return 1;
		}
	}
	return 0;
}

int func_495(var uParam0)//Position - 0x2E6EA
{
	if (uParam0->f_67.f_19)
	{
		switch (uParam0->f_67.f_1A)
		{
			case 0:
				if (func_498())
				{
					uParam0->f_67.f_1A = 70;
				}
				else
				{
					uParam0->f_67.f_1B = NETWORK::GET_NETWORK_TIME();
					uParam0->f_67.f_1A = 1;
				}
				break;
			
			case 1:
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_67.f_1B)) > 1000)
				{
					if (func_498())
					{
						uParam0->f_67.f_1A = 70;
					}
					else
					{
						uParam0->f_67.f_1B = NETWORK::GET_NETWORK_TIME();
						uParam0->f_67.f_1A = 2;
					}
				}
				break;
			
			case 2:
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_67.f_1B)) > 1000)
				{
					if (func_498())
					{
						uParam0->f_67.f_1A = 70;
					}
					else
					{
						uParam0->f_67.f_1A = 90;
					}
				}
				break;
			
			case 70:
				if (func_497(func_209()))
				{
					if (func_496(func_209()) == 2)
					{
						uParam0->f_67.f_1A = 80;
					}
					else
					{
						uParam0->f_67.f_1A = 90;
					}
				}
				break;
			
			case 80:
				uParam0->f_67.f_19 = 0;
				uParam0->f_67.f_1A = 0;
				break;
			
			case 90:
				func_206(func_209());
				uParam0->f_67.f_F = 0;
				uParam0->f_67.f_19 = 0;
				uParam0->f_67.f_1A = 0;
				break;
		}
		return 1;
	}
	return uParam0->f_67.f_19;
}

int func_496(int iParam0)//Position - 0x2E82B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_2;
	}
	return 0;
}

int func_497(int iParam0)//Position - 0x2E851
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_26C240[iParam0 /*69*/].f_2 != 1;
	}
	return 0;
}

int func_498()//Position - 0x2E879
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_208())
	{
		bVar0 = true;
	}
	iVar1 = func_209();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_499(Global_26C240[iVar1 /*69*/].f_6, Global_26C240[iVar1 /*69*/].f_4, Global_26C240[iVar1 /*69*/].f_1) == 1)
			{
				Global_26C40D = 1;
			}
			return 0;
		}
		if (Global_252B28)
		{
			if (Global_26C240[iVar1 /*69*/].f_6 == 1067618600 || Global_26C240[iVar1 /*69*/].f_6 == -1303831698)
			{
				Global_26C40E = 1;
				return 0;
			}
		}
	}
	iVar2 = func_210(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar2))
		{
			if (bVar0)
			{
				Global_26C240[iVar1 /*69*/].f_3E = 1;
			}
			Global_26C240[iVar1 /*69*/].f_44 = 0;
			Global_26C40A = 1;
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0, int iParam1, int iParam2)//Position - 0x2E96B
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_500()//Position - 0x2EB83
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_208())
	{
		return 1;
	}
	return 0;
}

void func_501()//Position - 0x2EBA0
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_20 == 1)
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(1);
				iLocal_20 = 0;
			}
		}
		else
		{
			iLocal_20 = 1;
		}
	}
}

void func_502(var uParam0)//Position - 0x2EBD4
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
	{
		iVar0 = uParam0->f_260.f_2;
	}
	if (!Global_10A95)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, 0);
	}
	if ((func_590(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_C))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_107(uParam0);
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		}
		if (uParam0->f_1EE == 1)
		{
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(uParam0->f_FE);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_1C0);
		}
		else if (uParam0->f_1EE == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_477())
				{
					func_403(iVar0, 1, (uParam0->f_FF - 1), uParam0->f_25A, 0, 0, uParam0->f_101, 1);
				}
			}
			else
			{
				Stack.Push(iVar0);
				Stack.Push(1);
				Stack.Push(uParam0->f_FF);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
			}
		}
		else if (uParam0->f_1EE == 3)
		{
			if (func_476())
			{
				func_403(iVar0, 4, (uParam0->f_243 - 1), uParam0->f_25A, 0, 0, 1f, 1);
				if ((uParam0->f_243 - 1) == -1 || (uParam0->f_243 - 1) > 15)
				{
					func_403(iVar0, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iVar0, 2, func_398(449, func_19(), -1), uParam0->f_25A, 0, 0, 0f, 1);
				}
			}
		}
		if (!Global_10A95)
		{
			iVar1 = func_182();
			if (func_41(iVar1))
			{
				Global_15E98[iVar1 /*65*/].f_D[2] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 2);
				Global_15E98[iVar1 /*65*/][2] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 2);
				Global_15E98[iVar1 /*65*/].f_D[0] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 0);
				Global_15E98[iVar1 /*65*/][0] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 0);
				Global_15E98[iVar1 /*65*/].f_D[1] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 1);
				Global_15E98[iVar1 /*65*/][1] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 1);
			}
		}
		uParam0->f_67.f_1F = 6;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_108(uParam0);
		}
	}
}

void func_503(var uParam0)//Position - 0x2EDEA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
	{
		iVar0 = uParam0->f_260.f_2;
	}
	if (!Global_10A95)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, 0);
	}
	if ((func_590(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_C))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar0, 302, 1);
				}
			}
		}
		switch (uParam0->f_67.f_5)
		{
			case 0:
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_94(uParam0);
					func_93(1);
					iVar0 = PLAYER::PLAYER_PED_ID();
				}
				func_54();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_107(uParam0);
				}
				func_491(*uParam0, &Var1, &Var2);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, uParam0->f_1C7, "player_exitchair", Var1, Var2, 1000f, -2f, -1, 37896, 0f, 2, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1F3 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, Var2, 2, 0, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_1F3, uParam0->f_1C7, "player_exitchair", 1000f, -1f, 263, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1F3);
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_C, uParam0->f_1C7, "keeper_exitchair", Var1, Var2, 1000f, -1000f, -1, 5642, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_C, 0, 0);
					func_486(uParam0);
					func_485(uParam0, 1, 0);
					func_484(uParam0, uParam0->f_C, "keeper_exitchair", 5, 4f, -2f);
					func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_exitchair"), 0, 1148846080, -998637568);
					func_482(uParam0);
				}
				else
				{
					func_481(uParam0, "keeper_exitchair", 0, 0, 1, -1056964608);
				}
				func_479(uParam0, func_480(uParam0, 1, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				if (!Global_10A95)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
				}
				uParam0->f_1D8.f_13 = 0;
				uParam0->f_67.f_5++;
				break;
			
			case 1:
				if (func_490(uParam0))
				{
					fVar3 = 0.807f;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
						{
							uParam0->f_1F1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_1F3);
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_1F1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_1F1) >= 0.7181f)
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_AA.f_27, 1f, -1, 1193033728, 1056964608);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
							}
						}
					}
				}
				else
				{
					fVar3 = 0.92f;
				}
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_26[0 /*12*/]) >= fVar3)
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0f, 3, 0);
					uParam0->f_67.f_5++;
				}
				break;
			
			case 2:
				if (func_490(uParam0))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						fVar4 = 0.7181f;
					}
					else
					{
						fVar4 = 0.9151f;
					}
				}
				else
				{
					fVar4 = 0.8779f;
				}
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar0, uParam0->f_1C7, "player_exitchair", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, uParam0->f_1C7, "player_exitchair") >= fVar4)
					{
						uParam0->f_67.f_1F = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_AA.f_27, 1f, -1, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					}
				}
				else
				{
					uParam0->f_1F1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_1F3);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_1F1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_1F1) >= fVar4)
					{
						uParam0->f_67.f_1F = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						func_101();
						func_486(uParam0);
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_AA.f_27, 1f, -1, 1193033728, 1056964608);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						}
					}
				}
				break;
			}
	}
}

void func_504(var uParam0)//Position - 0x2F241
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
	{
		iVar2 = uParam0->f_260.f_2;
	}
	if ((func_590(1) && !PED::IS_PED_INJURED(iVar2)) && !PED::IS_PED_INJURED(uParam0->f_C))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar2, 302, 1);
				}
			}
		}
		switch (uParam0->f_67.f_5)
		{
			case 0:
				func_383(iVar2);
				uParam0->f_67.f_5++;
				break;
			
			case 1:
				if (!Global_10A95)
				{
					PED::SET_PED_CONFIG_FLAG(iVar2, 240, 1);
				}
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_AA.f_D[0 /*3*/], 3f) && !Global_10A95)
				{
					func_575(uParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_260.f_2) && !PED::IS_PED_INJURED(uParam0->f_260.f_2))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_260.f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_260.f_2, true);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(uParam0->f_260.f_2, 1);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar2);
				func_491(*uParam0, &Var3, &Var4);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iVar2, 1), 2.75f, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_1C7, "player_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_490(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_C, uParam0->f_1C7, "keeper_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_C, 0, 0);
					}
					func_486(uParam0);
					func_485(uParam0, 1, 0);
					func_484(uParam0, uParam0->f_C, "keeper_enterchair", 69, 1148846080, -998637568);
					func_484(uParam0, PLAYER::PLAYER_PED_ID(), "player_enterchair", 64, 1148846080, -998637568);
					func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_enterchair"), 64, 1148846080, -998637568);
					func_482(uParam0);
				}
				else
				{
					func_481(uParam0, "keeper_enterchair", 0, 0, 1, -1056964608);
				}
				uParam0->f_1D8.f_13 = 1;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_39(PLAYER::PLAYER_PED_ID(), 0, &iVar0, &uVar1, 1, 145);
				}
				if (iVar0 != -1)
				{
					Stack.Push(iVar2);
					Stack.Push(14);
					Stack.Push(0);
					Call_Loc(uParam0->f_1BF);
					uParam0->f_201 = StackVal;
				}
				else
				{
					uParam0->f_201 = 0;
				}
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Call_Loc(uParam0->f_1BF);
				uParam0->f_202 = StackVal;
				iVar5 = ENTITY::GET_ENTITY_MODEL(iVar2);
				Stack.Push(iVar2);
				Stack.Push(8);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				iVar6 = StackVal;
				if (func_84(iVar5, 8, iVar6))
				{
					uParam0->f_203 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(9);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				iVar6 = StackVal;
				if (func_84(iVar5, 9, iVar6))
				{
					uParam0->f_204 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_1BF);
				iVar6 = StackVal;
				if (func_84(iVar5, 2, iVar6))
				{
					uParam0->f_205 = iVar6;
				}
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_509(uParam0);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1C0);
				func_508(iVar2, &(uParam0->f_1C0));
				func_507(iVar2);
				bVar7 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(-1);
					Call_Loc(uParam0->f_1BF);
					uParam0->f_206 = StackVal;
					Stack.Push(iVar2);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(-1);
					Call_Loc(uParam0->f_1BF);
					uParam0->f_207 = StackVal;
					if ((iVar5 == joaat("mp_m_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_85(iVar5, uParam0->f_207, 7, 3), joaat("PILOT_SUIT"), 0)) || (iVar5 == joaat("mp_f_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_85(iVar5, uParam0->f_207, 7, 4), joaat("PILOT_SUIT"), 0)))
					{
						bVar7 = true;
						Stack.Push(iVar2);
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_1C0);
					}
					uParam0->f_208 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), func_83(5));
					uParam0->f_209 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), func_83(5));
					Stack.Push(iVar2);
					Stack.Push(5);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					func_508(PLAYER::PLAYER_PED_ID(), &(uParam0->f_1C0));
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_1C0);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(8);
					Stack.Push(-1);
					Call_Loc(uParam0->f_1BF);
					iVar6 = StackVal;
					if (func_507(PLAYER::PLAYER_PED_ID()))
					{
						uParam0->f_203 = iVar6;
					}
					if (bVar7)
					{
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_1C0);
					}
				}
				func_506(uParam0, 1077936128);
				func_479(uParam0, func_480(uParam0, 0, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				uParam0->f_67.f_5++;
				break;
			
			case 2:
				if ((ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar2, uParam0->f_1C7, "player_enterchair", 3) && func_478(&(uParam0->f_1F2), &(uParam0->f_1F4)) == 1f) && CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_26[0 /*12*/]) >= 1f)
				{
					func_491(*uParam0, &Var3, &Var4);
					sVar8 = func_489(uParam0);
					if (func_490(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_1C7, sVar8, Var3, Var4, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_1C7, "player_base", Var3, Var4, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1F3 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var3, Var4, 2, 0, 1, 1065353216, 0, 1065353216);
						if (func_490(uParam0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_1F3, uParam0->f_1C7, sVar8, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_1F3, uParam0->f_1C7, "player_base", 1000f, -8f, 0, 0, 1148846080, 0);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1F3);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, 1, 0);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_486(uParam0);
						func_485(uParam0, 0, 1);
						func_484(uParam0, uParam0->f_C, "keeper_base", 69, 1148846080, -998637568);
						func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_base"), 64, 1148846080, -998637568);
						func_482(uParam0);
					}
					else
					{
						func_481(uParam0, "keeper_base", 0, 1, 0, -1056964608);
					}
					func_458(uParam0, 1);
					func_267(uParam0, 0);
					func_471(uParam0, 0);
					if (func_477() || func_476())
					{
						uParam0->f_1EE = 0;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1EE = 4;
					}
					else
					{
						uParam0->f_1EE = 1;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
						{
							uParam0->f_1EE = 5;
							uParam0->f_67.f_1 = 0;
							while (uParam0->f_67.f_1 <= 6 && !func_275(iVar5, func_276(uParam0->f_67.f_1)))
							{
								uParam0->f_67.f_1++;
							}
							if (uParam0->f_67.f_1 >= 7)
							{
								uParam0->f_67.f_1 = 0;
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(1);
						uParam0->f_1D7 = 1;
					}
					func_505();
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
					uParam0->f_67.f_1F = 2;
				}
				break;
			}
	}
}

void func_505()//Position - 0x2F9B0
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_506(var uParam0, int iParam1)//Position - 0x2F9CE
{
	struct<3> Var0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!Global_10A95)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family1")) == 0)
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var0, 50f);
				if (func_434(*uParam0) != 3)
				{
					MISC::CLEAR_AREA_OF_OBJECTS(Var0, iParam1, 0);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 1);
			}
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		}
	}
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
	Global_252B35 = 0;
	HUD::THEFEED_FLUSH_QUEUE();
	Global_164CD = 1;
	func_48(1, 1, 0, 0);
}

int func_507(int iParam0)//Position - 0x2FA87
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), iVar0);
	iVar2 = -1;
	switch (iVar1)
	{
		case joaat("DLC_MP_HEIST_F_SPECIAL_10_0"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_10_1"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_10_2"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_10_3"):
			iVar2 = func_283(iParam0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
			break;
		
		case joaat("DLC_MP_HEIST_F_SPECIAL_11_0"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_11_1"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_11_2"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_11_3"):
			iVar2 = func_283(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
			break;
		
		case joaat("DLC_MP_HEIST_M_SPECIAL_6_0"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_6_1"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_6_2"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_6_3"):
			iVar2 = func_283(iParam0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
			break;
		
		case joaat("DLC_MP_HEIST_M_SPECIAL_7_0"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_7_1"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_7_2"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_7_3"):
			iVar2 = func_283(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
			break;
	}
	return 0;
}

int func_508(int iParam0, var uParam1)//Position - 0x2FB8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = func_88(iParam0, iVar2);
		if (func_84(iVar5, 14, iVar4))
		{
			uVar6 = func_307(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(uVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(*uParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = func_81(iParam0, iVar3);
			if (func_84(iVar5, iVar3, iVar4))
			{
				uVar6 = func_307(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(uVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_509(var uParam0)//Position - 0x2FC54
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_201);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_202);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_203);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_204);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_205);
	}
}

void func_510(int iParam0, int iParam1, int iParam2)//Position - 0x2FCAF
{
	struct<14> Var0;
	
	if (iParam1 == 12 || iParam1 == 13)
	{
		return;
	}
	Var0 = { func_511(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2) };
	if (iParam1 == 14)
	{
		if (Var0.f_3 != -1 && Var0.f_3 != 255)
		{
			PED::SET_PED_PRELOAD_PROP_DATA(iParam0, Var0.f_C, Var0.f_3, Var0.f_4);
		}
	}
	else if (Var0.f_3 != -1 && Var0.f_4 != -1)
	{
		PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, func_83(iParam1), Var0.f_3, Var0.f_4);
	}
}

struct<14> func_511(int iParam0, int iParam1, int iParam2)//Position - 0x2FD3B
{
	func_574();
	if (iParam0 == joaat("player_zero"))
	{
		func_556(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_537(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_512(iParam1, iParam2);
	}
	return Global_10A0A[0 /*14*/];
}

void func_512(int iParam0, int iParam1)//Position - 0x2FD8D
{
	switch (iParam0)
	{
		case 0:
			func_536(iParam1);
			break;
		
		case 2:
			func_535(iParam1);
			break;
		
		case 3:
			func_532(iParam1);
			break;
		
		case 4:
			func_531(iParam1);
			break;
		
		case 6:
			func_530(iParam1);
			break;
		
		case 5:
			func_529(iParam1);
			break;
		
		case 8:
			func_528(iParam1);
			break;
		
		case 9:
			func_527(iParam1);
			break;
		
		case 10:
			func_526(iParam1);
			break;
		
		case 1:
			func_525(iParam1);
			break;
		
		case 7:
			func_524(iParam1);
			break;
		
		case 11:
			func_523(iParam1);
			break;
		
		case 12:
			func_522(iParam1);
			break;
		
		case 13:
			func_521(iParam1);
			break;
		
		case 14:
			func_513(iParam1);
			break;
	}
}

void func_513(int iParam0)//Position - 0x2FE7D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 155);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_514(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3124E
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_519(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_186(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_186(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_186(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_186(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_186(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_186(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_518(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_518(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_518(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_184(14))
			{
				uVar0 = func_17(func_517(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				iVar0 = func_17(func_516(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (func_515(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_17(iVar1, Global_10A08, 0);
					if (!MISC::IS_BIT_SET(iVar0, uParam0->f_1))
					{
						MISC::SET_BIT(&(uParam0->f_6), 4);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_515(int iParam0, int iParam1, var uParam2)//Position - 0x315D1
{
	*uParam2 = 966;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 967;
					break;
				
				case 3:
					*uParam2 = 1416;
					break;
				
				case 4:
					*uParam2 = 983;
					break;
				
				case 6:
					*uParam2 = 991;
					break;
				
				case 8:
					*uParam2 = 1417;
					break;
				
				case 9:
					*uParam2 = 1425;
					break;
				
				case 10:
					*uParam2 = 1427;
					break;
				
				case 1:
					*uParam2 = 999;
					break;
				
				case 7:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 975;
					break;
				
				case 14:
					*uParam2 = 1007;
					break;
				
				case 12:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 968;
					break;
				
				case 4:
					*uParam2 = 984;
					break;
				
				case 6:
					*uParam2 = 992;
					break;
				
				case 8:
					*uParam2 = 1418;
					break;
				
				case 9:
					*uParam2 = 1426;
					break;
				
				case 7:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 976;
					break;
				
				case 14:
					*uParam2 = 1008;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1419;
					break;
				
				case 7:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
	}
	return *uParam2 != 966;
}

int func_516(int iParam0, int iParam1)//Position - 0x319D6
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 915;
					break;
				
				case 3:
					return 1401;
					break;
				
				case 4:
					return 931;
					break;
				
				case 6:
					return 939;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 10:
					return 1412;
					break;
				
				case 1:
					return 947;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 923;
					break;
				
				case 14:
					return 955;
					break;
				
				case 12:
					return 966;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 916;
					break;
				
				case 4:
					return 932;
					break;
				
				case 6:
					return 940;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 9:
					return 1411;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 924;
					break;
				
				case 14:
					return 956;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 7:
					return 1415;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 963;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 964;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
	}
	return 923;
}

int func_517(int iParam0, int iParam1)//Position - 0x31DD1
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 863;
					break;
				
				case 3:
					return 1386;
					break;
				
				case 4:
					return 879;
					break;
				
				case 6:
					return 887;
					break;
				
				case 8:
					return 1387;
					break;
				
				case 9:
					return 1395;
					break;
				
				case 10:
					return 1397;
					break;
				
				case 1:
					return 895;
					break;
				
				case 7:
					return 1398;
					break;
				
				case 11:
					return 871;
					break;
				
				case 14:
					return 903;
					break;
				
				case 12:
					return 914;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 864;
					break;
				
				case 4:
					return 880;
					break;
				
				case 6:
					return 888;
					break;
				
				case 8:
					return 1388;
					break;
				
				case 9:
					return 1396;
					break;
				
				case 7:
					return 1399;
					break;
				
				case 11:
					return 872;
					break;
				
				case 14:
					return 904;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1389;
					break;
				
				case 7:
					return 1400;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 911;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 912;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
	}
	return 871;
}

int func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x321CC
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/][iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x330EA
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_520(int iParam0, int iParam1, int iParam2)//Position - 0x331BE
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_10A0A[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_514(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_514(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_514(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var6.f_1, joaat("OUTFIT_ONLY"), 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var11);
		iVar13 = 0;
		iVar14 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, func_83(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_514(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var11.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_521(int iParam0)//Position - 0x33439
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_520(iVar7, iParam0, 9);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_522(int iParam0)//Position - 0x3358F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 48);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_523(int iParam0)//Position - 0x33A9C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 1);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_524(int iParam0)//Position - 0x33B10
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 1);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_525(int iParam0)//Position - 0x33B83
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 6);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_526(int iParam0)//Position - 0x33C69
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_520(iVar7, iParam0, 33);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_527(int iParam0)//Position - 0x33FCB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_520(iVar7, iParam0, 17);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_528(int iParam0)//Position - 0x341E8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_520(iVar7, iParam0, 18);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_529(int iParam0)//Position - 0x34417
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_520(iVar7, iParam0, 7);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_530(int iParam0)//Position - 0x34526
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_520(iVar7, iParam0, 84);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_531(int iParam0)//Position - 0x34EC4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_520(iVar7, iParam0, 104);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_532(int iParam0)//Position - 0x35A36
{
	if (iParam0 < 136)
	{
		func_534(iParam0);
	}
	else
	{
		func_533(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_520(3, iParam0, 242);
	}
}

void func_533(int iParam0)//Position - 0x35A6A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_534(int iParam0)//Position - 0x3666E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_535(int iParam0)//Position - 0x3757C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 9);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_536(int iParam0)//Position - 0x376A8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_520(iVar7, iParam0, 7);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_537(int iParam0, int iParam1)//Position - 0x377A5
{
	switch (iParam0)
	{
		case 0:
			func_555(iParam1);
			break;
		
		case 2:
			func_554(iParam1);
			break;
		
		case 3:
			func_550(iParam1);
			break;
		
		case 4:
			func_549(iParam1);
			break;
		
		case 6:
			func_548(iParam1);
			break;
		
		case 5:
			func_547(iParam1);
			break;
		
		case 8:
			func_546(iParam1);
			break;
		
		case 9:
			func_545(iParam1);
			break;
		
		case 10:
			func_544(iParam1);
			break;
		
		case 1:
			func_543(iParam1);
			break;
		
		case 7:
			func_542(iParam1);
			break;
		
		case 11:
			func_541(iParam1);
			break;
		
		case 12:
			func_540(iParam1);
			break;
		
		case 13:
			func_539(iParam1);
			break;
		
		case 14:
			func_538(iParam1);
			break;
	}
}

void func_538(int iParam0)//Position - 0x37895
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 175);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_539(int iParam0)//Position - 0x38D86
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 9);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_540(int iParam0)//Position - 0x38ED6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 47);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_541(int iParam0)//Position - 0x393E0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_520(iVar7, iParam0, 63);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_542(int iParam0)//Position - 0x39A4D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 1);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_543(int iParam0)//Position - 0x39AC0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 5);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_544(int iParam0)//Position - 0x39B8F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 53);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_545(int iParam0)//Position - 0x3A0BE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 12);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_546(int iParam0)//Position - 0x3A254
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_520(iVar7, iParam0, 77);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_547(int iParam0)//Position - 0x3AA51
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_520(iVar7, iParam0, 7);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_548(int iParam0)//Position - 0x3AB60
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_520(iVar7, iParam0, 134);
			return;
			break;
	}
	func_514(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_549(int iParam0)//Position - 0x3BA8A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 11;
			break;
